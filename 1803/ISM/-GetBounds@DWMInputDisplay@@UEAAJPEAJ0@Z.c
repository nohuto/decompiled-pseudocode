/*
 * XREFs of ?GetBounds@DWMInputDisplay@@UEAAJPEAJ0@Z @ 0x1800178C0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

__int64 __fastcall DWMInputDisplay::GetBounds(DWMInputDisplay *this, int *a2, int *a3)
{
  HMONITOR v3; // rbx
  int *v4; // rsi
  int v8; // edx
  BOOL v9; // eax
  HDC DC; // rbx
  LPARAM dwData; // [rsp+20h] [rbp-68h] BYREF
  tagMONITORINFO mi; // [rsp+28h] [rbp-60h] BYREF

  v3 = (HMONITOR)*((_QWORD *)this + 3);
  v4 = (int *)((char *)this + 32);
  if ( v3 )
  {
    v8 = *v4;
    if ( *v4 && *((_DWORD *)this + 9) )
      goto LABEL_13;
  }
  else
  {
    dwData = 0LL;
    v9 = EnumDisplayMonitors(
           0LL,
           0LL,
           (MONITORENUMPROC)lambda_1862f4448b0c18fc2289e23f0d227847_::_lambda_invoker_cdecl_,
           (LPARAM)&dwData);
    v3 = (HMONITOR)(dwData & -(__int64)v9);
  }
  memset_0(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( v3 && GetMonitorInfoW(v3, &mi) )
  {
    v8 = mi.rcMonitor.right - mi.rcMonitor.left;
    *((_DWORD *)this + 9) = mi.rcMonitor.bottom - mi.rcMonitor.top;
    *v4 = v8;
  }
  else
  {
    DC = GetDC(0LL);
    *((_DWORD *)this + 8) = GetDeviceCaps(DC, 8);
    *((_DWORD *)this + 9) = GetDeviceCaps(DC, 10);
    ReleaseDC(0LL, DC);
    v8 = *((_DWORD *)this + 8);
  }
  if ( !v8 || !*((_DWORD *)this + 9) )
  {
    v8 = 1024;
    *((_DWORD *)this + 9) = 768;
    *v4 = 1024;
  }
LABEL_13:
  *a2 = v8;
  *a3 = *((_DWORD *)this + 9);
  return 0LL;
}
