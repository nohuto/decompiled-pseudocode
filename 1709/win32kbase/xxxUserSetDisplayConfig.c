/*
 * XREFs of xxxUserSetDisplayConfig @ 0x1C00DDDC0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A2A28 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DC5EC (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DCE00 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00DD980 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     NtUserSetDisplayConfig @ 0x1C00E99F0 (NtUserSetDisplayConfig.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F7F5C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00F9720 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     xxxResetDisplayDevice @ 0x1C00626E0 (xxxResetDisplayDevice.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0063E68 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 *     LogDiagSDC @ 0x1C0067094 (LogDiagSDC.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00671C8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     DrvQueryMDEVPowerState @ 0x1C0067500 (DrvQueryMDEVPowerState.c)
 *     PowerDimUndimResend @ 0x1C00786C8 (PowerDimUndimResend.c)
 *     SafeEnableMDEV @ 0x1C00A5EC0 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00A5F10 (SafeDisableMDEV.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00ABC7C (DrvSetDisplayConfigValidateParams.c)
 */

__int64 __fastcall xxxUserSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        bool *a7,
        _BYTE *a8,
        __int64 a9)
{
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v11; // r12
  ULONG TimeIncrement; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagDESKTOP *v16; // rdi
  __int64 v17; // r15
  PVOID CurrentProcess; // rax
  char v19; // r14
  signed int v21; // ebx
  unsigned int v22; // r14d
  unsigned int v23; // esi
  struct tagMONITOR *CachedMonitor; // rax
  int v25; // ecx
  unsigned int v26; // esi
  void *v27; // rdx
  __int64 v28; // r12
  int v29; // eax
  void *v30; // rdx
  __int64 i; // rdx
  _QWORD *v32; // rcx
  char v33; // [rsp+30h] [rbp-61h]
  _BYTE v34[4]; // [rsp+78h] [rbp-19h] BYREF
  int v35; // [rsp+7Ch] [rbp-15h] BYREF
  int v36; // [rsp+80h] [rbp-11h] BYREF
  __int64 v37; // [rsp+88h] [rbp-9h]
  struct _MDEV *v38[7]; // [rsp+90h] [rbp-1h] BYREF
  char v41; // [rsp+E8h] [rbp+57h] BYREF

  v38[0] = 0LL;
  v36 = 0;
  v11 = a2;
  v41 = 0;
  v37 = MEMORY[0xFFFFF78000000320];
  v34[0] = 0;
  v35 = 0;
  TimeIncrement = KeQueryTimeIncrement();
  v16 = (struct tagDESKTOP *)a5;
  v17 = v37 * TimeIncrement;
  v37 = v17;
  if ( !a5 || (*(_DWORD *)(a5 + 48) & 8) != 0 )
    v16 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 54);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v15, v14);
  v19 = a6;
  if ( CurrentProcess == gpepCSRSS || !a6 || (a4 & 0x10) != 0 )
  {
    if ( !v16 )
      v16 = grpdeskRitInput;
  }
  else if ( v16 != grpdeskRitInput )
  {
    return 3221225506LL;
  }
  v21 = DrvSetDisplayConfigValidateParams(a1, v11, a3, a4, a6);
  if ( v21 >= 0 )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
      10733637LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01608E8);
    if ( (a3 & 0x80) != 0 )
    {
      if ( gbMDEVDisabled )
      {
        v23 = 27;
LABEL_16:
        v22 = a1;
        v21 = -1073741823;
LABEL_52:
        v17 = v37;
        goto LABEL_53;
      }
      if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8)) )
      {
        v23 = 28;
        goto LABEL_16;
      }
      CachedMonitor = CreateCachedMonitor();
      v25 = v35;
      if ( !CachedMonitor )
        v25 = 16;
      v35 = v25;
      SetPointer(0LL);
      FreeAllSpbs();
      if ( qword_1C0192B88 )
        StopFade();
      bSetDevDragRect(*(_QWORD *)(gpDispInfo + 32), 0LL, 0LL, 0LL);
    }
    v26 = a4 | 0x40;
    if ( v16 )
      v27 = (void *)***((_QWORD ***)v16 + 1);
    else
      v27 = 0LL;
    v28 = a9;
    v33 = v19;
    v22 = a1;
    v29 = DrvSetDisplayConfig(
            a1,
            a2,
            a3,
            v26 | 0x100,
            v27,
            v33,
            0LL,
            *(struct _MDEV **)(gpDispInfo + 8),
            v38,
            (unsigned int *)&v36,
            (unsigned int *)&v35,
            &v41,
            v34,
            a9);
    v21 = v29;
    if ( (a3 & 0x80) == 0 )
    {
      v23 = v35;
LABEL_51:
      v11 = a2;
      goto LABEL_52;
    }
    if ( v29 >= 0 )
      goto LABEL_36;
    if ( v34[0] )
    {
      if ( v16 )
        v30 = (void *)***((_QWORD ***)v16 + 1);
      else
        v30 = 0LL;
      v29 = DrvSetDisplayConfig(
              0,
              0LL,
              0x98Fu,
              0x102u,
              v30,
              0,
              0LL,
              *(struct _MDEV **)(gpDispInfo + 8),
              v38,
              0LL,
              0LL,
              &v41,
              0LL,
              v28);
    }
    if ( v29 >= 0 )
    {
LABEL_36:
      v21 = v29;
      if ( (v26 & 0x200) != 0 )
      {
        *((_WORD *)gpsi + 4987) = gdmLogPixels;
        for ( i = gppiList; i; i = *(_QWORD *)(i + 352) )
          *(_WORD *)(i + 284) = *((_WORD *)gpsi + 4987);
      }
      gppiFullscreen = 0LL;
      if ( !v41 )
      {
        *(struct _MDEV **)(gpDispInfo + 8) = v38[0];
        PowerDimUndimResend();
        v21 = xxxResetDisplayDevice((__int64)v16, 0, (v26 >> 4) & 1);
        v23 = 36;
        if ( v21 < 0 )
          goto LABEL_46;
        goto LABEL_45;
      }
      if ( (v26 & 4) != 0 )
      {
LABEL_45:
        v23 = v35;
LABEL_46:
        if ( v16 )
        {
          v32 = (_QWORD *)*((_QWORD *)v16 + 1);
          if ( (*(_DWORD *)(*v32 + 52LL) & 1) == 0 )
            xxxInternalInvalidate(v32[2], 1LL, 66693LL);
        }
        SetPointer(1LL);
        zzzUpdateCursorImage();
        goto LABEL_51;
      }
      if ( (unsigned int)SafeDisableMDEV(1u) )
        SafeEnableMDEV(1u);
    }
    xxxUserResetDisplayDevice();
    goto LABEL_45;
  }
  v22 = a1;
  v23 = 1;
LABEL_53:
  if ( a7 )
    *a7 = v23 - 27 <= 1;
  if ( a8 )
    *a8 = v41;
  if ( v21 >= 0 && v23 == 29 )
    v21 = -1073741266;
  LogDiagSDC(v22, (__int64)v11, a3, v21, v36, v23, v17, v41);
  return (unsigned int)v21;
}
