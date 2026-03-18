/*
 * XREFs of InitializeSListHead @ 0x1400B46E0
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140005EC8 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializePagedLookasideListInternal @ 0x1400B4390 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x1400B4500 (ExInitializeLookasideListExInternal.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140146390 (ExInitializeNPagedLookasideListInternal.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140155CBC (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401EB48C (HvlpSetupCachedHypercallPages.c)
 *     ExInitializeSystemLookasideList @ 0x1404275CC (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x140427670 (KiInitPrcb.c)
 *     PfTAccessTracingInitialize @ 0x140428D4C (PfTAccessTracingInitialize.c)
 *     EtwpInitializeStackTracing @ 0x1404EC7C0 (EtwpInitializeStackTracing.c)
 *     WdipSemInitializeGlobalState @ 0x1405ABB3C (WdipSemInitializeGlobalState.c)
 *     MiInitializePartition @ 0x1405B30A8 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x1405B353C (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x1405B36A0 (MiInitializeNuma.c)
 *     MiCreatePagefile @ 0x1405D4B4C (MiCreatePagefile.c)
 *     PfTInitialize @ 0x1405DC060 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x1405DC2AC (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x14071FBDC (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x14073F430 (WdipSemFreePool.c)
 *     EtwpEnableStackCaching @ 0x14075272C (EtwpEnableStackCaching.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1407B7034 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x1407B7798 (VfPoolInitPhase1.c)
 *     MiInitializeBootDefaults @ 0x14082F394 (MiInitializeBootDefaults.c)
 *     MiCreateTopLevelUltraMappings @ 0x1408525F8 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0uLL;
}
