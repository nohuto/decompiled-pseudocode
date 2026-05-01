/*
 * XREFs of ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005FC70
 * Callers:
 *     ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180020090 (-OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180021C40 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800227EC (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUI.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180023088 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUVie.c)
 *     ?_RestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@@Z @ 0x180023304 (-_RestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSi.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180041C70 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18004DCF0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x1800608A0 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x180060CA0 (-IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z.c)
 *     ?SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU?$IVector@PEAVUserActivityAppId@UserActivities@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAUHSTRING__@@1UDateTime@56@3@Z @ 0x1800611F0 (-SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU-$IVector@PEAVUserActivityAppI.c)
 *     ?SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU?$IVector@PEAVUserActivityAppId@UserActivities@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAUHSTRING__@@1UDateTime@56@3@Z @ 0x1800613C0 (-SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU-$IVector@PEAVUserActivityAppId.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180061DB4 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?IsWideAtStartupDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180089D3C (-IsWideAtStartupDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180089E5C (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x18009282C (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 */

__int64 __fastcall wil_details_RecordUsageInPropertyCache(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3,
        int a4,
        unsigned int a5)
{
  int v9; // edi
  int v10; // edx
  signed __int32 v11; // r8d
  int (*v13)(union wil_details_FeaturePropertyCache *, void *); // rdx
  volatile signed __int32 v14; // edx
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+2Ch] [rbp-2Ch]
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  int v19; // [rsp+38h] [rbp-20h]
  __int64 v20; // [rsp+40h] [rbp-18h]
  int v21; // [rsp+70h] [rbp+18h]
  volatile signed __int32 v22; // [rsp+70h] [rbp+18h]
  signed __int32 v23; // [rsp+70h] [rbp+18h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a3 == 2 )
  {
LABEL_2:
    v9 = 0;
    v21 = 0;
    switch ( a3 )
    {
      case 2:
        v21 = 0x10000;
        break;
      case 3:
        v21 = 0x40000;
        break;
      case 6:
        v21 = 0x20000;
        break;
      case 7:
        v21 = 0x80000;
        break;
    }
    v10 = v21;
    while ( 1 )
    {
      v22 = *a2;
      v11 = *a2;
      *(_DWORD *)a1 = 0;
      if ( (v10 & v22) == v10 )
        break;
      v23 = v10 | v22;
      if ( (v23 & 8) == 0 )
      {
        v23 |= 8u;
        *(_DWORD *)a1 = 1;
      }
      if ( v11 == _InterlockedCompareExchange(a2, v23, v11) )
        goto LABEL_7;
    }
    v9 = 1;
LABEL_7:
    *(_DWORD *)(a1 + 16) = v9;
  }
  else
  {
    switch ( a3 )
    {
      case 0:
      case 1:
      case 4:
      case 5:
        v18 = a1;
        v9 = 0;
        v19 = a3;
        v13 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheUsageCallback;
        v20 = a5;
        if ( (a3 & 0xFFFFFFFB) != 0 )
          v13 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheOpportunityCallback;
        LOBYTE(v9) = wil_details_ModifyFeatureData((union wil_details_FeaturePropertyCache *)a2, v13, &v18) == 0;
        goto LABEL_7;
      case 3:
      case 6:
      case 7:
        goto LABEL_2;
      default:
        if ( (unsigned int)(a3 - 320) > 0x3F )
          goto LABEL_25;
        v14 = *a2;
        if ( a3 - 320 != (((unsigned __int32)*a2 >> 7) & 0x3F) )
          goto LABEL_25;
        if ( (v14 & 0x40) != 0 )
        {
          *(_DWORD *)(a1 + 16) = 1;
        }
        else
        {
          v16 = 64;
          v17 = 1;
          v15 = a1;
          wil_details_ModifyFeatureData(
            (union wil_details_FeaturePropertyCache *)a2,
            (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback,
            &v15);
LABEL_25:
          *(_DWORD *)(a1 + 4) = a5;
          *(_DWORD *)(a1 + 8) = a3;
          *(_DWORD *)(a1 + 12) = a4;
        }
        break;
    }
  }
  return a1;
}
