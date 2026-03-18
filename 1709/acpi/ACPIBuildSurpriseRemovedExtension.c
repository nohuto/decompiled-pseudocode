/*
 * XREFs of ACPIBuildSurpriseRemovedExtension @ 0x1C00444A8
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0010698 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C00444A8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C00455E0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0045BF0 (ACPIBusIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIDevicePowerFlushQueue @ 0x1C000213C (ACPIDevicePowerFlushQueue.c)
 *     ACPIDockIsDockDevice @ 0x1C000CF70 (ACPIDockIsDockDevice.c)
 *     ACPIExtListTestElement @ 0x1C001083C (ACPIExtListTestElement.c)
 *     ACPIExtListStartEnum @ 0x1C00108A0 (ACPIExtListStartEnum.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C0011088 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIExtListEnumNext @ 0x1C001E750 (ACPIExtListEnumNext.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0042104 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C00438F4 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C00444A8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitRemoveDeviceExtension @ 0x1C004F358 (ACPIInitRemoveDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildSurpriseRemovedExtension(ULONG_PTR a1)
{
  __int64 CorrespondingDock; // rax
  __int64 i; // rax
  __int64 v4; // rdi
  KIRQL v5; // si
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  _QWORD v16[6]; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+50h] [rbp-18h]

  CorrespondingDock = ACPIDockFindCorrespondingDock(a1);
  if ( CorrespondingDock )
  {
    *(_DWORD *)(CorrespondingDock + 320) = 5;
    ACPIBuildSurpriseRemovedExtension(CorrespondingDock);
  }
  v16[1] = 0LL;
  v16[0] = a1 + 752;
  v16[5] = 768LL;
  v16[2] = &AcpiDeviceTreeLock;
  v17 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v16); ; i = (__int64)ACPIExtListEnumNext((__int64)v16) )
  {
    v4 = i;
    if ( !ACPIExtListTestElement((__int64)v16, 1) )
      break;
    ACPIBuildSurpriseRemovedExtension(v4);
  }
  ACPIDevicePowerFlushQueue(a1);
  ACPIBuildProcessNotifyPepDeleteDevice(a1, 0);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v6 = *(_QWORD *)(a1 + 8) & 0x20LL;
  v7 = *(_QWORD *)(a1 + 8) & 0x40LL;
  if ( v7 || v6 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFC00uLL);
    _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x8000000000100uLL);
    if ( v7 )
    {
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x40uLL);
      *(_QWORD *)(a1 + 24) = AcpiSurpriseRemovedFilterIrpDispatch;
    }
    if ( v6 )
    {
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x20uLL);
      *(_QWORD *)(a1 + 24) = &AcpiSurpriseRemovedPdoIrpDispatch;
    }
  }
  _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x80uLL);
  if ( (*(_QWORD *)(a1 + 8) & 0x80000000000LL) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 744);
    if ( v8 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x20000000000uLL);
      v9 = *(__int64 **)(a1 + 712);
      if ( v9 )
      {
        if ( ACPIDockIsDockDevice(v9) )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v8 + 736), SingleBusRelations);
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 400);
  if ( v10 )
  {
    v11 = (_QWORD *)(v10 + 40);
    v12 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    *(_QWORD *)(a1 + 400) = 0LL;
  }
  ACPIInitRemoveDeviceExtension(a1);
  if ( *(_QWORD *)(a1 + 712) )
  {
    if ( (*(_QWORD *)(a1 + 8) & 0x80000000000LL) == 0 )
    {
      v14 = *(_QWORD *)(a1 + 736);
      if ( v14 )
      {
        if ( (*(_DWORD *)(v14 + 48) & 0x4000000) != 0 )
          ACPIInitDereferenceDeviceExtensionLocked(a1);
      }
    }
    *(_QWORD *)(**(_QWORD **)(a1 + 712) + 104LL) = 0LL;
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  return 0LL;
}
