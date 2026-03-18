/*
 * XREFs of NtUserSetMenuContextHelpId @ 0x1C01DF8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetMenuContextHelpId(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  char v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = 1LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  v5 = ValidateHmenu(a1);
  v9 = v5;
  if ( !v5 || (*(_DWORD *)(v5 + 56) & 0x40) != 0 )
    v4 = 0LL;
  else
    *(_DWORD *)(v5 + 112) = a2;
  if ( !v11 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v11);
  }
  UserSessionSwitchLeaveCrit(v9, v6, v7, v8);
  return v4;
}
