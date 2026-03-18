/*
 * XREFs of UsbhFreeID @ 0x1C0028A88
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0006C34 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0008F98 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhReset2Complete @ 0x1C00143E0 (UsbhReset2Complete.c)
 *     UsbhUpdateUxdSettings @ 0x1C001E070 (UsbhUpdateUxdSettings.c)
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 *     UsbhGetSerialNumber @ 0x1C00234F4 (UsbhGetSerialNumber.c)
 *     UsbhGetProductIdString @ 0x1C00287E8 (UsbhGetProductIdString.c)
 *     UsbhSetEnumerationFailed @ 0x1C0052DA4 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildUnknownIds @ 0x1C0053058 (UsbhBuildUnknownIds.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C00565F4 (UsbhRemoveAndDeletePdo.c)
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
