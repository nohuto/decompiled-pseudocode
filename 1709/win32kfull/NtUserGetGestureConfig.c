/*
 * XREFs of NtUserGetGestureConfig @ 0x1C01E52F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     GetGestureConfigSettings @ 0x1C01F9690 (GetGestureConfigSettings.c)
 */

__int64 __fastcall NtUserGetGestureConfig(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        volatile void *Address,
        int a6)
{
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  size_t v15; // r15
  __int64 v16; // rcx
  void *v17; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  _BYTE v24[32]; // [rsp+68h] [rbp-40h] BYREF
  _QWORD v25[3]; // [rsp+88h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v25[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v25;
    v25[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( a6 == 12 )
    {
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        UserSetLastError(1004LL, v9);
        LODWORD(v10) = 0;
LABEL_19:
        ThreadUnlock1(v13, v12);
        goto LABEL_20;
      }
      if ( *(char *)(v10 + 60) < 0 || *(char *)(v10 + 59) < 0 )
      {
        v11 = 1400LL;
        goto LABEL_18;
      }
      if ( Address )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (unsigned int *)MmUserProbeAddress;
        v14 = *a4;
        if ( (unsigned int)(v14 - 1) <= 0xFF )
        {
          v15 = (unsigned int)(12 * v14);
          v17 = (void *)Win32AllocPoolWithQuota(v15, 1667724117LL);
          if ( v17 )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v16);
            ProbeForWrite(Address, 12 * v14, CurrentProcessWow64Process != 0 ? 1 : 4);
            memmove(v17, (const void *)Address, v15);
            LODWORD(v10) = GetGestureConfigSettings((struct tagWND *)v10, (__int64)v17);
            if ( (_DWORD)v10 )
              memmove((void *)Address, v17, v15);
            Win32FreePool(v17, v19, v20);
            goto LABEL_19;
          }
          v11 = 8LL;
          goto LABEL_18;
        }
      }
    }
    v11 = 87LL;
LABEL_18:
    LODWORD(v10) = 0;
    UserSetLastError(v11, v9);
    goto LABEL_19;
  }
LABEL_20:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v24);
  UserSessionSwitchLeaveCrit(v22, v21);
  return (int)v10;
}
