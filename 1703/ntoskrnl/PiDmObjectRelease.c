/*
 * XREFs of PiDmObjectRelease @ 0x140485734
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x14041FD94 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140449A9C (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140449BD8 (PiDmObjectGetCachedObjectReference.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140457B18 (PiUEventFreeClientRegistrationContext.c)
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x140485340 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1404854F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140485AF0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140486114 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlObjectEventCreate @ 0x14048689C (PiPnpRtlObjectEventCreate.c)
 *     PiDmEnumObjectsWithCallback @ 0x140488028 (PiDmEnumObjectsWithCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140488B58 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventRelease @ 0x140489038 (PiPnpRtlObjectEventRelease.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14048ADE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1404B64A8 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1404B993C (PiDqQueryActionQueueEntryFree.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1404BDCE4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404DF1FC (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x1404DF680 (PiDmCacheDataFree.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E4180 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmGetObjectConstraintList @ 0x1404E4390 (PiDmGetObjectConstraintList.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E4664 (PiDmAddCacheReferenceForObject.c)
 *     IopProcessSetInterfaceState @ 0x1404E49E8 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14059B0D0 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x1405ADAE0 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x1405BD940 (PiDmObjectManagerPopulate.c)
 *     PiDmObjectCreate @ 0x1405BDA78 (PiDmObjectCreate.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1406969CC (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreeContainerRemoveInfo @ 0x140696B80 (PiPnpRtlFreeContainerRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140696BC4 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListRemoveObjectWorker @ 0x1406977E0 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiDmGetCacheKeys @ 0x140485C3C (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x1404DF680 (PiDmCacheDataFree.c)
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
