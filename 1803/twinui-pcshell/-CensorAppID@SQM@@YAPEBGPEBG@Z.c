/*
 * XREFs of ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18009D860
 * Callers:
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x18011E3CC (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 *     ?GetAppNameFromView@AppViewManagerTabTelemetry@@CA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180120448 (-GetAppNameFromView@AppViewManagerTabTelemetry@@CA-AV-$unique_any_t@V-$unique_storage@U-$resourc.c)
 *     ?StartActivity@DragEnterForView@AppViewManagerTabTelemetry@@QEAAXPEBGAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x180122278 (-StartActivity@DragEnterForView@AppViewManagerTabTelemetry@@QEAAXPEBGAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x1801784EC (-StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@.c)
 *     ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x180197228 (-OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z.c)
 *     ?AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1@Z @ 0x18028DC80 (-AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1.c)
 *     ?ReverseAppToAppSwitch_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@W4AppCloseMethod@@@Z @ 0x1802C9BF8 (-ReverseAppToAppSwitch_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@W4AppClo.c)
 *     ?StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x1802CB068 (-StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall SQM::CensorAppID(LPCWSTR pszPath, const unsigned __int16 *a2)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( pszPath )
  {
    if ( PathIsFileSpecW(pszPath) )
      return pszPath;
    else
      return PathFindFileNameW(pszPath);
  }
  return (const unsigned __int16 *)v2;
}
