/*
 * XREFs of NtUserUnhookWinEvent @ 0x1C00D8EB0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _UnhookWinEvent @ 0x1C00D8F1C (_UnhookWinEvent.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserUnhookWinEvent(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  char v9; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  v2 = HMValidateHandle(a1, 15);
  if ( v2 )
    LODWORD(v2) = UnhookWinEvent(v2);
  v7 = (int)v2;
  if ( !v9 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v9);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
