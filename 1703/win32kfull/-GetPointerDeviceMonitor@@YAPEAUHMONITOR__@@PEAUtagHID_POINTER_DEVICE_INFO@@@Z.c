/*
 * XREFs of ?GetPointerDeviceMonitor@@YAPEAUHMONITOR__@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C00235B0
 * Callers:
 *     _GetPointerDeviceInfoProperties @ 0x1C0023504 (_GetPointerDeviceInfoProperties.c)
 * Callees:
 *     <none>
 */

HMONITOR __fastcall GetPointerDeviceMonitor(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 v4; // rax

  v1 = 0LL;
  if ( (unsigned int)(*((_DWORD *)a1 + 6) - 6) <= 1 )
  {
    v4 = *(_QWORD *)(GetDispInfo() + 88);
    *((_DWORD *)a1 + 175) = 1;
  }
  else
  {
    v3 = *((_DWORD *)a1 + 65);
    if ( (v3 & 0x8000) == 0 && (v3 & 0x20) != 0 )
      return (HMONITOR)v1;
    v4 = *((_QWORD *)a1 + 36);
  }
  if ( v4 )
    return *(HMONITOR *)v4;
  return (HMONITOR)v1;
}
