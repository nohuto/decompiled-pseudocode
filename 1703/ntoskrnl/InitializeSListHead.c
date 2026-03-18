/*
 * XREFs of InitializeSListHead @ 0x14012F490
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14012EB64 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializePagedLookasideListInternal @ 0x14012F140 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x14012F2B0 (ExInitializeLookasideListExInternal.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140134F20 (ExInitializeNPagedLookasideListInternal.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140164854 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401E668C (HvlpSetupCachedHypercallPages.c)
 *     PopEndMirroring @ 0x14040CD30 (PopEndMirroring.c)
 *     PfTAccessTracingInitialize @ 0x14040EBB0 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x14040F89C (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x14040F940 (KiInitPrcb.c)
 *     EtwpInitializeStackTracing @ 0x14059E618 (EtwpInitializeStackTracing.c)
 *     MiInitializePartition @ 0x1405A1920 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x1405A1DA8 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x1405A1EA8 (MiInitializeNuma.c)
 *     MiCreatePagefile @ 0x1405BA1B8 (MiCreatePagefile.c)
 *     PfTInitialize @ 0x1405C8078 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x1405C82C4 (PfFbBufferListInitialize.c)
 *     WdipSemInitializeGlobalState @ 0x1405CAA50 (WdipSemInitializeGlobalState.c)
 *     CmpInitCallbacks @ 0x1405D54DC (CmpInitCallbacks.c)
 *     EtwpInitializeStackLookasideList @ 0x1405D64B8 (EtwpInitializeStackLookasideList.c)
 *     ObpInitStackAndObjectTables @ 0x1406C2C74 (ObpInitStackAndObjectTables.c)
 *     RtlStdInitializeStackDatabase @ 0x1406E7DFC (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x140705D5C (WdipSemFreePool.c)
 *     EtwpEnableStackCaching @ 0x1407135D8 (EtwpEnableStackCaching.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140775274 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x14077594C (VfPoolInitPhase1.c)
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 *     MiInitializeBootDefaults @ 0x140812ADC (MiInitializeBootDefaults.c)
 *     MiInitializeDecayPfns @ 0x140813728 (MiInitializeDecayPfns.c)
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 *     ExpWorkerFactoryInitialization @ 0x14082478C (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0uLL;
}
