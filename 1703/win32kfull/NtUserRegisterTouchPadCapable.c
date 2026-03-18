/*
 * XREFs of NtUserRegisterTouchPadCapable @ 0x1C011B950
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRegisterTouchPadCapable(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v7);
  v5 = gptiCurrent;
  if ( a1 )
    *(_DWORD *)(gptiCurrent + 1096LL) |= 0x10000u;
  else
    *(_DWORD *)(gptiCurrent + 1096LL) &= ~0x10000u;
  if ( !v7 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v7);
  }
  UserSessionSwitchLeaveCrit(v5, v2, v3, v4);
  return 1LL;
}
