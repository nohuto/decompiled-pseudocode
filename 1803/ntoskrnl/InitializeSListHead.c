/*
 * XREFs of InitializeSListHead @ 0x14006A770
 * Callers:
 *     ExInitializeLookasideListExInternal @ 0x14006A590 (ExInitializeLookasideListExInternal.c)
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14007E138 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializePagedLookasideListInternal @ 0x1400C7700 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14014B690 (ExInitializeNPagedLookasideListInternal.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14018299C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     HvlpSetupCachedHypercallPages @ 0x140228500 (HvlpSetupCachedHypercallPages.c)
 *     RtlpHpLfhContextInitialize @ 0x14029A594 (RtlpHpLfhContextInitialize.c)
 *     PfTAccessTracingInitialize @ 0x1404781D8 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x1404792DC (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x140479380 (KiInitPrcb.c)
 *     MmInitializeProcessAddressSpace @ 0x1404ECD04 (MmInitializeProcessAddressSpace.c)
 *     MiInitializePartition @ 0x14061BA7C (MiInitializePartition.c)
 *     MiInitializeSections @ 0x14061BF24 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x14061C088 (MiInitializeNuma.c)
 *     WdipSemInitializeGlobalState @ 0x14063ABE8 (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x14063C9BC (MiCreatePagefile.c)
 *     PfTInitialize @ 0x1406444B8 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x140644714 (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x1407832C4 (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x1407A17A4 (WdipSemFreePool.c)
 *     EtwpInitializeStackTracing @ 0x1407A72B8 (EtwpInitializeStackTracing.c)
 *     EtwpEnableStackCaching @ 0x1407B3090 (EtwpEnableStackCaching.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B36B0 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x1407B64B0 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1407B6544 (EtwpCovSampLookasideInitialize.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1408221A0 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x1408249D8 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x1408C43B8 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeBootDefaults @ 0x1408C69EC (MiInitializeBootDefaults.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0uLL;
}
