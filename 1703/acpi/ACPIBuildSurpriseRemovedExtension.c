/*
 * XREFs of ACPIBuildSurpriseRemovedExtension @ 0x1C0044AE8
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0013214 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0044AE8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C0045F80 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0046510 (ACPIBusIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIDevicePowerFlushQueue @ 0x1C00087A0 (ACPIDevicePowerFlushQueue.c)
 *     ACPIExtListTestElement @ 0x1C00133B8 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C0013970 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C0016AB4 (ACPIExtListStartEnum.c)
 *     ACPIDockIsDockDevice @ 0x1C00172D0 (ACPIDockIsDockDevice.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0042598 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C0043F34 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0044AE8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C004F9D8 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInitRemoveDeviceExtension @ 0x1C004FA04 (ACPIInitRemoveDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildSurpriseRemovedExtension(__int64 a1)
{
  __int64 CorrespondingDock; // rax
  __int64 i; // rax
  __int64 v4; // rdi
  KIRQL v5; // si
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 **v10; // rcx
  __int64 *v11; // rax
  __int64 *v12; // rdx
  __int64 v13; // rax
  _QWORD v15[6]; // [rsp+20h] [rbp-48h] BYREF
  int v16; // [rsp+50h] [rbp-18h]

  CorrespondingDock = ACPIDockFindCorrespondingDock(a1);
  if ( CorrespondingDock )
  {
    *(_DWORD *)(CorrespondingDock + 320) = 5;
    ACPIBuildSurpriseRemovedExtension(CorrespondingDock);
  }
  v15[1] = 0LL;
  v15[0] = a1 + 752;
  v15[5] = 768LL;
  v15[2] = &AcpiDeviceTreeLock;
  v16 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v15); ; i = (__int64)ACPIExtListEnumNext((__int64)v15) )
  {
    v4 = i;
    if ( !ACPIExtListTestElement((__int64)v15, 1) )
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
      if ( *(_QWORD *)(a1 + 712) )
      {
        if ( ACPIDockIsDockDevice() )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v8 + 736), SingleBusRelations);
      }
    }
  }
  v9 = *(_QWORD *)(a1 + 400);
  if ( v9 )
  {
    v10 = *(__int64 ***)(v9 + 48);
    v11 = (__int64 *)(v9 + 40);
    v12 = (__int64 *)*v11;
    if ( *(__int64 **)(*v11 + 8) != v11 || *v10 != v11 )
      __fastfail(3u);
    *v10 = v12;
    v12[1] = (__int64)v10;
    *(_QWORD *)(a1 + 400) = 0LL;
  }
  ACPIInitRemoveDeviceExtension(a1);
  if ( *(_QWORD *)(a1 + 712) )
  {
    if ( (*(_QWORD *)(a1 + 8) & 0x80000000000LL) == 0 )
    {
      v13 = *(_QWORD *)(a1 + 736);
      if ( v13 )
      {
        if ( (*(_DWORD *)(v13 + 48) & 0x4000000) != 0 )
          ACPIInitDereferenceDeviceExtensionLocked(a1);
      }
    }
    *(_QWORD *)(**(_QWORD **)(a1 + 712) + 104LL) = 0LL;
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  return 0LL;
}
