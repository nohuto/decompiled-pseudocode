/*
 * XREFs of PiDmObjectRelease @ 0x140523DEC
 * Callers:
 *     IopRegisterDeviceInterface @ 0x140517BAC (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14051804C (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmGetObjectConstraintList @ 0x140518260 (PiDmGetObjectConstraintList.c)
 *     PiDmAddCacheReferenceForObject @ 0x140518534 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x140522FC4 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x140523648 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1405237D0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140523E28 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140524280 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmEnumObjectsWithCallback @ 0x140526100 (PiDmEnumObjectsWithCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140526D90 (PiDmListEnumObjectsWithCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140527DE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlObjectEventRelease @ 0x140528EA0 (PiPnpRtlObjectEventRelease.c)
 *     PiDmObjectProcessPropertyChange @ 0x140528FC4 (PiDmObjectProcessPropertyChange.c)
 *     PiDqQueryActionQueueEntryFree @ 0x14052DF28 (PiDqQueryActionQueueEntryFree.c)
 *     IopProcessSetInterfaceState @ 0x140556128 (IopProcessSetInterfaceState.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140580700 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1405882E8 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140588424 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmCacheDataFree @ 0x140590AE4 (PiDmCacheDataFree.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14059576C (PiUEventFreeClientRegistrationContext.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1405962D4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x14059EF20 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDmListInitEnumCallback @ 0x1405B9CF0 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x1405CD534 (PiDmObjectManagerPopulate.c)
 *     PiDmObjectCreate @ 0x1405CD66C (PiDmObjectCreate.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1405E70E8 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1406C259C (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreeContainerRemoveInfo @ 0x1406C2750 (PiPnpRtlFreeContainerRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x1406C2794 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListRemoveObjectWorker @ 0x1406C2FA8 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiDmGetCacheKeys @ 0x140523F38 (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x140590AE4 (PiDmCacheDataFree.c)
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
      v3 = (char *)(P + 26);
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
