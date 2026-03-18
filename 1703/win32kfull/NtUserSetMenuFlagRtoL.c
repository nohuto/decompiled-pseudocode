/*
 * XREFs of NtUserSetMenuFlagRtoL @ 0x1C01DF930
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetMenuFlagRtoL(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  v3 = ValidateHmenu(a1);
  if ( v3 )
    *(_DWORD *)(v3 + 56) |= 0x20u;
  else
    v2 = 0LL;
  if ( !v9 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v9);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v2;
}
