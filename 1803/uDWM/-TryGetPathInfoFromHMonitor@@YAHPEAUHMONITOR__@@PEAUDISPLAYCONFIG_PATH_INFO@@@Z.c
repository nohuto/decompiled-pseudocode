/*
 * XREFs of ?TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x1800393A8
 * Callers:
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x18003930C (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x18000AAF0 (-GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 */

__int64 __fastcall TryGetPathInfoFromHMonitor(HMONITOR hMonitor, struct DISPLAYCONFIG_PATH_INFO *a2)
{
  BOOL MonitorInfoW; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int16 v9[36]; // [rsp+48h] [rbp-60h] BYREF

  memset_0(&mi, 0, 0x68uLL);
  mi.cbSize = 104;
  MonitorInfoW = GetMonitorInfoW(hMonitor, &mi);
  v6 = 0;
  if ( MonitorInfoW )
    return (int)GetPathInfo(v9, v5, a2) >= 0;
  return v6;
}
