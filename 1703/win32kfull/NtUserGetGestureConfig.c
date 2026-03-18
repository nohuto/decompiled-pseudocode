/*
 * XREFs of NtUserGetGestureConfig @ 0x1C01D8990
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     GetGestureConfigSettings @ 0x1C01EF214 (GetGestureConfigSettings.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetGestureConfig(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        volatile void *Address,
        int a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  size_t v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 CurrentProcessWow64Process; // rax
  _BYTE v26[48]; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v27[3]; // [rsp+88h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v26);
  v11 = ValidateHwnd(a1);
  if ( v11 )
  {
    v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v27;
    v27[1] = v11;
    ++*(_DWORD *)(v11 + 8);
    if ( a6 == 12 )
    {
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        UserSetLastError(1004LL);
        LODWORD(v11) = 0;
LABEL_19:
        ThreadUnlock1(v16, v15);
        goto LABEL_20;
      }
      if ( *(char *)(v11 + 60) < 0 || *(char *)(v11 + 59) < 0 )
      {
        v14 = 1400LL;
        goto LABEL_18;
      }
      if ( Address )
      {
        if ( (unsigned __int64)a4 >= W32UserProbeAddress )
          a4 = (unsigned int *)W32UserProbeAddress;
        v17 = *a4;
        if ( (unsigned int)(v17 - 1) <= 0xFF )
        {
          v18 = (unsigned int)(12 * v17);
          v21 = (void *)Win32AllocPoolWithQuota(v18, 1667724117LL);
          if ( v21 )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v20, v19, v22, v23);
            ProbeForWrite(Address, 12 * v17, CurrentProcessWow64Process != 0 ? 1 : 4);
            memmove(v21, (const void *)Address, v18);
            LODWORD(v11) = GetGestureConfigSettings((struct tagWND *)v11, (__int64)v21);
            if ( (_DWORD)v11 )
              memmove((void *)Address, v21, v18);
            Win32FreePool(v21);
            goto LABEL_19;
          }
          v14 = 8LL;
          goto LABEL_18;
        }
      }
    }
    v14 = 87LL;
LABEL_18:
    LODWORD(v11) = 0;
    UserSetLastError(v14);
    goto LABEL_19;
  }
LABEL_20:
  if ( !v26[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v26);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v12, v13);
  return (int)v11;
}
