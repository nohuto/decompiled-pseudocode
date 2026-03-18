/*
 * XREFs of PiDmObjectRelease @ 0x1405078AC
 * Callers:
 *     PiDmListEnumObjectsWithCallback @ 0x1405040D0 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x140504830 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlCmActionCallback @ 0x140504E60 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405071E4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140507368 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1405078E8 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140507E74 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140509520 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmEnumObjectsWithCallback @ 0x140509908 (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventRelease @ 0x140509B1C (PiPnpRtlObjectEventRelease.c)
 *     PiDqQueryActionQueueEntryFree @ 0x14050D608 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14056BD98 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140573508 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1405772A0 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1405817B0 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14058BC18 (PiUEventFreeClientRegistrationContext.c)
 *     PiDmGetObjectConstraintList @ 0x1405BE86C (PiDmGetObjectConstraintList.c)
 *     PiDmObjectProcessPropertyChange @ 0x1405D2E6C (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x1405D3614 (PiDmCacheDataFree.c)
 *     PiDmObjectCreate @ 0x1405D3AB4 (PiDmObjectCreate.c)
 *     PiDmAddCacheReferenceForObject @ 0x1405D4DD0 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1405E065C (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1405E06C0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1405E6390 (PiDmGetReferencedObjectFromProperty.c)
 *     IopProcessSetInterfaceState @ 0x1405F4C6C (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1405F5474 (IopRegisterDeviceInterface.c)
 *     PiDmListInitEnumCallback @ 0x140630FD0 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x140631170 (PiDmObjectManagerPopulate.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407285CC (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140728780 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x1407287C4 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListRemoveObjectWorker @ 0x140729088 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PiDmGetCacheKeys @ 0x1405079F8 (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x1405D3614 (PiDmCacheDataFree.c)
 */

void __fastcall PiDmObjectRelease(unsigned int *P)
{
  void *v2; // rcx
  char *v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 2, 0xFFFFFFFF) == 1 )
  {
    v2 = (void *)*((_QWORD *)P + 2);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x5A706E50u);
    PiDmGetCacheKeys(P[7], &v6, &v5);
    if ( v5 )
    {
      v3 = (char *)(P + 28);
      v4 = v5;
      do
      {
        PiDmCacheDataFree(v3);
        v3 += 24;
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(P, 0x5A706E50u);
  }
}
