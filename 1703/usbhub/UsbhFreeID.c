/*
 * XREFs of UsbhFreeID @ 0x1C0022140
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     UsbhReset2Complete @ 0x1C0015860 (UsbhReset2Complete.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C00208B0 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 *     UsbhGetSerialNumber @ 0x1C0022228 (UsbhGetSerialNumber.c)
 *     UsbhUpdateUxdSettings @ 0x1C0022298 (UsbhUpdateUxdSettings.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FE4 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildUnknownIds @ 0x1C0052ADC (UsbhBuildUnknownIds.c)
 *     UsbhGetProductIdString @ 0x1C0052E10 (UsbhGetProductIdString.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C00566FC (UsbhRemoveAndDeletePdo.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbhFreeID(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
  }
}
