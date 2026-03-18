/*
 * XREFs of NtUserUnregisterUserApiHook @ 0x1C01E0E90
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _UnregisterUserApiHook @ 0x1C00D8A20 (_UnregisterUserApiHook.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 NtUserUnregisterUserApiHook()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  char v8; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  v4 = (int)UnregisterUserApiHook(v1, v0);
  if ( !v8 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v8);
  }
  UserSessionSwitchLeaveCrit(v3, v2, v5, v6);
  return v4;
}
