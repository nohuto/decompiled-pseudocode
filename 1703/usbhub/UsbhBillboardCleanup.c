/*
 * XREFs of UsbhBillboardCleanup @ 0x1C0054B54
 * Callers:
 *     UsbhDeletePdo @ 0x1C0054F90 (UsbhDeletePdo.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0056000 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 */

__int64 __fastcall UsbhBillboardCleanup(PDEVICE_OBJECT Pdo)
{
  _DWORD *v2; // rdi
  __int64 result; // rax

  v2 = PdoExt((__int64)Pdo);
  IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_UsbBillboardInfo, 0, 0, 0x1003u, 0, 0LL);
  result = ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL);
  *((_QWORD *)v2 + 300) = 0LL;
  return result;
}
