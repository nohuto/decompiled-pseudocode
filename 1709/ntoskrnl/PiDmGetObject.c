/*
 * XREFs of PiDmGetObject @ 0x140523950
 * Callers:
 *     IopRegisterDeviceInterface @ 0x140517BAC (IopRegisterDeviceInterface.c)
 *     PiDmGetObjectConstraintList @ 0x140518260 (PiDmGetObjectConstraintList.c)
 *     PiDmCacheDataEncode @ 0x140518820 (PiDmCacheDataEncode.c)
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x140522FC4 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x140523648 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1405237D0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140523E28 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140524280 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140527DE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectProcessPropertyChange @ 0x140528FC4 (PiDmObjectProcessPropertyChange.c)
 *     PiUEventHandleRegistration @ 0x1405486E8 (PiUEventHandleRegistration.c)
 *     IopProcessSetInterfaceState @ 0x140556128 (IopProcessSetInterfaceState.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140580700 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1405882E8 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140588424 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1405962D4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405E1D68 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1406C259C (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x1406C27F4 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x1406C2A08 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PiDmLookupObject @ 0x1405239E0 (PiDmLookupObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140523BF4 (PiDmGetObjectManagerForObjectType.c)
 */

__int64 __fastcall PiDmGetObject(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v5; // esi
  struct _ERESOURCE *ObjectManagerForObjectType; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax

  v5 = 0;
  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(ObjectManagerForObjectType, 1u);
  v8 = PiDmLookupObject(ObjectManagerForObjectType, a2);
  *a3 = v8;
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  else
    v5 = -1073741772;
  ExReleaseResourceLite(ObjectManagerForObjectType);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
