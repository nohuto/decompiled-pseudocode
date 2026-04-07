/*
 * XREFs of ?GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z @ 0x18002F8F0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800384CC (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18007B300 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x18000BFFC (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetCurrentStyle(const struct CWindowData *a1)
{
  unsigned int v2; // ebx
  int v3; // ebp
  int v4; // esi
  __int64 v5; // rcx
  int SystemMetricsForDpi; // eax
  int v7; // r15d
  int v8; // r14d
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  char v16; // cl
  unsigned int v17; // r8d
  char v18; // cl
  char v20; // dl

  v2 = 1;
  if ( (*((_BYTE *)a1 + 592) & 8) != 0 )
  {
    v3 = *((_DWORD *)a1 + 26);
    v4 = *((_DWORD *)a1 + 25);
    if ( !*((_DWORD *)a1 + 16)
      && !*((_DWORD *)a1 + 18)
      && !*((_DWORD *)a1 + 17)
      && !*((_DWORD *)a1 + 19)
      && AreAllMarginsZero((const struct _MARGINS *)a1 + 5)
      && !v20 )
    {
      goto LABEL_31;
    }
    if ( (v4 & 0x80u) != 0 )
      v5 = 53LL;
    else
      v5 = 31LL;
    SystemMetricsForDpi = GetSystemMetricsForDpi(v5, *((unsigned int *)a1 + 83));
    v7 = *((_DWORD *)a1 + 18);
    v8 = SystemMetricsForDpi;
    if ( (v4 & 0xC00000) == 0xC00000 )
    {
      v9 = *((_DWORD *)a1 + 89);
      if ( (v9 & 1) == 0 && v7 >= SystemMetricsForDpi )
        v2 = 9;
      if ( (v4 & 0x80000) != 0 )
      {
        if ( (v9 & 0x10000) == 0 )
        {
          v2 |= 0x400u;
          if ( (*((_DWORD *)a1 + 27) & 0x200) == 0 )
            v2 |= 0x4000u;
        }
        if ( (v3 & 0x80u) != 0 )
        {
          v13 = 2;
          goto LABEL_30;
        }
        v10 = *((_DWORD *)a1 + 28);
        if ( (v10 < 8 || v10 > 11)
          && (*((char *)a1 + 596) >= 0
           || GetPropW(*((HWND *)a1 + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow")) )
        {
          v11 = *((_DWORD *)a1 + 89);
          if ( (v11 & 2) == 0 && v7 >= v8 )
            v2 |= 0x10000u;
          if ( (v11 & 4) == 0 && v7 >= v8 )
            v2 |= 0x80u;
          if ( (v11 & 0x10000) == 0 )
          {
            if ( (v4 & 0x30000) != 0 )
            {
              if ( (v4 & 0x20000) != 0 )
                v2 |= 0x1300u;
              v12 = v2 | 0x2300;
              if ( (v4 & 0x10000) == 0 )
                v12 = v2;
              v2 = v12;
            }
            else if ( (v3 & 0x400) != 0 )
            {
              v2 |= 0x8800u;
            }
          }
        }
      }
    }
    v13 = 4;
LABEL_30:
    v2 |= v13;
LABEL_31:
    v14 = v2 | 0x20;
    if ( (v4 & 0x1000000) == 0 )
      v14 = v2;
    v15 = v14 | 0x40000;
    if ( (v4 & 0x20000000) == 0 )
      v15 = v14;
    v16 = *((_BYTE *)a1 + 592);
    v17 = v15 | 0x40;
    if ( (v16 & 2) == 0 )
      v17 = v15;
    if ( (v3 & 0x400000) != 0 || v16 < 0 )
    {
      v18 = 1;
      v17 |= 0x20000u;
    }
    else
    {
      v18 = 0;
    }
    if ( ((v3 & 0x2000) != 0) != v18 )
      v17 |= 0x80000u;
    if ( (v3 & 0x1000) != 0 )
      v17 |= 0x400000u;
    return v17;
  }
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) && (*((_DWORD *)a1 + 25) & 0x1000000) != 0 )
    return 2097153;
  return v2;
}
