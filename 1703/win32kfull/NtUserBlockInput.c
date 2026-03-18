/*
 * XREFs of NtUserBlockInput @ 0x1C0118420
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _BlockInput @ 0x1C0118478 (_BlockInput.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserBlockInput(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  char v8; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  v4 = BlockInput(a1);
  if ( !v8 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v8);
  }
  UserSessionSwitchLeaveCrit(v3, v2, v5, v6);
  return v4;
}
