/*
 * XREFs of ?GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z @ 0x180014170
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180083810 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180083A10 (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x18000DE54 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     ?GetSystemMetrics@CWindowData@@QEBAHH@Z @ 0x180035A24 (-GetSystemMetrics@CWindowData@@QEBAHH@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetCurrentStyle(const struct CWindowData *this)
{
  unsigned int v2; // ebx
  int v3; // esi
  int v4; // r15d
  unsigned int DpiForSystem; // eax
  int SystemMetrics; // eax
  int v7; // ebp
  int v8; // r14d
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  unsigned __int8 v15; // cl
  int v16; // r8d
  char v17; // dl
  unsigned int v18; // ecx
  char v20; // dl

  v2 = 1;
  if ( (*((_BYTE *)this + 592) & 8) != 0 )
  {
    v3 = *((_DWORD *)this + 25);
    v4 = *((_DWORD *)this + 26);
    if ( !*((_DWORD *)this + 16)
      && !*((_DWORD *)this + 18)
      && !*((_DWORD *)this + 17)
      && !*((_DWORD *)this + 19)
      && AreAllMarginsZero((const struct _MARGINS *)this + 5)
      && !v20 )
    {
      goto LABEL_32;
    }
    if ( (v3 & 0x80u) != 0 )
    {
      SystemMetrics = CWindowData::GetSystemMetrics(this, 53);
    }
    else
    {
      if ( *((_DWORD *)this + 87) )
        DpiForSystem = *((_DWORD *)this + 82);
      else
        DpiForSystem = GetDpiForSystem();
      SystemMetrics = GetSystemMetricsForDpi(31LL, DpiForSystem);
    }
    v7 = *((_DWORD *)this + 18);
    v8 = SystemMetrics;
    if ( (v3 & 0xC00000) == 0xC00000 )
    {
      v9 = *((_DWORD *)this + 89);
      if ( (v9 & 1) == 0 && v7 >= SystemMetrics )
        v2 = 9;
      if ( (v3 & 0x80000) != 0 )
      {
        if ( (v9 & 0x10000) == 0 )
        {
          v2 |= 0x400u;
          if ( (*((_DWORD *)this + 27) & 0x200) == 0 )
            v2 |= 0x4000u;
        }
        if ( (v4 & 0x80u) != 0 )
        {
          v12 = 2;
          goto LABEL_31;
        }
        v10 = *((_DWORD *)this + 28);
        if ( (v10 < 8 || v10 > 11)
          && (*((_BYTE *)this + 596) < 0x80u
           || GetPropW(*((HWND *)this + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow")) )
        {
          v11 = *((_DWORD *)this + 89);
          if ( (v11 & 2) == 0 && v7 >= v8 )
            v2 |= 0x10000u;
          if ( (v11 & 4) == 0 && v7 >= v8 )
            v2 |= 0x80u;
          if ( (v11 & 0x10000) == 0 )
          {
            if ( (v3 & 0x30000) != 0 )
            {
              if ( (v3 & 0x20000) != 0 )
                v2 |= 0x1300u;
              if ( (v3 & 0x10000) != 0 )
                v2 |= 0x2300u;
            }
            else if ( (v4 & 0x400) != 0 )
            {
              v2 |= 0x8800u;
            }
          }
        }
      }
    }
    v12 = 4;
LABEL_31:
    v2 |= v12;
LABEL_32:
    v13 = v2 | 0x20;
    if ( (v3 & 0x1000000) == 0 )
      v13 = v2;
    v14 = v13 | 0x40000;
    if ( (v3 & 0x20000000) == 0 )
      v14 = v13;
    v15 = *((_BYTE *)this + 592);
    v16 = v14 | 0x40;
    if ( (v15 & 2) == 0 )
      v16 = v14;
    if ( (v4 & 0x400000) != 0 || v15 >= 0x80u )
    {
      v17 = 1;
      v16 |= 0x20000u;
    }
    else
    {
      v17 = 0;
    }
    v18 = v16 | 0x80000;
    if ( ((v4 & 0x2000) != 0) == v17 )
      v18 = v16;
    if ( (v4 & 0x1000) != 0 )
      v18 |= 0x400000u;
    return v18;
  }
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) && (*((_DWORD *)this + 25) & 0x1000000) != 0 )
    return 2097153;
  return v2;
}
