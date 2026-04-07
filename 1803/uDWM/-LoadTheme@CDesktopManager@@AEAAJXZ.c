/*
 * XREFs of ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18003F0E0
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180024928 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18000F5B4 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18003BF48 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x18003D960 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x1800402BC (-EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180049178 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800491E4 (_Init_thread_header.c)
 *     IsOpenThemeDataPresent @ 0x1800494F0 (IsOpenThemeDataPresent.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x18004AF34 (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 */

__int64 __fastcall CDesktopManager::LoadTheme(CDesktopManager *this, __int64 a2)
{
  HTHEME v4; // rax
  signed int LastError; // eax
  signed int v6; // ebx
  int v7; // r9d
  HTHEME v8; // rax
  signed int v9; // eax
  HTHEME v10; // rax
  signed int v11; // eax
  HTHEME v12; // rax
  signed int v13; // eax
  HTHEME v14; // rax
  signed int v15; // eax
  HRESULT CurrentThemeName; // eax
  HMODULE Library; // rax
  signed int v18; // eax
  const wchar_t *v19; // rax
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  HRESULT ThemeInt; // eax
  CContactManager *v23; // rcx
  unsigned int piVal; // [rsp+20h] [rbp-238h]
  WCHAR pszThemeFileName[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( !(unsigned __int8)IsOpenThemeDataPresent(this, a2) )
    return 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLoadTheme_Start);
  if ( dword_1800CA268 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800CA268);
    if ( dword_1800CA268 == -1 )
    {
      dword_1800CA108 = -2147024864;
      Init_thread_footer(&dword_1800CA268);
    }
  }
  SetLastError(0);
  v4 = OpenThemeData(0LL, L"DWMWindow");
  *((_QWORD *)this + 71) = v4;
  if ( !v4 )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    piVal = 589;
LABEL_10:
    if ( v6 >= 0 )
      v6 = -2003304445;
    goto LABEL_12;
  }
  SetLastError(0);
  v8 = OpenThemeData(0LL, L"DWMTouch");
  *((_QWORD *)this + 73) = v8;
  if ( !v8 )
  {
    v9 = GetLastError();
    v6 = v9;
    if ( v9 > 0 )
      v6 = (unsigned __int16)v9 | 0x80070000;
    piVal = 590;
    goto LABEL_10;
  }
  SetLastError(0);
  v10 = OpenThemeData(0LL, L"DWMPen");
  *((_QWORD *)this + 74) = v10;
  if ( !v10 )
  {
    v11 = GetLastError();
    v6 = v11;
    if ( v11 > 0 )
      v6 = (unsigned __int16)v11 | 0x80070000;
    piVal = 591;
    goto LABEL_10;
  }
  SetLastError(0);
  v12 = OpenThemeData(0LL, L"Animations");
  *((_QWORD *)this + 75) = v12;
  if ( !v12 )
  {
    v13 = GetLastError();
    v6 = v13;
    if ( v13 > 0 )
      v6 = (unsigned __int16)v13 | 0x80070000;
    piVal = 593;
    goto LABEL_10;
  }
  SetLastError(0);
  v14 = OpenThemeData(0LL, L"TimingFunction");
  *((_QWORD *)this + 76) = v14;
  if ( !v14 )
  {
    v15 = GetLastError();
    v6 = v15;
    if ( v15 > 0 )
      v6 = (unsigned __int16)v15 | 0x80070000;
    piVal = 594;
    goto LABEL_10;
  }
  CurrentThemeName = GetCurrentThemeName(pszThemeFileName, 260, 0LL, 0, 0LL, 0);
  v6 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    piVal = 597;
LABEL_33:
    v7 = CurrentThemeName;
    goto LABEL_13;
  }
  SetLastError(0);
  Library = LoadLibraryExW(pszThemeFileName, 0LL, 2u);
  *((_QWORD *)this + 72) = Library;
  if ( !Library )
  {
    v18 = GetLastError();
    v6 = v18;
    if ( v18 > 0 )
      v6 = (unsigned __int16)v18 | 0x80070000;
    piVal = 598;
    goto LABEL_10;
  }
  v19 = CharLowerW(pszThemeFileName);
  *((_BYTE *)this + 25) = wcsstr(v19, L"aero.msstyles") != 0LL;
  CDesktopManager::InitializeHighContrast(this);
  CurrentThemeName = CTopLevelWindow::EnsureImages(*((struct IDwmChannel **)this + 4));
  v6 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    piVal = 607;
    goto LABEL_33;
  }
  Theme = (void *)CDesktopManager::GetTheme(0);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 58,
                                 0x12u,
                                 0LL,
                                 (struct CBitmapSource ***)&CWindowIconic::s_rgpBitmapPendingImages);
  v6 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapsFromAtlasImageStrip, 0x321u);
  if ( v6 < 0 )
  {
    piVal = 608;
LABEL_12:
    v7 = v6;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CA108, 1u, v7, piVal);
    goto LABEL_52;
  }
  ThemeInt = GetThemeInt(*((HTHEME *)this + 71), 0, 0, 2431, (int *)this + 114);
  v6 = ThemeInt;
  if ( ThemeInt >= 0 )
  {
    CurrentThemeName = GetThemeInt(*((HTHEME *)this + 71), 46, 1, 2431, (int *)this + 115);
    v6 = CurrentThemeName;
    if ( CurrentThemeName >= 0 )
    {
      CurrentThemeName = GetThemeInt(*((HTHEME *)this + 71), 46, 3, 2431, (int *)this + 116);
      v6 = CurrentThemeName;
      if ( CurrentThemeName >= 0 )
      {
        if ( GetSystemMetrics(95) > 0 )
          CContactManager::ForceAtlasInitialize(v23, 0xFFFFFFFFFFFFFFFFuLL);
        goto LABEL_52;
      }
      piVal = 613;
    }
    else
    {
      piVal = 612;
    }
    goto LABEL_33;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CA108, 1u, ThemeInt, 0x263u);
LABEL_52:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLoadTheme_End);
  if ( v6 < 0 )
  {
    if ( *((_BYTE *)this + 24) )
    {
      v6 = -2003302654;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CA108, 1u, -2003302654, 0x274u);
    }
  }
  return (unsigned int)v6;
}
