/*
 * XREFs of NtUserDestroyMenu @ 0x1C0108230
 * Callers:
 *     <none>
 * Callees:
 *     _DestroyMenu @ 0x1C0042DC0 (_DestroyMenu.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserDestroyMenu(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  char v10; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  v2 = ValidateHmenu(a1);
  v6 = v2;
  if ( !v2 || (*(_DWORD *)(v2 + 56) & 0x40) != 0 )
    v7 = 0;
  else
    v7 = DestroyMenu((struct tagMENU *)v2);
  v8 = v7;
  if ( !v10 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v10);
  }
  UserSessionSwitchLeaveCrit(v6, v3, v4, v5);
  return v8;
}
