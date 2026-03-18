/*
 * XREFs of MiReleaseFaultState @ 0x140057E38
 * Callers:
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiValidFault @ 0x14001ECF0 (MiValidFault.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiInPagePageTable @ 0x14003D3E0 (MiInPagePageTable.c)
 *     MiUnlockSystemVa @ 0x14003FA38 (MiUnlockSystemVa.c)
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007C9F8 (MiWaitForCollidedFaultComplete.c)
 *     MiReleaseFaultSynchronization @ 0x14026207C (MiReleaseFaultSynchronization.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x14026A8A4 (MiMakeImagePageOk.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x140059D10 (MiUnlockFaultPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiReleaseFaultState(__int64 a1, unsigned __int8 a2, _BYTE *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8

  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16);
  MiUnlockFaultPageTable(a1);
  if ( a3 )
    *a3 = *(_BYTE *)(a1 + 8);
  else
    a2 = *(_BYTE *)(a1 + 8);
  LOBYTE(v8) = a2;
  if ( *(_BYTE *)(a1 + 9) )
    MiUnlockWorkingSetExclusive(v3, v8);
  else
    MiUnlockWorkingSetShared(v3, a2, v9);
  return v5;
}
