/*
 * XREFs of ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18003BE00
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016C9C (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18002FD58 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180039D1C (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x180039F90 (-EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18003B0C4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18003DD64 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180045628 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180045688 (_Init_thread_header.c)
 *     IsOpenThemeDataPresent @ 0x180045BAC (IsOpenThemeDataPresent.c)
 *     McTemplateU0 @ 0x18006CEDC (McTemplateU0.c)
 */

__int64 __fastcall CDesktopManager::LoadTheme(CDesktopManager *this)
{
  HTHEME v2; // rax
  HTHEME v3; // rax
  HTHEME v4; // rax
  HTHEME v5; // rax
  HTHEME v6; // rax
  HRESULT CurrentThemeName; // eax
  signed int v8; // ebx
  HMODULE Library; // rax
  const wchar_t *v10; // rax
  bool IsHighContrastMode; // al
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  HRESULT ThemeInt; // eax
  CContactManager *v15; // rcx
  signed int LastError; // eax
  int v18; // r9d
  signed int v19; // eax
  signed int v20; // eax
  signed int v21; // eax
  signed int v22; // eax
  signed int v23; // eax
  unsigned int piVal; // [rsp+20h] [rbp-238h]
  WCHAR pszThemeFileName[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLoadTheme_Start);
  if ( dword_1800C1A60 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800C1A60);
    if ( dword_1800C1A60 == -1 )
    {
      dword_1800C189C = -2147024864;
      Init_thread_footer(&dword_1800C1A60);
    }
  }
  SetLastError(0);
  v2 = OpenThemeData(0LL, L"DWMWindow");
  *((_QWORD *)this + 72) = v2;
  if ( !v2 )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    piVal = 567;
    goto LABEL_34;
  }
  SetLastError(0);
  v3 = OpenThemeData(0LL, L"DWMTouch");
  *((_QWORD *)this + 74) = v3;
  if ( !v3 )
  {
    v19 = GetLastError();
    v8 = v19;
    if ( v19 > 0 )
      v8 = (unsigned __int16)v19 | 0x80070000;
    piVal = 568;
    goto LABEL_34;
  }
  SetLastError(0);
  v4 = OpenThemeData(0LL, L"DWMPen");
  *((_QWORD *)this + 75) = v4;
  if ( !v4 )
  {
    v20 = GetLastError();
    v8 = v20;
    if ( v20 > 0 )
      v8 = (unsigned __int16)v20 | 0x80070000;
    piVal = 569;
    goto LABEL_34;
  }
  SetLastError(0);
  v5 = OpenThemeData(0LL, L"Animations");
  *((_QWORD *)this + 76) = v5;
  if ( !v5 )
  {
    v21 = GetLastError();
    v8 = v21;
    if ( v21 > 0 )
      v8 = (unsigned __int16)v21 | 0x80070000;
    piVal = 571;
    goto LABEL_34;
  }
  SetLastError(0);
  v6 = OpenThemeData(0LL, L"TimingFunction");
  *((_QWORD *)this + 77) = v6;
  if ( !v6 )
  {
    v22 = GetLastError();
    v8 = v22;
    if ( v22 > 0 )
      v8 = (unsigned __int16)v22 | 0x80070000;
    piVal = 572;
    goto LABEL_34;
  }
  CurrentThemeName = GetCurrentThemeName(pszThemeFileName, 260, 0LL, 0, 0LL, 0);
  v8 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    piVal = 575;
LABEL_40:
    v18 = CurrentThemeName;
    goto LABEL_42;
  }
  SetLastError(0);
  Library = LoadLibraryExW(pszThemeFileName, 0LL, 2u);
  *((_QWORD *)this + 73) = Library;
  if ( !Library )
  {
    v23 = GetLastError();
    v8 = v23;
    if ( v23 > 0 )
      v8 = (unsigned __int16)v23 | 0x80070000;
    piVal = 576;
LABEL_34:
    if ( v8 >= 0 )
      v8 = -2003304445;
    goto LABEL_38;
  }
  v10 = CharLowerW(pszThemeFileName);
  *((_BYTE *)this + 24) = wcsstr(v10, L"aero.msstyles") != 0LL;
  IsHighContrastMode = CDesktopManager::IsHighContrastMode();
  *((_BYTE *)this + 25) = IsHighContrastMode;
  if ( IsHighContrastMode )
  {
    *((_DWORD *)this + 133) = GetSysColor(2);
    *((_DWORD *)this + 134) = GetSysColor(3);
  }
  else
  {
    *((_DWORD *)this + 134) = 0;
    *((_DWORD *)this + 133) = 0;
  }
  CurrentThemeName = CTopLevelWindow::EnsureImages(*((struct IDwmChannel **)this + 4));
  v8 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    piVal = 596;
    goto LABEL_40;
  }
  Theme = (void *)CDesktopManager::GetTheme(0);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 58,
                                 0x12u,
                                 0LL,
                                 (__int64)&CWindowIconic::s_rgpBitmapPendingImages);
  v8 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapsFromAtlasImageStrip, 0x320u);
  if ( v8 >= 0 )
  {
    ThemeInt = GetThemeInt(*((HTHEME *)this + 72), 0, 0, 2431, (int *)this + 116);
    v8 = ThemeInt;
    if ( ThemeInt < 0 )
    {
      piVal = 600;
      v18 = ThemeInt;
      goto LABEL_42;
    }
    CurrentThemeName = GetThemeInt(*((HTHEME *)this + 72), 46, 1, 2431, (int *)this + 117);
    v8 = CurrentThemeName;
    if ( CurrentThemeName < 0 )
    {
      piVal = 601;
    }
    else
    {
      CurrentThemeName = GetThemeInt(*((HTHEME *)this + 72), 46, 3, 2431, (int *)this + 118);
      v8 = CurrentThemeName;
      if ( CurrentThemeName >= 0 )
      {
        if ( GetSystemMetrics(95) > 0 )
          CContactManager::ForceAtlasInitialize(v15, 0xFFFFFFFFFFFFFFFFuLL);
        goto LABEL_25;
      }
      piVal = 602;
    }
    goto LABEL_40;
  }
  piVal = 597;
LABEL_38:
  v18 = v8;
LABEL_42:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C189C, 1u, v18, piVal);
LABEL_25:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLoadTheme_End);
  if ( v8 < 0 )
  {
    if ( *((_BYTE *)this + 23) )
    {
      v8 = -2003302654;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C189C, 1u, -2003302654, 0x269u);
    }
  }
  return (unsigned int)v8;
}
