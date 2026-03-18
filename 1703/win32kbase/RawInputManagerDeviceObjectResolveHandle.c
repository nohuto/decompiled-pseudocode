/*
 * XREFs of RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210
 * Callers:
 *     rimCreateDev @ 0x1C00540FC (rimCreateDev.c)
 *     RIMDeviceIoControl @ 0x1C006E8B0 (RIMDeviceIoControl.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0094074 (rimProcessAnyQueuedCompleteFrames.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0099F30 (RIMRefreshDeviceAttributes.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C009A210 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     NtUserRemoveInjectionDevice @ 0x1C00E3270 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00E3D80 (NtUserSetFeatureReportResponse.c)
 *     RIMAreSiblingDevices @ 0x1C0100C50 (RIMAreSiblingDevices.c)
 *     RIMCompleteSecondaryRimReads @ 0x1C0100E00 (RIMCompleteSecondaryRimReads.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C0101530 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C01017A0 (RIMGetDevicePropertiesLockfree.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0101DA0 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0101F60 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C0102260 (RIMInjectInput.c)
 *     RIMRemoveInjectionDevice @ 0x1C0103110 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C0103300 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C010A454 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C010A680 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C010ABE8 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C010ADCC (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C010AEE4 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C010B128 (RIMIDEInjectMouseInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C010C72C (RIMIDE_InjectGenericHidInput.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C010C9F4 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C01155AC (rimObsCheckForExistingDeviceHandle.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011C1B8 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C01305CC (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 *     ?GetDeviceRects@CMouseAsTouchAdapter@@AEAAHPEAXPEAUtagRECT@@1@Z @ 0x1C0132718 (-GetDeviceRects@CMouseAsTouchAdapter@@AEAAHPEAXPEAUtagRECT@@1@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00E6EB8 (WPP_RECORDER_SF_qD.c)
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
      (__int64)&WPP_d9bf6cccd8a1329cbb38fe71acf4c001_Traceguids,
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
