/*
 * XREFs of CheckAccessForIntegrityLevelEx @ 0x1C0073EF4
 * Callers:
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C003E3D0 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     NtUserGetDC @ 0x1C0048830 (NtUserGetDC.c)
 *     NtUserChangeDisplaySettings @ 0x1C0064B40 (NtUserChangeDisplaySettings.c)
 *     NtUserSetSysColors @ 0x1C0092C00 (NtUserSetSysColors.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0093DF8 (_anonymous_namespace_--ValidateUIPI.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00E71C0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserEnableTouchPad @ 0x1C00E74E0 (NtUserEnableTouchPad.c)
 *     NtUserSetDisplayConfig @ 0x1C00E99F0 (NtUserSetDisplayConfig.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00EA4E0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C00EA7B0 (NtUserSystemParametersInfo.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C01170A8 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01233C8 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C012F000 (ProcessKeyboardInjectedInputViaRim.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CheckAccessForIntegrityLevelEx(__int64 a1, __int64 a2, int a3)
{
  return !gbEnforceUIPI
      || (unsigned int)a1 > (unsigned int)a2
      || (_DWORD)a1 == (_DWORD)a2 && (HIDWORD(a1) == HIDWORD(a2) || HIDWORD(a2) == -1 || HIDWORD(a1) == -1)
      || a3
      && (_DWORD)a1 == (_DWORD)a2
      && (unsigned __int8)SeIsParentOfChildAppContainer(gSessionId, HIDWORD(a1), HIDWORD(a2));
}
