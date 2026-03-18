/*
 * XREFs of xxxSystemParametersInfo @ 0x1C004D930
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C0044158 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     bSetDevDragWidth @ 0x1C0045E2C (bSetDevDragWidth.c)
 *     SetMouseTrails @ 0x1C00470EC (SetMouseTrails.c)
 *     SetPointer @ 0x1C0047300 (SetPointer.c)
 *     xxxDesktopRecalc @ 0x1C00494C8 (xxxDesktopRecalc.c)
 *     GreSetFontEnumeration @ 0x1C0049BA0 (GreSetFontEnumeration.c)
 *     ?UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0x1C0049C20 (-UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 *     UpdateDesktopThresholds @ 0x1C0049C80 (UpdateDesktopThresholds.c)
 *     GetMonitorWorkRect @ 0x1C004BA28 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     GetDPIMetrics @ 0x1C004C99C (GetDPIMetrics.c)
 *     ReadPointerDeviceSettings @ 0x1C004EE50 (ReadPointerDeviceSettings.c)
 *     xxxUpdateSystemCursorsFromRegistry @ 0x1C00515BC (xxxUpdateSystemCursorsFromRegistry.c)
 *     CheckWinstaAttributeAccess @ 0x1C0053250 (CheckWinstaAttributeAccess.c)
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C005E6A0 (IsWindowUnderActiveLockScreen.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GetWindowNCMetrics @ 0x1C0076268 (GetWindowNCMetrics.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     CreateBitmapStrip @ 0x1C0083E70 (CreateBitmapStrip.c)
 *     RtlInitLargeUnicodeString @ 0x1C0093D64 (RtlInitLargeUnicodeString.c)
 *     xxxBroadcastMessageEx @ 0x1C009D190 (xxxBroadcastMessageEx.c)
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     RtlStringCchPrintfW @ 0x1C00DAAA4 (RtlStringCchPrintfW.c)
 *     SetKeyboardRate @ 0x1C00DE1A0 (SetKeyboardRate.c)
 *     SetDesktopPattern @ 0x1C00F9308 (SetDesktopPattern.c)
 *     GetDPIServerInfo @ 0x1C0108F94 (GetDPIServerInfo.c)
 *     GetProcessDpiServerInfo @ 0x1C0108FBC (GetProcessDpiServerInfo.c)
 *     ClearKeyboardStates @ 0x1C0111E78 (ClearKeyboardStates.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     _SetDoubleClickTime @ 0x1C0114210 (_SetDoubleClickTime.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0117350 (xxxUpdateSystemIconsFromRegistry.c)
 *     GetEasTimeout @ 0x1C011BADC (GetEasTimeout.c)
 *     ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C011DE30 (-PostWindowArrangementCheck@@YAXK@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C011EB54 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C011EE70 (LoadWallpaperFilenameFromRegistry.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0121644 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     GetKbdLangSwitch @ 0x1C01243F8 (GetKbdLangSwitch.c)
 *     xxxSetIMEShowStatus @ 0x1C0124A80 (xxxSetIMEShowStatus.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C0125B50 (xxxInvalidateWallpaperWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     _SwapMouseButton @ 0x1C01A19A0 (_SwapMouseButton.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C01A2588 (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C01A3278 (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C01A3330 (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C01A33E8 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?IsSPIActionAllowedForFilteredProcess@@YAHI@Z @ 0x1C01B7464 (-IsSPIActionAllowedForFilteredProcess@@YAHI@Z.c)
 *     ?SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z @ 0x1C01B7C44 (-SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01B7D88 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01B7F90 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01B807C (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01B8168 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01B8680 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     UpdateWinIniInt @ 0x1C01B8B84 (UpdateWinIniInt.c)
 *     xxxMetricsRecalc @ 0x1C01B8F64 (xxxMetricsRecalc.c)
 *     WritePointerDeviceSettings @ 0x1C01F3548 (WritePointerDeviceSettings.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C021B984 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C021CD8C (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     GetMonitorMenuRect @ 0x1C023A788 (GetMonitorMenuRect.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C024D424 (DwmAsyncNotifyWindowShadowChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSystemParametersInfo(__int64 a1, unsigned int a2, wchar_t *a3, __int16 a4)
{
  __int64 CurrentProcessWin32Process; // rbx
  int updated; // r13d
  unsigned int v7; // edi
  unsigned int PointerDeviceSettings; // esi
  int v9; // r15d
  __int64 v10; // rcx
  ACCESS_MASK v11; // ecx
  __int64 v12; // rbx
  int v13; // edi
  bool v14; // zf
  NTSTRSAFE_PWSTR v15; // rdx
  _OWORD *v16; // rcx
  NTSTRSAFE_PWSTR v17; // rax
  __int64 result; // rax
  __int64 v19; // rdx
  int v20; // r9d
  int v21; // r8d
  int v22; // ecx
  int *v23; // rax
  int v24; // ecx
  int v25; // ecx
  __int64 DPIMetrics; // rax
  __int64 DispInfo; // rax
  NTSTRSAFE_PWSTR v28; // rbx
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  NTSTRSAFE_PWSTR v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  NTSTRSAFE_PWSTR v38; // rdx
  NTSTRSAFE_PWSTR v39; // rcx
  unsigned int v40; // edi
  int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // ecx
  int v45; // edi
  int v46; // r15d
  int v47; // r15d
  struct _UNICODE_STRING *v48; // rdi
  int v49; // r15d
  NTSTRSAFE_PWSTR v50; // r8
  NTSTRSAFE_PWSTR v51; // r8
  int v52; // ecx
  int v53; // edx
  NTSTRSAFE_PWSTR v54; // r9
  NTSTRSAFE_PWSTR v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  struct tagMONITORRECTS *v61; // rdi
  unsigned int v62; // ebx
  __int64 v63; // rdx
  NTSTRSAFE_PWSTR v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rbx
  unsigned int v68; // edx
  const GUID *v69; // r8
  const GUID *v70; // r9
  unsigned int i; // ebx
  __int64 ProfileUserName; // rbx
  int v73; // r15d
  int v74; // esi
  int v75; // eax
  int v76; // r14d
  unsigned __int8 v77; // al
  NTSTRSAFE_PWSTR v78; // rcx
  unsigned int v79; // ebx
  struct _UNICODE_STRING *v80; // rax
  __int64 ProcessDpiServerInfo; // rax
  unsigned int v82; // ebx
  __int64 v83; // rcx
  unsigned int DpiForSystem; // eax
  unsigned int v85; // r14d
  __int64 v86; // rcx
  unsigned int v87; // ebx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  unsigned int v91; // eax
  unsigned int v92; // r14d
  __int64 v93; // rcx
  unsigned int v94; // ebx
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rax
  int v98; // eax
  __int64 v99; // rax
  __int64 v100; // rax
  struct tagWND *v101; // rcx
  struct _UNICODE_STRING *v102; // rdi
  int v103; // r15d
  int v104; // ebx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  unsigned int v112; // eax
  NTSTRSAFE_PWSTR v113; // rdi
  unsigned int v114; // r8d
  int v115; // edx
  unsigned int v116; // edx
  struct _UNICODE_STRING *v117; // r14
  NTSTRSAFE_PWSTR v118; // rbx
  int v119; // edi
  int v120; // edx
  unsigned int v121; // edx
  NTSTRSAFE_PWSTR v122; // rbx
  int v123; // edx
  unsigned int v124; // edx
  NTSTRSAFE_PWSTR v125; // rbx
  int v126; // edx
  struct _UNICODE_STRING *v127; // rdi
  unsigned int v128; // r9d
  __int64 v129; // r14
  int v130; // r13d
  const wchar_t *v131; // r9
  const wchar_t *v132; // r9
  struct tagSOUNDSENTRYW *v133; // rbx
  int v134; // edx
  unsigned int v135; // edx
  struct _UNICODE_STRING *v136; // rdi
  __int64 v137; // rbx
  __int64 v138; // rbx
  unsigned int v139; // edi
  __int64 v140; // rax
  __int64 v141; // r15
  const wchar_t *v142; // rbx
  const wchar_t *v143; // r9
  int v144; // r13d
  NTSTRSAFE_PWSTR v145; // rcx
  int v146; // eax
  int v147; // ecx
  InteractiveControlManager *v148; // rax
  InteractiveControlManager *v149; // rax
  __int64 v150; // rax
  unsigned int v151; // r8d
  int v152; // eax
  int v153; // r15d
  unsigned int ProfileValue; // eax
  _DWORD *v155; // rdx
  int v156; // eax
  unsigned int v157; // ecx
  _DWORD *v158; // r8
  int v159; // eax
  __int64 v160; // rax
  __int64 v161; // rdx
  int v162; // eax
  void *v163; // rax
  __int64 v164; // rax
  int v165; // r15d
  __int64 v166; // rbx
  __int64 v167; // rax
  unsigned int v168; // r14d
  int v169; // ebx
  _BYTE *v170; // rax
  int *v171; // rax
  NTSTRSAFE_PWSTR pszDest; // [rsp+48h] [rbp-4E0h] BYREF
  unsigned int v174; // [rsp+50h] [rbp-4D8h] BYREF
  int v175; // [rsp+58h] [rbp-4D0h] BYREF
  int v176; // [rsp+5Ch] [rbp-4CCh] BYREF
  int v177; // [rsp+60h] [rbp-4C8h] BYREF
  int v178; // [rsp+64h] [rbp-4C4h] BYREF
  _BYTE v179[24]; // [rsp+68h] [rbp-4C0h] BYREF
  int v180; // [rsp+80h] [rbp-4A8h]
  __int64 v181; // [rsp+88h] [rbp-4A0h] BYREF
  __int64 v182; // [rsp+90h] [rbp-498h] BYREF
  BOOL v183; // [rsp+98h] [rbp-490h]
  __int64 v184; // [rsp+A0h] [rbp-488h] BYREF
  __int128 v185; // [rsp+B0h] [rbp-478h]
  _DWORD v186[2]; // [rsp+C0h] [rbp-468h] BYREF
  char *v187; // [rsp+C8h] [rbp-460h]
  char v188; // [rsp+E0h] [rbp-448h] BYREF
  __int128 v189; // [rsp+F0h] [rbp-438h] BYREF
  _BYTE v190[16]; // [rsp+100h] [rbp-428h] BYREF
  _BYTE v191[24]; // [rsp+110h] [rbp-418h] BYREF
  __int128 v192; // [rsp+128h] [rbp-400h] BYREF
  __int128 v193; // [rsp+138h] [rbp-3F0h] BYREF
  __int128 v194; // [rsp+148h] [rbp-3E0h] BYREF
  _BYTE v195[16]; // [rsp+158h] [rbp-3D0h] BYREF
  __int128 v196; // [rsp+168h] [rbp-3C0h] BYREF
  __int64 v197; // [rsp+178h] [rbp-3B0h] BYREF
  __int64 v198; // [rsp+180h] [rbp-3A8h]
  __int128 v199; // [rsp+188h] [rbp-3A0h] BYREF
  __int128 v200; // [rsp+198h] [rbp-390h] BYREF
  __int128 v201; // [rsp+1A8h] [rbp-380h] BYREF
  __int128 v202; // [rsp+1B8h] [rbp-370h]
  _BYTE v203[20]; // [rsp+1C8h] [rbp-360h] BYREF
  __int64 v204; // [rsp+1DCh] [rbp-34Ch]
  int v205; // [rsp+1E4h] [rbp-344h]
  _BYTE v206[20]; // [rsp+1E8h] [rbp-340h] BYREF
  unsigned int v207; // [rsp+1FCh] [rbp-32Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+200h] [rbp-328h] BYREF
  unsigned int *v209; // [rsp+220h] [rbp-308h]
  __int64 v210; // [rsp+228h] [rbp-300h]
  wchar_t v211[40]; // [rsp+230h] [rbp-2F8h] BYREF
  _WORD v212[40]; // [rsp+280h] [rbp-2A8h] BYREF
  _BYTE v213[528]; // [rsp+2D0h] [rbp-258h] BYREF

  v174 = a1;
  pszDest = a3;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v182 = CurrentProcessWin32Process;
  updated = 0;
  v175 = 0;
  v178 = a4 & 1;
  v7 = (a4 & 1) != 0;
  v177 = v7;
  v183 = (a4 & 2) != 0;
  if ( (a4 & 1) != 0 )
  {
    PointerDeviceSettings = 0;
    v176 = 0;
  }
  else
  {
    PointerDeviceSettings = 1;
    v176 = 1;
  }
  v9 = a4 & 0x8000;
  v180 = 0;
  v212[0] = 0;
  if ( v174 >= 0x4F || v174 < 0x40 )
  {
    switch ( v174 )
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
        goto LABEL_250;
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
  if ( (unsigned __int8)PsIsWin32KFilterEnabled() && !(unsigned int)IsSPIActionAllowedForFilteredProcess(v174) )
  {
    EtwTraceSPIBlockedByFiltering(v68);
    if ( dword_1C0320FA0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320FA0, 0x400000000000uLL) )
    {
      v209 = &v174;
      v210 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320FA0, &unk_1C02E8865, v69, v70, 3u, &pData);
      return 0LL;
    }
    return 0LL;
  }
  v10 = gpepCSRSS;
  if ( *(_QWORD *)CurrentProcessWin32Process == gpepCSRSS )
  {
    v12 = 2LL;
LABEL_12:
    PointerDeviceSettings = 1;
    v176 = 1;
LABEL_13:
    if ( v174 == 66 )
    {
      v15 = pszDest;
      *((_DWORD *)pszDest + 1) = gHighContrast[1];
      v16 = (_OWORD *)*((_QWORD *)v15 + 1);
      v17 = gHighContrastDefaultScheme;
      do
      {
        *v16 = *(_OWORD *)v17;
        v16[1] = *((_OWORD *)v17 + 1);
        v16[2] = *((_OWORD *)v17 + 2);
        v16[3] = *((_OWORD *)v17 + 3);
        v16[4] = *((_OWORD *)v17 + 4);
        v16[5] = *((_OWORD *)v17 + 5);
        v16[6] = *((_OWORD *)v17 + 6);
        v16 += 8;
        *(v16 - 1) = *((_OWORD *)v17 + 7);
        v17 += 64;
        --v12;
      }
      while ( v12 );
      goto LABEL_16;
    }
    if ( v174 <= 0x1026 )
    {
      if ( v174 != 4134 )
      {
        v19 = v174 - 1;
        switch ( v174 )
        {
          case 1u:
            *(_DWORD *)pszDest = (gdwPUDFlags >> 19) & 1;
            goto LABEL_16;
          case 2u:
            if ( v7 )
            {
              RtlLoadStringOrError(105 - (unsigned int)(a2 != 0), v211, 10LL);
              updated = FastUpdateWinIni(0LL, 11LL, 9LL, v211);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
            {
              if ( a2 )
                gdwPUDFlags |= 0x80000u;
              else
                gdwPUDFlags &= ~0x80000u;
            }
            goto LABEL_16;
          case 3u:
            *(_DWORD *)pszDest = gMouseThresh1;
            *((_DWORD *)pszDest + 1) = gMouseThresh2;
            *((_DWORD *)pszDest + 2) = (unsigned __int8)MouseAccelerationEnabled();
            goto LABEL_16;
          case 4u:
            if ( !v7 )
              goto LABEL_374;
            ProfileUserName = CreateProfileUserName(v179);
            v73 = UpdateWinIniInt(ProfileUserName, 12LL, 10LL, *(unsigned int *)pszDest);
            v74 = UpdateWinIniInt(ProfileUserName, 12LL, 11LL, *((unsigned int *)pszDest + 1));
            v75 = UpdateWinIniInt(ProfileUserName, 12LL, 12LL, *((unsigned int *)pszDest + 2));
            v76 = v75;
            if ( !v73 )
              goto LABEL_369;
            if ( v74 && v75 )
            {
              updated = 1;
            }
            else
            {
              UpdateWinIniInt(ProfileUserName, 12LL, 10LL, (unsigned int)gMouseThresh1);
LABEL_369:
              if ( v74 )
                UpdateWinIniInt(ProfileUserName, 12LL, 11LL, (unsigned int)gMouseThresh2);
              if ( v76 )
              {
                v77 = MouseAccelerationEnabled();
                UpdateWinIniInt(ProfileUserName, 12LL, 12LL, v77);
              }
            }
            PointerDeviceSettings = updated;
            FreeProfileUserName(ProfileUserName, v179);
LABEL_374:
            if ( PointerDeviceSettings )
            {
              v78 = pszDest;
              gMouseThresh1 = *(_DWORD *)pszDest;
              gMouseThresh2 = *((_DWORD *)pszDest + 1);
              LOBYTE(v78) = *((_DWORD *)pszDest + 2) != 0;
              EnableMouseAcceleration(v78);
            }
            goto LABEL_16;
          case 5u:
            *(_DWORD *)pszDest = *(_DWORD *)(GetDPIServerInfo() + 4);
            goto LABEL_16;
          case 6u:
            v79 = 1;
            if ( (int)a2 > 1 )
              v79 = a2;
            if ( v79 >= 0x32 )
              v79 = 50;
            if ( v79 == *(_DWORD *)(GetDPIServerInfo() + 4) )
              goto LABEL_386;
            v80 = (struct _UNICODE_STRING *)CreateProfileUserName(v179);
            v48 = v80;
            if ( v177 )
            {
              updated = SetWindowMetricInt(v80, 0x88u, v79);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
            {
              xxxSetAndDrawNCMetrics(v48, v79, 0LL);
              ProcessDpiServerInfo = GetProcessDpiServerInfo();
              bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 32LL), *(_DWORD *)(ProcessDpiServerInfo + 4) + 3);
            }
            goto LABEL_796;
          case 0xAu:
            *(_DWORD *)pszDest = gnKeyboardSpeed & 0x1F;
            goto LABEL_16;
          case 0xBu:
            v44 = a2;
            if ( a2 > 0x1F )
            {
              v44 = 31;
              a2 = 31;
            }
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 13LL, 13LL, v44);
              PointerDeviceSettings = updated;
              v44 = a2;
            }
            if ( PointerDeviceSettings )
            {
              gnKeyboardSpeed = v44 | gnKeyboardSpeed & 0xFFFFFFE0;
              SetKeyboardRate();
            }
            goto LABEL_16;
          case 0xDu:
            if ( ((unsigned __int64)pszDest & 0xFFFFFFFFFFFF0000uLL) != 0 )
            {
              DpiForSystem = GetDpiForSystem();
              *(_DWORD *)pszDest = GetDpiDependentMetric(18LL, DpiForSystem);
            }
            else
            {
              v85 = a2;
              if ( a2 )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v19) & 0xF) != 0 )
                {
                  v88 = PsGetCurrentProcessWin32Process(v86);
                  v87 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 9974LL), *(unsigned __int16 *)(v88 + 284));
                  v90 = PsGetCurrentProcessWin32Process(v89);
                  v85 = EngMulDiv(v87, 96, *(unsigned __int16 *)(v90 + 284));
                }
                else
                {
                  v87 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 9974LL), 96);
                }
                if ( v87 <= *(_DWORD *)(gpsi + 2288LL) )
                  v87 = *(_DWORD *)(gpsi + 2288LL);
                if ( v85 <= *(_DWORD *)(gpsi + 2408LL) )
                  v85 = *(_DWORD *)(gpsi + 2408LL);
                if ( v7 )
                {
                  updated = SetWindowMetricInt(0LL, 0x40u, v87);
                  PointerDeviceSettings = updated;
                }
                if ( PointerDeviceSettings )
                {
                  SetDpiDepSysMet(18LL, v87);
                  *(_DWORD *)(gpsi + 2460LL) = v85;
                }
              }
            }
            goto LABEL_16;
          case 0xEu:
            *(_DWORD *)pszDest = (int)abs32(giScreenSaveTimeOutMs) / 1000;
            goto LABEL_16;
          case 0xFu:
            if ( gfSwitchInProgress )
              return 0LL;
            if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) && !v9 )
              goto LABEL_430;
            v45 = 1000 * a2;
            v46 = 1000 * GetEasTimeout();
            if ( v46 )
            {
              if ( (v180 = 1, giScreenSaveTimeOutMs > 0) && v46 < v45 || v45 <= 0 )
              {
                UserSetLastError(1260LL);
                v177 = 0;
                PointerDeviceSettings = 0;
                v176 = 0;
              }
            }
            if ( !(unsigned int)CheckDesktopPolicy(0LL, 99LL) )
              goto LABEL_136;
            if ( v180 )
            {
              v178 = 0;
              if ( (unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL, 0LL, &v178, 2)
                && (v98 = 1000 * v178, (v178 = v98) != 0)
                && v98 < v46
                && giScreenSaveTimeOutMs > 0
                && v98 < v45 )
              {
                UserSetLastError(1260LL);
                v47 = 0;
                PointerDeviceSettings = 0;
                v176 = 0;
              }
              else
              {
LABEL_136:
                v47 = v177;
              }
            }
            else
            {
              v47 = 0;
              PointerDeviceSettings = 0;
              v176 = 0;
            }
            if ( v47 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 99LL, v45 / 0x3E8u);
              v175 = updated;
              PointerDeviceSettings = updated;
              v176 = updated;
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
                updated = v175;
                PointerDeviceSettings = v176;
              }
              if ( giScreenSaveTimeOutMs < 0 && !v180 )
                v45 = -1000 * a2;
              giScreenSaveTimeOutMs = v45;
            }
            goto LABEL_16;
          case 0x10u:
            *(_DWORD *)pszDest = giScreenSaveTimeOutMs > 0;
            goto LABEL_16;
          case 0x11u:
            if ( a2 - 2 <= 0xFFFFFFFC )
              return 0LL;
            if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) && !v9 )
              goto LABEL_430;
            LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = a2 == -1;
            if ( gfSwitchInProgress )
              return 0LL;
            if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL) )
            {
              v7 = 0;
              PointerDeviceSettings = 0;
              v176 = 0;
            }
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 100LL, a2);
              v175 = updated;
              PointerDeviceSettings = updated;
              v176 = updated;
            }
            if ( !PointerDeviceSettings )
              goto LABEL_16;
            if ( !gbBlockSendInputResets )
            {
              CInputGlobals::UpdateLastInputTime(
                gpInputGlobals,
                (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                6LL);
              updated = v175;
              PointerDeviceSettings = v176;
            }
            if ( giScreenSaveTimeOutMs >= 0 )
              goto LABEL_161;
            if ( a2 )
              goto LABEL_162;
            if ( giScreenSaveTimeOutMs >= 0 )
            {
LABEL_161:
              if ( !a2 )
LABEL_162:
                giScreenSaveTimeOutMs = -giScreenSaveTimeOutMs;
            }
            goto LABEL_16;
          case 0x14u:
            v65 = CreateProfileUserName(v179);
            if ( (unsigned int)CheckDesktopPolicy(v65, 67LL) )
            {
              v7 = 0;
              PointerDeviceSettings = 0;
            }
            if ( !v7 )
              goto LABEL_301;
            if ( a2 == -1 )
            {
              PointerDeviceSettings = 1;
            }
            else
            {
              FastGetProfileStringFromIDW(v65, 4LL, 67LL, &word_1C02D9FB8, v213, 260, 8);
              updated = FastUpdateWinIni(v65, 4LL, 67LL, pszDest);
              PointerDeviceSettings = updated;
LABEL_301:
              if ( !PointerDeviceSettings )
                goto LABEL_304;
            }
            if ( (unsigned int)xxxSetDeskWallpaper(v65, pszDest) )
            {
              xxxInvalidateWallpaperWindow();
              goto LABEL_304;
            }
            if ( v7 )
            {
              if ( a2 == -1 )
                goto LABEL_304;
              FastUpdateWinIni(v65, 4LL, 67LL, v213);
            }
            PointerDeviceSettings = 0;
            updated = 0;
LABEL_304:
            v66 = v65;
            goto LABEL_305;
          case 0x15u:
            if ( a2 == -1 && pszDest )
              goto LABEL_250;
            v48 = (struct _UNICODE_STRING *)CreateProfileUserName(v179);
            if ( (unsigned int)CheckDesktopPolicy(v48, 2LL) )
            {
              v49 = 0;
              PointerDeviceSettings = 0;
            }
            else
            {
              v49 = v177;
            }
            if ( v49 && pszDest )
            {
              FastGetProfileStringFromIDW(v48, 4LL, 2LL, &word_1C02D9FB8, v213, 260, 0);
              updated = FastUpdateWinIni(v48, 4LL, 2LL, pszDest);
              PointerDeviceSettings = updated;
            }
            if ( !PointerDeviceSettings )
              goto LABEL_796;
            if ( !(unsigned int)SetDesktopPattern(v48, pszDest) )
            {
              if ( v49 && pszDest )
                FastUpdateWinIni(v48, 4LL, 2LL, v213);
              FreeProfileUserName(v48, v179);
              return 0LL;
            }
            xxxSendNotifyMessage(-1LL, 21LL, 0LL, 0LL, 1);
            v100 = *(_QWORD *)(gptiCurrent + 432LL);
            if ( v100 )
              v101 = *(struct tagWND **)(*(_QWORD *)(v100 + 8) + 16LL);
            else
LABEL_767:
              v101 = 0LL;
            goto LABEL_768;
          case 0x16u:
            *(_DWORD *)pszDest = (gnKeyboardSpeed >> 5) & 3;
            goto LABEL_16;
          case 0x17u:
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 13LL, 106LL, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
            {
              gnKeyboardSpeed = gnKeyboardSpeed & 0xFFFFFF9F | (32 * a2);
              SetKeyboardRate();
            }
            goto LABEL_16;
          case 0x18u:
            if ( ((unsigned __int64)pszDest & 0xFFFFFFFFFFFF0000uLL) != 0 )
            {
              v91 = GetDpiForSystem();
              *(_DWORD *)pszDest = GetDpiDependentMetric(19LL, v91);
            }
            else
            {
              v92 = a2;
              if ( a2 )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v19) & 0xF) != 0 )
                {
                  v95 = PsGetCurrentProcessWin32Process(v93);
                  v94 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 9974LL), *(unsigned __int16 *)(v95 + 284));
                  v97 = PsGetCurrentProcessWin32Process(v96);
                  v92 = EngMulDiv(v94, 96, *(unsigned __int16 *)(v97 + 284));
                }
                else
                {
                  v94 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 9974LL), 96);
                }
                if ( v94 <= *(_DWORD *)(gpsi + 2292LL) )
                  v94 = *(_DWORD *)(gpsi + 2292LL);
                if ( v92 <= *(_DWORD *)(gpsi + 2412LL) )
                  v92 = *(_DWORD *)(gpsi + 2412LL);
                if ( v7 )
                {
                  updated = SetWindowMetricInt(0LL, 0x41u, v94);
                  PointerDeviceSettings = updated;
                }
                if ( PointerDeviceSettings )
                {
                  SetDpiDepSysMet(19LL, v94);
                  *(_DWORD *)(gpsi + 2464LL) = v92;
                }
              }
            }
            goto LABEL_16;
          case 0x19u:
            *(_DWORD *)pszDest = (gdwPUDFlags >> 21) & 1;
            goto LABEL_16;
          case 0x1Au:
            if ( v7 )
            {
              updated = SetWindowMetricInt(0LL, 0x42u, a2 != 0);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
            {
              if ( a2 )
                gdwPUDFlags |= 0x200000u;
              else
                gdwPUDFlags &= ~0x200000u;
              xxxMetricsRecalc(2, 0, 0, 0, 0, 0, 0);
            }
            goto LABEL_16;
          case 0x1Bu:
            *(_DWORD *)pszDest = *(_DWORD *)(gpsi + 2040LL);
            goto LABEL_16;
          case 0x1Cu:
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 3LL, 96LL, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
            {
              *(_DWORD *)(gpsi + 2040LL) = a2 != 0;
              TraceLoggingSPISetMenuDropAlignmentEvent();
            }
            goto LABEL_16;
          case 0x1Du:
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 97LL, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              *(_DWORD *)(gpsi + 2024LL) = a2;
            goto LABEL_16;
          case 0x1Eu:
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 98LL, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              *(_DWORD *)(gpsi + 2028LL) = a2;
            goto LABEL_16;
          case 0x1Fu:
            DPIMetrics = GetDPIMetrics(v10, v19);
            GreExtGetObjectW(*(HBRUSH *)(DPIMetrics + 64), 92LL, (char *)pszDest);
            goto LABEL_16;
          case 0x20u:
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 6LL, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              SetDoubleClickTime(a2);
            goto LABEL_16;
          case 0x21u:
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 5LL, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              SwapMouseButton(a2 != 0);
            goto LABEL_16;
          case 0x22u:
            if ( pszDest )
            {
              if ( a2 != 92 )
                return 0LL;
            }
            else if ( a2 )
            {
              return 0LL;
            }
            v102 = (struct _UNICODE_STRING *)CreateProfileUserName(v179);
            v103 = v177;
            v104 = xxxSetSPIMetrics(v102, v174, pszDest, v177, &v175);
            FreeProfileUserName(v102, v179);
            updated = v175;
            if ( v104 )
            {
              if ( v103 )
                PointerDeviceSettings = v175;
            }
            else
            {
              PointerDeviceSettings = 0;
            }
            goto LABEL_16;
          case 0x23u:
            *(_DWORD *)pszDest = 1;
            goto LABEL_16;
          case 0x24u:
            goto LABEL_16;
          case 0x25u:
            if ( (unsigned int)CheckDesktopPolicy(0LL, 107LL) )
            {
              v7 = 0;
              PointerDeviceSettings = 0;
            }
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 107LL, a2 == 1);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
            {
              if ( a2 == 1 )
                gdwPUDFlags |= 0x100000u;
              else
                gdwPUDFlags &= ~0x100000u;
            }
            goto LABEL_16;
          case 0x26u:
            if ( (gdwPUDFlags & 0x100000) == 0 )
              goto LABEL_55;
            v25 = 1;
            goto LABEL_41;
          case 0x29u:
            if ( !pszDest )
              return 0LL;
            GetWindowNCMetrics();
            goto LABEL_16;
          case 0x2Au:
          case 0x2Cu:
          case 0x2Eu:
          case 0x49u:
            if ( (unsigned int)xxxSetSPIMetrics(0LL, v174, pszDest, v7, &v175) )
            {
              if ( v7 )
              {
                updated = v175;
                PointerDeviceSettings = v175;
LABEL_267:
                RtlLoadStringOrError(135LL, v212, 40LL);
                goto LABEL_16;
              }
            }
            else
            {
              PointerDeviceSettings = 0;
            }
            updated = v175;
            goto LABEL_267;
          case 0x2Bu:
            v54 = pszDest;
            *(_DWORD *)pszDest = 20;
            *((_DWORD *)v54 + 1) = *(_DWORD *)(gpsi + 2108LL) - 6;
            *((_DWORD *)v54 + 2) = *(_DWORD *)(gpsi + 2068LL) - *(_DWORD *)(gpsi + 2108LL);
            *((_DWORD *)v54 + 3) = *(_DWORD *)(gpsi + 2072LL) - *(_DWORD *)(gpsi + 2112LL);
            *((_DWORD *)v54 + 4) = *(_DWORD *)(gpsi + 2104LL);
            goto LABEL_16;
          case 0x2Du:
            v28 = pszDest;
            *(_DWORD *)pszDest = 108;
            v29 = GetDpiForSystem();
            *((_DWORD *)v28 + 1) = GetDpiDependentMetric(18LL, v29);
            v30 = GetDpiForSystem();
            *((_DWORD *)v28 + 2) = GetDpiDependentMetric(19LL, v30);
            *((_DWORD *)v28 + 3) = (gdwPUDFlags & 0x200000) != 0;
            v33 = GetDPIMetrics(v32, v31);
            GreExtGetObjectW(*(HBRUSH *)(v33 + 64), 92LL, (char *)v28 + 16);
            goto LABEL_16;
          case 0x2Fu:
            v55 = pszDest;
            if ( pszDest )
            {
              if ( *((_DWORD *)pszDest + 2) < *(_DWORD *)pszDest || *((_DWORD *)pszDest + 3) < *((_DWORD *)pszDest + 1) )
                return 0LL;
              v56 = MonitorFromRect((struct tagRECT *)pszDest);
            }
            else
            {
              v56 = *(_QWORD *)(GetDispInfo() + 88);
            }
            v181 = v56;
            v200 = *GetMonitorRect(&v193, v56);
            if ( !pszDest )
              v55 = (NTSTRSAFE_PWSTR)&v200;
            if ( (unsigned int)IntersectRect(&v197, v55, &v200) )
            {
              v57 = v197 - *(_QWORD *)v55;
              if ( v197 == *(_QWORD *)v55 )
                v57 = v198 - *((_QWORD *)v55 + 1);
              if ( !v57 )
              {
                v202 = *GetMonitorWorkRect(&v194, v181);
                v60 = v202 - v197;
                if ( (_QWORD)v202 == v197 )
                  v60 = *((_QWORD *)&v202 + 1) - v198;
                if ( v60 )
                {
                  v61 = 0LL;
                  v62 = a2;
                  if ( a2 )
                  {
                    v61 = (struct tagMONITORRECTS *)SnapshotMonitorRects();
                    if ( !v61 )
                      return 0LL;
                  }
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v59, v58) & 0xF) != 2
                    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432)
                    && (v106 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432) + 8LL),
                        (*(_DWORD *)(v106 + 52) & 1) != 0) )
                  {
                    v107 = *(_QWORD *)(v181 + 40);
                    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v106, v105);
                    LogicalToPhysicalDPIRect(v107 + 44, &v197, CurrentThreadDpiAwarenessContext, &v181);
                    v62 = a2;
                  }
                  else
                  {
                    v63 = v181;
                    *(_QWORD *)(*(_QWORD *)(v181 + 40) + 44LL) = v197;
                    *(_QWORD *)(*(_QWORD *)(v63 + 40) + 52LL) = v198;
                  }
                  if ( v181 == *(_QWORD *)(GetDispInfo() + 88) )
                    UpdateDesktopThresholds();
                  if ( v62 )
                  {
                    PushW32ThreadLock(v61, v191, Win32FreePool);
                    xxxDesktopRecalc(*(_QWORD *)(gptiCurrent + 432LL), v61);
                    PopAndFreeAlwaysW32ThreadLock(v191);
                  }
                  updated = 1;
                }
                PointerDeviceSettings = 1;
                goto LABEL_16;
              }
            }
LABEL_250:
            UserSetLastError(87LL);
            return 0LL;
          case 0x30u:
            DispInfo = GetDispInfo();
            *(_OWORD *)pszDest = *GetMonitorWorkRect(&v192, *(_QWORD *)(DispInfo + 88));
            goto LABEL_16;
          case 0x32u:
            if ( a2 && a2 != 24 )
              return 0LL;
            v39 = pszDest;
            if ( !pszDest || *(_DWORD *)pszDest != 24 )
              return 0LL;
            *(_OWORD *)(pszDest + 2) = *(_OWORD *)((char *)&gFilterKeys + 4);
            *((_DWORD *)v39 + 5) = *((_DWORD *)&gFilterKeys + 5);
            goto LABEL_16;
          case 0x33u:
            v113 = pszDest;
            if ( a2 && a2 != 24 )
              return 0LL;
            if ( !pszDest )
              return 0LL;
            if ( *(_DWORD *)pszDest != 24 )
              return 0LL;
            v114 = *((_DWORD *)pszDest + 2);
            if ( v114 )
            {
              if ( *((_DWORD *)pszDest + 5) )
                return 0LL;
            }
            v115 = *((_DWORD *)pszDest + 1);
            if ( (v115 & 0x7F) != v115 )
              return 0LL;
            v116 = (HIDWORD(gFilterKeys) & 2) != 0 ? v115 | 2 : v115 & 0xFFFFFFFD;
            *((_DWORD *)pszDest + 1) = v116;
            if ( v114 > 0x4E20
              || *((_DWORD *)v113 + 3) > 0x4E20u
              || *((_DWORD *)v113 + 4) > 0x4E20u
              || *((_DWORD *)v113 + 5) > 0x4E20u )
            {
              return 0LL;
            }
            if ( v177 )
            {
              v117 = (struct _UNICODE_STRING *)CreateProfileUserName(v179);
              updated = SetFilterKeys(v117, (struct tagFILTERKEYS *)v113);
              PointerDeviceSettings = updated;
              if ( !updated )
                SetFilterKeys(v117, gFilterKeys);
              FreeProfileUserName(v117, v179);
            }
            if ( PointerDeviceSettings )
            {
              memmove(gFilterKeys, v113, *(unsigned int *)v113);
              LODWORD(gFilterKeys) = 24;
              if ( (HIDWORD(gFilterKeys) & 1) == 0 )
                StopFilterKeysTimers();
              SetAccessEnabledFlag();
              if ( ((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(11LL, 2LL, 0LL, 10LL);
              PostShellHookMessagesEx(0xBuLL, 2LL, 0LL);
            }
            goto LABEL_16;
          case 0x34u:
            if ( (a2 & 0xFFFFFFF7) != 0 || !pszDest || *(_DWORD *)pszDest != 8 )
              return 0LL;
            *((_DWORD *)pszDest + 1) = HIDWORD(gToggleKeys);
            goto LABEL_16;
          case 0x35u:
            v122 = pszDest;
            if ( (a2 & 0xFFFFFFF7) != 0 )
              return 0LL;
            if ( !pszDest )
              return 0LL;
            if ( *(_DWORD *)pszDest != 8 )
              return 0LL;
            v123 = *((_DWORD *)pszDest + 1);
            if ( (v123 & 0x3F) != v123 )
              return 0LL;
            if ( (HIDWORD(gToggleKeys) & 2) != 0 )
              v124 = v123 | 2;
            else
              v124 = v123 & 0xFFFFFFFD;
            *((_DWORD *)pszDest + 1) = v124;
            if ( v7 )
            {
              RtlStringCchPrintfW(v211, 0x28uLL, L"%d", v124);
              updated = FastWriteProfileStringW(0LL, 17LL, L"Flags", v211);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
            {
              memmove(gToggleKeys, v122, *(unsigned int *)v122);
              LODWORD(gToggleKeys) = 8;
              SetAccessEnabledFlag();
            }
            goto LABEL_16;
          case 0x36u:
            if ( a2 && a2 != 28 )
              return 0LL;
            v51 = pszDest;
            if ( !pszDest || *(_DWORD *)pszDest != 28 )
              return 0LL;
            *(_OWORD *)(pszDest + 2) = *(_OWORD *)((char *)&gMouseKeys + 4);
            *(struct tagMOUSEKEYS **)(v51 + 10) = *(struct tagMOUSEKEYS *const *)((char *)&gMouseKeys + 20);
            v52 = *((_DWORD *)v51 + 1) & 0x4CFFFFFF;
            *((_DWORD *)v51 + 1) = v52;
            if ( gbMKMouseMode )
              *((_DWORD *)v51 + 1) = v52 | 0x80000000;
            v53 = *((_DWORD *)v51 + 1) | ((gwMKButtonState & 3) << 24);
            *((_DWORD *)v51 + 1) = v53;
            *((_DWORD *)v51 + 1) = v53 | ((gwMKCurrentButton & 3) << 28);
            goto LABEL_16;
          case 0x37u:
            v125 = pszDest;
            if ( a2 && a2 != 28 )
              return 0LL;
            if ( !pszDest )
              return 0LL;
            if ( *(_DWORD *)pszDest != 28 )
              return 0LL;
            v126 = *((_DWORD *)pszDest + 1) & 0x4CFFFFFF;
            *((_DWORD *)pszDest + 1) = v126;
            if ( (unsigned __int8)v126 != v126 )
              return 0LL;
            if ( (HIDWORD(gMouseKeys) & 2) != 0 )
              *((_DWORD *)v125 + 1) |= 2u;
            else
              *((_DWORD *)v125 + 1) = v126 & 0xFFFFFFFD;
            if ( (unsigned int)(*((_DWORD *)v125 + 2) - 10) > 0x15E
              || (unsigned int)(*((_DWORD *)v125 + 3) - 1000) > 0xFA0 )
            {
              return 0LL;
            }
            if ( v7 )
            {
              v127 = (struct _UNICODE_STRING *)CreateProfileUserName(v179);
              updated = SetMouseKeys(v127, (struct tagMOUSEKEYS *)v125);
              PointerDeviceSettings = updated;
              if ( !updated )
                SetMouseKeys(v127, gMouseKeys);
              FreeProfileUserName(v127, v179);
            }
            if ( PointerDeviceSettings )
            {
              memmove(gMouseKeys, v125, *(unsigned int *)v125);
              LODWORD(gMouseKeys) = 28;
              CalculateMouseTable();
              v128 = HIDWORD(gMouseKeys);
              if ( (v128 & 1) != 0 )
              {
                gbMKMouseMode = ((v128 >> 7) & 1) != (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & gafAsyncKeyState[(unsigned __int64)gNumLockVk >> 2]) != 0);
                MKShowMouseCursor();
              }
              else
              {
                MKHideMouseCursor();
              }
              SetAccessEnabledFlag();
              if ( ((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(11LL, 3LL, 0LL, 10LL);
              PostShellHookMessagesEx(0xBuLL, 3LL, 0LL);
            }
            goto LABEL_16;
          case 0x38u:
            *(_DWORD *)pszDest = (gdwPUDFlags >> 15) & 1;
            goto LABEL_16;
          case 0x39u:
            if ( v7 )
            {
              RtlStringCchPrintfW(v211, 0x28uLL, L"%d", a2 == 1);
              updated = FastWriteProfileStringW(0LL, 20LL, L"On", v211);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
            {
              if ( a2 == 1 )
                gdwPUDFlags |= 0x8000u;
              else
                gdwPUDFlags &= ~0x8000u;
              SetAccessEnabledFlag();
              *(_DWORD *)(gpsi + 2160LL) = (gdwPUDFlags >> 15) & 1;
            }
            goto LABEL_16;
          case 0x3Au:
            v50 = pszDest;
            if ( (a2 & 0xFFFFFFF7) != 0 || !pszDest || *(_DWORD *)pszDest != 8 )
              return 0LL;
            *((_DWORD *)pszDest + 1) = HIDWORD(gStickyKeys);
            v50[3] = 0;
            *((_DWORD *)v50 + 1) |= gLatchBits << 24;
            *((_DWORD *)v50 + 1) |= gLockBits << 16;
            goto LABEL_16;
          case 0x3Bu:
            v118 = pszDest;
            v119 = HIDWORD(gStickyKeys) & 1;
            if ( (a2 & 0xFFFFFFF7) != 0 )
              return 0LL;
            if ( !pszDest )
              return 0LL;
            if ( *(_DWORD *)pszDest != 8 )
              return 0LL;
            pszDest[3] = 0;
            v120 = *((_DWORD *)v118 + 1);
            if ( (v120 & 0x1FF) != v120 )
              return 0LL;
            if ( (HIDWORD(gStickyKeys) & 2) != 0 )
              v121 = v120 | 2;
            else
              v121 = v120 & 0xFFFFFFFD;
            *((_DWORD *)v118 + 1) = v121;
            if ( v177 )
            {
              RtlStringCchPrintfW(v211, 0x28uLL, L"%d", v121);
              updated = FastWriteProfileStringW(0LL, 14LL, L"Flags", v211);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
            {
              memmove(gStickyKeys, v118, *(unsigned int *)v118);
              LODWORD(gStickyKeys) = 8;
              if ( (HIDWORD(gStickyKeys) & 1) == 0 && v119 )
                xxxTurnOffStickyKeys();
              SetAccessEnabledFlag();
              if ( ((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(11LL, 1LL, 0LL, 10LL);
              PostShellHookMessagesEx(0xBuLL, 1LL, 0LL);
            }
            goto LABEL_16;
          case 0x3Cu:
            if ( a2 && a2 != 12 || !pszDest || *(_DWORD *)pszDest != 12 )
              return 0LL;
            *(void **)(pszDest + 2) = *(void *const *)((char *)&gAccessTimeOut + 4);
            goto LABEL_16;
          case 0x3Du:
            if ( a2 && a2 != 12
              || !pszDest
              || *(_DWORD *)pszDest != 12
              || (*((_DWORD *)pszDest + 1) & 3) != *((_DWORD *)pszDest + 1)
              || *((_DWORD *)pszDest + 2) > 0x36EE80u )
            {
              return 0LL;
            }
            if ( v7 )
            {
              v129 = CreateProfileUserName(v179);
              RtlStringCchPrintfW(v211, 0x28uLL, L"%d", *((unsigned int *)pszDest + 1));
              v130 = FastWriteProfileStringW(v129, 18LL, L"Flags", v211);
              RtlStringCchPrintfW(v211, 0x28uLL, L"%d", *((unsigned int *)pszDest + 2));
              updated = FastWriteProfileStringW(v129, 18LL, L"TimeToWait", v211) & v130;
              PointerDeviceSettings = updated;
              if ( !updated )
              {
                RtlStringCchPrintfW(v211, 0x28uLL, L"%d", HIDWORD(gAccessTimeOut));
                FastWriteProfileStringW(v129, 18LL, L"Flags", v211);
                RtlStringCchPrintfW(v211, 0x28uLL, L"%d", *((unsigned int *)&gAccessTimeOut + 2));
                FastWriteProfileStringW(v129, 18LL, L"TimeToWait", v211);
              }
              FreeProfileUserName(v129, v179);
            }
            if ( PointerDeviceSettings )
            {
              memmove(gAccessTimeOut, pszDest, *(unsigned int *)pszDest);
              LODWORD(gAccessTimeOut) = 12;
              SetAccessEnabledFlag();
              AccessTimeOutReset();
            }
            goto LABEL_16;
          case 0x40u:
            if ( a2 && a2 != 56 )
              return 0LL;
            v64 = pszDest;
            if ( !pszDest || *(_DWORD *)pszDest != 56 )
              return 0LL;
            *(_OWORD *)(pszDest + 2) = *(_OWORD *)((char *)&gSoundSentry + 4);
            *(_OWORD *)(v64 + 10) = *(_OWORD *)((char *)&gSoundSentry + 20);
            *(_OWORD *)(v64 + 18) = *(_OWORD *)((char *)&gSoundSentry + 36);
            *((_DWORD *)v64 + 13) = *((_DWORD *)&gSoundSentry + 13);
            goto LABEL_16;
          case 0x41u:
            v133 = (struct tagSOUNDSENTRYW *)pszDest;
            if ( a2 && a2 != 56 )
              return 0LL;
            if ( !pszDest )
              return 0LL;
            if ( *(_DWORD *)pszDest != 56 )
              return 0LL;
            v134 = *((_DWORD *)pszDest + 1);
            if ( (v134 & 7) != v134
              || *((_DWORD *)pszDest + 8) > 3u
              || *((_DWORD *)pszDest + 2)
              || *((_DWORD *)pszDest + 5) )
            {
              return 0LL;
            }
            if ( (HIDWORD(gSoundSentry) & 2) != 0 )
              v135 = v134 | 2;
            else
              v135 = v134 & 0xFFFFFFFD;
            *((_DWORD *)pszDest + 1) = v135;
            if ( v7 )
            {
              v136 = (struct _UNICODE_STRING *)CreateProfileUserName(v179);
              updated = SetSoundSentry(v136, v133);
              PointerDeviceSettings = updated;
              if ( !updated )
                SetSoundSentry(v136, gSoundSentry);
              FreeProfileUserName(v136, v179);
            }
            if ( PointerDeviceSettings )
            {
              memmove(gSoundSentry, v133, *(unsigned int *)v133);
              LODWORD(gSoundSentry) = 56;
              SetAccessEnabledFlag();
            }
            goto LABEL_16;
          case 0x43u:
            updated = SetHighContrastWorker((struct tagINTERNALSETHIGHCONTRAST *)pszDest, v7, &v176);
            PointerDeviceSettings = v176;
            goto LABEL_16;
          case 0x44u:
            *(_DWORD *)pszDest = (gdwPUDFlags >> 17) & 1;
            goto LABEL_16;
          case 0x45u:
            if ( v7 )
            {
              v131 = L"1";
              if ( !a2 )
                v131 = L"0";
              updated = FastWriteProfileStringW(0LL, 27LL, L"On", v131);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
            {
              if ( a2 )
                gdwPUDFlags |= 0x20000u;
              else
                gdwPUDFlags &= ~0x20000u;
            }
            goto LABEL_16;
          case 0x46u:
            if ( (gdwPUDFlags & 0x40000) == 0 )
              goto LABEL_55;
            v25 = 1;
            goto LABEL_41;
          case 0x47u:
            if ( v7 )
            {
              v132 = L"1";
              if ( !a2 )
                v132 = L"0";
              updated = FastWriteProfileStringW(0LL, 28LL, L"On", v132);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
            {
              if ( a2 )
                gdwPUDFlags |= 0x40000u;
              else
                gdwPUDFlags &= ~0x40000u;
            }
            goto LABEL_16;
          case 0x48u:
            v38 = pszDest;
            if ( !pszDest || a2 != 8 )
              return 0LL;
            *(_DWORD *)pszDest = 8;
            *((_DWORD *)v38 + 1) = (gdwPUDFlags & 0x10000) != 0;
            goto LABEL_16;
          case 0x4Au:
            if ( (gulFontInformation & 2) == 0 )
              goto LABEL_55;
            v25 = 1;
            goto LABEL_41;
          case 0x4Bu:
            if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL) )
            {
              v7 = 0;
              PointerDeviceSettings = 0;
            }
            v82 = a2 != 0 ? 2 : 0;
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 200LL, v82);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              GreSetFontEnumeration(v82 | 4);
            goto LABEL_16;
          case 0x4Cu:
            if ( (unsigned int)CheckDesktopPolicy(0LL, 198LL) )
            {
              v7 = 0;
              PointerDeviceSettings = 0;
            }
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 198LL, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              *(_DWORD *)(gpsi + 2152LL) = a2;
            goto LABEL_16;
          case 0x4Du:
            if ( (unsigned int)CheckDesktopPolicy(0LL, 199LL) )
            {
              v7 = 0;
              PointerDeviceSettings = 0;
            }
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 199LL, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              *(_DWORD *)(gpsi + 2156LL) = a2;
            goto LABEL_16;
          case 0x57u:
            v137 = CreateProfileUserName(v179);
            xxxUpdateSystemCursorsFromRegistry(v137);
            v66 = v137;
            goto LABEL_305;
          case 0x58u:
            v138 = CreateProfileUserName(v179);
            xxxUpdateSystemIconsFromRegistry(v138);
            v66 = v138;
            goto LABEL_305;
          case 0x59u:
            if ( gspklBaseLayout )
            {
              *(_QWORD *)pszDest = *(_QWORD *)(gspklBaseLayout + 40LL);
              goto LABEL_16;
            }
            UserSetLastError(21LL);
            return 0LL;
          case 0x5Au:
            v83 = HKLtoPKL(gptiCurrent, *(_QWORD *)pszDest);
            if ( !v83 )
              return 0LL;
            if ( PointerDeviceSettings )
            {
              *(_QWORD *)&v185 = gspklBaseLayout;
              *((_QWORD *)&v185 + 1) = v83;
              v189 = v185;
              HMAssignmentLock(&v189);
            }
            goto LABEL_16;
          case 0x5Bu:
            return GetKbdLangSwitch(0LL);
          case 0x5Du:
            if ( v7 )
            {
              RtlStringCchPrintfW(v211, 0x28uLL, L"%d", a2);
              updated = FastUpdateWinIni(0LL, 12LL, 613LL, v211);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              SetMouseTrails(a2);
            goto LABEL_16;
          case 0x5Eu:
            v25 = gMouseTrails + 1;
            if ( !gMouseTrails )
              goto LABEL_55;
            goto LABEL_41;
          case 0x5Fu:
            *(_DWORD *)pszDest = (*(_DWORD *)(gpsi + 9980LL) >> 1) & 1;
            goto LABEL_16;
          case 0x60u:
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 7LL, a2 != 0);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
            {
              if ( a2 )
                *(_DWORD *)(gpsi + 9980LL) |= 2u;
              else
                *(_DWORD *)(gpsi + 9980LL) &= ~2u;
            }
            goto LABEL_16;
          case 0x62u:
            *(_DWORD *)pszDest = gcxMouseHover;
            goto LABEL_16;
          case 0x63u:
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 91LL, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              gcxMouseHover = a2;
            goto LABEL_16;
          case 0x64u:
            *(_DWORD *)pszDest = gcyMouseHover;
            goto LABEL_16;
          case 0x65u:
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 92LL, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              gcyMouseHover = a2;
            goto LABEL_16;
          case 0x66u:
            *(_DWORD *)pszDest = gdtMouseHover;
            goto LABEL_16;
          case 0x67u:
            v139 = 10;
            if ( a2 >= 0xA )
              v139 = a2;
            if ( v139 > 0x7FFFFFFF )
              v139 = 0x7FFFFFFF;
            if ( v177 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 93LL, v139);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              gdtMouseHover = v139;
            goto LABEL_16;
          case 0x68u:
            *(_DWORD *)pszDest = *(_DWORD *)(gpsi + 4984LL);
            goto LABEL_16;
          case 0x69u:
            if ( (unsigned int)CheckDesktopPolicy(0LL, 14LL) )
            {
              v7 = 0;
              PointerDeviceSettings = 0;
            }
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 14LL, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              *(_DWORD *)(gpsi + 4984LL) = a2;
            goto LABEL_16;
          case 0x6Au:
            *(_DWORD *)pszDest = gdtMNDropDown;
            goto LABEL_16;
          case 0x6Bu:
            if ( (unsigned int)CheckDesktopPolicy(0LL, 94LL) )
            {
              v7 = 0;
              PointerDeviceSettings = 0;
            }
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 94LL, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              gdtMNDropDown = a2;
            goto LABEL_16;
          case 0x6Cu:
            *(_DWORD *)pszDest = *(_DWORD *)(gpsi + 4988LL);
            goto LABEL_16;
          case 0x6Du:
            if ( (unsigned int)CheckDesktopPolicy(0LL, 15LL) )
            {
              v7 = 0;
              PointerDeviceSettings = 0;
            }
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 15LL, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              *(_DWORD *)(gpsi + 4988LL) = a2;
            goto LABEL_16;
          case 0x6Eu:
            *(_DWORD *)pszDest = gfIMEShowStatus != 0;
            goto LABEL_16;
          case 0x6Fu:
            PointerDeviceSettings = xxxSetIMEShowStatus(a2 != 0, v7, &v175);
            updated = v175;
            goto LABEL_16;
          case 0x70u:
            *(_DWORD *)pszDest = GetMouseSensitivity(0LL);
            goto LABEL_16;
          case 0x71u:
            if ( !(unsigned __int8)IsValidMouseSensitivity((unsigned int)pszDest) )
              return 0LL;
            if ( v7 )
            {
              RtlStringCchPrintfW(v211, 0x28uLL, L"%d", pszDest);
              updated = FastUpdateWinIni(0LL, 12LL, 608LL, v211);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
            {
              UpdateMouseSensitivity((unsigned int)pszDest);
              for ( i = 0; i < 2; ++i )
                ResetAccelerationCurves(i);
            }
            goto LABEL_16;
          case 0x72u:
            if ( !gppiScreenSaver )
              goto LABEL_55;
            v25 = 1;
            goto LABEL_41;
          case 0x73u:
            if ( g_pWallpaperSettings )
            {
              RtlStringCchCopyW(pszDest, 0x104uLL, (NTSTRSAFE_PCWSTR)(g_pWallpaperSettings + 4LL));
              goto LABEL_16;
            }
            v67 = CreateProfileUserName(v179);
            LoadWallpaperFilenameFromRegistry(v67, pszDest, 260LL);
            v66 = v67;
            goto LABEL_305;
          case 0x74u:
            if ( a2 && a2 != 12 || !pszDest || *(_DWORD *)pszDest != 12 )
              return 0LL;
            *(void **)(pszDest + 2) = *(void *const *)((char *)&gAudioDescription + 4);
            goto LABEL_16;
          case 0x75u:
            if ( a2 && a2 != 12 || !pszDest || *(_DWORD *)pszDest != 12 )
              return 0LL;
            if ( v177 )
            {
              v140 = CreateProfileUserName(v179);
              v141 = v140;
              v142 = L"1";
              v143 = L"1";
              if ( !*((_DWORD *)pszDest + 1) )
                v143 = L"0";
              v144 = FastWriteProfileStringW(v140, 48LL, L"On", v143);
              RtlStringCchPrintfW(v211, 0x28uLL, L"%d", *((unsigned int *)pszDest + 2));
              updated = FastWriteProfileStringW(v141, 48LL, L"Locale", v211) & v144;
              PointerDeviceSettings = updated;
              if ( !updated )
              {
                if ( !HIDWORD(gAudioDescription) )
                  v142 = L"0";
                FastWriteProfileStringW(v141, 48LL, L"On", v142);
                RtlStringCchPrintfW(v211, 0x28uLL, L"%d", *((unsigned int *)&gAudioDescription + 2));
                FastWriteProfileStringW(v141, 48LL, L"Locale", v211);
              }
              FreeProfileUserName(v141, v179);
            }
            if ( PointerDeviceSettings )
            {
              memmove(gAudioDescription, pszDest, *(unsigned int *)pszDest);
              LODWORD(gAudioDescription) = 12;
            }
            goto LABEL_16;
          case 0x76u:
            *(_DWORD *)pszDest = (*gpsi >> 9) & 1;
            goto LABEL_16;
          case 0x77u:
            if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) && !v9 )
              goto LABEL_430;
            if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL) )
            {
              v7 = 0;
              PointerDeviceSettings = 0;
            }
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 618LL, a2 != 0);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
            {
              if ( a2 )
                *gpsi |= 0x200u;
              else
                *gpsi &= ~0x200u;
            }
            goto LABEL_16;
          case 0x78u:
            *(_DWORD *)pszDest = gdwHungAppTimeout;
            goto LABEL_16;
          case 0x79u:
            if ( (unsigned int)CheckDesktopPolicy(0LL, 621LL) )
            {
              v7 = 0;
              PointerDeviceSettings = 0;
            }
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 621LL, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              gdwHungAppTimeout = a2;
            goto LABEL_16;
          case 0x7Au:
            *(_DWORD *)pszDest = gdwWaitToKillTimeout;
            goto LABEL_16;
          case 0x7Bu:
            if ( (unsigned int)CheckDesktopPolicy(0LL, 622LL) )
            {
              v7 = 0;
              PointerDeviceSettings = 0;
            }
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 622LL, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              gdwWaitToKillTimeout = a2;
            goto LABEL_16;
          case 0x7Cu:
            *(_DWORD *)pszDest = gdwWaitToKillServiceTimeout;
            goto LABEL_16;
          case 0x7Du:
            if ( (unsigned int)CheckDesktopPolicy(0LL, 623LL) )
            {
              v7 = 0;
              PointerDeviceSettings = 0;
            }
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 52LL, 623LL, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
              gdwWaitToKillServiceTimeout = a2;
            goto LABEL_16;
          case 0x7Eu:
            *(_DWORD *)pszDest = gWinArrGlobal[0];
            goto LABEL_16;
          case 0x7Fu:
            if ( a2 > *(_DWORD *)(gpDispInfo + 128LL)
              || a2 > dword_1C03217B4
              || a2 > dword_1C03217B8
              || a2 > dword_1C03217C0 )
            {
              goto LABEL_16;
            }
            UpdateThresholdFromMetric(v7, &v175, &v176, 0x10u, a2, 0);
            goto LABEL_107;
          case 0x80u:
            *(_DWORD *)pszDest = dword_1C03217B4;
            goto LABEL_16;
          case 0x81u:
            if ( a2 > *(_DWORD *)(gpDispInfo + 128LL)
              || a2 < gWinArrGlobal[0]
              || a2 > dword_1C03217BC
              || a2 > dword_1C03217C4 )
            {
              goto LABEL_16;
            }
            UpdateThresholdFromMetric(v7, &v175, &v176, 0x11u, a2, 1);
            goto LABEL_107;
          case 0x82u:
            if ( (dword_1C03217CC & 1) == 0 )
              goto LABEL_55;
            v25 = 1;
            goto LABEL_41;
          case 0x83u:
            v40 = 18;
            LODWORD(v12) = 1;
            goto LABEL_109;
          case 0x84u:
            *(_DWORD *)pszDest = dword_1C03217B8;
            goto LABEL_16;
          case 0x85u:
            if ( a2 > *(_DWORD *)(gpDispInfo + 128LL) || a2 > dword_1C03217BC || a2 < gWinArrGlobal[0] )
              goto LABEL_16;
            UpdateThresholdFromMetric(v7, &v175, &v176, 0x13u, a2, 2);
            goto LABEL_107;
          case 0x86u:
            *(_DWORD *)pszDest = dword_1C03217BC;
            goto LABEL_16;
          case 0x87u:
            if ( a2 > *(_DWORD *)(gpDispInfo + 128LL) || a2 < dword_1C03217B8 || a2 < dword_1C03217B4 )
              goto LABEL_16;
            UpdateThresholdFromMetric(v7, &v175, &v176, 0x14u, a2, 3);
            goto LABEL_107;
          case 0x88u:
            *(_DWORD *)pszDest = dword_1C03217C0;
            goto LABEL_16;
          case 0x89u:
            if ( a2 > *(_DWORD *)(gpDispInfo + 128LL) || a2 > dword_1C03217C4 || a2 < gWinArrGlobal[0] )
              goto LABEL_16;
            UpdateThresholdFromMetric(v7, &v175, &v176, 0x15u, a2, 4);
            goto LABEL_107;
          case 0x8Au:
            *(_DWORD *)pszDest = dword_1C03217C4;
            goto LABEL_16;
          case 0x8Bu:
            if ( a2 > *(_DWORD *)(gpDispInfo + 128LL) || a2 < dword_1C03217C0 || a2 < dword_1C03217B4 )
              goto LABEL_16;
            UpdateThresholdFromMetric(v7, &v175, &v176, 0x16u, a2, 5);
            goto LABEL_107;
          case 0x8Cu:
            *(_DWORD *)pszDest = (dword_1C03217CC >> 1) & 1;
            goto LABEL_16;
          case 0x8Du:
            v40 = 624;
            goto LABEL_109;
          case 0x8Eu:
            *(_DWORD *)pszDest = (dword_1C03217CC >> 2) & 1;
            goto LABEL_16;
          case 0x8Fu:
            v40 = 626;
            LODWORD(v12) = 4;
            goto LABEL_109;
          case 0x90u:
            if ( (dword_1C03217CC & 8) != 0 )
              v25 = 1;
            else
LABEL_55:
              v25 = 0;
LABEL_41:
            *(_DWORD *)pszDest = v25;
            goto LABEL_16;
          case 0x91u:
            v40 = 625;
            LODWORD(v12) = 8;
LABEL_109:
            if ( (unsigned int)CheckDesktopPolicy(0LL, v40) )
            {
              v41 = 0;
              PointerDeviceSettings = 0;
            }
            else
            {
              v41 = v177;
            }
            if ( v41 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, v40, a2);
              PointerDeviceSettings = updated;
            }
            if ( PointerDeviceSettings )
            {
              v42 = dword_1C03217CC;
              if ( a2 )
                v43 = v12 | dword_1C03217CC;
              else
                v43 = ~(_DWORD)v12 & dword_1C03217CC;
              dword_1C03217CC = v43;
              PostWindowArrangementCheck(v42);
            }
            goto LABEL_16;
          case 0x92u:
          case 0x94u:
          case 0x96u:
          case 0x98u:
          case 0x9Au:
          case 0x9Cu:
            PointerDeviceSettings = ReadPointerDeviceSettings(v174, pszDest);
            goto LABEL_16;
          case 0x93u:
          case 0x95u:
          case 0x97u:
          case 0x99u:
          case 0x9Bu:
          case 0x9Du:
            updated = WritePointerDeviceSettings(v174, pszDest, (unsigned int)v178);
            goto LABEL_16;
          case 0x9Eu:
          case 0xA5u:
          case 0xA7u:
            if ( (int)DrvDisplayConfigGetScaleFactorOverrides(v203, 1LL) < 0 )
              return 0LL;
            if ( a2 == 158 )
            {
              *(_DWORD *)pszDest = HIDWORD(v204);
            }
            else
            {
              v145 = pszDest;
              *(_QWORD *)pszDest = v204;
              *((_DWORD *)v145 + 2) = v205;
            }
            goto LABEL_16;
          case 0x9Fu:
          case 0xA6u:
            if ( a2 + 11 > 0x16 )
              return 0LL;
            if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL) )
            {
              v7 = 0;
              PointerDeviceSettings = 0;
            }
            if ( !v7 )
              goto LABEL_16;
            v207 = a2;
            v177 = a2 != 159;
            v146 = DrvDisplayConfigSetScaleFactorOverride(v206, &v177);
            if ( v146 < 0 )
            {
              return 0;
            }
            else
            {
              if ( a2 == 159 )
                TraceLoggingSPISetModernDPIOverrideEvent(v147, 159);
              else
                TraceLoggingSPISetDesktopDPIOverrideEvent(v147, a2);
              return 1;
            }
          case 0xA0u:
            *(_DWORD *)pszDest = 6;
            goto LABEL_16;
          case 0xA1u:
LABEL_386:
            PointerDeviceSettings = 1;
            goto LABEL_16;
          case 0xA2u:
            v109 = GetDispInfo();
            *(_OWORD *)pszDest = *(_OWORD *)GetMonitorMenuRect(v195, *(_QWORD *)(v109 + 88));
            goto LABEL_16;
          case 0xA3u:
            v34 = pszDest;
            if ( pszDest )
            {
              if ( *((_DWORD *)pszDest + 2) < *(_DWORD *)pszDest || *((_DWORD *)pszDest + 3) < *((_DWORD *)pszDest + 1) )
                return 0LL;
              v35 = MonitorFromRect((struct tagRECT *)pszDest);
            }
            else
            {
              v35 = *(_QWORD *)(GetDispInfo() + 88);
            }
            v184 = v35;
            v201 = *GetMonitorRect(&v196, v35);
            if ( !pszDest )
              v34 = (NTSTRSAFE_PWSTR)&v201;
            if ( !(unsigned int)IntersectRect(&v199, v34, &v201) )
              goto LABEL_250;
            v37 = v199 - *(_QWORD *)v34;
            if ( (_QWORD)v199 == *(_QWORD *)v34 )
              v37 = *((_QWORD *)&v199 + 1) - *((_QWORD *)v34 + 1);
            if ( v37 )
              goto LABEL_250;
            if ( (W32GetCurrentThreadDpiAwarenessContext(0LL, v36) & 0xF) == 2 )
              goto LABEL_88;
            if ( !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432)
              || (v111 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432) + 8LL),
                  (*(_DWORD *)(v111 + 52) & 1) == 0) )
            {
              updated = v175;
              PointerDeviceSettings = v176;
LABEL_88:
              *(_OWORD *)(v184 + 584) = v199;
              goto LABEL_16;
            }
            v112 = W32GetCurrentThreadDpiAwarenessContext(v111, v110);
            LogicalToPhysicalDPIRect(v184 + 584, &v199, v112, &v184);
LABEL_107:
            updated = v175;
            PointerDeviceSettings = v176;
            goto LABEL_16;
          case 0xA8u:
            *(_DWORD *)pszDest = HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2);
            goto LABEL_16;
          case 0xA9u:
            if ( gfSwitchInProgress )
              return 0LL;
            if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) && !v9 )
            {
LABEL_430:
              UserSetLastError(329LL);
              return 0LL;
            }
            HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = a2 != 0;
            if ( v7 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 205LL, a2);
              PointerDeviceSettings = updated;
            }
            goto LABEL_16;
          case 0xAAu:
            *(_DWORD *)pszDest = gbLockScreenActive;
            goto LABEL_16;
          case 0xABu:
            if ( *(_DWORD *)(v182 + 56) != gpidLogonUI )
              return 0LL;
            gbLockScreenActive = a2 != 0;
            if ( a2 )
            {
              if ( !gptiForeground
                || (v99 = *(_QWORD *)(gptiForeground + 408LL)) == 0
                || !*(_QWORD *)(v99 + 120)
                || (unsigned int)IsWindowUnderActiveLockScreen() )
              {
                xxxSetForegroundWindow2(0LL);
              }
              ClearKeyboardStates();
            }
            GreLddmProcessLockScreen(gbLockScreenActive);
            goto LABEL_16;
          case 0xACu:
            v148 = InteractiveControlManager::Instance();
            PointerDeviceSettings = (int)InteractiveControlManager::GetExternalParameters(
                                           v148,
                                           (struct tagINTERACTIVECTRL_PARAMETERS *)pszDest) >= 0;
            goto LABEL_16;
          case 0xADu:
            v149 = InteractiveControlManager::Instance();
            if ( (int)InteractiveControlManager::SetExternalParameters(
                        v149,
                        (struct tagINTERACTIVECTRL_PARAMETERS *)pszDest,
                        v178) >= 0 )
              goto LABEL_296;
            return PointerDeviceSettings;
          default:
            goto LABEL_29;
        }
      }
      *(_DWORD *)pszDest = gbBlockSendInputResets != 0;
LABEL_16:
      if ( updated )
      {
LABEL_296:
        if ( v183 )
        {
          RtlInitLargeUnicodeString(v190, v212);
          v186[0] = 0;
          v186[1] = 100;
          v187 = &v188;
          xxxBroadcastMessageEx(0LL, 26LL, v174, v190, 6, v186, 1, 0);
        }
      }
      return PointerDeviceSettings;
    }
    if ( v174 == 4135 )
    {
      if ( (unsigned int)CheckDesktopPolicy(0LL, 112LL) )
      {
        v7 = 0;
        PointerDeviceSettings = 0;
      }
      if ( v7 )
      {
        updated = UpdateWinIniInt(0LL, 4LL, 112LL, a2 != 0);
        PointerDeviceSettings = updated;
      }
      if ( PointerDeviceSettings )
        gbBlockSendInputResets = a2 != 0;
      goto LABEL_16;
    }
LABEL_29:
    if ( v174 < 0xAE )
    {
      UserSetLastError(1439LL);
      return 0LL;
    }
    if ( (v174 & 1) != 0 )
    {
      v150 = CreateProfileUserName(v179);
      v48 = (struct _UNICODE_STRING *)v150;
      v151 = v174;
      if ( (v174 & 0x3000) == 0x1000 )
      {
        if ( *((_DWORD *)&gpviCPUserPreferences + 1) == 4
          && (v152 = CheckDesktopPolicy(v150, *((_QWORD *)&gpviCPUserPreferences + 1)), v151 = v174, v152) )
        {
          v153 = 0;
          PointerDeviceSettings = 0;
        }
        else
        {
          v153 = v177;
        }
        if ( v153 )
        {
          ProfileValue = FastGetProfileValue(
                           v48,
                           *((unsigned int *)&gpviCPUserPreferences + 1),
                           *((_QWORD *)&gpviCPUserPreferences + 1),
                           0LL,
                           &v182,
                           8,
                           0);
          memmove((char *)&v182 + ProfileValue, (char *)&gpdwCPUserPreferencesMask + ProfileValue, 8LL - ProfileValue);
          v155 = (_DWORD *)&v182 + ((unsigned __int64)(v174 - 4096) >> 6);
          v156 = 1 << (((v174 - 4096) >> 1) - 32 * ((v174 - 4096) >> 6));
          if ( pszDest )
            *v155 |= v156;
          else
            *v155 &= ~v156;
          updated = FastWriteProfileValue(
                      v48,
                      *((unsigned int *)&gpviCPUserPreferences + 1),
                      *((_QWORD *)&gpviCPUserPreferences + 1),
                      3LL,
                      &v182,
                      8);
          PointerDeviceSettings = updated;
          v151 = v174;
        }
        if ( PointerDeviceSettings )
        {
          v157 = v151 - 4096;
          v158 = (_DWORD *)&gpdwCPUserPreferencesMask + ((unsigned __int64)(v151 - 4096) >> 6);
          v159 = 1 << ((v157 >> 1) - 32 * (v157 >> 6));
          if ( pszDest )
            *v158 |= v159;
          else
            *v158 &= ~v159;
          switch ( v174 )
          {
            case 0x1005u:
              v161 = gpsi;
              v162 = ((unsigned __int8)gpdwCPUserPreferencesMask ^ (unsigned __int8)*(_DWORD *)(gpsi + 9980LL)) & 4;
              goto LABEL_795;
            case 0x1007u:
              v161 = gpsi;
              v162 = ((unsigned __int8)gpdwCPUserPreferencesMask ^ (unsigned __int8)*(_DWORD *)(gpsi + 9980LL)) & 8;
              goto LABEL_795;
            case 0x1009u:
              goto LABEL_764;
            case 0x100Bu:
              v161 = gpsi;
              v162 = ((unsigned __int8)gpdwCPUserPreferencesMask ^ (unsigned __int8)*(_DWORD *)(gpsi + 9980LL)) & 0x20;
LABEL_795:
              *(_DWORD *)(v161 + 9980) ^= v162;
              goto LABEL_796;
            case 0x101Bu:
              SetPointer(1);
              goto LABEL_796;
            case 0x1023u:
              goto LABEL_765;
            case 0x1025u:
              v163 = (void *)ReferenceDwmApiPort();
              DwmAsyncNotifyWindowShadowChange(v163);
              goto LABEL_796;
            case 0x103Fu:
              *(_DWORD *)(gpsi + 9980LL) = (unsigned int)gpdwCPUserPreferencesMask ^ ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 9980LL)) & 0x7FFFFFFF;
              SetPointer(1);
LABEL_764:
              CreateBitmapStrip();
LABEL_765:
              v160 = *(_QWORD *)(gptiCurrent + 432LL);
              if ( !v160 )
                goto LABEL_767;
              v101 = *(struct tagWND **)(*(_QWORD *)(v160 + 8) + 16LL);
              break;
            case 0x104Fu:
            case 0x1051u:
              xxxWindowEvent(-2147483641, 0, v174, pszDest != 0LL, 0);
              goto LABEL_796;
            default:
              goto LABEL_796;
          }
LABEL_768:
          xxxInternalInvalidate(v101, (HRGN)1, 0x10485u);
        }
      }
      else
      {
        if ( *(_DWORD *)(UPDWORDPointer(v174) + 4) == 4
          && (v164 = UPDWORDPointer(v174), (unsigned int)CheckDesktopPolicy(v48, *(_QWORD *)(v164 + 8))) )
        {
          v165 = 0;
          PointerDeviceSettings = 0;
        }
        else
        {
          v165 = v177;
        }
        if ( v165 )
        {
          v166 = UPDWORDPointer(v174);
          v167 = UPDWORDPointer(v174);
          updated = FastWriteProfileValue(v48, *(unsigned int *)(v167 + 4), *(_QWORD *)(v166 + 8), 4LL, &pszDest, 4);
          PointerDeviceSettings = updated;
        }
        v168 = *(_DWORD *)UPDWORDPointer(v174);
        if ( PointerDeviceSettings )
        {
          v169 = (int)pszDest;
          *(_DWORD *)UPDWORDPointer(v174) = v169;
          switch ( v174 )
          {
            case 0x2007u:
              *(_DWORD *)(gpsi + 9984LL) = *(_DWORD *)UPDWORDPointer(v174);
              break;
            case 0x200Bu:
              v170 = (_BYTE *)UPDWORDPointer(v174);
              GreSetFontEnumeration(8 * (*v170 & 2 | 4));
              break;
            case 0x200Du:
              gulGamma = *(_DWORD *)UPDWORDPointer(v174);
              break;
            case 0x200Fu:
              if ( *(_DWORD *)UPDWORDPointer(v174) )
                *(_DWORD *)(gpsi + 2212LL) = *(_DWORD *)UPDWORDPointer(v174);
              break;
            case 0x2011u:
              if ( *(_DWORD *)UPDWORDPointer(v174) )
                *(_DWORD *)(gpsi + 2216LL) = *(_DWORD *)UPDWORDPointer(v174);
              break;
            case 0x2013u:
              v14 = (*(_BYTE *)UPDWORDPointer(v174) & 1) == 0;
              v171 = &dword_1C02DE060;
              if ( v14 )
                v171 = (int *)&unk_1C02E9D40;
              off_1C0320100 = v171;
              break;
            case 0x201Du:
              TraceLoggingMouseWheelRoutingModeChange((unsigned int)pszDest);
              break;
            case 0x201Fu:
              TraceLoggingSPISetPenVisualizationEvent(v168, (unsigned int)pszDest);
              break;
            default:
              break;
          }
        }
      }
LABEL_796:
      v66 = (__int64)v48;
LABEL_305:
      FreeProfileUserName(v66, v179);
      goto LABEL_16;
    }
    if ( (v174 & 0x3000) != 0x1000 )
    {
      v23 = (int *)UPDWORDPointer(v174);
      v24 = *v23;
      *(_DWORD *)pszDest = *v23;
      if ( v174 == 8204 && !v24 )
        *(_DWORD *)pszDest = gulGamma;
      goto LABEL_16;
    }
    v20 = 0;
    v21 = 0;
    if ( v174 >= 0x103E )
      goto LABEL_33;
    if ( (int)gpdwCPUserPreferencesMask < 0 )
    {
      if ( v174 < 0x101B || v174 >= 0x1024 )
      {
        switch ( v174 )
        {
          case 0x1008u:
          case 0x1012u:
          case 0x1014u:
          case 0x1018u:
          case 0x101Au:
            if ( gbDisableAlpha )
              goto LABEL_747;
            break;
          case 0x100Au:
            if ( (gdwPUDFlags & 0x20000) != 0 )
              v21 = 1;
            v20 = v21;
            break;
          case 0x1024u:
            if ( gbDisableAlpha || gcOverlays )
              goto LABEL_747;
            break;
          default:
            break;
        }
      }
LABEL_33:
      if ( !v21 )
      {
        if ( v174 == 4158 && gProtocolType )
        {
          *(_DWORD *)pszDest = ((unsigned __int16)gpdwCPUserPreferencesMask & 0x3A0E) != 0;
        }
        else
        {
          v22 = *((_DWORD *)&gpdwCPUserPreferencesMask + ((unsigned __int64)(v174 - 4096) >> 6));
          *(_DWORD *)pszDest = _bittest(&v22, (unsigned __int8)(((v174 - 4096) >> 1) - 32 * ((v174 - 4096) >> 6)));
        }
        goto LABEL_16;
      }
      goto LABEL_747;
    }
    switch ( v174 )
    {
      case 0x1000u:
        goto LABEL_33;
      case 0x100Au:
        v20 = 1;
        break;
      case 0x100Cu:
      case 0x101Cu:
      case 0x101Eu:
        goto LABEL_33;
    }
LABEL_747:
    *(_DWORD *)pszDest = v20;
    goto LABEL_16;
  }
  if ( v174 == 66 || v174 > 0x1027 )
  {
LABEL_8:
    if ( (v174 & 0x3000) == 0 || (v174 & 1) == 0 )
    {
LABEL_9:
      v11 = *(_DWORD *)(CurrentProcessWin32Process + 656);
      v12 = 2LL;
      if ( !RtlAreAllAccessesGranted(v11, 2u) )
      {
        UserSetLastError(5LL);
        return 0LL;
      }
      v13 = 2;
LABEL_11:
      v14 = v13 == 2;
      v7 = v177;
      if ( !v14 )
        goto LABEL_13;
      goto LABEL_12;
    }
LABEL_25:
    v13 = 16;
    if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u) )
      return 0LL;
    v12 = 2LL;
    goto LABEL_11;
  }
  if ( v174 == 4135 )
    goto LABEL_25;
  switch ( v174 )
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
      goto LABEL_25;
    case 0xDu:
    case 0x18u:
      if ( ((unsigned __int64)pszDest & 0xFFFFFFFFFFFF0000uLL) != 0 )
        goto LABEL_9;
      if ( a2 )
        goto LABEL_25;
      result = 1LL;
      break;
    default:
      goto LABEL_8;
  }
  return result;
}
