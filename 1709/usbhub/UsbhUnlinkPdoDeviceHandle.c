/*
 * XREFs of UsbhUnlinkPdoDeviceHandle @ 0x1C00070F0
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0006C34 (UsbhSyncResetDeviceInternal.c)
 *     UsbhReset2Complete @ 0x1C00143E0 (UsbhReset2Complete.c)
 *     UsbhInitializeDevice @ 0x1C0018F5C (UsbhInitializeDevice.c)
 *     UsbhDeregisterPdo @ 0x1C0043994 (UsbhDeregisterPdo.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C00455C4 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0046020 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPortDisconnect @ 0x1C0051BD0 (UsbhPortDisconnect.c)
 *     UsbhReset2Timeout @ 0x1C0052B00 (UsbhReset2Timeout.c)
 *     UsbhDeletePdo @ 0x1C0055030 (UsbhDeletePdo.c)
 *     UsbhPdoPnp_StopDevice @ 0x1C0055DB0 (UsbhPdoPnp_StopDevice.c)
 * Callees:
 *     Usbh_HubDerefDeviceHandle @ 0x1C0007228 (Usbh_HubDerefDeviceHandle.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     Usbh_HubRemoveUsbDevice @ 0x1C0045DA0 (Usbh_HubRemoveUsbDevice.c)
 *     UsbhBusIf_SetClearRootPortResumeTime @ 0x1C0050E68 (UsbhBusIf_SetClearRootPortResumeTime.c)
 */

void __fastcall UsbhUnlinkPdoDeviceHandle(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v8; // rbp
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r12
  __int64 v11; // rdi
  int v12; // r10d
  int v13; // r10d
  int v14; // eax

  v8 = 0LL;
  v9 = (KSPIN_LOCK *)(FdoExt(a1) + 3720);
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  v11 = PdoExt(a2);
  Log(a1, 256, 1970032708, 0, 0LL);
  Log(a1, v12, a3, a2, 0LL);
  v14 = *(_DWORD *)(v11 + 1144);
  if ( v14 >= 0 )
  {
    if ( v14 <= 1 )
    {
      Log(a1, v13, 1970032689, 0, *(int *)(v11 + 1144));
    }
    else if ( v14 == 2 )
    {
      if ( (*(_DWORD *)(v11 + 1412) & 0x20000000) != 0 )
      {
        UsbhBusIf_SetClearRootPortResumeTime(a1, *(_QWORD *)(v11 + 1152), 0LL, 0LL);
        *(_DWORD *)(v11 + 1412) &= ~0x20000000u;
        v13 = 256;
      }
      v8 = *(_QWORD *)(v11 + 1152);
      *(_QWORD *)(v11 + 1152) = 0xFEFEFEFEFEFEFEFEuLL;
      *(_DWORD *)(v11 + 1144) = 1;
      Log(a1, v13, 1970032690, 0, v8);
      Usbh_HubDerefDeviceHandle(a1, v8, a2, 1212441712LL);
    }
  }
  KeReleaseSpinLock(v9, v10);
  if ( v8 )
  {
    if ( a4 )
      Usbh_HubRemoveUsbDevice(a1, v8);
  }
}
