/*
 * XREFs of ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800763EC
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180038224 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x180075B44 (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 */

char __fastcall CLivePreview::_IsTrulyMaximized(CLivePreview *this, HWND *a2)
{
  char v2; // bl
  HMONITOR v4; // rsi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0;
  if ( (*((_BYTE *)a2 + 593) & 2) != 0 )
  {
    v4 = MonitorFromWindow(a2[5], 0);
    if ( v4 )
    {
      mi.cbSize = 40;
      memset_0(&mi.rcMonitor, 0, 0x24uLL);
      if ( GetMonitorInfoW(v4, &mi) )
      {
        v5 = 0;
        if ( *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12) >= 0 )
          v5 = *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12);
        v6 = mi.rcWork.right - mi.rcWork.left;
        if ( mi.rcWork.right - mi.rcWork.left < 0 )
          v6 = 0;
        if ( v5 >= v6 )
        {
          v7 = 0;
          if ( *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13) >= 0 )
            v7 = *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13);
          v8 = mi.rcWork.bottom - mi.rcWork.top;
          if ( mi.rcWork.bottom - mi.rcWork.top < 0 )
            v8 = 0;
          if ( v7 >= v8 )
            return 1;
        }
      }
    }
  }
  return v2;
}
