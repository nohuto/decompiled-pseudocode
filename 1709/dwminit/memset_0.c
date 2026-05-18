/*
 * XREFs of memset_0 @ 0x1800096E4
 * Callers:
 *     sub_180001210 @ 0x180001210 (sub_180001210.c)
 *     DllMain @ 0x18000170C (DllMain.c)
 *     ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001B5C (-AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?UnmapDwmVirtualAccount@@YAJXZ @ 0x180001ECC (-UnmapDwmVirtualAccount@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180001F64 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?FallBackToBDD@@YA_NXZ @ 0x180002610 (-FallBackToBDD@@YA_NXZ.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x1800027F4 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002AC0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x180003D60 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x1800049FC (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x180004EA0 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180005A18 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180007028 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?InitHashTable@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAA_NI_N@Z @ 0x180007D50 (-InitHashTable@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventMana.c)
 *     ?Rehash@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAAXI@Z @ 0x180007DD0 (-Rehash@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4D.c)
 *     __scrt_fastfail @ 0x180009590 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
