/*
 * XREFs of PiDmGetObject @ 0x1405074E8
 * Callers:
 *     PiPnpRtlObjectEventCreate @ 0x140504830 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlCmActionCallback @ 0x140504E60 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405071E4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140507368 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1405078E8 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140507E74 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140509520 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14056BD98 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1405772A0 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1405817B0 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiUEventHandleRegistration @ 0x14058C23C (PiUEventHandleRegistration.c)
 *     PiDmGetObjectConstraintList @ 0x1405BE86C (PiDmGetObjectConstraintList.c)
 *     PiDmObjectProcessPropertyChange @ 0x1405D2E6C (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataEncode @ 0x1405D364C (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1405E6390 (PiDmGetReferencedObjectFromProperty.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405E7654 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     IopProcessSetInterfaceState @ 0x1405F4C6C (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1405F5474 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407285CC (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140728824 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140728A34 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x140728CDC (PiPnpRtlGatherPanelRemoveInfo.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PiDmLookupObject @ 0x140507574 (PiDmLookupObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14050784C (PiDmGetObjectManagerForObjectType.c)
 */

__int64 __fastcall PiDmGetObject(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _ERESOURCE *ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _ERESOURCE *v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // ebx

  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType();
  CurrentThread = KeGetCurrentThread();
  v7 = ObjectManagerForObjectType;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(ObjectManagerForObjectType, 1u);
  v8 = PiDmLookupObject(v7, a2);
  *a3 = v8;
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  v9 = v8 == 0 ? 0xC0000034 : 0;
  ExReleaseResourceLite(v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v9;
}
