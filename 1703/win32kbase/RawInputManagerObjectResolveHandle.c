/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x1C0051DE0
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C004FFAC (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0050100 (RIMDirectStartStopDeviceRead.c)
 *     RIMDeviceIoControl @ 0x1C006E8B0 (RIMDeviceIoControl.c)
 *     UserDeactivateMITInputProcessing @ 0x1C008BCC0 (UserDeactivateMITInputProcessing.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C008FB70 (RIMRegisterForInputWithCallbacks.c)
 *     RIMRemoveInputOfType @ 0x1C0092F20 (RIMRemoveInputOfType.c)
 *     RIMReadInput @ 0x1C0093320 (RIMReadInput.c)
 *     RIMUnregisterForInput @ 0x1C0093730 (RIMUnregisterForInput.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0094120 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0096010 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0099F30 (RIMRefreshDeviceAttributes.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C009A540 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMOnPowerNotification @ 0x1C009AAC0 (RIMOnPowerNotification.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0100090 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C01004A0 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01005F0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01008F0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMFreeInputBuffer @ 0x1C01012C0 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0101400 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C0101670 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C0101BA0 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0101DA0 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0101F60 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C0102260 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C01024E0 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnCheckPointerDeviceMonitors @ 0x1C0102650 (RIMOnCheckPointerDeviceMonitors.c)
 *     RIMOnPnpNotification @ 0x1C01027D0 (RIMOnPnpNotification.c)
 *     RIMOnTimerNotification @ 0x1C0102C90 (RIMOnTimerNotification.c)
 *     RIMRemoveInjectionDevice @ 0x1C0103110 (RIMRemoveInjectionDevice.c)
 *     RIMResetPointerDevices @ 0x1C0103490 (RIMResetPointerDevices.c)
 *     RIMUpdateSecondaryRim @ 0x1C010FB20 (RIMUpdateSecondaryRim.c)
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
