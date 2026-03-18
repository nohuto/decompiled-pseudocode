/*
 * XREFs of UsbhWmiDriverEntry @ 0x1C00252E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0029500 (memmove.c)
 *     memset @ 0x1C0029840 (memset.c)
 */

__int64 __fastcall UsbhWmiDriverEntry(__int64 a1, const void **a2)
{
  PVOID PoolWithTag; // rax
  __int64 result; // rax

  word_1C006A422 = *(_WORD *)a2 + 2;
  UsbhRegistryPath = *(_WORD *)a2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)word_1C006A422, 0x42554855u);
  P = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, (unsigned __int16)word_1C006A422);
  if ( !P )
    return 3221225626LL;
  memmove(P, a2[1], *(unsigned __int16 *)a2);
  dword_1C006A3CC = 0;
  dword_1C006A3DC = 0;
  dword_1C006A3EC = 0;
  dword_1C006A3FC = 0;
  dword_1C006A40C = 0;
  dword_1C006A44C = 0;
  dword_1C006A45C = 0;
  dword_1C006A46C = 0;
  USB_WmiGuidList = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_1C006A3D0 = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_1C006A3E0 = (__int64)&GUID_POWER_DEVICE_ENABLE;
  qword_1C006A3F0 = (__int64)&GUID_POWER_DEVICE_WAKE_ENABLE;
  qword_1C006A410 = (__int64)&GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION;
  USB_PortWmiGuidList = (__int64)&MSDeviceUI_FirmwareRevision_GUID;
  qword_1C006A450 = (__int64)&GUID_USB_WMI_DEVICE_PERF_INFO;
  result = 0LL;
  dword_1C006A3C8 = 1;
  dword_1C006A3D8 = 1;
  dword_1C006A3E8 = 1;
  dword_1C006A3F8 = 1;
  qword_1C006A400 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_1C006A408 = 1;
  dword_1C006A418 = 1;
  dword_1C006A41C = 64;
  dword_1C006A448 = 1;
  dword_1C006A458 = 1;
  qword_1C006A460 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_1C006A468 = 1;
  UsbhWmiInit = 1;
  return result;
}
