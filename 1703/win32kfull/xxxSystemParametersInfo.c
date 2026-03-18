/*
 * XREFs of xxxSystemParametersInfo @ 0x1C00BEA10
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BDAE0 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?IsSPIActionAllowedForFilteredProcess@@YAHI@Z @ 0x1C00043CC (-IsSPIActionAllowedForFilteredProcess@@YAHI@Z.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C0009E34 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 *     CreateBitmapStrip @ 0x1C000AD10 (CreateBitmapStrip.c)
 *     bSetDevDragWidth @ 0x1C000B440 (bSetDevDragWidth.c)
 *     GetDPIServerInfo @ 0x1C000E928 (GetDPIServerInfo.c)
 *     SetKeyboardRate @ 0x1C000FA78 (SetKeyboardRate.c)
 *     RtlStringCchPrintfW @ 0x1C00127D4 (RtlStringCchPrintfW.c)
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSendNotifyMessage @ 0x1C003C9B0 (xxxSendNotifyMessage.c)
 *     xxxBroadcastMessageEx @ 0x1C003D4E4 (xxxBroadcastMessageEx.c)
 *     GetWindowNCMetrics @ 0x1C00452A4 (GetWindowNCMetrics.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     RtlInitLargeUnicodeString @ 0x1C004DB0C (RtlInitLargeUnicodeString.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00B7310 (IsWindowUnderActiveLockScreen.c)
 *     SetPointer @ 0x1C00B9720 (SetPointer.c)
 *     ClearKeyboardStates @ 0x1C00B9C64 (ClearKeyboardStates.c)
 *     SetMouseTrails @ 0x1C00B9CC4 (SetMouseTrails.c)
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     SetDesktopMetrics @ 0x1C00BAFC0 (SetDesktopMetrics.c)
 *     ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C00BB144 (-PostWindowArrangementCheck@@YAXK@Z.c)
 *     GreSetFontEnumeration @ 0x1C00BB1E4 (GreSetFontEnumeration.c)
 *     ?UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0x1C00BB230 (-UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 *     GetDPIMetrics @ 0x1C00BBA28 (GetDPIMetrics.c)
 *     CheckWinstaAttributeAccess @ 0x1C00BD550 (CheckWinstaAttributeAccess.c)
 *     ReadPointerDeviceSettings @ 0x1C00C0570 (ReadPointerDeviceSettings.c)
 *     xxxUpdateSystemCursorsFromRegistry @ 0x1C00C128C (xxxUpdateSystemCursorsFromRegistry.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00C5C08 (xxxUpdateSystemIconsFromRegistry.c)
 *     _SetDoubleClickTime @ 0x1C00C6930 (_SetDoubleClickTime.c)
 *     SetDesktopPattern @ 0x1C00EC3FC (SetDesktopPattern.c)
 *     xxxDesktopRecalc @ 0x1C00F1A48 (xxxDesktopRecalc.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0108804 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     GetEasTimeout @ 0x1C011210C (GetEasTimeout.c)
 *     xxxSetDeskWallpaper @ 0x1C0114D24 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C0115020 (LoadWallpaperFilenameFromRegistry.c)
 *     GetKbdLangSwitch @ 0x1C011A56C (GetKbdLangSwitch.c)
 *     xxxSetIMEShowStatus @ 0x1C011AE38 (xxxSetIMEShowStatus.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C011B8E8 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C011BE2C (xxxInvalidateWallpaperWindow.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C0196B04 (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C01977C8 (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C0197880 (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C0197938 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z @ 0x1C01B4A0C (-SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01B4B50 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01B4D54 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01B4E40 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01B4F2C (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01B5434 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     UpdateWinIniInt @ 0x1C01B58F4 (UpdateWinIniInt.c)
 *     xxxMetricsRecalc @ 0x1C01B5CD4 (xxxMetricsRecalc.c)
 *     _SwapMouseButton @ 0x1C01C4650 (_SwapMouseButton.c)
 *     WritePointerDeviceSettings @ 0x1C01E7538 (WritePointerDeviceSettings.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C021A714 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C021BADC (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C024BA64 (DwmAsyncNotifyWindowShadowChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSystemParametersInfo(__int64 a1, __int64 a2, wchar_t *a3, __int16 a4)
{
  __int64 CurrentProcessWin32Process; // rsi
  int updated; // r13d
  BOOL v7; // r15d
  unsigned int PointerDeviceSettings; // edi
  int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // esi
  bool v15; // zf
  NTSTRSAFE_PWSTR v16; // rdx
  _OWORD *v17; // rcx
  NTSTRSAFE_PWSTR v18; // rax
  __int64 result; // rax
  int v20; // r10d
  int v21; // r9d
  int v22; // edx
  int *v23; // rax
  int v24; // ecx
  unsigned int v25; // r8d
  int v26; // ecx
  _OWORD *v27; // rcx
  __int64 DPIMetrics; // rax
  NTSTRSAFE_PWSTR v29; // rbx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rax
  NTSTRSAFE_PWSTR v36; // rbx
  int *v37; // r8
  __int64 v38; // rcx
  NTSTRSAFE_PWSTR v39; // rdx
  NTSTRSAFE_PWSTR v40; // rcx
  unsigned int v41; // esi
  int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // ecx
  int v45; // esi
  int v46; // r12d
  BOOL v47; // eax
  struct _UNICODE_STRING *v48; // rsi
  BOOL v49; // r12d
  int v50; // r8d
  NTSTRSAFE_PWSTR v51; // r8
  NTSTRSAFE_PWSTR v52; // r8
  int v53; // ecx
  int v54; // edx
  NTSTRSAFE_PWSTR v55; // r9
  unsigned int v56; // eax
  NTSTRSAFE_PWSTR v57; // rcx
  NTSTRSAFE_PWSTR v58; // rbx
  int *v59; // r8
  __int64 v60; // rcx
  _QWORD *v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rbx
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 v72; // rcx
  unsigned int *v73; // rbx
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rbx
  const GUID *v77; // r8
  const GUID *v78; // r9
  unsigned int i; // ebx
  __int64 ProfileUserName; // rbx
  int v81; // r12d
  int v82; // edi
  int v83; // eax
  int v84; // r15d
  unsigned __int8 v85; // al
  NTSTRSAFE_PWSTR v86; // rcx
  unsigned int v87; // ebx
  struct _UNICODE_STRING *v88; // rax
  _DWORD *SessionSystemDpiServerInfo; // rax
  unsigned int v90; // ebx
  __int64 v91; // rcx
  int v92; // edx
  unsigned int v93; // esi
  unsigned int v94; // ebx
  int v95; // edx
  unsigned int v96; // esi
  unsigned int v97; // ebx
  int v98; // eax
  __int64 v99; // rax
  struct tagWND *v100; // rcx
  struct _UNICODE_STRING *v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 DispInfo; // rax
  _OWORD *v105; // rcx
  NTSTRSAFE_PWSTR v106; // rsi
  int v107; // edx
  unsigned int v108; // edx
  struct _UNICODE_STRING *v109; // r15
  NTSTRSAFE_PWSTR v110; // rbx
  int v111; // esi
  int v112; // edx
  unsigned int v113; // edx
  NTSTRSAFE_PWSTR v114; // rbx
  int v115; // edx
  unsigned int v116; // edx
  NTSTRSAFE_PWSTR v117; // rbx
  int v118; // edx
  struct _UNICODE_STRING *v119; // rsi
  unsigned int v120; // r9d
  __int64 v121; // r15
  int v122; // r13d
  const wchar_t *v123; // r9
  const wchar_t *v124; // r9
  struct tagSOUNDSENTRYW *v125; // rbx
  int v126; // edx
  unsigned int v127; // edx
  struct _UNICODE_STRING *v128; // rsi
  __int64 v129; // rbx
  __int64 v130; // rbx
  unsigned int v131; // esi
  __int64 v132; // rax
  __int64 v133; // r12
  const wchar_t *v134; // rbx
  const wchar_t *v135; // r9
  int v136; // r13d
  NTSTRSAFE_PWSTR v137; // rcx
  int v138; // eax
  int v139; // ecx
  InteractiveControlManager *v140; // rax
  InteractiveControlManager *v141; // rax
  __int64 v142; // rax
  unsigned int v143; // r8d
  __int64 v144; // rcx
  int v145; // eax
  unsigned int ProfileValue; // eax
  _DWORD *v147; // rdx
  int v148; // eax
  unsigned int v149; // ecx
  unsigned __int64 v150; // rdx
  _DWORD *v151; // r8
  __int64 v152; // rcx
  int v153; // eax
  __int64 v154; // rax
  __int64 v155; // rdx
  int v156; // eax
  void *v157; // rax
  __int64 v158; // rax
  __int64 v159; // rbx
  __int64 v160; // rax
  unsigned int v161; // r15d
  int v162; // ebx
  _BYTE *v163; // rax
  int *v164; // rax
  __int64 cData; // [rsp+20h] [rbp-498h]
  unsigned int a; // [rsp+40h] [rbp-478h]
  NTSTRSAFE_PWSTR pszDest; // [rsp+48h] [rbp-470h] BYREF
  int v168; // [rsp+50h] [rbp-468h] BYREF
  int v169; // [rsp+54h] [rbp-464h] BYREF
  unsigned int v170; // [rsp+58h] [rbp-460h] BYREF
  __int64 v171; // [rsp+60h] [rbp-458h] BYREF
  BOOL v172; // [rsp+68h] [rbp-450h] BYREF
  __int64 v173; // [rsp+70h] [rbp-448h] BYREF
  int v174; // [rsp+78h] [rbp-440h] BYREF
  _BYTE v175[24]; // [rsp+80h] [rbp-438h] BYREF
  __int64 v176; // [rsp+98h] [rbp-420h] BYREF
  int v177; // [rsp+A0h] [rbp-418h]
  BOOL v178; // [rsp+A4h] [rbp-414h]
  __int128 v179; // [rsp+B0h] [rbp-408h]
  _DWORD v180[2]; // [rsp+C0h] [rbp-3F8h] BYREF
  char *v181; // [rsp+C8h] [rbp-3F0h]
  char v182; // [rsp+E0h] [rbp-3D8h] BYREF
  __int128 v183; // [rsp+F0h] [rbp-3C8h] BYREF
  _BYTE v184[16]; // [rsp+100h] [rbp-3B8h] BYREF
  _QWORD v185[3]; // [rsp+110h] [rbp-3A8h] BYREF
  __int64 v186; // [rsp+128h] [rbp-390h] BYREF
  __int64 v187; // [rsp+130h] [rbp-388h]
  __int128 v188; // [rsp+138h] [rbp-380h] BYREF
  _BYTE v189[20]; // [rsp+148h] [rbp-370h] BYREF
  __int64 v190; // [rsp+15Ch] [rbp-35Ch]
  int v191; // [rsp+164h] [rbp-354h]
  _BYTE v192[20]; // [rsp+168h] [rbp-350h] BYREF
  unsigned int v193; // [rsp+17Ch] [rbp-33Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp-338h] BYREF
  unsigned int *v195; // [rsp+1A0h] [rbp-318h]
  __int64 v196; // [rsp+1A8h] [rbp-310h]
  wchar_t v197[40]; // [rsp+1C0h] [rbp-2F8h] BYREF
  _WORD v198[40]; // [rsp+210h] [rbp-2A8h] BYREF
  _BYTE v199[528]; // [rsp+260h] [rbp-258h] BYREF

  a = a2;
  v170 = a1;
  pszDest = a3;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v176 = CurrentProcessWin32Process;
  updated = 0;
  v168 = 0;
  v174 = a4 & 1;
  v7 = (a4 & 1) != 0;
  v172 = v7;
  v178 = (a4 & 2) != 0;
  if ( (a4 & 1) != 0 )
  {
    PointerDeviceSettings = 0;
    v169 = 0;
  }
  else
  {
    PointerDeviceSettings = 1;
    v169 = 1;
  }
  v9 = a4 & 0x8000;
  v177 = 0;
  v198[0] = 0;
  if ( v170 >= 0x4F || v170 < 0x40 )
  {
    switch ( v170 )
    {
      case 7u:
      case 8u:
      case 0xCu:
      case 0x27u:
      case 0x28u:
      case 0x31u:
      case 0x3Eu:
      case 0x3Fu:
      case 0x5Cu:
      case 0x61u:
        goto LABEL_101;
      case 0x4Fu:
      case 0x50u:
      case 0x53u:
      case 0x54u:
        *(_DWORD *)pszDest = 0;
        return 1LL;
      case 0x51u:
      case 0x52u:
      case 0x55u:
      case 0x56u:
        return 1LL;
      default:
        break;
    }
  }
  if ( (unsigned __int8)PsIsWin32KFilterEnabled() && !IsSPIActionAllowedForFilteredProcess(v170) )
  {
    EtwTraceSPIBlockedByFiltering(v25);
    if ( dword_1C0324FA0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324FA0, 0x400000000000uLL) )
    {
      v195 = &v170;
      v196 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324FA0, &unk_1C02EBD06, v77, v78, 3u, &pData);
      return 0LL;
    }
    return 0LL;
  }
  v12 = gpepCSRSS;
  if ( *(_QWORD *)CurrentProcessWin32Process == gpepCSRSS )
  {
    v13 = 2LL;
LABEL_11:
    PointerDeviceSettings = 1;
    v169 = 1;
LABEL_12:
    if ( v170 == 66 )
    {
      v16 = pszDest;
      *((_DWORD *)pszDest + 1) = gHighContrast[1];
      v17 = (_OWORD *)*((_QWORD *)v16 + 1);
      v18 = gHighContrastDefaultScheme;
      do
      {
        *v17 = *(_OWORD *)v18;
        v17[1] = *((_OWORD *)v18 + 1);
        v17[2] = *((_OWORD *)v18 + 2);
        v17[3] = *((_OWORD *)v18 + 3);
        v17[4] = *((_OWORD *)v18 + 4);
        v17[5] = *((_OWORD *)v18 + 5);
        v17[6] = *((_OWORD *)v18 + 6);
        v17 += 8;
        *(v17 - 1) = *((_OWORD *)v18 + 7);
        v18 += 64;
        --v13;
      }
      while ( v13 );
      goto LABEL_15;
    }
    if ( v170 <= 0x1026 )
    {
      if ( v170 == 4134 )
      {
        *(_DWORD *)pszDest = gbBlockSendInputResets != 0;
        goto LABEL_15;
      }
      switch ( v170 )
      {
        case 1u:
          *(_DWORD *)pszDest = (gdwPUDFlags >> 19) & 1;
          goto LABEL_15;
        case 2u:
          if ( v7 )
          {
            RtlLoadStringOrError(105 - (unsigned int)(a != 0), v197, 10LL);
            updated = FastUpdateWinIni(0LL, 11LL, 9LL, v197);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
          {
            if ( a )
              gdwPUDFlags |= 0x80000u;
            else
              gdwPUDFlags &= ~0x80000u;
          }
          goto LABEL_15;
        case 3u:
          *(_DWORD *)pszDest = gMouseThresh1;
          *((_DWORD *)pszDest + 1) = gMouseThresh2;
          *((_DWORD *)pszDest + 2) = (unsigned __int8)MouseAccelerationEnabled();
          goto LABEL_15;
        case 4u:
          if ( !v7 )
            goto LABEL_394;
          ProfileUserName = CreateProfileUserName(v175);
          v81 = UpdateWinIniInt(ProfileUserName, 12LL, 10LL, *(unsigned int *)pszDest);
          v82 = UpdateWinIniInt(ProfileUserName, 12LL, 11LL, *((unsigned int *)pszDest + 1));
          v83 = UpdateWinIniInt(ProfileUserName, 12LL, 12LL, *((unsigned int *)pszDest + 2));
          v84 = v83;
          if ( !v81 )
            goto LABEL_389;
          if ( v82 && v83 )
          {
            updated = 1;
          }
          else
          {
            UpdateWinIniInt(ProfileUserName, 12LL, 10LL, (unsigned int)gMouseThresh1);
LABEL_389:
            if ( v82 )
              UpdateWinIniInt(ProfileUserName, 12LL, 11LL, (unsigned int)gMouseThresh2);
            if ( v84 )
            {
              v85 = MouseAccelerationEnabled();
              UpdateWinIniInt(ProfileUserName, 12LL, 12LL, v85);
            }
          }
          PointerDeviceSettings = updated;
          FreeProfileUserName(ProfileUserName, v175);
LABEL_394:
          if ( PointerDeviceSettings )
          {
            v86 = pszDest;
            gMouseThresh1 = *(_DWORD *)pszDest;
            gMouseThresh2 = *((_DWORD *)pszDest + 1);
            LOBYTE(v86) = *((_DWORD *)pszDest + 2) != 0;
            EnableMouseAcceleration(v86);
          }
          goto LABEL_15;
        case 5u:
          *(_DWORD *)pszDest = *(_DWORD *)GetDPIServerInfo(v12);
          goto LABEL_15;
        case 6u:
          v87 = 1;
          if ( (int)a > 1 )
            v87 = a;
          if ( v87 >= 0x32 )
            v87 = 50;
          if ( v87 == *(_DWORD *)GetDPIServerInfo(v12) )
            goto LABEL_406;
          v88 = (struct _UNICODE_STRING *)CreateProfileUserName(v175);
          v48 = v88;
          if ( v7 )
          {
            updated = SetWindowMetricInt(v88, 0x88u, v87);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
          {
            xxxSetAndDrawNCMetrics(v48, v87, 0LL);
            SessionSystemDpiServerInfo = (_DWORD *)GetSessionSystemDpiServerInfo();
            bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 32LL), *SessionSystemDpiServerInfo + 3);
          }
          goto LABEL_891;
        case 0xAu:
          *(_DWORD *)pszDest = gnKeyboardSpeed & 0x1F;
          goto LABEL_15;
        case 0xBu:
          v44 = a;
          if ( a > 0x1F )
          {
            v44 = 31;
            a = 31;
          }
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 13LL, 13LL, v44);
            PointerDeviceSettings = updated;
            v44 = a;
          }
          if ( PointerDeviceSettings )
          {
            gnKeyboardSpeed = v44 | gnKeyboardSpeed & 0xFFFFFFE0;
            SetKeyboardRate();
          }
          goto LABEL_15;
        case 0xDu:
          if ( ((unsigned __int64)pszDest & 0xFFFFFFFFFFFF0000uLL) != 0 )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
              v92 = *(_DWORD *)(gpsi + 2032LL);
            else
              v92 = *(_DWORD *)(gpsi + 2420LL);
            *(_DWORD *)pszDest = v92;
          }
          else
          {
            v93 = a;
            if ( a )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
              {
                v94 = EngMulDiv(a, 96, *(unsigned __int16 *)(gpsi + 8678LL));
              }
              else
              {
                v94 = a;
                v93 = EngMulDiv(a, *(unsigned __int16 *)(gpsi + 8678LL), 96);
              }
              if ( v93 <= *(_DWORD *)(gpsi + 1924LL) )
                v93 = *(_DWORD *)(gpsi + 1924LL);
              if ( v94 <= *(_DWORD *)(gpsi + 2312LL) )
                v94 = *(_DWORD *)(gpsi + 2312LL);
              if ( v7 )
              {
                updated = SetWindowMetricInt(0LL, 0x40u, v93);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                SetDpiDepSysMet(38LL, v93);
                *(_DWORD *)(gpsi + 2420LL) = v94;
              }
            }
          }
          goto LABEL_15;
        case 0xEu:
          *(_DWORD *)pszDest = (int)abs32(giScreenSaveTimeOutMs) / 1000;
          goto LABEL_15;
        case 0xFu:
          if ( gfSwitchInProgress )
            return 0LL;
          if ( gdwRITdemonLockState && !v9 )
            goto LABEL_457;
          v45 = 1000 * a;
          v46 = 1000 * GetEasTimeout();
          if ( v46 )
          {
            if ( (v177 = 1, giScreenSaveTimeOutMs > 0) && v46 < v45 || v45 <= 0 )
            {
              UserSetLastError(1260LL);
              v172 = 0;
              PointerDeviceSettings = 0;
              v169 = 0;
            }
          }
          if ( !(unsigned int)CheckDesktopPolicy(0LL, 99LL) )
            goto LABEL_144;
          if ( v177 )
          {
            v174 = 0;
            if ( (unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL, 0LL, &v174, 2)
              && (v98 = 1000 * v174, (v174 = v98) != 0)
              && v98 < v46
              && giScreenSaveTimeOutMs > 0
              && v98 < v45 )
            {
              UserSetLastError(1260LL);
              v47 = 0;
              PointerDeviceSettings = 0;
              v169 = 0;
            }
            else
            {
LABEL_144:
              v47 = v172;
            }
          }
          else
          {
            v47 = 0;
            PointerDeviceSettings = 0;
            v169 = 0;
          }
          if ( v47 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 99LL, v45 / 0x3E8u);
            v168 = updated;
            PointerDeviceSettings = updated;
            v169 = updated;
          }
          if ( PointerDeviceSettings )
          {
            if ( !gbBlockSendInputResets )
            {
              CInputGlobals::UpdateLastInputTime(
                gpInputGlobals,
                (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                6LL);
              updated = v168;
              PointerDeviceSettings = v169;
            }
            if ( giScreenSaveTimeOutMs < 0 && !v177 )
              v45 = -1000 * a;
            giScreenSaveTimeOutMs = v45;
          }
          goto LABEL_15;
        case 0x10u:
          *(_DWORD *)pszDest = giScreenSaveTimeOutMs > 0;
          goto LABEL_15;
        case 0x11u:
          if ( a - 2 <= 0xFFFFFFFC )
            return 0LL;
          if ( gdwRITdemonLockState && !v9 )
            goto LABEL_457;
          gbLockConsoleActive = a == -1;
          if ( gfSwitchInProgress )
            return 0LL;
          if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
            v169 = 0;
          }
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 100LL, a);
            v168 = updated;
            PointerDeviceSettings = updated;
            v169 = updated;
          }
          if ( !PointerDeviceSettings )
            goto LABEL_15;
          if ( !gbBlockSendInputResets )
          {
            CInputGlobals::UpdateLastInputTime(
              gpInputGlobals,
              (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
              6LL);
            updated = v168;
            PointerDeviceSettings = v169;
          }
          if ( giScreenSaveTimeOutMs >= 0 )
            goto LABEL_169;
          if ( a )
            goto LABEL_170;
          if ( giScreenSaveTimeOutMs >= 0 )
          {
LABEL_169:
            if ( !a )
LABEL_170:
              giScreenSaveTimeOutMs = -giScreenSaveTimeOutMs;
          }
          goto LABEL_15;
        case 0x14u:
          v71 = CreateProfileUserName(v175);
          if ( (unsigned int)CheckDesktopPolicy(v71, 67LL) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
          if ( !v7 )
            goto LABEL_320;
          if ( a == -1 )
          {
            PointerDeviceSettings = 1;
          }
          else
          {
            FastGetProfileStringFromIDW(v71, 4LL, 67LL, &word_1C02E2588, v199, 260, 8);
            updated = FastUpdateWinIni(v71, 4LL, 67LL, pszDest);
            PointerDeviceSettings = updated;
LABEL_320:
            if ( !PointerDeviceSettings )
              goto LABEL_323;
          }
          if ( (unsigned int)xxxSetDeskWallpaper(v71, pszDest) )
          {
            xxxInvalidateWallpaperWindow();
            goto LABEL_323;
          }
          if ( v7 )
          {
            if ( a == -1 )
              goto LABEL_323;
            FastUpdateWinIni(v71, 4LL, 67LL, v199);
          }
          PointerDeviceSettings = 0;
          updated = 0;
LABEL_323:
          v72 = v71;
          goto LABEL_324;
        case 0x15u:
          if ( a == -1 && pszDest )
            goto LABEL_101;
          v48 = (struct _UNICODE_STRING *)CreateProfileUserName(v175);
          if ( (unsigned int)CheckDesktopPolicy(v48, 2LL) )
          {
            v49 = 0;
            PointerDeviceSettings = 0;
          }
          else
          {
            v49 = v172;
          }
          if ( v49 && pszDest )
          {
            FastGetProfileStringFromIDW(v48, 4LL, 2LL, &word_1C02E2588, v199, 260, 0);
            updated = FastUpdateWinIni(v48, 4LL, 2LL, pszDest);
            PointerDeviceSettings = updated;
          }
          if ( !PointerDeviceSettings )
            goto LABEL_891;
          if ( !(unsigned int)SetDesktopPattern(v48, pszDest) )
          {
            if ( v49 && pszDest )
              FastUpdateWinIni(v48, 4LL, 2LL, v199);
            FreeProfileUserName(v48, v175);
            return 0LL;
          }
          xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x15u, 0LL, 0LL, 1);
          v99 = *(_QWORD *)(gptiCurrent + 408LL);
          if ( v99 )
            v100 = *(struct tagWND **)(*(_QWORD *)(v99 + 8) + 16LL);
          else
LABEL_863:
            v100 = 0LL;
          goto LABEL_864;
        case 0x16u:
          *(_DWORD *)pszDest = (gnKeyboardSpeed >> 5) & 3;
          goto LABEL_15;
        case 0x17u:
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 13LL, 106LL, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
          {
            gnKeyboardSpeed = gnKeyboardSpeed & 0xFFFFFF9F | (32 * a);
            SetKeyboardRate();
          }
          goto LABEL_15;
        case 0x18u:
          if ( ((unsigned __int64)pszDest & 0xFFFFFFFFFFFF0000uLL) != 0 )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
              v95 = *(_DWORD *)(gpsi + 2036LL);
            else
              v95 = *(_DWORD *)(gpsi + 2424LL);
            *(_DWORD *)pszDest = v95;
          }
          else
          {
            v96 = a;
            if ( a )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
              {
                v97 = EngMulDiv(a, 96, *(unsigned __int16 *)(gpsi + 8678LL));
              }
              else
              {
                v97 = a;
                v96 = EngMulDiv(a, *(unsigned __int16 *)(gpsi + 8678LL), 96);
              }
              if ( v96 <= *(_DWORD *)(gpsi + 1928LL) )
                v96 = *(_DWORD *)(gpsi + 1928LL);
              if ( v97 <= *(_DWORD *)(gpsi + 2316LL) )
                v97 = *(_DWORD *)(gpsi + 2316LL);
              if ( v7 )
              {
                updated = SetWindowMetricInt(0LL, 0x41u, v96);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                SetDpiDepSysMet(39LL, v96);
                *(_DWORD *)(gpsi + 2424LL) = v97;
              }
            }
          }
          goto LABEL_15;
        case 0x19u:
          *(_DWORD *)pszDest = (gdwPUDFlags >> 21) & 1;
          goto LABEL_15;
        case 0x1Au:
          if ( v7 )
          {
            updated = SetWindowMetricInt(0LL, 0x42u, a != 0);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
          {
            if ( a )
              gdwPUDFlags |= 0x200000u;
            else
              gdwPUDFlags &= ~0x200000u;
            xxxMetricsRecalc(2, 0, 0, 0, 0, 0, 0);
          }
          goto LABEL_15;
        case 0x1Bu:
          *(_DWORD *)pszDest = *(_DWORD *)(gpsi + 2040LL);
          goto LABEL_15;
        case 0x1Cu:
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 3LL, 96LL, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
          {
            v50 = *(_DWORD *)(gpsi + 2040LL);
            *(_DWORD *)(gpsi + 2040LL) = a != 0;
            TraceLoggingSPISetMenuDropAlignmentEvent(v50, a != 0);
          }
          goto LABEL_15;
        case 0x1Du:
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 97LL, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            *(_DWORD *)(gpsi + 2024LL) = a;
          goto LABEL_15;
        case 0x1Eu:
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 98LL, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            *(_DWORD *)(gpsi + 2028LL) = a;
          goto LABEL_15;
        case 0x1Fu:
          DPIMetrics = GetDPIMetrics(v12, v10, v170 - 1, v11, cData);
          GreExtGetObjectW(*(HBRUSH *)(DPIMetrics + 64), 92LL, pszDest);
          goto LABEL_15;
        case 0x20u:
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 6LL, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            SetDoubleClickTime(a);
          goto LABEL_15;
        case 0x21u:
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 5LL, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            SwapMouseButton(a != 0);
          goto LABEL_15;
        case 0x22u:
          if ( pszDest )
          {
            if ( a != 92 )
              return 0LL;
          }
          else if ( a )
          {
            return 0LL;
          }
          v101 = (struct _UNICODE_STRING *)CreateProfileUserName(v175);
          updated = xxxSetSPIMetrics(v101, v170, (struct tagMINIMIZEDMETRICS *)pszDest, v7);
          FreeProfileUserName(v101, v175);
          if ( v7 )
            PointerDeviceSettings = updated;
          goto LABEL_15;
        case 0x23u:
          *(_DWORD *)pszDest = 1;
          goto LABEL_15;
        case 0x24u:
          goto LABEL_15;
        case 0x25u:
          if ( (unsigned int)CheckDesktopPolicy(0LL, 107LL) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 107LL, a == 1);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
          {
            if ( a == 1 )
              gdwPUDFlags |= 0x100000u;
            else
              gdwPUDFlags &= ~0x100000u;
          }
          goto LABEL_15;
        case 0x26u:
          if ( (gdwPUDFlags & 0x100000) == 0 )
            goto LABEL_58;
          v26 = 1;
          goto LABEL_50;
        case 0x29u:
          if ( !pszDest )
            return 0LL;
          GetWindowNCMetrics(pszDest);
          goto LABEL_15;
        case 0x2Au:
        case 0x2Cu:
        case 0x2Eu:
        case 0x49u:
          v56 = xxxSetSPIMetrics(0LL, v170, (struct tagMINIMIZEDMETRICS *)pszDest, v7);
          updated = v56;
          if ( v7 )
            PointerDeviceSettings = v56;
          RtlLoadStringOrError(135LL, v198, 40LL);
          goto LABEL_15;
        case 0x2Bu:
          v55 = pszDest;
          *(_DWORD *)pszDest = 20;
          *((_DWORD *)v55 + 1) = *(_DWORD *)(gpsi + 2108LL) - 6;
          *((_DWORD *)v55 + 2) = *(_DWORD *)(gpsi + 2068LL) - *(_DWORD *)(gpsi + 2108LL);
          *((_DWORD *)v55 + 3) = *(_DWORD *)(gpsi + 2072LL) - *(_DWORD *)(gpsi + 2112LL);
          *((_DWORD *)v55 + 4) = *(_DWORD *)(gpsi + 2104LL);
          goto LABEL_15;
        case 0x2Du:
          v29 = pszDest;
          *(_DWORD *)pszDest = 108;
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
            v30 = *(_DWORD *)(gpsi + 2032LL);
          else
            v30 = *(_DWORD *)(gpsi + 2420LL);
          *((_DWORD *)v29 + 1) = v30;
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
            v34 = *(_DWORD *)(gpsi + 2036LL);
          else
            v34 = *(_DWORD *)(gpsi + 2424LL);
          *((_DWORD *)v29 + 2) = v34;
          *((_DWORD *)v29 + 3) = (gdwPUDFlags & 0x200000) != 0;
          v35 = GetDPIMetrics(gpsi, v31, v32, v33, cData);
          GreExtGetObjectW(*(HBRUSH *)(v35 + 64), 92LL, v29 + 8);
          goto LABEL_15;
        case 0x2Fu:
          v58 = pszDest;
          if ( pszDest )
          {
            if ( *((_DWORD *)pszDest + 2) < *(_DWORD *)pszDest || *((_DWORD *)pszDest + 3) < *((_DWORD *)pszDest + 1) )
              return 0LL;
            v171 = MonitorFromRect((int *)pszDest, 1u);
          }
          else
          {
            v171 = *(_QWORD *)(GetDispInfo() + 88);
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                              + 52LL) & 1) != 0 )
              {
                v58 = (NTSTRSAFE_PWSTR)(*(_QWORD *)(v171 + 40) + 44LL);
                updated = v168;
                goto LABEL_290;
              }
              updated = v168;
            }
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                              + 52LL) & 1) != 0 )
              {
                v58 = (NTSTRSAFE_PWSTR)(*(_QWORD *)(v171 + 40) + 60LL);
                updated = v168;
                goto LABEL_290;
              }
              updated = v168;
            }
            v58 = (NTSTRSAFE_PWSTR)(*(_QWORD *)(v171 + 40) + 28LL);
          }
LABEL_290:
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
          {
            if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                            + 52LL) & 1) != 0 )
            {
              v59 = (int *)(*(_QWORD *)(v171 + 40) + 44LL);
              updated = v168;
              goto LABEL_293;
            }
            updated = v168;
          }
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
          {
            if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                            + 52LL) & 1) != 0 )
            {
              v59 = (int *)(*(_QWORD *)(v171 + 40) + 60LL);
              updated = v168;
              goto LABEL_293;
            }
            updated = v168;
          }
          v59 = (int *)(*(_QWORD *)(v171 + 40) + 28LL);
LABEL_293:
          if ( (unsigned int)IntersectRect((int *)&v186, (int *)v58, v59) )
          {
            v60 = v186 - *(_QWORD *)v58;
            if ( v186 == *(_QWORD *)v58 )
              v60 = v187 - *((_QWORD *)v58 + 1);
            if ( !v60 )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                + 52LL) & 1) != 0 )
                {
                  v61 = (_QWORD *)(*(_QWORD *)(v171 + 40) + 92LL);
                  updated = v168;
                  goto LABEL_300;
                }
                updated = v168;
              }
              if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 1 )
              {
LABEL_299:
                v61 = (_QWORD *)(*(_QWORD *)(v171 + 40) + 76LL);
                goto LABEL_300;
              }
              if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                              + 52LL) & 1) == 0 )
              {
                updated = v168;
                goto LABEL_299;
              }
              v61 = (_QWORD *)(*(_QWORD *)(v171 + 40) + 108LL);
              updated = v168;
LABEL_300:
              v62 = *v61 - v186;
              if ( *v61 == v186 )
                v62 = v61[1] - v187;
              if ( !v62 )
                goto LABEL_314;
              v63 = 0LL;
              if ( a )
              {
                v63 = SnapshotMonitorRects();
                if ( !v63 )
                  return 0LL;
              }
              if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                              + 52LL) & 1) != 0 )
              {
                v102 = v171;
                *(_QWORD *)(*(_QWORD *)(v171 + 40) + 92LL) = v186;
                *(_QWORD *)(*(_QWORD *)(v102 + 40) + 100LL) = v187;
                LogicalToPhysicalDPIRect(*(_QWORD *)(v171 + 40) + 76LL, &v186, 64LL, &v171);
              }
              else
              {
                CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
                v65 = v171;
                v66 = *(_QWORD *)(v171 + 40);
                if ( (CurrentThreadDpiAwarenessContext & 0xF) == 1 )
                {
                  *(_DWORD *)(v66 + 108) = v186;
                  *(_DWORD *)(*(_QWORD *)(v65 + 40) + 112LL) = HIDWORD(v186);
                  *(_QWORD *)(*(_QWORD *)(v65 + 40) + 116LL) = v187;
                  LogicalToPhysicalDPIRect(*(_QWORD *)(v171 + 40) + 76LL, &v186, 128LL, &v171);
                  v103 = *(_QWORD *)(v171 + 40);
                  v68 = v103 + 76;
                  v70 = v103 + 92;
                  v69 = 64LL;
                  goto LABEL_309;
                }
                *(_DWORD *)(v66 + 76) = v186;
                *(_DWORD *)(*(_QWORD *)(v65 + 40) + 80LL) = HIDWORD(v186);
                *(_QWORD *)(*(_QWORD *)(v65 + 40) + 84LL) = v187;
                PhysicalToLogicalDPIRect(*(_QWORD *)(v171 + 40) + 92LL, *(_QWORD *)(v171 + 40) + 76LL, 64LL, &v171);
              }
              v67 = *(_QWORD *)(v171 + 40);
              v68 = v67 + 76;
              v69 = 128LL;
              v70 = v67 + 108;
LABEL_309:
              PhysicalToLogicalDPIRect(v70, v68, v69, &v171);
              if ( v171 == *(_QWORD *)(GetDispInfo() + 88) )
                SetDesktopMetrics();
              if ( a )
              {
                PushW32ThreadLock(v63, v185, (__int64)Win32FreePool);
                xxxDesktopRecalc(*(_QWORD *)(gptiCurrent + 408LL), v63);
                PopAndFreeAlwaysW32ThreadLock((__int64)v185);
              }
              updated = 1;
LABEL_314:
              PointerDeviceSettings = 1;
              goto LABEL_15;
            }
          }
LABEL_101:
          UserSetLastError(87LL);
          return 0LL;
        case 0x30u:
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
            goto LABEL_71;
          if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 52LL) & 1) != 0 )
          {
            v27 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 40LL) + 92LL);
            updated = v168;
            PointerDeviceSettings = v169;
            goto LABEL_73;
          }
          updated = v168;
          PointerDeviceSettings = v169;
LABEL_71:
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
          {
            if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                            + 52LL) & 1) != 0 )
            {
              v27 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 40LL) + 108LL);
              updated = v168;
              PointerDeviceSettings = v169;
LABEL_73:
              *(_OWORD *)pszDest = *v27;
LABEL_15:
              if ( updated )
              {
LABEL_315:
                if ( v178 )
                {
                  RtlInitLargeUnicodeString((__int64)v184, (__int64)v198);
                  v180[0] = 0;
                  v180[1] = 100;
                  v181 = &v182;
                  xxxBroadcastMessageEx(
                    0LL,
                    0x1Au,
                    v170,
                    (struct _LARGE_STRING *)v184,
                    6u,
                    (union tagBROADCASTMSG *)v180,
                    1,
                    0);
                }
              }
              return PointerDeviceSettings;
            }
            updated = v168;
            PointerDeviceSettings = v169;
          }
          v27 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 40LL) + 76LL);
          goto LABEL_73;
        case 0x32u:
          if ( a && a != 24 )
            return 0LL;
          v40 = pszDest;
          if ( !pszDest || *(_DWORD *)pszDest != 24 )
            return 0LL;
          *(_OWORD *)(pszDest + 2) = *(_OWORD *)((char *)&gFilterKeys + 4);
          *((_DWORD *)v40 + 5) = *((_DWORD *)&gFilterKeys + 5);
          goto LABEL_15;
        case 0x33u:
          v106 = pszDest;
          if ( a && a != 24 )
            return 0LL;
          if ( !pszDest || *(_DWORD *)pszDest != 24 || *((_DWORD *)pszDest + 2) && *((_DWORD *)pszDest + 5) )
            return 0LL;
          v107 = *((_DWORD *)pszDest + 1);
          if ( (v107 & 0x7F) != v107 )
            return 0LL;
          v108 = (HIDWORD(gFilterKeys) & 2) != 0 ? v107 | 2 : v107 & 0xFFFFFFFD;
          *((_DWORD *)pszDest + 1) = v108;
          if ( *((_DWORD *)v106 + 2) > 0x4E20u
            || *((_DWORD *)v106 + 3) > 0x4E20u
            || *((_DWORD *)v106 + 4) > 0x4E20u
            || *((_DWORD *)v106 + 5) > 0x4E20u )
          {
            return 0LL;
          }
          if ( v7 )
          {
            v109 = (struct _UNICODE_STRING *)CreateProfileUserName(v175);
            updated = SetFilterKeys(v109, (struct tagFILTERKEYS *)v106);
            PointerDeviceSettings = updated;
            if ( !updated )
              SetFilterKeys(v109, gFilterKeys);
            FreeProfileUserName(v109, v175);
          }
          if ( PointerDeviceSettings )
          {
            memmove(gFilterKeys, v106, *(unsigned int *)v106);
            LODWORD(gFilterKeys) = 24;
            if ( (HIDWORD(gFilterKeys) & 1) == 0 )
              StopFilterKeysTimers();
            SetAccessEnabledFlag();
            if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x800) != 0 )
              xxxCallHook(11, 2, 0LL, 0xAu);
            PostShellHookMessagesEx(0xBu, 2LL, 0LL);
          }
          goto LABEL_15;
        case 0x34u:
          if ( (a & 0xFFFFFFF7) != 0 || !pszDest || *(_DWORD *)pszDest != 8 )
            return 0LL;
          *((_DWORD *)pszDest + 1) = HIDWORD(gToggleKeys);
          goto LABEL_15;
        case 0x35u:
          v114 = pszDest;
          if ( (a & 0xFFFFFFF7) != 0 )
            return 0LL;
          if ( !pszDest )
            return 0LL;
          if ( *(_DWORD *)pszDest != 8 )
            return 0LL;
          v115 = *((_DWORD *)pszDest + 1);
          if ( (v115 & 0x3F) != v115 )
            return 0LL;
          if ( (HIDWORD(gToggleKeys) & 2) != 0 )
            v116 = v115 | 2;
          else
            v116 = v115 & 0xFFFFFFFD;
          *((_DWORD *)pszDest + 1) = v116;
          if ( v7 )
          {
            RtlStringCchPrintfW(v197, 0x28uLL, L"%d", v116);
            updated = FastWriteProfileStringW(0LL, 17LL, L"Flags", v197);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
          {
            memmove(gToggleKeys, v114, *(unsigned int *)v114);
            LODWORD(gToggleKeys) = 8;
            SetAccessEnabledFlag();
          }
          goto LABEL_15;
        case 0x36u:
          if ( a && a != 28 )
            return 0LL;
          v52 = pszDest;
          if ( !pszDest || *(_DWORD *)pszDest != 28 )
            return 0LL;
          *(_OWORD *)(pszDest + 2) = *(_OWORD *)((char *)&gMouseKeys + 4);
          *(struct tagMOUSEKEYS **)(v52 + 10) = *(struct tagMOUSEKEYS *const *)((char *)&gMouseKeys + 20);
          v53 = *((_DWORD *)v52 + 1) & 0x4CFFFFFF;
          *((_DWORD *)v52 + 1) = v53;
          if ( gbMKMouseMode )
            *((_DWORD *)v52 + 1) = v53 | 0x80000000;
          v54 = *((_DWORD *)v52 + 1) | ((gwMKButtonState & 3) << 24);
          *((_DWORD *)v52 + 1) = v54;
          *((_DWORD *)v52 + 1) = v54 | ((gwMKCurrentButton & 3) << 28);
          goto LABEL_15;
        case 0x37u:
          v117 = pszDest;
          if ( a && a != 28 )
            return 0LL;
          if ( !pszDest )
            return 0LL;
          if ( *(_DWORD *)pszDest != 28 )
            return 0LL;
          v118 = *((_DWORD *)pszDest + 1) & 0x4CFFFFFF;
          *((_DWORD *)pszDest + 1) = v118;
          if ( (unsigned __int8)v118 != v118 )
            return 0LL;
          if ( (HIDWORD(gMouseKeys) & 2) != 0 )
            *((_DWORD *)v117 + 1) |= 2u;
          else
            *((_DWORD *)v117 + 1) = v118 & 0xFFFFFFFD;
          if ( (unsigned int)(*((_DWORD *)v117 + 2) - 10) > 0x15E
            || (unsigned int)(*((_DWORD *)v117 + 3) - 1000) > 0xFA0 )
          {
            return 0LL;
          }
          if ( v7 )
          {
            v119 = (struct _UNICODE_STRING *)CreateProfileUserName(v175);
            updated = SetMouseKeys(v119, (struct tagMOUSEKEYS *)v117);
            PointerDeviceSettings = updated;
            if ( !updated )
              SetMouseKeys(v119, gMouseKeys);
            FreeProfileUserName(v119, v175);
          }
          if ( PointerDeviceSettings )
          {
            memmove(gMouseKeys, v117, *(unsigned int *)v117);
            LODWORD(gMouseKeys) = 28;
            CalculateMouseTable();
            v120 = HIDWORD(gMouseKeys);
            if ( (v120 & 1) != 0 )
            {
              gbMKMouseMode = ((v120 >> 7) & 1) != (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & gafAsyncKeyState[(unsigned __int64)gNumLockVk >> 2]) != 0);
              MKShowMouseCursor();
            }
            else
            {
              MKHideMouseCursor();
            }
            SetAccessEnabledFlag();
            if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x800) != 0 )
              xxxCallHook(11, 3, 0LL, 0xAu);
            PostShellHookMessagesEx(0xBu, 3LL, 0LL);
          }
          goto LABEL_15;
        case 0x38u:
          *(_DWORD *)pszDest = (gdwPUDFlags >> 15) & 1;
          goto LABEL_15;
        case 0x39u:
          if ( v7 )
          {
            RtlStringCchPrintfW(v197, 0x28uLL, L"%d", a == 1);
            updated = FastWriteProfileStringW(0LL, 20LL, L"On", v197);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
          {
            if ( a == 1 )
              gdwPUDFlags |= 0x8000u;
            else
              gdwPUDFlags &= ~0x8000u;
            SetAccessEnabledFlag();
            *(_DWORD *)(gpsi + 2160LL) = (gdwPUDFlags >> 15) & 1;
          }
          goto LABEL_15;
        case 0x3Au:
          v51 = pszDest;
          if ( (a & 0xFFFFFFF7) != 0 || !pszDest || *(_DWORD *)pszDest != 8 )
            return 0LL;
          *((_DWORD *)pszDest + 1) = HIDWORD(gStickyKeys);
          v51[3] = 0;
          *((_DWORD *)v51 + 1) |= gLatchBits << 24;
          *((_DWORD *)v51 + 1) |= gLockBits << 16;
          goto LABEL_15;
        case 0x3Bu:
          v110 = pszDest;
          v111 = HIDWORD(gStickyKeys) & 1;
          if ( (a & 0xFFFFFFF7) != 0 )
            return 0LL;
          if ( !pszDest )
            return 0LL;
          if ( *(_DWORD *)pszDest != 8 )
            return 0LL;
          pszDest[3] = 0;
          v112 = *((_DWORD *)v110 + 1);
          if ( (v112 & 0x1FF) != v112 )
            return 0LL;
          if ( (HIDWORD(gStickyKeys) & 2) != 0 )
            v113 = v112 | 2;
          else
            v113 = v112 & 0xFFFFFFFD;
          *((_DWORD *)v110 + 1) = v113;
          if ( v7 )
          {
            RtlStringCchPrintfW(v197, 0x28uLL, L"%d", v113);
            updated = FastWriteProfileStringW(0LL, 14LL, L"Flags", v197);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
          {
            memmove(gStickyKeys, v110, *(unsigned int *)v110);
            LODWORD(gStickyKeys) = 8;
            if ( (HIDWORD(gStickyKeys) & 1) == 0 && v111 )
              xxxTurnOffStickyKeys();
            SetAccessEnabledFlag();
            if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x800) != 0 )
              xxxCallHook(11, 1, 0LL, 0xAu);
            PostShellHookMessagesEx(0xBu, 1LL, 0LL);
          }
          goto LABEL_15;
        case 0x3Cu:
          if ( a && a != 12 || !pszDest || *(_DWORD *)pszDest != 12 )
            return 0LL;
          *(void **)(pszDest + 2) = *(void *const *)((char *)&gAccessTimeOut + 4);
          goto LABEL_15;
        case 0x3Du:
          if ( a && a != 12
            || !pszDest
            || *(_DWORD *)pszDest != 12
            || (*((_DWORD *)pszDest + 1) & 3) != *((_DWORD *)pszDest + 1)
            || *((_DWORD *)pszDest + 2) > 0x36EE80u )
          {
            return 0LL;
          }
          if ( v7 )
          {
            v121 = CreateProfileUserName(v175);
            RtlStringCchPrintfW(v197, 0x28uLL, L"%d", *((unsigned int *)pszDest + 1));
            v122 = FastWriteProfileStringW(v121, 18LL, L"Flags", v197);
            RtlStringCchPrintfW(v197, 0x28uLL, L"%d", *((unsigned int *)pszDest + 2));
            updated = FastWriteProfileStringW(v121, 18LL, L"TimeToWait", v197) & v122;
            PointerDeviceSettings = updated;
            if ( !updated )
            {
              RtlStringCchPrintfW(v197, 0x28uLL, L"%d", HIDWORD(gAccessTimeOut));
              FastWriteProfileStringW(v121, 18LL, L"Flags", v197);
              RtlStringCchPrintfW(v197, 0x28uLL, L"%d", *((unsigned int *)&gAccessTimeOut + 2));
              FastWriteProfileStringW(v121, 18LL, L"TimeToWait", v197);
            }
            FreeProfileUserName(v121, v175);
          }
          if ( PointerDeviceSettings )
          {
            memmove(gAccessTimeOut, pszDest, *(unsigned int *)pszDest);
            LODWORD(gAccessTimeOut) = 12;
            SetAccessEnabledFlag();
            AccessTimeOutReset();
          }
          goto LABEL_15;
        case 0x40u:
          if ( a && a != 56 )
            return 0LL;
          v57 = pszDest;
          if ( !pszDest || *(_DWORD *)pszDest != 56 )
            return 0LL;
          *(_OWORD *)(pszDest + 2) = *(_OWORD *)((char *)&gSoundSentry + 4);
          *(_OWORD *)(v57 + 10) = *(_OWORD *)((char *)&gSoundSentry + 20);
          *(_OWORD *)(v57 + 18) = *(_OWORD *)((char *)&gSoundSentry + 36);
          *((_DWORD *)v57 + 13) = *((_DWORD *)&gSoundSentry + 13);
          goto LABEL_15;
        case 0x41u:
          v125 = (struct tagSOUNDSENTRYW *)pszDest;
          if ( a && a != 56 )
            return 0LL;
          if ( !pszDest )
            return 0LL;
          if ( *(_DWORD *)pszDest != 56 )
            return 0LL;
          v126 = *((_DWORD *)pszDest + 1);
          if ( (v126 & 7) != v126
            || *((_DWORD *)pszDest + 8) > 3u
            || *((_DWORD *)pszDest + 2)
            || *((_DWORD *)pszDest + 5) )
          {
            return 0LL;
          }
          if ( (HIDWORD(gSoundSentry) & 2) != 0 )
            v127 = v126 | 2;
          else
            v127 = v126 & 0xFFFFFFFD;
          *((_DWORD *)pszDest + 1) = v127;
          if ( v7 )
          {
            v128 = (struct _UNICODE_STRING *)CreateProfileUserName(v175);
            updated = SetSoundSentry(v128, v125);
            PointerDeviceSettings = updated;
            if ( !updated )
              SetSoundSentry(v128, gSoundSentry);
            FreeProfileUserName(v128, v175);
          }
          if ( PointerDeviceSettings )
          {
            memmove(gSoundSentry, v125, *(unsigned int *)v125);
            LODWORD(gSoundSentry) = 56;
            SetAccessEnabledFlag();
          }
          goto LABEL_15;
        case 0x43u:
          updated = SetHighContrastWorker((struct tagINTERNALSETHIGHCONTRAST *)pszDest, v7, &v169);
          PointerDeviceSettings = v169;
          goto LABEL_15;
        case 0x44u:
          *(_DWORD *)pszDest = (gdwPUDFlags >> 17) & 1;
          goto LABEL_15;
        case 0x45u:
          if ( v7 )
          {
            v123 = L"1";
            if ( !a )
              v123 = L"0";
            updated = FastWriteProfileStringW(0LL, 27LL, L"On", v123);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
          {
            if ( a )
              gdwPUDFlags |= 0x20000u;
            else
              gdwPUDFlags &= ~0x20000u;
          }
          goto LABEL_15;
        case 0x46u:
          if ( (gdwPUDFlags & 0x40000) == 0 )
            goto LABEL_58;
          v26 = 1;
          goto LABEL_50;
        case 0x47u:
          if ( v7 )
          {
            v124 = L"1";
            if ( !a )
              v124 = L"0";
            updated = FastWriteProfileStringW(0LL, 28LL, L"On", v124);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
          {
            if ( a )
              gdwPUDFlags |= 0x40000u;
            else
              gdwPUDFlags &= ~0x40000u;
          }
          goto LABEL_15;
        case 0x48u:
          v39 = pszDest;
          if ( !pszDest || a != 8 )
            return 0LL;
          *(_DWORD *)pszDest = 8;
          *((_DWORD *)v39 + 1) = (gdwPUDFlags & 0x10000) != 0;
          goto LABEL_15;
        case 0x4Au:
          if ( (gulFontInformation & 2) == 0 )
            goto LABEL_58;
          v26 = 1;
          goto LABEL_50;
        case 0x4Bu:
          if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
          v90 = a != 0 ? 2 : 0;
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 200LL, v90);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            GreSetFontEnumeration(v90 | 4);
          goto LABEL_15;
        case 0x4Cu:
          if ( (unsigned int)CheckDesktopPolicy(0LL, 198LL) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 198LL, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            *(_DWORD *)(gpsi + 2152LL) = a;
          goto LABEL_15;
        case 0x4Du:
          if ( (unsigned int)CheckDesktopPolicy(0LL, 199LL) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 199LL, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            *(_DWORD *)(gpsi + 2156LL) = a;
          goto LABEL_15;
        case 0x57u:
          v129 = CreateProfileUserName(v175);
          xxxUpdateSystemCursorsFromRegistry(v129);
          v72 = v129;
          goto LABEL_324;
        case 0x58u:
          v130 = CreateProfileUserName(v175);
          xxxUpdateSystemIconsFromRegistry(v130);
          v72 = v130;
          goto LABEL_324;
        case 0x59u:
          if ( gspklBaseLayout )
          {
            *(_QWORD *)pszDest = *(_QWORD *)(gspklBaseLayout + 40LL);
            goto LABEL_15;
          }
          UserSetLastError(21LL);
          return 0LL;
        case 0x5Au:
          v91 = HKLtoPKL(gptiCurrent, *(_QWORD *)pszDest);
          if ( !v91 )
            return 0LL;
          if ( PointerDeviceSettings )
          {
            *(_QWORD *)&v179 = gspklBaseLayout;
            *((_QWORD *)&v179 + 1) = v91;
            v183 = v179;
            HMAssignmentLock(&v183);
          }
          goto LABEL_15;
        case 0x5Bu:
          return GetKbdLangSwitch(0LL);
        case 0x5Du:
          if ( v7 )
          {
            RtlStringCchPrintfW(v197, 0x28uLL, L"%d", a);
            updated = FastUpdateWinIni(0LL, 12LL, 613LL, v197);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            SetMouseTrails(a);
          goto LABEL_15;
        case 0x5Eu:
          v26 = gMouseTrails + 1;
          if ( !gMouseTrails )
            goto LABEL_58;
          goto LABEL_50;
        case 0x5Fu:
          *(_DWORD *)pszDest = (*(_DWORD *)(gpsi + 8684LL) >> 1) & 1;
          goto LABEL_15;
        case 0x60u:
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 7LL, a != 0);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
          {
            if ( a )
              *(_DWORD *)(gpsi + 8684LL) |= 2u;
            else
              *(_DWORD *)(gpsi + 8684LL) &= ~2u;
          }
          goto LABEL_15;
        case 0x62u:
          *(_DWORD *)pszDest = gcxMouseHover;
          goto LABEL_15;
        case 0x63u:
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 91LL, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            gcxMouseHover = a;
          goto LABEL_15;
        case 0x64u:
          *(_DWORD *)pszDest = gcyMouseHover;
          goto LABEL_15;
        case 0x65u:
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 92LL, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            gcyMouseHover = a;
          goto LABEL_15;
        case 0x66u:
          *(_DWORD *)pszDest = gdtMouseHover;
          goto LABEL_15;
        case 0x67u:
          v131 = 10;
          if ( a >= 0xA )
            v131 = a;
          if ( v131 > 0x7FFFFFFF )
            v131 = 0x7FFFFFFF;
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 93LL, v131);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            gdtMouseHover = v131;
          goto LABEL_15;
        case 0x68u:
          *(_DWORD *)pszDest = *(_DWORD *)(gpsi + 5396LL);
          goto LABEL_15;
        case 0x69u:
          if ( (unsigned int)CheckDesktopPolicy(0LL, 14LL) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 14LL, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            *(_DWORD *)(gpsi + 5396LL) = a;
          goto LABEL_15;
        case 0x6Au:
          *(_DWORD *)pszDest = gdtMNDropDown;
          goto LABEL_15;
        case 0x6Bu:
          if ( (unsigned int)CheckDesktopPolicy(0LL, 94LL) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 94LL, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            gdtMNDropDown = a;
          goto LABEL_15;
        case 0x6Cu:
          *(_DWORD *)pszDest = *(_DWORD *)(gpsi + 5400LL);
          goto LABEL_15;
        case 0x6Du:
          if ( (unsigned int)CheckDesktopPolicy(0LL, 15LL) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 15LL, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            *(_DWORD *)(gpsi + 5400LL) = a;
          goto LABEL_15;
        case 0x6Eu:
          *(_DWORD *)pszDest = gfIMEShowStatus != 0;
          goto LABEL_15;
        case 0x6Fu:
          PointerDeviceSettings = xxxSetIMEShowStatus(a != 0, v7, &v168);
          updated = v168;
          goto LABEL_15;
        case 0x70u:
          *(_DWORD *)pszDest = GetMouseSensitivity(0LL);
          goto LABEL_15;
        case 0x71u:
          if ( !(unsigned __int8)IsValidMouseSensitivity((unsigned int)pszDest) )
            return 0LL;
          if ( v7 )
          {
            RtlStringCchPrintfW(v197, 0x28uLL, L"%d", pszDest);
            updated = FastUpdateWinIni(0LL, 12LL, 608LL, v197);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
          {
            UpdateMouseSensitivity((unsigned int)pszDest);
            for ( i = 0; i < 2; ++i )
              ResetAccelerationCurves(i);
          }
          goto LABEL_15;
        case 0x72u:
          if ( !gppiScreenSaver )
            goto LABEL_58;
          v26 = 1;
          goto LABEL_50;
        case 0x73u:
          if ( g_pWallpaperSettings )
          {
            RtlStringCchCopyW(pszDest, 0x104uLL, (NTSTRSAFE_PCWSTR)(g_pWallpaperSettings + 4LL));
            goto LABEL_15;
          }
          v76 = CreateProfileUserName(v175);
          LoadWallpaperFilenameFromRegistry(v76, pszDest, 260LL);
          v72 = v76;
          goto LABEL_324;
        case 0x74u:
          if ( a && a != 12 || !pszDest || *(_DWORD *)pszDest != 12 )
            return 0LL;
          *(void **)(pszDest + 2) = *(void *const *)((char *)&gAudioDescription + 4);
          goto LABEL_15;
        case 0x75u:
          if ( a && a != 12 || !pszDest || *(_DWORD *)pszDest != 12 )
            return 0LL;
          if ( v7 )
          {
            v132 = CreateProfileUserName(v175);
            v133 = v132;
            v134 = L"1";
            v135 = L"1";
            if ( !*((_DWORD *)pszDest + 1) )
              v135 = L"0";
            v136 = FastWriteProfileStringW(v132, 48LL, L"On", v135);
            RtlStringCchPrintfW(v197, 0x28uLL, L"%d", *((unsigned int *)pszDest + 2));
            updated = FastWriteProfileStringW(v133, 48LL, L"Locale", v197) & v136;
            PointerDeviceSettings = updated;
            if ( !updated )
            {
              if ( !HIDWORD(gAudioDescription) )
                v134 = L"0";
              FastWriteProfileStringW(v133, 48LL, L"On", v134);
              RtlStringCchPrintfW(v197, 0x28uLL, L"%d", *((unsigned int *)&gAudioDescription + 2));
              FastWriteProfileStringW(v133, 48LL, L"Locale", v197);
            }
            FreeProfileUserName(v133, v175);
          }
          if ( PointerDeviceSettings )
          {
            memmove(gAudioDescription, pszDest, *(unsigned int *)pszDest);
            LODWORD(gAudioDescription) = 12;
          }
          goto LABEL_15;
        case 0x76u:
          *(_DWORD *)pszDest = (*gpsi >> 9) & 1;
          goto LABEL_15;
        case 0x77u:
          if ( gdwRITdemonLockState && !v9 )
            goto LABEL_457;
          if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 618LL, a != 0);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
          {
            if ( a )
              *gpsi |= 0x200u;
            else
              *gpsi &= ~0x200u;
          }
          goto LABEL_15;
        case 0x78u:
          *(_DWORD *)pszDest = gdwHungAppTimeout;
          goto LABEL_15;
        case 0x79u:
          if ( (unsigned int)CheckDesktopPolicy(0LL, 621LL) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 621LL, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            gdwHungAppTimeout = a;
          goto LABEL_15;
        case 0x7Au:
          *(_DWORD *)pszDest = gdwWaitToKillTimeout;
          goto LABEL_15;
        case 0x7Bu:
          if ( (unsigned int)CheckDesktopPolicy(0LL, 622LL) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 622LL, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            gdwWaitToKillTimeout = a;
          goto LABEL_15;
        case 0x7Cu:
          *(_DWORD *)pszDest = gdwWaitToKillServiceTimeout;
          goto LABEL_15;
        case 0x7Du:
          if ( (unsigned int)CheckDesktopPolicy(0LL, 623LL) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 52LL, 623LL, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            gdwWaitToKillServiceTimeout = a;
          goto LABEL_15;
        case 0x7Eu:
          *(_DWORD *)pszDest = gWinArrGlobal[0];
          goto LABEL_15;
        case 0x7Fu:
          if ( a <= *(_DWORD *)(gpDispInfo + 152LL)
            && a <= dword_1C03257C4
            && a <= dword_1C03257C8
            && a <= dword_1C03257D0 )
          {
            UpdateThresholdFromMetric(v7, &v168, &v169, 0x10u, a, 0);
            updated = v168;
            PointerDeviceSettings = v169;
          }
          goto LABEL_15;
        case 0x80u:
          *(_DWORD *)pszDest = dword_1C03257C4;
          goto LABEL_15;
        case 0x81u:
          if ( a <= *(_DWORD *)(gpDispInfo + 152LL)
            && a >= gWinArrGlobal[0]
            && a <= dword_1C03257CC
            && a <= dword_1C03257D4 )
          {
            UpdateThresholdFromMetric(v7, &v168, &v169, 0x11u, a, 1);
            updated = v168;
            PointerDeviceSettings = v169;
          }
          goto LABEL_15;
        case 0x82u:
          if ( (dword_1C03257DC & 1) == 0 )
            goto LABEL_58;
          v26 = 1;
          goto LABEL_50;
        case 0x83u:
          v41 = 18;
          LODWORD(v13) = 1;
          goto LABEL_117;
        case 0x84u:
          *(_DWORD *)pszDest = dword_1C03257C8;
          goto LABEL_15;
        case 0x85u:
          if ( a <= *(_DWORD *)(gpDispInfo + 152LL) && a <= dword_1C03257CC && a >= gWinArrGlobal[0] )
          {
            UpdateThresholdFromMetric(v7, &v168, &v169, 0x13u, a, 2);
            updated = v168;
            PointerDeviceSettings = v169;
          }
          goto LABEL_15;
        case 0x86u:
          *(_DWORD *)pszDest = dword_1C03257CC;
          goto LABEL_15;
        case 0x87u:
          if ( a <= *(_DWORD *)(gpDispInfo + 152LL) && a >= dword_1C03257C8 && a >= dword_1C03257C4 )
          {
            UpdateThresholdFromMetric(v7, &v168, &v169, 0x14u, a, 3);
            updated = v168;
            PointerDeviceSettings = v169;
          }
          goto LABEL_15;
        case 0x88u:
          *(_DWORD *)pszDest = dword_1C03257D0;
          goto LABEL_15;
        case 0x89u:
          if ( a <= *(_DWORD *)(gpDispInfo + 152LL) && a <= dword_1C03257D4 && a >= gWinArrGlobal[0] )
          {
            UpdateThresholdFromMetric(v7, &v168, &v169, 0x15u, a, 4);
            updated = v168;
            PointerDeviceSettings = v169;
          }
          goto LABEL_15;
        case 0x8Au:
          *(_DWORD *)pszDest = dword_1C03257D4;
          goto LABEL_15;
        case 0x8Bu:
          if ( a <= *(_DWORD *)(gpDispInfo + 152LL) && a >= dword_1C03257D0 && a >= dword_1C03257C4 )
          {
            UpdateThresholdFromMetric(v7, &v168, &v169, 0x16u, a, 5);
            updated = v168;
            PointerDeviceSettings = v169;
          }
          goto LABEL_15;
        case 0x8Cu:
          *(_DWORD *)pszDest = (dword_1C03257DC >> 1) & 1;
          goto LABEL_15;
        case 0x8Du:
          v41 = 624;
          goto LABEL_117;
        case 0x8Eu:
          *(_DWORD *)pszDest = (dword_1C03257DC >> 2) & 1;
          goto LABEL_15;
        case 0x8Fu:
          v41 = 626;
          LODWORD(v13) = 4;
          goto LABEL_117;
        case 0x90u:
          if ( (dword_1C03257DC & 8) != 0 )
            v26 = 1;
          else
LABEL_58:
            v26 = 0;
LABEL_50:
          *(_DWORD *)pszDest = v26;
          goto LABEL_15;
        case 0x91u:
          v41 = 625;
          LODWORD(v13) = 8;
LABEL_117:
          if ( (unsigned int)CheckDesktopPolicy(0LL, v41) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, v41, a);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
          {
            v42 = dword_1C03257DC;
            if ( a )
              v43 = v13 | dword_1C03257DC;
            else
              v43 = ~(_DWORD)v13 & dword_1C03257DC;
            dword_1C03257DC = v43;
            PostWindowArrangementCheck(v42);
          }
          goto LABEL_15;
        case 0x92u:
        case 0x94u:
        case 0x96u:
        case 0x98u:
        case 0x9Au:
        case 0x9Cu:
          PointerDeviceSettings = ReadPointerDeviceSettings(v170, pszDest);
          goto LABEL_15;
        case 0x93u:
        case 0x95u:
        case 0x97u:
        case 0x99u:
        case 0x9Bu:
        case 0x9Du:
          updated = WritePointerDeviceSettings(v170, pszDest, (unsigned int)v174);
          goto LABEL_15;
        case 0x9Eu:
        case 0xA5u:
        case 0xA7u:
          if ( (int)DrvDisplayConfigGetScaleFactorOverrides(v189, 1LL) < 0 )
            return 0LL;
          if ( a == 158 )
          {
            *(_DWORD *)pszDest = HIDWORD(v190);
          }
          else
          {
            v137 = pszDest;
            *(_QWORD *)pszDest = v190;
            *((_DWORD *)v137 + 2) = v191;
          }
          goto LABEL_15;
        case 0x9Fu:
        case 0xA6u:
          if ( a + 11 > 0x16 )
            return 0LL;
          if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
          if ( !v7 )
            goto LABEL_15;
          v193 = a;
          v172 = a != 159;
          v138 = DrvDisplayConfigSetScaleFactorOverride(v192, &v172);
          if ( v138 < 0 )
          {
            return 0;
          }
          else
          {
            if ( a == 159 )
              TraceLoggingSPISetModernDPIOverrideEvent(v139, 159);
            else
              TraceLoggingSPISetDesktopDPIOverrideEvent(v139, a);
            return 1;
          }
        case 0xA0u:
          *(_DWORD *)pszDest = 6;
          goto LABEL_15;
        case 0xA1u:
LABEL_406:
          PointerDeviceSettings = 1;
          goto LABEL_15;
        case 0xA2u:
          DispInfo = GetDispInfo();
          if ( IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(DispInfo + 88) + 472LL)) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                              + 52LL) & 1) != 0 )
              {
                v105 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 40LL) + 44LL);
                updated = v168;
                PointerDeviceSettings = v169;
                goto LABEL_578;
              }
              updated = v168;
              PointerDeviceSettings = v169;
            }
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                              + 52LL) & 1) != 0 )
              {
                v105 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 40LL) + 60LL);
                updated = v168;
                PointerDeviceSettings = v169;
                goto LABEL_578;
              }
              updated = v168;
              PointerDeviceSettings = v169;
            }
            v105 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 40LL) + 28LL);
          }
          else
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                              + 52LL) & 1) != 0 )
              {
                v105 = (_OWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 488LL);
                updated = v168;
                PointerDeviceSettings = v169;
                goto LABEL_578;
              }
              updated = v168;
              PointerDeviceSettings = v169;
            }
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                              + 52LL) & 1) != 0 )
              {
                v105 = (_OWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 504LL);
                updated = v168;
                PointerDeviceSettings = v169;
                goto LABEL_578;
              }
              updated = v168;
              PointerDeviceSettings = v169;
            }
            v105 = (_OWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 472LL);
          }
LABEL_578:
          *(_OWORD *)pszDest = *v105;
          goto LABEL_15;
        case 0xA3u:
          v36 = pszDest;
          if ( pszDest )
          {
            if ( *((_DWORD *)pszDest + 2) < *(_DWORD *)pszDest || *((_DWORD *)pszDest + 3) < *((_DWORD *)pszDest + 1) )
              return 0LL;
            v173 = MonitorFromRect((int *)pszDest, 1u);
          }
          else
          {
            v173 = *(_QWORD *)(GetDispInfo() + 88);
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                              + 52LL) & 1) != 0 )
              {
                v36 = (NTSTRSAFE_PWSTR)(*(_QWORD *)(v173 + 40) + 44LL);
                updated = v168;
                PointerDeviceSettings = v169;
                goto LABEL_94;
              }
              updated = v168;
              PointerDeviceSettings = v169;
            }
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                              + 52LL) & 1) != 0 )
              {
                v36 = (NTSTRSAFE_PWSTR)(*(_QWORD *)(v173 + 40) + 60LL);
                updated = v168;
                PointerDeviceSettings = v169;
                goto LABEL_94;
              }
              updated = v168;
              PointerDeviceSettings = v169;
            }
            v36 = (NTSTRSAFE_PWSTR)(*(_QWORD *)(v173 + 40) + 28LL);
          }
LABEL_94:
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
            goto LABEL_95;
          if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 52LL) & 1) != 0 )
          {
            v37 = (int *)(*(_QWORD *)(v173 + 40) + 44LL);
            updated = v168;
            PointerDeviceSettings = v169;
LABEL_97:
            if ( !(unsigned int)IntersectRect((int *)&v188, (int *)v36, v37) )
              goto LABEL_101;
            v38 = v188 - *(_QWORD *)v36;
            if ( (_QWORD)v188 == *(_QWORD *)v36 )
              v38 = *((_QWORD *)&v188 + 1) - *((_QWORD *)v36 + 1);
            if ( v38 )
              goto LABEL_101;
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                              + 52LL) & 1) != 0 )
              {
                *(_OWORD *)(v173 + 488) = v188;
                LogicalToPhysicalDPIRect(v173 + 472, &v188, 64LL, &v173);
                PhysicalToLogicalDPIRect(v173 + 504, v173 + 472, 128LL, &v173);
                updated = v168;
                PointerDeviceSettings = v169;
                goto LABEL_15;
              }
              updated = v168;
              PointerDeviceSettings = v169;
            }
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                              + 52LL) & 1) != 0 )
              {
                *(_OWORD *)(v173 + 504) = v188;
                LogicalToPhysicalDPIRect(v173 + 472, &v188, 128LL, &v173);
                PhysicalToLogicalDPIRect(v173 + 488, v173 + 472, 64LL, &v173);
                updated = v168;
                PointerDeviceSettings = v169;
                goto LABEL_15;
              }
              updated = v168;
              PointerDeviceSettings = v169;
            }
            *(_OWORD *)(v173 + 472) = v188;
            PhysicalToLogicalDPIRect(v173 + 488, v173 + 472, 64LL, &v173);
            PhysicalToLogicalDPIRect(v173 + 504, v173 + 472, 128LL, &v173);
            goto LABEL_15;
          }
          updated = v168;
          PointerDeviceSettings = v169;
LABEL_95:
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
          {
            if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                            + 52LL) & 1) != 0 )
            {
              v37 = (int *)(*(_QWORD *)(v173 + 40) + 60LL);
              updated = v168;
              PointerDeviceSettings = v169;
              goto LABEL_97;
            }
            updated = v168;
            PointerDeviceSettings = v169;
          }
          v37 = (int *)(*(_QWORD *)(v173 + 40) + 28LL);
          goto LABEL_97;
        case 0xA8u:
          *(_DWORD *)pszDest = gbLockScreenAutoLockActive;
          goto LABEL_15;
        case 0xA9u:
          if ( gfSwitchInProgress )
            return 0LL;
          if ( gdwRITdemonLockState && !v9 )
          {
LABEL_457:
            UserSetLastError(329LL);
            return 0LL;
          }
          gbLockScreenAutoLockActive = a != 0;
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 205LL, a);
            PointerDeviceSettings = updated;
          }
          goto LABEL_15;
        case 0xAAu:
          *(_DWORD *)pszDest = gbLockScreenActive;
          goto LABEL_15;
        case 0xABu:
          if ( *(_DWORD *)(CurrentProcessWin32Process + 56) != gpidLogonUI )
            return 0LL;
          v73 = (unsigned int *)gbLockScreenActive;
          gbLockScreenActive = a != 0;
          if ( a )
          {
            if ( !gptiForeground
              || (v74 = *(_QWORD *)(gptiForeground + 384LL)) == 0
              || (v75 = *(_QWORD *)(v74 + 88)) == 0
              || (unsigned int)IsWindowUnderActiveLockScreen(v75) )
            {
              xxxSetForegroundWindow2(0LL, 0LL, 0, 0);
              v73 = (unsigned int *)gbLockScreenActive;
            }
            ClearKeyboardStates();
          }
          GreLddmProcessLockScreen(*v73);
          goto LABEL_15;
        case 0xACu:
          v140 = InteractiveControlManager::Instance();
          PointerDeviceSettings = (int)InteractiveControlManager::GetExternalParameters(
                                         v140,
                                         (struct tagINTERACTIVECTRL_PARAMETERS *)pszDest) >= 0;
          goto LABEL_15;
        case 0xADu:
          v141 = InteractiveControlManager::Instance();
          if ( (int)InteractiveControlManager::SetExternalParameters(
                      v141,
                      (struct tagINTERACTIVECTRL_PARAMETERS *)pszDest,
                      v174) >= 0 )
            goto LABEL_315;
          return PointerDeviceSettings;
        default:
          goto LABEL_28;
      }
    }
    if ( v170 == 4135 )
    {
      if ( (unsigned int)CheckDesktopPolicy(0LL, 112LL) )
      {
        v7 = 0;
        PointerDeviceSettings = 0;
      }
      if ( v7 )
      {
        updated = UpdateWinIniInt(0LL, 4LL, 112LL, a != 0);
        PointerDeviceSettings = updated;
      }
      if ( PointerDeviceSettings )
        gbBlockSendInputResets = a != 0;
      goto LABEL_15;
    }
LABEL_28:
    if ( v170 < 0xAE )
    {
      UserSetLastError(1439LL);
      return 0LL;
    }
    if ( (v170 & 1) != 0 )
    {
      v142 = CreateProfileUserName(v175);
      v48 = (struct _UNICODE_STRING *)v142;
      v143 = v170;
      if ( (v170 & 0x3000) == 0x1000 )
      {
        v144 = gpviCPUserPreferences;
        if ( *((_DWORD *)&gpviCPUserPreferences + 1) == 4 )
        {
          v145 = CheckDesktopPolicy(v142, *((_QWORD *)&gpviCPUserPreferences + 1));
          v144 = gpviCPUserPreferences;
          v143 = v170;
          if ( v145 )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
        }
        if ( v7 )
        {
          ProfileValue = FastGetProfileValue(v48, *(unsigned int *)(v144 + 4), *(_QWORD *)(v144 + 8), 0LL, &v176, 8, 0);
          memmove((char *)&v176 + ProfileValue, (char *)&gpdwCPUserPreferencesMask + ProfileValue, 8LL - ProfileValue);
          v147 = (_DWORD *)&v176 + ((unsigned __int64)(v170 - 4096) >> 6);
          v148 = 1 << (((v170 - 4096) >> 1) - 32 * ((v170 - 4096) >> 6));
          if ( pszDest )
            *v147 |= v148;
          else
            *v147 &= ~v148;
          updated = FastWriteProfileValue(
                      v48,
                      *((unsigned int *)&gpviCPUserPreferences + 1),
                      *((_QWORD *)&gpviCPUserPreferences + 1),
                      3LL,
                      &v176,
                      8);
          PointerDeviceSettings = updated;
          v143 = v170;
        }
        if ( PointerDeviceSettings )
        {
          v149 = v143 - 4096;
          v150 = (unsigned __int64)(v143 - 4096) >> 6;
          v151 = (_DWORD *)&gpdwCPUserPreferencesMask + v150;
          v152 = (v149 >> 1) - 32 * (v149 >> 6);
          v153 = 1 << v152;
          if ( pszDest )
            *v151 |= v153;
          else
            *v151 &= ~v153;
          switch ( v170 )
          {
            case 0x1005u:
              v155 = gpsi;
              v156 = ((unsigned __int8)gpdwCPUserPreferencesMask ^ (unsigned __int8)*(_DWORD *)(gpsi + 8684LL)) & 4;
              goto LABEL_890;
            case 0x1007u:
              v155 = gpsi;
              v156 = ((unsigned __int8)gpdwCPUserPreferencesMask ^ (unsigned __int8)*(_DWORD *)(gpsi + 8684LL)) & 8;
              goto LABEL_890;
            case 0x1009u:
              goto LABEL_860;
            case 0x100Bu:
              v155 = gpsi;
              v156 = ((unsigned __int8)gpdwCPUserPreferencesMask ^ (unsigned __int8)*(_DWORD *)(gpsi + 8684LL)) & 0x20;
LABEL_890:
              *(_DWORD *)(v155 + 8684) ^= v156;
              goto LABEL_891;
            case 0x101Bu:
              SetPointer(1);
              goto LABEL_891;
            case 0x1023u:
              goto LABEL_861;
            case 0x1025u:
              v157 = (void *)ReferenceDwmApiPort(v152, v150, v170, 0x1C0000000uLL);
              DwmAsyncNotifyWindowShadowChange(v157);
              goto LABEL_891;
            case 0x103Fu:
              *(_DWORD *)(gpsi + 8684LL) = (unsigned int)gpdwCPUserPreferencesMask ^ ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 8684LL)) & 0x7FFFFFFF;
              SetPointer(1);
LABEL_860:
              CreateBitmapStrip();
LABEL_861:
              v154 = *(_QWORD *)(gptiCurrent + 408LL);
              if ( !v154 )
                goto LABEL_863;
              v100 = *(struct tagWND **)(*(_QWORD *)(v154 + 8) + 16LL);
              break;
            case 0x104Fu:
            case 0x1051u:
              xxxWindowEvent(0x80000007, 0LL, v170, pszDest != 0LL, 0);
              goto LABEL_891;
            default:
              goto LABEL_891;
          }
LABEL_864:
          xxxInternalInvalidate(v100, (HRGN)1, 66693LL);
        }
      }
      else
      {
        if ( *(_DWORD *)(UPDWORDPointer(v170) + 4) == 4 )
        {
          v158 = UPDWORDPointer(v170);
          if ( (unsigned int)CheckDesktopPolicy(v48, *(_QWORD *)(v158 + 8)) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
        }
        if ( v7 )
        {
          v159 = UPDWORDPointer(v170);
          v160 = UPDWORDPointer(v170);
          updated = FastWriteProfileValue(v48, *(unsigned int *)(v160 + 4), *(_QWORD *)(v159 + 8), 4LL, &pszDest, 4);
          PointerDeviceSettings = updated;
        }
        v161 = *(_DWORD *)UPDWORDPointer(v170);
        if ( PointerDeviceSettings )
        {
          v162 = (int)pszDest;
          *(_DWORD *)UPDWORDPointer(v170) = v162;
          switch ( v170 )
          {
            case 0x2007u:
              *(_DWORD *)(gpsi + 8688LL) = *(_DWORD *)UPDWORDPointer(v170);
              break;
            case 0x200Bu:
              v163 = (_BYTE *)UPDWORDPointer(v170);
              GreSetFontEnumeration(8 * (*v163 & 2 | 4));
              break;
            case 0x200Du:
              gulGamma = *(_DWORD *)UPDWORDPointer(v170);
              break;
            case 0x200Fu:
              if ( *(_DWORD *)UPDWORDPointer(v170) )
                *(_DWORD *)(gpsi + 2212LL) = *(_DWORD *)UPDWORDPointer(v170);
              break;
            case 0x2011u:
              if ( *(_DWORD *)UPDWORDPointer(v170) )
                *(_DWORD *)(gpsi + 2216LL) = *(_DWORD *)UPDWORDPointer(v170);
              break;
            case 0x2013u:
              v15 = (*(_BYTE *)UPDWORDPointer(v170) & 1) == 0;
              v164 = &dword_1C02E3E20;
              if ( v15 )
                v164 = (int *)&unk_1C02ED0D0;
              off_1C0324100 = v164;
              break;
            case 0x201Du:
              TraceLoggingMouseWheelRoutingModeChange((unsigned int)pszDest);
              break;
            case 0x201Fu:
              TraceLoggingSPISetPenVisualizationEvent(v161, (unsigned int)pszDest);
              break;
            default:
              break;
          }
        }
      }
LABEL_891:
      v72 = (__int64)v48;
LABEL_324:
      FreeProfileUserName(v72, v175);
      goto LABEL_15;
    }
    if ( (v170 & 0x3000) != 0x1000 )
    {
      v23 = (int *)UPDWORDPointer(v170);
      v24 = *v23;
      *(_DWORD *)pszDest = *v23;
      if ( v170 == 8204 && !v24 )
        *(_DWORD *)pszDest = gulGamma;
      goto LABEL_15;
    }
    v20 = 0;
    v21 = 0;
    if ( v170 >= 0x103E )
      goto LABEL_32;
    if ( (int)gpdwCPUserPreferencesMask < 0 )
    {
      if ( (v170 < 0x101B || v170 >= 0x1024) && v170 >= 0x1008 )
      {
        switch ( v170 )
        {
          case 0x1008u:
          case 0x1012u:
          case 0x1014u:
          case 0x1018u:
          case 0x101Au:
            if ( gbDisableAlpha )
              goto LABEL_844;
            break;
          case 0x100Au:
            if ( (gdwPUDFlags & 0x20000) != 0 )
              v21 = 1;
            v20 = v21;
            break;
          case 0x1024u:
            if ( gbDisableAlpha || gcOverlays )
              goto LABEL_844;
            break;
          default:
            break;
        }
      }
LABEL_32:
      if ( !v21 )
      {
        if ( v170 == 4158 && gProtocolType )
        {
          *(_DWORD *)pszDest = ((unsigned __int16)gpdwCPUserPreferencesMask & 0x3A0E) != 0;
        }
        else
        {
          v22 = *((_DWORD *)&gpdwCPUserPreferencesMask + ((unsigned __int64)(v170 - 4096) >> 6));
          *(_DWORD *)pszDest = _bittest(&v22, (unsigned __int8)(((v170 - 4096) >> 1) - 32 * ((v170 - 4096) >> 6)));
        }
        goto LABEL_15;
      }
      goto LABEL_844;
    }
    switch ( v170 )
    {
      case 0x1000u:
        goto LABEL_32;
      case 0x100Au:
        v20 = 1;
        break;
      case 0x100Cu:
      case 0x101Cu:
      case 0x101Eu:
        goto LABEL_32;
    }
LABEL_844:
    *(_DWORD *)pszDest = v20;
    goto LABEL_15;
  }
  if ( v170 == 66 || v170 > 0x1027 )
  {
LABEL_8:
    if ( (v170 & 0x3000) == 0 || (v170 & 1) == 0 )
    {
LABEL_9:
      v13 = 2LL;
      v14 = 2;
      if ( !RtlAreAllAccessesGranted(*(_DWORD *)(v176 + 648), 2u) )
      {
        UserSetLastError(5LL);
        return 0LL;
      }
LABEL_10:
      v15 = v14 == 2;
      CurrentProcessWin32Process = v176;
      if ( !v15 )
        goto LABEL_12;
      goto LABEL_11;
    }
LABEL_24:
    v14 = 16;
    if ( !(unsigned int)CheckWinstaAttributeAccess(16LL, v10) )
      return 0LL;
    v13 = 2LL;
    goto LABEL_10;
  }
  if ( v170 == 4135 )
    goto LABEL_24;
  switch ( v170 )
  {
    case 2u:
    case 4u:
    case 6u:
    case 0xBu:
    case 0xFu:
    case 0x11u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x17u:
    case 0x1Au:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
    case 0x20u:
    case 0x21u:
    case 0x22u:
    case 0x24u:
    case 0x25u:
    case 0x2Au:
    case 0x2Cu:
    case 0x2Eu:
    case 0x2Fu:
    case 0x33u:
    case 0x35u:
    case 0x37u:
    case 0x39u:
    case 0x3Bu:
    case 0x3Du:
    case 0x41u:
    case 0x43u:
    case 0x45u:
    case 0x47u:
    case 0x49u:
    case 0x4Bu:
    case 0x4Cu:
    case 0x4Du:
    case 0x57u:
    case 0x58u:
    case 0x5Au:
    case 0x5Bu:
    case 0x60u:
    case 0x63u:
    case 0x65u:
    case 0x67u:
    case 0x69u:
    case 0x6Bu:
    case 0x6Du:
    case 0x77u:
    case 0xA1u:
    case 0xA3u:
      goto LABEL_24;
    case 0xDu:
    case 0x18u:
      if ( ((unsigned __int64)pszDest & 0xFFFFFFFFFFFF0000uLL) != 0 )
        goto LABEL_9;
      if ( a )
        goto LABEL_24;
      result = 1LL;
      break;
    default:
      goto LABEL_8;
  }
  return result;
}
