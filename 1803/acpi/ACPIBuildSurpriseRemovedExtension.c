/*
 * XREFs of ACPIBuildSurpriseRemovedExtension @ 0x1C0011568
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0011568 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C00144B0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0014CC0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0025034 (ACPIFilterRemoveNonPresentDevices.c)
 * Callees:
 *     ACPIDockFindCorrespondingDock @ 0x1C0008104 (ACPIDockFindCorrespondingDock.c)
 *     ACPIDockIsDockDevice @ 0x1C00087E4 (ACPIDockIsDockDevice.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C000EC80 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0011568 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C001C09C (ACPIDevicePowerFlushQueue.c)
 *     ACPIExtListEnumNext @ 0x1C0023590 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C002367C (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C00236D0 (ACPIExtListTestElement.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C00286A0 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInitRemoveDeviceExtension @ 0x1C0028B6C (ACPIInitRemoveDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildSurpriseRemovedExtension(ULONG_PTR a1)
{
  __int64 CorrespondingDock; // rax
  __int64 i; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  KIRQL v6; // si
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD v17[6]; // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+50h] [rbp-18h]

  CorrespondingDock = ACPIDockFindCorrespondingDock(a1);
  if ( CorrespondingDock )
  {
    *(_DWORD *)(CorrespondingDock + 320) = 5;
    ACPIBuildSurpriseRemovedExtension(CorrespondingDock);
  }
  v17[1] = 0LL;
  v17[0] = a1 + 752;
  v17[5] = 768LL;
  v17[2] = &AcpiDeviceTreeLock;
  v18 = 1;
  for ( i = ACPIExtListStartEnum(v17); ; i = ACPIExtListEnumNext(v17) )
  {
    LOBYTE(v4) = 1;
    v5 = i;
    if ( !(unsigned __int8)ACPIExtListTestElement(v17, v4) )
      break;
    ACPIBuildSurpriseRemovedExtension(v5);
  }
  ACPIDevicePowerFlushQueue(a1);
  ACPIBuildProcessNotifyPepDeleteDevice(a1, 0);
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v7 = *(_QWORD *)(a1 + 8) & 0x20LL;
  v8 = *(_QWORD *)(a1 + 8) & 0x40LL;
  if ( v8 || v7 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFC00uLL);
    _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x8000000000100uLL);
    if ( v8 )
    {
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x40uLL);
      *(_QWORD *)(a1 + 24) = AcpiSurpriseRemovedFilterIrpDispatch;
    }
    if ( v7 )
    {
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x20uLL);
      *(_QWORD *)(a1 + 24) = &AcpiSurpriseRemovedPdoIrpDispatch;
    }
  }
  _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x80uLL);
  if ( (*(_QWORD *)(a1 + 8) & 0x80000000000LL) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 744);
    if ( v9 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x20000000000uLL);
      if ( *(_QWORD *)(a1 + 712) )
      {
        if ( ACPIDockIsDockDevice() )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v9 + 736), SingleBusRelations);
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
    v14 = *(_QWORD *)(a1 + 712);
    if ( (*(_QWORD *)(a1 + 8) & 0x80000000000LL) == 0 )
    {
      v15 = *(_QWORD *)(a1 + 736);
      if ( v15 )
      {
        if ( (*(_DWORD *)(v15 + 48) & 0x4000000) != 0 )
        {
          ACPIInitDereferenceDeviceExtensionLocked(a1);
          v14 = *(_QWORD *)(a1 + 712);
        }
      }
    }
    *(_QWORD *)(*(_QWORD *)v14 + 104LL) = 0LL;
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v6);
  return 0LL;
}
