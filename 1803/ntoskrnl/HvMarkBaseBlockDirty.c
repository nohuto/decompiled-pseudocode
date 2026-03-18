/*
 * XREFs of HvMarkBaseBlockDirty @ 0x14049360C
 * Callers:
 *     HvHiveStartFileBacked @ 0x140496704 (HvHiveStartFileBacked.c)
 *     CmpReorganizeHive @ 0x140497D1C (CmpReorganizeHive.c)
 *     CmpCompleteUnloadKey @ 0x14054D8E8 (CmpCompleteUnloadKey.c)
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 *     CmpCreateHiveRootCell @ 0x14064F024 (CmpCreateHiveRootCell.c)
 *     NtCompressKey @ 0x1406EBDBC (NtCompressKey.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 *     CmFreezeRegistry @ 0x1406F68BC (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1406F6B0C (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1400690C0 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     CmpIssueNewDirtyCallback @ 0x14049367C (CmpIssueNewDirtyCallback.c)
 */

void __fastcall HvMarkBaseBlockDirty(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 191) && !*(_DWORD *)(a1 + 104) )
  {
    *(_QWORD *)(a1 + 4176) = KiQueryUnbiasedInterruptTime();
    CmpIssueNewDirtyCallback();
  }
  v2 = *(_DWORD *)(a1 + 160);
  *(_BYTE *)(a1 + 191) = 1;
  if ( (v2 & 2) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 4176) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
    CmpArmLazyWriter(0LL, (__int64)&v3, 0);
  }
}
