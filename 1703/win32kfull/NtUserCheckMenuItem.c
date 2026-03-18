/*
 * XREFs of NtUserCheckMenuItem @ 0x1C0136BB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z @ 0x1C00C22B0 (-MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCheckMenuItem(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // ebx
  char v13; // [rsp+58h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL);
  }
  else
  {
    v6 = ValidateHmenu(a1);
    v10 = v6;
    if ( v6 && (*(_DWORD *)(v6 + 56) & 0x40) == 0 )
    {
      v11 = MenuItemState((struct tagMENU *)v6, a2, a3, 8LL, 0LL);
      goto LABEL_5;
    }
  }
  v11 = -1;
LABEL_5:
  if ( !v13 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v13);
  }
  UserSessionSwitchLeaveCrit(v10, v7, v8, v9);
  return v11;
}
