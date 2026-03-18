/*
 * XREFs of PiDmGetObject @ 0x140487390
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x14041FD94 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140449A9C (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140449BD8 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x140485340 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140485AF0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140486114 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlObjectEventCreate @ 0x14048689C (PiPnpRtlObjectEventCreate.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14048ADE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiUEventHandleRegistration @ 0x1404A4F10 (PiUEventHandleRegistration.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1404BDCE4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404DF1FC (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataEncode @ 0x1404DF6B8 (PiDmCacheDataEncode.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     PiDmGetObjectConstraintList @ 0x1404E4390 (PiDmGetObjectConstraintList.c)
 *     IopProcessSetInterfaceState @ 0x1404E49E8 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14059A668 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1406969CC (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140696C24 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140696E00 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140485AA0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmLookupObject @ 0x140486DB8 (PiDmLookupObject.c)
 */

__int64 __fastcall PiDmGetObject(int a1, _WORD *a2, __int64 *a3)
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
  v8 = PiDmLookupObject((__int64)ObjectManagerForObjectType, a2);
  *a3 = v8;
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  else
    v5 = -1073741772;
  ExReleaseResourceLite(ObjectManagerForObjectType);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}
