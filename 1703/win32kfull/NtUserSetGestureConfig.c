/*
 * XREFs of NtUserSetGestureConfig @ 0x1C0110B20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     SetGestureConfigSettings @ 0x1C0110CB8 (SetGestureConfigSettings.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetGestureConfig(__int64 a1, __int64 a2, unsigned int a3, volatile void *a4, int a5)
{
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 CurrentProcessWow64Process; // rax
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // rcx
  _BYTE v24[8]; // [rsp+40h] [rbp-38h] BYREF
  void *v25; // [rsp+48h] [rbp-30h]
  _QWORD v26[3]; // [rsp+58h] [rbp-20h] BYREF

  v6 = a3;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v26[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v26;
    v26[1] = v10;
    ++*(_DWORD *)(v10 + 8);
    if ( a4 && a5 == 12 && (unsigned int)(v6 - 1) <= 0xFF )
    {
      if ( *(char *)(v10 + 60) >= 0
        && *(char *)(v10 + 59) >= 0
        && *(_QWORD *)(gptiCurrent + 376LL) == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 376LL) )
      {
        v15 = (void *)Win32AllocPoolWithQuota((unsigned int)(12 * v6), 1667724117LL);
        v25 = v15;
        if ( v15 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v14, v13, v16, v17);
          ProbeForRead(a4, 12 * v6, CurrentProcessWow64Process != 0 ? 1 : 4);
          memmove(v15, (const void *)a4, (unsigned int)(12 * v6));
          v19 = SetGestureConfigSettings((struct tagWND *)v10);
          Win32FreePool(v15);
LABEL_10:
          ThreadUnlock1(v21, v20);
          goto LABEL_11;
        }
        v23 = 8LL;
      }
      else
      {
        v23 = 1400LL;
      }
    }
    else
    {
      v23 = 87LL;
    }
    v19 = 0;
    UserSetLastError(v23);
    goto LABEL_10;
  }
  v19 = 0;
LABEL_11:
  if ( !v24[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v24);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v11, v12);
  return v19;
}
