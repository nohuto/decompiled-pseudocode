/*
 * XREFs of NtUserSetCursorContents @ 0x1C01DF220
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _SetCursorContents @ 0x1C01C50C4 (_SetCursorContents.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetCursorContents(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rbx
  char v13; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  v6 = HMValidateHandle(a1, 3);
  if ( v6 && (v10 = HMValidateHandle(a2, 3)) != 0 )
    v9 = SetCursorContents(v6, v10);
  else
    v9 = 0;
  v11 = v9;
  if ( !v13 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v13);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return v11;
}
