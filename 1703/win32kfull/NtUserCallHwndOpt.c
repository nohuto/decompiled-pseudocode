/*
 * XREFs of NtUserCallHwndOpt @ 0x1C0118100
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCallHwndOpt(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rbx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
      goto LABEL_9;
  }
  else
  {
    v7 = 0LL;
  }
  if ( (unsigned int)(v2 - 100) <= 1 )
  {
    v8 = ((__int64 (__fastcall *)(__int64))apfnSimpleCall[v2])(v7);
    goto LABEL_5;
  }
LABEL_9:
  v8 = 0LL;
LABEL_5:
  if ( !v10 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v10);
  }
  UserSessionSwitchLeaveCrit(v7, v4, v5, v6);
  return v8;
}
