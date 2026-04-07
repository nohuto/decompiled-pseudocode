/*
 * XREFs of ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002AC30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z @ 0x1800025FC (-GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z.c)
 *     ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x1800027C8 (-UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z.c)
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x180002850 (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 *     ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x180002900 (-UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTI.c)
 *     ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x180002984 (-RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z.c)
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180004364 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180004410 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180005518 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18000D1F8 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x18000D3B4 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18000D404 (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800159D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x18001D534 (-ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x18001D5C0 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18002BEC8 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x18002C5C4 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x18002C690 (-UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002D790 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18003B144 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x18003B1AC (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x1800757A0 (-UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z.c)
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18007A29C (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 *     ?GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS@@@Z @ 0x180084884 (-GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETER.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x18008498C (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x180084A64 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?GetUnmetTabRequirements@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETUNMETTABREQUIREMENTS@@@Z @ 0x180084BF8 (-GetUnmetTabRequirements@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETUNMETTABREQUIREMENTS@@@.c)
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x180085114 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x180085348 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180085658 (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x180085720 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x180085844 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180085D84 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR@@@Z @ 0x180085F20 (-SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICD.c)
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180085FBC (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800860EC (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800862DC (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180086550 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x18008A4F0 (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18008A5E8 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x1800A83D8 (-OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x1800A8444 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800A84A0 (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A853C (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1800A8F18 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

__int64 __fastcall CWindowList::ProcessSyncDwmMessage(
        CWindowList *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned int a6,
        struct _REMOTE_PORT_VIEW *a7,
        int *a8,
        unsigned int *a9)
{
  const struct _REMOTE_PORT_VIEW *v10; // rdx
  int WindowThumbnailSourceSize; // esi
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rdi
  unsigned int v18; // r12d
  int v19; // eax
  __int64 v20; // rax
  struct IDwmWindow *v21; // rsi
  _QWORD *v22; // rax
  int v23; // esi
  __int64 v24; // rdi
  int v25; // eax
  struct CVisual *v26; // rsi
  unsigned int v27; // eax
  LONG v28; // r13d
  LONG v29; // r12d
  bool v30; // zf
  unsigned int v31; // eax
  unsigned int v32; // r13d
  CButton *v33; // rcx
  struct CVisual *v34; // rdx
  CBaseObject *v35; // r13
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned int v39; // edi
  int WindowAttribute; // eax
  __int64 v41; // rcx
  volatile signed __int32 *v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  unsigned int v49; // r8d
  CAnimationClockCoordinator *v50; // rcx
  unsigned int v51; // r8d
  CAnimationClockCoordinator *v52; // rcx
  CAnimationClockCoordinator *v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  struct _GUID v58; // xmm0
  CAnimationClockCoordinator *v59; // rcx
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  CWindowData *v72; // rax
  CWindowData *v73; // rax
  __int64 v74; // rax
  struct CWindowData *v75; // r8
  int v76; // eax
  float *v77; // rdx
  bool v78; // [rsp+40h] [rbp-C0h]
  unsigned int v79; // [rsp+44h] [rbp-BCh]
  unsigned int v80; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE hObject; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v82; // [rsp+58h] [rbp-A8h] BYREF
  float v83; // [rsp+60h] [rbp-A0h] BYREF
  float v84; // [rsp+64h] [rbp-9Ch]
  struct CVisual *v85; // [rsp+68h] [rbp-98h] BYREF
  struct _RTL_CRITICAL_SECTION *v86; // [rsp+70h] [rbp-90h] BYREF
  __int64 v87; // [rsp+78h] [rbp-88h] BYREF
  void *v88; // [rsp+80h] [rbp-80h] BYREF
  __int64 v89; // [rsp+88h] [rbp-78h] BYREF
  __int64 v90; // [rsp+90h] [rbp-70h] BYREF
  __int64 v91; // [rsp+98h] [rbp-68h] BYREF
  __int64 v92; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v93; // [rsp+A8h] [rbp-58h] BYREF
  struct _GUID v94; // [rsp+B0h] [rbp-50h] BYREF
  struct _GUID v95; // [rsp+C0h] [rbp-40h] BYREF
  struct _GUID v96; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v97; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v98; // [rsp+F0h] [rbp-10h] BYREF
  struct _GUID v99; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v100[64]; // [rsp+110h] [rbp+10h] BYREF

  v10 = a7;
  hObject = a7;
  *a9 = 0;
  WindowThumbnailSourceSize = -2147024872;
  if ( a2 == 1073741849 )
  {
    if ( a4 != 52 )
      goto LABEL_42;
    v15 = *(_QWORD *)(a3 + 4);
    if ( v15 && !(unsigned int)DwmValidateWindow(v15, a6) )
    {
      WindowThumbnailSourceSize = -2147024891;
      goto LABEL_42;
    }
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v16 = *(_QWORD *)(a3 + 4);
    v17 = 0LL;
    v18 = -2;
    v80 = -2;
    v19 = 1;
    if ( !v16 )
      goto LABEL_37;
    v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 6) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6));
    v21 = (struct IDwmWindow *)v20;
    if ( !v20 )
      goto LABEL_36;
    v22 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    if ( v22 )
    {
      v23 = 0;
    }
    else
    {
      v72 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 16LL))(
                             WPF::g_pProcessHeap,
                             744LL);
      if ( !v72 || (v73 = CWindowData::CWindowData(v72), (hObject = v73) == 0LL) )
      {
        v23 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6DEu);
        goto LABEL_200;
      }
      *((_QWORD *)v73 + 3) = v21;
      (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))v21)(v21, v73);
      v74 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v21 + 24LL))(v21);
      v75 = (struct CWindowData *)hObject;
      *((_QWORD *)hObject + 5) = v74;
      v76 = CWindowList::SyncWindowData(a1, v21, v75);
      v23 = v76;
      if ( v76 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v76, 0x6E2u);
LABEL_10:
        if ( v23 >= 0 )
        {
          if ( v17 )
          {
            v24 = v17[49];
            if ( v24 )
            {
              v78 = 1;
              if ( (*(_BYTE *)(a3 + 24) & 1) == 0 )
              {
                v25 = *(_DWORD *)(a3 + 12);
                if ( v25 != 513 && v25 != 161 )
                  v78 = 0;
              }
              v26 = 0LL;
              v27 = *(_DWORD *)(a3 + 40);
              v82 = *(struct tagPOINT *)(a3 + 16);
              v28 = v82.y - *(_DWORD *)(v24 + 116);
              v29 = v82.x - *(_DWORD *)(v24 + 112);
              v30 = (*(_BYTE *)(v24 + 84) & 2) == 0;
              v79 = v27;
              v85 = 0LL;
              v82.x = v29;
              v82.y = v28;
              if ( !v30 )
              {
                CVisual::GetCurrentTransform((CVisual *)v24, (struct D2DMatrix *)v100);
                if ( !D2DMatrixInverse((struct D2DMatrix *)v100, v77, (const struct D2DMatrix *)v100) )
                {
                  v18 = 0;
                  v80 = 0;
                  goto LABEL_19;
                }
                v83 = (float)v29;
                v84 = (float)v28;
                D3DXVec2TransformCoord(
                  (struct D2DVector2 *)&v83,
                  (const struct D2DVector2 *)&v83,
                  (const struct D2DMatrix *)v100);
                v82.y = (int)v84;
                v82.x = (int)v83;
              }
              CTopLevelWindow::DoHitTest((CTopLevelWindow *)v24, &v82, &v85, &v80);
              v18 = v80;
              v26 = v85;
LABEL_19:
              v31 = v79;
              v32 = 4;
              if ( v79 <= 0x15 )
              {
                switch ( v79 )
                {
                  case 8u:
                    v32 = 1;
                    break;
                  case 9u:
                    v32 = 2;
                    break;
                  case 0x14u:
                    v32 = 3;
                    break;
                  case 0x15u:
                    v32 = 0;
                    break;
                }
              }
              v33 = *(CButton **)(v24 + 736);
              v34 = v33;
              if ( v33 )
              {
                CButton::SetMouseCapture(v33, 0);
                v33 = *(CButton **)(v24 + 736);
                v34 = v33;
                if ( v33 )
                {
                  CBaseObject::Release(v33);
                  v33 = 0LL;
                  *(_QWORD *)(v24 + 736) = 0LL;
                  v34 = 0LL;
                }
                v31 = v79;
              }
              if ( v32 != 4 )
              {
                v34 = v33;
                v42 = *(volatile signed __int32 **)(v24 + 8LL * v32 + 480);
                if ( v42 )
                {
                  *(_QWORD *)(v24 + 736) = v42;
                  _InterlockedIncrement(v42 + 2);
                  CButton::SetMouseCapture((CButton *)v42, 1);
                  v34 = *(struct CVisual **)(v24 + 736);
                  v18 = v80;
                  v26 = v85;
                }
                v31 = v79;
              }
              if ( v34 )
              {
                if ( v31 != v18 )
                  v34 = 0LL;
                CTopLevelWindow::ChangeMouseOver((CTopLevelWindow *)v24, v34);
              }
              else
              {
                if ( v26 == (struct CVisual *)v24 )
                {
                  v26 = 0LL;
                  v85 = 0LL;
                }
                v35 = *(CBaseObject **)(v24 + 728);
                if ( v26 != v35 )
                {
                  *(_QWORD *)(v24 + 728) = v26;
                  if ( v26 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)v26 + 2);
                    v18 = v80;
                  }
                  if ( v35 )
                    (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v35 + 104LL))(v35);
                  v36 = *(_QWORD *)(v24 + 728);
                  if ( v36 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 96LL))(v36);
                  if ( v35 )
                    CBaseObject::Release(v35);
                }
              }
              v37 = *(_QWORD *)(v24 + 728);
              if ( v37 )
                (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v37 + 112LL))(v37, v78);
            }
          }
LABEL_36:
          v19 = 1;
LABEL_37:
          *(_DWORD *)(a3 + 44) = v18;
          if ( v18 == -2 )
            v19 = 0;
          *(_DWORD *)(a3 + 48) = v19;
LABEL_40:
          LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
          *a9 = 52;
LABEL_41:
          WindowThumbnailSourceSize = 0;
          goto LABEL_42;
        }
LABEL_200:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x6C1u);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x147Fu);
        goto LABEL_40;
      }
      v22 = hObject;
    }
    v17 = v22;
    goto LABEL_10;
  }
  if ( a2 == 1073741867 )
  {
    if ( !a5 )
      goto LABEL_42;
    if ( a4 <= 0x18 )
      goto LABEL_42;
    v39 = *(_DWORD *)(a3 + 20) + 24;
    if ( *(_DWORD *)(a3 + 20) >= 0xFFFFFFE8 || a4 < v39 || !*(_DWORD *)(a3 + 4) )
      goto LABEL_42;
    WindowAttribute = CWindowList::GetWindowAttribute(a1, (struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
    *a9 = v39;
  }
  else
  {
    switch ( a2 )
    {
      case 0x4000001Au:
        if ( !a5 || a4 != 156 )
          goto LABEL_42;
        CWindowList::GetTitleBarInfo(a1, (struct MILCMD_DWM_REDIRECTION_GETTITLEBARINFO *)a3);
        *a9 = 156;
        goto LABEL_41;
      case 0x4000001Fu:
        if ( a4 != 36 )
          goto LABEL_42;
        v44 = *(_QWORD *)(a3 + 12);
        if ( !v44 || (unsigned int)DwmValidateWindow(v44, a6) )
        {
          WindowAttribute = CWindowList::RegisterThumbnail(
                              a1,
                              a6,
                              (struct MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *)a3);
          break;
        }
        WindowThumbnailSourceSize = -2147024891;
        goto LABEL_42;
      case 0x40000020u:
        if ( a4 != 57 )
          goto LABEL_42;
        WindowAttribute = CWindowList::UpdateThumbnailProperties(
                            a1,
                            a6,
                            (struct MILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES *)a3);
        break;
      case 0x40000021u:
        if ( a4 != 12 )
          goto LABEL_42;
        WindowAttribute = CWindowList::UnregisterThumbnail(
                            a1,
                            a6,
                            (const struct MILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL *)a3);
        break;
      case 0x40000023u:
        if ( a4 != 20 )
          goto LABEL_42;
        WindowAttribute = CWindowList::QueryThumbnailSourceSize(
                            a1,
                            a6,
                            (struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE *)a3);
        *a9 = 20;
        break;
      case 0x40000024u:
        if ( a4 != 24 )
          goto LABEL_42;
        v41 = *(_QWORD *)(a3 + 4);
        if ( v41 && !(unsigned int)DwmValidateWindow(v41, a6) )
          WindowThumbnailSourceSize = -2147024891;
        else
          WindowThumbnailSourceSize = CWindowList::QueryWindowThumbnailSourceSize(
                                        a1,
                                        (struct MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *)a3);
        *a9 = 24;
        goto LABEL_53;
      case 0x40000029u:
        if ( a4 != 32 )
          goto LABEL_42;
        WindowAttribute = CWindowList::SetColorizationParameters(
                            a1,
                            (const struct MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS *)a3);
        break;
      case 0x4000002Au:
        if ( a4 != 32 )
          goto LABEL_42;
        CWindowList::GetColorizationParameters(a1, (struct MILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS *)a3);
        *a9 = 32;
        goto LABEL_41;
      case 0x40000034u:
        if ( a4 != 20 )
          goto LABEL_42;
        WindowAttribute = CWindowList::GetGlobalState(a1, (struct MILCMD_DWM_REDIRECTION_GETGLOBALSTATE *)a3);
        *a9 = 20;
        break;
      case 0x40000039u:
        if ( !CDesktopManager::IsLivePreviewAllowed() )
        {
          WindowThumbnailSourceSize = -2147024846;
          goto LABEL_42;
        }
        if ( a4 != 48 )
          goto LABEL_42;
        WindowAttribute = CWindowList::PostActivateLivePreview(
                            a1,
                            (const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *)a3);
        break;
      case 0x4000003Au:
        if ( a4 != 24 )
          goto LABEL_42;
        v46 = *(_QWORD *)(a3 + 4);
        if ( !v46 )
          goto LABEL_124;
        if ( !(unsigned int)DwmValidateWindow(v46, a6) )
        {
          WindowThumbnailSourceSize = -2147024891;
          goto LABEL_42;
        }
        v10 = (const struct _REMOTE_PORT_VIEW *)hObject;
LABEL_124:
        WindowAttribute = CWindowList::SetIconicThumbnail(
                            a1,
                            a6,
                            (const struct MILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL *)a3,
                            v10);
        break;
      case 0x4000003Cu:
        if ( a4 != 16 )
          goto LABEL_42;
        WindowAttribute = CWindowList::QueryThumbnailType(
                            a1,
                            a6,
                            (struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE *)a3);
        *a9 = 16;
        break;
      case 0x4000003Du:
        if ( !CDesktopManager::IsLivePreviewAllowed() )
        {
          WindowThumbnailSourceSize = -2147024846;
          goto LABEL_42;
        }
        if ( a4 != 32 )
          goto LABEL_42;
        v47 = *(_QWORD *)(a3 + 4);
        if ( v47 && !(unsigned int)DwmValidateWindow(v47, a6) )
        {
          WindowThumbnailSourceSize = -2147024891;
          goto LABEL_42;
        }
        WindowAttribute = CWindowList::SetIconicLivePreviewBitmap(
                            a1,
                            a6,
                            (const struct MILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP *)a3,
                            (const struct _REMOTE_PORT_VIEW *)hObject);
        break;
      case 0x4000003Eu:
        if ( a4 != 12 )
          goto LABEL_42;
        v43 = *(_QWORD *)(a3 + 4);
        if ( !v43 || (unsigned int)DwmValidateWindow(v43, a6) )
        {
          WindowAttribute = CWindowList::InvalidateIconicBitmaps(
                              a1,
                              a6,
                              (const struct MILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS *)a3);
          break;
        }
        WindowThumbnailSourceSize = -2147024891;
        goto LABEL_42;
      case 0x40000041u:
        if ( a4 != 32 )
          goto LABEL_42;
        WindowAttribute = CContactManager::OnGesture(
                            *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 22),
                            (const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *)a3);
        break;
      case 0x40000042u:
        if ( a4 != 16 )
          goto LABEL_42;
        WindowAttribute = CContactManager::OnFlick(
                            *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 22),
                            (const struct MILCMD_DWM_REDIRECTION_RENDERFLICK *)a3);
        break;
      case 0x40000048u:
        if ( a4 != 48 )
          goto LABEL_42;
        WindowAttribute = CWindowList::StartTransition(a1, (struct MILCMD_DWM_REDIRECTION_STARTTRANSITION *)a3);
        *a9 = 48;
        break;
      case 0x40000050u:
        if ( a4 != 8 )
          goto LABEL_42;
        WindowAttribute = CWindowList::HandleHardwareExpressionActivation(a1, *(_DWORD *)(a3 + 4));
        break;
      case 0x40000053u:
        if ( a4 != 52 )
          goto LABEL_42;
        WindowAttribute = CWindowList::UpdateSharedVirtualDesktopVisual(
                            a1,
                            a6,
                            (const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *)a3,
                            a7);
        break;
      case 0x40000056u:
        if ( a4 != 16 )
          goto LABEL_42;
        v45 = *(_QWORD *)(a3 + 4);
        if ( v45 && !(unsigned int)DwmValidateWindow(v45, a6) )
        {
          WindowThumbnailSourceSize = -2147024891;
          goto LABEL_42;
        }
        WindowAttribute = CWindowList::SetIconicBitmapBackgroundColor(
                            a1,
                            (const struct MILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR *)a3);
        break;
      case 0x4000005Au:
        if ( a4 != 24 )
          goto LABEL_42;
        v49 = *(_DWORD *)(a3 + 20);
        v50 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
        v94 = *(struct _GUID *)(a3 + 4);
        WindowAttribute = CAnimationClockCoordinator::OnCreateAnimationClock(v50, &v94, v49);
        break;
      case 0x4000005Bu:
        if ( a4 != 24 )
          goto LABEL_42;
        v51 = *(_DWORD *)(a3 + 20);
        v52 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
        v95 = *(struct _GUID *)(a3 + 4);
        WindowAttribute = CAnimationClockCoordinator::OnBeginAnimationClock(v52, &v95, v51);
        break;
      case 0x4000005Cu:
        if ( a4 != 20 )
          goto LABEL_42;
        v53 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
        v96 = *(struct _GUID *)(a3 + 4);
        WindowAttribute = CAnimationClockCoordinator::OnEndAnimationClock(v53, &v96);
        break;
      case 0x4000005Du:
        if ( a4 != 32 )
          goto LABEL_42;
        v54 = *(unsigned int *)(a3 + 20);
        v55 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
        v97 = *(_OWORD *)(a3 + 4);
        WindowAttribute = CAnimationClockCoordinator::OnGetAnimationClockTime(v55, &v97, v54, a3 + 24);
        *a9 = 32;
        break;
      case 0x4000005Eu:
        if ( a4 != 32 )
          goto LABEL_42;
        v56 = *(unsigned int *)(a3 + 20);
        v57 = 0LL;
        v30 = *(_QWORD *)(a3 + 24) == 0LL;
        v98 = *(_OWORD *)(a3 + 4);
        if ( !v30 )
          v57 = a3 + 24;
        WindowAttribute = CAnimationClockCoordinator::OnSetAnimationClockTime(
                            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23),
                            &v98,
                            v56,
                            v57);
        break;
      case 0x4000005Fu:
        if ( a4 != 28 )
          goto LABEL_42;
        v58 = *(struct _GUID *)(a3 + 4);
        hObject = 0LL;
        v59 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
        v99 = v58;
        WindowThumbnailSourceSize = CAnimationClockCoordinator::OnGetAnimationClockToken(v59, &v99, &hObject);
        if ( WindowThumbnailSourceSize >= 0 )
        {
          v60 = NtDCompositionDuplicateHandleToProcess(hObject, a6, &v87);
          WindowThumbnailSourceSize = v60 | 0x10000000;
          if ( v60 >= 0 )
            *(_QWORD *)(a3 + 20) = v87;
          CloseHandle(hObject);
        }
        *a9 = 28;
        goto LABEL_53;
      case 0x40000060u:
        if ( a4 != 28 )
          goto LABEL_42;
        WindowThumbnailSourceSize = CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
                                      *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 23),
                                      (const struct _GUID *)(a3 + 4),
                                      a6,
                                      &v88);
        *(_QWORD *)(a3 + 20) = v88;
        *a9 = 28;
        goto LABEL_53;
      case 0x40000066u:
        if ( a4 != 76 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x37Fu);
          return 0LL;
        }
        v86 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                                       *(_QWORD *)(a3 + 56));
        WindowThumbnailSourceSize = CMagnifierControl::OnMagnifierSyncApiMessage(MagnifierControlForDesktop, a2, a3, a5);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v86);
        goto LABEL_53;
      case 0x4000006Fu:
        if ( a4 != 64 )
          goto LABEL_42;
        WindowAttribute = CWindowList::TransitionBitmap(
                            a1,
                            (const struct MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP *)a3,
                            a7);
        break;
      case 0x40000072u:
        if ( a4 != 28 )
          goto LABEL_42;
        WindowAttribute = CWindowList::UpdateAccentBlurRect(
                            a1,
                            (const struct MILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE *)a3);
        break;
      case 0x40000073u:
        if ( a4 != 20 )
          goto LABEL_42;
        WindowAttribute = CDesktopManager::UpdateSDRToHDRBoost(
                            CDesktopManager::s_pDesktopManagerInstance,
                            *(HMONITOR *)(a3 + 4),
                            *(double *)(a3 + 12));
        *a9 = 20;
        break;
      case 0x40000074u:
        LOBYTE(v10) = 3;
        wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(a1, v10);
        goto LABEL_42;
      case 0x40000075u:
        if ( a4 != 16 )
          goto LABEL_42;
        v71 = *(_QWORD *)(a3 + 4);
        *(_DWORD *)(a3 + 12) = 0;
        if ( !v71 || (unsigned int)DwmValidateWindow(v71, a6) )
          WindowThumbnailSourceSize = CWindowList::GetUnmetTabRequirements(
                                        a1,
                                        (struct MILCMD_DWM_REDIRECTION_GETUNMETTABREQUIREMENTS *)a3);
        else
          WindowThumbnailSourceSize = -2147024891;
        *a9 = 16;
        goto LABEL_53;
      case 0x40000077u:
        if ( a4 != 36 )
          goto LABEL_42;
        *a9 = 36;
        return 2147500033LL;
      case 0x40000078u:
        if ( a4 != 28 )
          goto LABEL_42;
        if ( a6 != *(_DWORD *)(a3 + 24) )
        {
          WindowThumbnailSourceSize = -2147024891;
          goto LABEL_42;
        }
        v66 = *(_QWORD *)(a3 + 12);
        v67 = *(_QWORD *)(a3 + 4);
        v68 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60);
        v91 = *(_QWORD *)(a3 + 20);
        WindowAttribute = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v68 + 8LL))(
                            v68,
                            v67,
                            v66,
                            &v91);
        break;
      case 0x40000079u:
        if ( a4 != 28 )
          goto LABEL_42;
        if ( a6 != *(_DWORD *)(a3 + 24) )
        {
          WindowThumbnailSourceSize = -2147024891;
          goto LABEL_42;
        }
        v63 = *(_QWORD *)(a3 + 12);
        v64 = *(_QWORD *)(a3 + 4);
        v65 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60);
        v90 = *(_QWORD *)(a3 + 20);
        WindowAttribute = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v65 + 32LL))(
                            v65,
                            v64,
                            v63,
                            &v90);
        break;
      case 0x4000007Au:
        if ( a4 != 20 )
          goto LABEL_42;
        if ( a6 != *(_DWORD *)(a3 + 16) )
        {
          WindowThumbnailSourceSize = -2147024891;
          goto LABEL_42;
        }
        v61 = *(_QWORD *)(a3 + 4);
        v62 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60);
        v89 = *(_QWORD *)(a3 + 12);
        WindowAttribute = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v62 + 16LL))(
                            v62,
                            v61,
                            &v89);
        break;
      case 0x4000007Bu:
        if ( a4 != 12 )
          goto LABEL_42;
        if ( a6 != *(_DWORD *)(a3 + 8) )
        {
          WindowThumbnailSourceSize = -2147024891;
          goto LABEL_42;
        }
        v69 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60);
        v92 = *(_QWORD *)(a3 + 4);
        WindowAttribute = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v69 + 24LL))(v69, &v92);
        break;
      case 0x4000007Cu:
        if ( a4 != 12 )
          goto LABEL_42;
        if ( a6 != *(_DWORD *)(a3 + 8) )
        {
          WindowThumbnailSourceSize = -2147024891;
          goto LABEL_42;
        }
        v70 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60);
        v93 = *(_QWORD *)(a3 + 4);
        WindowAttribute = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v70 + 40LL))(v70, &v93);
        break;
      default:
        return 2147500033LL;
    }
  }
  WindowThumbnailSourceSize = WindowAttribute;
LABEL_53:
  if ( WindowThumbnailSourceSize == -2147467263 )
    return 2147500033LL;
LABEL_42:
  if ( a8 )
    *a8 = WindowThumbnailSourceSize;
  return 0LL;
}
