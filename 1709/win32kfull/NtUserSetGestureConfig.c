/*
 * XREFs of NtUserSetGestureConfig @ 0x1C0119C40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     SetGestureConfigSettings @ 0x1C0119F1C (SetGestureConfigSettings.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtUserSetGestureConfig(__int64 a1, __int64 a2, unsigned int a3, volatile void *a4, int a5)
{
  __int64 v6; // r14
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // rsi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rcx
  _BYTE v22[16]; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v23[3]; // [rsp+58h] [rbp-30h] BYREF

  v6 = a3;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v22);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    v10 = gptiCurrent;
    v23[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v23;
    v23[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    if ( a4 && a5 == 12 && (unsigned int)(v6 - 1) <= 0xFF )
    {
      if ( *(char *)(v8 + 60) >= 0
        && *(char *)(v8 + 59) >= 0
        && *(_QWORD *)(gptiCurrent + 400LL) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 400LL) )
      {
        v12 = (void *)Win32AllocPoolWithQuota((unsigned int)(12 * v6), 1667724117LL);
        if ( v12 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11);
          ProbeForRead(a4, 12 * v6, CurrentProcessWow64Process != 0 ? 1 : 4);
          memmove(v12, (const void *)a4, (unsigned int)(12 * v6));
          v9 = SetGestureConfigSettings((struct tagWND *)v8);
          Win32FreePool(v12, v14, v15);
LABEL_10:
          ThreadUnlock1(v17, v16);
          goto LABEL_11;
        }
        v21 = 8LL;
      }
      else
      {
        v21 = 1400LL;
      }
    }
    else
    {
      v21 = 87LL;
    }
    UserSetLastError(v21, v10);
    goto LABEL_10;
  }
LABEL_11:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v22);
  UserSessionSwitchLeaveCrit(v19, v18);
  return v9;
}
