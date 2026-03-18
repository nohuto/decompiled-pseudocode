/*
 * XREFs of NtUserUnregisterHotKey @ 0x1C00BCEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _UnregisterHotKey @ 0x1C00BCF40 (_UnregisterHotKey.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserUnregisterHotKey(__int64 a1, int a2)
{
  struct tagWND *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  char v11; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  if ( a1 )
  {
    v4 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v4 )
      goto LABEL_4;
  }
  else
  {
    v4 = 0LL;
  }
  LODWORD(v4) = UnregisterHotKey(v4, a2);
LABEL_4:
  v9 = (int)v4;
  if ( !v11 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v11);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
