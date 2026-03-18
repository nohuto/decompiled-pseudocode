/*
 * XREFs of NtUserImpersonateDdeClientWindow @ 0x1C01DBF80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _ImpersonateDdeClientWindow @ 0x1C01E5948 (_ImpersonateDdeClientWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserImpersonateDdeClientWindow(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  char v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  v7 = ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_2;
  v10 = ValidateHwnd(a2);
  v5 = v10;
  if ( !v10 )
    goto LABEL_2;
  v8 = *(_QWORD *)(v10 + 16);
  if ( v8 != gptiCurrent )
  {
    UserSetLastError(87LL);
LABEL_2:
    v4 = 0;
    goto LABEL_8;
  }
  v6 = *(_QWORD *)(v7 + 16);
  if ( *(_QWORD *)(v6 + 376) != *(_QWORD *)(v8 + 376) )
    v4 = ImpersonateDdeClientWindow(v7, v10);
LABEL_8:
  if ( !v12 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v12);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v4;
}
