/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x1C0019000
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C0008F10 (RIMRemoveInputOfType.c)
 *     RIMReadInput @ 0x1C00095B0 (RIMReadInput.c)
 *     RIMUnregisterForInput @ 0x1C00099C0 (RIMUnregisterForInput.c)
 *     RIMOnPnpNotification @ 0x1C000A430 (RIMOnPnpNotification.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C000AB20 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDeviceIoControl @ 0x1C000AC40 (RIMDeviceIoControl.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0018DA0 (RIMDirectStartStopDeviceRead.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C001A984 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0091E24 (UserDeactivateMITInputProcessing.c)
 *     RIMResetPointerDevices @ 0x1C0093AD0 (RIMResetPointerDevices.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0098970 (RIMRegisterForInputWithCallbacks.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C009E5A0 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMOnPowerNotification @ 0x1C00A3A20 (RIMOnPowerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C00A5230 (RIMRefreshDeviceAttributes.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00A5880 (RIMDirectStartDeviceClassNotifications.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C00FFAB4 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0100490 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C01008E0 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0100A30 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0100D30 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01015C0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C0101A40 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0101B80 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C0101E10 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C0102390 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0102590 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0102740 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C0102A40 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0102CD0 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C0102E50 (RIMOnTimerNotification.c)
 *     RIMRemoveInjectionDevice @ 0x1C01032D0 (RIMRemoveInjectionDevice.c)
 *     RIMUpdateSecondaryRim @ 0x1C010E49C (RIMUpdateSecondaryRim.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputManagerObjectResolveHandle(char *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  v5 = ObReferenceObjectByHandle(a1, a2, ExRawInputManagerObjectType, a3, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)Object + 1) == 1 )
    {
      *a4 = Object;
    }
    else
    {
      v5 = -1073741788;
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)v5;
}
