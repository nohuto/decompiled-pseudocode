/*
 * XREFs of ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BFAC
 * Callers:
 *     ?SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x18000D630 (-SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYPE@@@Z @ 0x18000DA70 (-AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYP.c)
 *     ?DisplaySettingsChange@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18000F7E0 (-DisplaySettingsChange@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     ?AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x18000FF90 (-AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013B18 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z @ 0x180016310 (-_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z.c)
 *     ?_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z @ 0x1800163D0 (-_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z.c)
 *     CDelayIAMOperations::AddOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___ @ 0x1800190C4 (CDelayIAMOperations--AddOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___.c)
 *     CDelayIAMOperations::AddOperation__lambda_bb299bb733d931796faa9380238be063___ @ 0x1800196DC (CDelayIAMOperations--AddOperation__lambda_bb299bb733d931796faa9380238be063___.c)
 *     CDelayIAMOperations::AddOperation__lambda_af154e0da4f5cefd6500f7ba4b7c8077___ @ 0x18001A164 (CDelayIAMOperations--AddOperation__lambda_af154e0da4f5cefd6500f7ba4b7c8077___.c)
 *     ?GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z @ 0x1800351F0 (-GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180036160 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180038A8C (-_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicW.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x180059BFC (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?_QueryCloakedState@CTaskWindow@@AEAAXXZ @ 0x180066580 (-_QueryCloakedState@CTaskWindow@@AEAAXXZ.c)
 *     ?GetNativeWindow@CImmersiveApplicationWindow@@UEAAJPEAPEAUHWND__@@@Z @ 0x1800674F0 (-GetNativeWindow@CImmersiveApplicationWindow@@UEAAJPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CApplicationManagerUtility::IsValidWindow(CApplicationManagerUtility *this, HWND a2)
{
  int v3; // eax
  char v4; // bl

  SetLastError(0);
  v3 = IsWindowInDestroy(this);
  v4 = 0;
  if ( !v3 )
    return GetLastError() != 1400;
  return v4;
}
