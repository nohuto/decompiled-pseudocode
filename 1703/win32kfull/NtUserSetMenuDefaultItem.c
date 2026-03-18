/*
 * XREFs of NtUserSetMenuDefaultItem @ 0x1C00C5E40
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _SetMenuDefaultItem @ 0x1C00C279C (_SetMenuDefaultItem.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetMenuDefaultItem(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  char v14; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  v6 = ValidateHmenu(a1);
  v10 = v6;
  if ( !v6 || (*(_DWORD *)(v6 + 56) & 0x40) != 0 )
    v11 = 0;
  else
    v11 = SetMenuDefaultItem(v6, a2, a3);
  v12 = v11;
  if ( !v14 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v14);
  }
  UserSessionSwitchLeaveCrit(v10, v7, v8, v9);
  return v12;
}
