/*
 * XREFs of NtUserRegisterUserApiHook @ 0x1C00E3BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _RegisterUserApiHook @ 0x1C00E3CBC (_RegisterUserApiHook.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRegisterUserApiHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  v10 = (int)RegisterUserApiHook(a1, a2, a3, a4);
  if ( !v14[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v14);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v11, v12);
  return v10;
}
