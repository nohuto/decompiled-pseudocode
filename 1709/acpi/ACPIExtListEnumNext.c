/*
 * XREFs of ACPIExtListEnumNext @ 0x1C001E750
 * Callers:
 *     ACPIInitDeleteChildDeviceList @ 0x1C000123C (ACPIInitDeleteChildDeviceList.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0010698 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIDetectDockDevices @ 0x1C0010748 (ACPIDetectDockDevices.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C001E140 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDuplicateHID @ 0x1C001E1F8 (ACPIDetectDuplicateHID.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001E390 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001E600 (ACPIGpeBuildWakeMasks.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0020CDC (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0042104 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C00444A8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDetectEjectDevices @ 0x1C00474C4 (ACPIDetectEjectDevices.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F024 (ACPIInitDeleteDeviceExtension.c)
 */

char *__fastcall ACPIExtListEnumNext(__int64 a1)
{
  __int64 v2; // r8
  _QWORD *v3; // rdx
  char *result; // rax
  KIRQL v5; // al
  __int64 v6; // r8
  KIRQL v7; // dl
  __int64 v8; // rcx
  _QWORD *v9; // rax
  KSPIN_LOCK *v10; // rcx
  char *v11; // rdi
  ULONG_PTR BugCheckParameter4; // rsi
  KIRQL v13; // bp
  KIRQL v14; // al
  char *v15; // rcx
  bool v16; // zf

  if ( *(_DWORD *)(a1 + 48) == 1 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
    v6 = *(_QWORD *)(a1 + 40);
    v7 = v5;
    v8 = *(_QWORD *)(a1 + 32);
    *(_BYTE *)(a1 + 24) = v5;
    v9 = *(_QWORD **)(v6 + v8);
    if ( (_QWORD *)*v9 == v9 )
      v9 = *(_QWORD **)(a1 + 8);
    v10 = *(KSPIN_LOCK **)(a1 + 16);
    v11 = (char *)v9 - v6;
    *(_QWORD *)(a1 + 8) = *v9;
    KeReleaseSpinLock(v10, v7);
    BugCheckParameter4 = *(_QWORD *)(a1 + 32);
    v13 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter4 + 684), 0xFFFFFFFF) == 1 )
    {
      if ( (*(_QWORD *)(BugCheckParameter4 + 8) & 0x200000000000000LL) != 0 && *(_DWORD *)(BugCheckParameter4 + 196) )
        KeBugCheckEx(0xA3u, 2uLL, 0x90336uLL, 0LL, BugCheckParameter4);
      ACPIInitDeleteDeviceExtension((PVOID)BugCheckParameter4);
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    KeReleaseSpinLock(&AcpiPowerLock, v13);
    v14 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
    v15 = &v11[*(_QWORD *)(a1 + 40)];
    *(_BYTE *)(a1 + 24) = v14;
    result = 0LL;
    v16 = v15 == *(char **)a1;
    *(_QWORD *)(a1 + 32) = v11;
    if ( !v16 )
      return v11;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 40);
    v3 = *(_QWORD **)(v2 + *(_QWORD *)(a1 + 32));
    if ( (_QWORD *)*v3 == v3 )
      v3 = *(_QWORD **)(a1 + 8);
    *(_QWORD *)(a1 + 32) = (char *)v3 - v2;
    *(_QWORD *)(a1 + 8) = *v3;
    result = 0LL;
    if ( v3 != *(_QWORD **)a1 )
      return (char *)v3 - v2;
  }
  return result;
}
