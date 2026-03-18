/*
 * XREFs of UsbhWmiDriverEntry @ 0x1C00228B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0028680 (memmove.c)
 *     memset @ 0x1C00289C0 (memset.c)
 */

__int64 __fastcall UsbhWmiDriverEntry(__int64 a1, const void **a2)
{
  PVOID PoolWithTag; // rax
  __int64 result; // rax

  word_1C0069422 = *(_WORD *)a2 + 2;
  UsbhRegistryPath = *(_WORD *)a2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)word_1C0069422, 0x42554855u);
  P = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, (unsigned __int16)word_1C0069422);
  if ( !P )
    return 3221225626LL;
  memmove(P, a2[1], *(unsigned __int16 *)a2);
  dword_1C00693CC = 0;
  dword_1C00693DC = 0;
  dword_1C00693EC = 0;
  dword_1C00693FC = 0;
  dword_1C006940C = 0;
  dword_1C006944C = 0;
  dword_1C006945C = 0;
  dword_1C006946C = 0;
  USB_WmiGuidList = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_1C00693D0 = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_1C00693E0 = (__int64)&GUID_POWER_DEVICE_ENABLE;
  qword_1C00693F0 = (__int64)&GUID_POWER_DEVICE_WAKE_ENABLE;
  qword_1C0069410 = (__int64)&GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION;
  USB_PortWmiGuidList = (__int64)&MSDeviceUI_FirmwareRevision_GUID;
  qword_1C0069450 = (__int64)&GUID_USB_WMI_DEVICE_PERF_INFO;
  result = 0LL;
  dword_1C00693C8 = 1;
  dword_1C00693D8 = 1;
  dword_1C00693E8 = 1;
  dword_1C00693F8 = 1;
  qword_1C0069400 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_1C0069408 = 1;
  dword_1C0069418 = 1;
  dword_1C006941C = 64;
  dword_1C0069448 = 1;
  dword_1C0069458 = 1;
  qword_1C0069460 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_1C0069468 = 1;
  UsbhWmiInit = 1;
  return result;
}
