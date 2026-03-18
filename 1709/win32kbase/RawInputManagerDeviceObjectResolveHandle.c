/*
 * XREFs of RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C000A28C (rimProcessAnyQueuedCompleteFrames.c)
 *     RIMDeviceIoControl @ 0x1C000AC40 (RIMDeviceIoControl.c)
 *     rimCreateDev @ 0x1C000D5A0 (rimCreateDev.c)
 *     RIMRefreshDeviceAttributes @ 0x1C00A5230 (RIMRefreshDeviceAttributes.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C00A5510 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     NtUserRemoveInjectionDevice @ 0x1C00E9880 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00E9F40 (NtUserSetFeatureReportResponse.c)
 *     RIMAreSiblingDevices @ 0x1C0101090 (RIMAreSiblingDevices.c)
 *     RIMCompleteSecondaryRimReads @ 0x1C0101244 (RIMCompleteSecondaryRimReads.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01015C0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C0101CB0 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C0101F40 (RIMGetDevicePropertiesLockfree.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0102590 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0102740 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C0102A40 (RIMInjectInput.c)
 *     RIMRemoveInjectionDevice @ 0x1C01032D0 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C01034C8 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C01094E4 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C0109710 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C0109C70 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C0109E60 (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0109FB4 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C010A1F8 (RIMIDEInjectMouseInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C010B6E0 (RIMIDE_InjectGenericHidInput.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C010B940 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C011407C (rimObsCheckForExistingDeviceHandle.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011B014 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C012FF54 (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 *     ?GetDeviceRects@CMouseAsTouchAdapter@@AEAAHPEAXPEAUtagRECT@@1@Z @ 0x1C0131DF4 (-GetDeviceRects@CMouseAsTouchAdapter@@AEAAHPEAXPEAUtagRECT@@1@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00EC478 (WPP_RECORDER_SF_qD.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectResolveHandle(char *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  char v5; // di
  NTSTATUS v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  v5 = (char)a1;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  v6 = ObReferenceObjectByHandle(a1, a2, ExRawInputManagerObjectType, a3, &Object, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      20,
      10,
      (__int64)&WPP_5ee97b5c83df39baf3c48e7298b79641_Traceguids,
      v5,
      v6);
  }
  else if ( *((_DWORD *)Object + 1) == 2 )
  {
    *a4 = Object;
  }
  else
  {
    v8 = -1073741788;
    ObfDereferenceObject(Object);
  }
  return v8;
}
