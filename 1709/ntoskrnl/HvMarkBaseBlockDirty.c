/*
 * XREFs of HvMarkBaseBlockDirty @ 0x14046F414
 * Callers:
 *     CmFreezeRegistry @ 0x14044E168 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14044F478 (CmThawRegistry.c)
 *     CmpCreateHiveRootCell @ 0x14046F4A4 (CmpCreateHiveRootCell.c)
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     CmpReorganizeHive @ 0x140470880 (CmpReorganizeHive.c)
 *     CmpInitCmRM @ 0x14050A840 (CmpInitCmRM.c)
 *     NtCompressKey @ 0x140687910 (NtCompressKey.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140016954 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     CmpIssueNewDirtyCallback @ 0x14046F484 (CmpIssueNewDirtyCallback.c)
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
    CmpArmLazyWriter(0LL, (__int64)&v3, 0);
  }
}
