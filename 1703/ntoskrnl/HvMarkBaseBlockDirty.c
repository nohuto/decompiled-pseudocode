/*
 * XREFs of HvMarkBaseBlockDirty @ 0x1405D0948
 * Callers:
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     CmpInitCmRM @ 0x14054D650 (CmpInitCmRM.c)
 *     CmpCreateHiveRootCell @ 0x1405D06F4 (CmpCreateHiveRootCell.c)
 *     NtCompressKey @ 0x14065EA94 (NtCompressKey.c)
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 *     CmFreezeRegistry @ 0x1406689BC (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140668BE4 (CmThawRegistry.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     CmpArmLazyWriter @ 0x1400A8190 (CmpArmLazyWriter.c)
 *     CmpIssueNewDirtyCallback @ 0x14045B5F8 (CmpIssueNewDirtyCallback.c)
 */

void __fastcall HvMarkBaseBlockDirty(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 175) && !*(_DWORD *)(a1 + 88) )
  {
    *(_QWORD *)(a1 + 5384) = KiQueryUnbiasedInterruptTime();
    CmpIssueNewDirtyCallback();
  }
  v2 = *(_DWORD *)(a1 + 144);
  *(_BYTE *)(a1 + 175) = 1;
  if ( (v2 & 2) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 5384) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
    CmpArmLazyWriter(0, (__int64)&v3, 0);
  }
}
