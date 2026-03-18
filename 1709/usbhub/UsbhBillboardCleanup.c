/*
 * XREFs of UsbhBillboardCleanup @ 0x1C0054BA4
 * Callers:
 *     UsbhDeletePdo @ 0x1C0055030 (UsbhDeletePdo.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0055EB0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x1C003B3BC (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 */

void __fastcall UsbhBillboardCleanup(PDEVICE_OBJECT Pdo)
{
  _DWORD *v2; // rbx
  void *v3; // rcx

  v2 = PdoExt((__int64)Pdo);
  if ( (v2[353] & 0x400) != 0 )
    IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_UsbBillboardInfo, 0, 0, 0x1003u, 0, 0LL);
  ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL, 0LL, 0LL, 0, 0);
  UsbhFdoCleanupDeviceInterfaceForBillBoard(
    *((_QWORD *)v2 + 147),
    *((_WORD *)v2 + 710),
    (struct _UNICODE_STRING *)(v2 + 602),
    (_BYTE *)v2 + 2424);
  v3 = (void *)*((_QWORD *)v2 + 302);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *((_QWORD *)v2 + 302) = 0LL;
  }
  *((_QWORD *)v2 + 300) = 0LL;
}
