/*
 * XREFs of ACPIExtListEnumNext @ 0x1C0013970
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0013214 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIDetectDockDevices @ 0x1C00132C4 (ACPIDetectDockDevices.c)
 *     ACPIDetectDuplicateHID @ 0x1C001341C (ACPIDetectDuplicateHID.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C00135B0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C0013820 (ACPIGpeBuildWakeMasks.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C00142F4 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0027294 (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0042598 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0044AE8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDetectEjectDevices @ 0x1C0047D78 (ACPIDetectEjectDevices.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C004F634 (ACPIInitDeleteChildDeviceList.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F6A4 (ACPIInitDeleteDeviceExtension.c)
 */

char *__fastcall ACPIExtListEnumNext(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  char *v4; // rcx
  KIRQL v6; // al
  __int64 v7; // r8
  KIRQL v8; // dl
  __int64 v9; // rcx
  _QWORD *v10; // rax
  KSPIN_LOCK *v11; // rcx
  char *v12; // rdi
  volatile signed __int32 *v13; // rsi
  KIRQL v14; // bp
  KIRQL v15; // al
  bool v16; // zf

  if ( *(_DWORD *)(a1 + 48) == 1 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
    v7 = *(_QWORD *)(a1 + 40);
    v8 = v6;
    v9 = *(_QWORD *)(a1 + 32);
    *(_BYTE *)(a1 + 24) = v6;
    v10 = *(_QWORD **)(v7 + v9);
    if ( (_QWORD *)*v10 == v10 )
      v10 = *(_QWORD **)(a1 + 8);
    v11 = *(KSPIN_LOCK **)(a1 + 16);
    v12 = (char *)v10 - v7;
    *(_QWORD *)(a1 + 8) = *v10;
    KeReleaseSpinLock(v11, v8);
    v13 = *(volatile signed __int32 **)(a1 + 32);
    v14 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    if ( _InterlockedExchangeAdd(v13 + 171, 0xFFFFFFFF) == 1 )
      ACPIInitDeleteDeviceExtension((PVOID)v13);
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    KeReleaseSpinLock(&AcpiPowerLock, v14);
    v15 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
    v16 = &v12[*(_QWORD *)(a1 + 40)] == *(char **)a1;
    *(_QWORD *)(a1 + 32) = v12;
    if ( v16 )
      v12 = 0LL;
    *(_BYTE *)(a1 + 24) = v15;
    return v12;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 40);
    v3 = *(_QWORD **)(v2 + *(_QWORD *)(a1 + 32));
    if ( (_QWORD *)*v3 == v3 )
      v3 = *(_QWORD **)(a1 + 8);
    v4 = (char *)v3 - v2;
    *(_QWORD *)(a1 + 32) = (char *)v3 - v2;
    *(_QWORD *)(a1 + 8) = *v3;
    if ( v3 == *(_QWORD **)a1 )
      return 0LL;
    return v4;
  }
}
