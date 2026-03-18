/*
 * XREFs of CheckAccessForIntegrityLevelEx @ 0x1C007B40C
 * Callers:
 *     NtUserGetDC @ 0x1C00373A0 (NtUserGetDC.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0040ED8 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     NtUserChangeDisplaySettings @ 0x1C0057D70 (NtUserChangeDisplaySettings.c)
 *     NtUserSetSysColors @ 0x1C0063820 (NtUserSetSysColors.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C008BB10 (_anonymous_namespace_--ValidateUIPI.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00E0890 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserEnableTouchPad @ 0x1C00E0CE0 (NtUserEnableTouchPad.c)
 *     NtUserSetDisplayConfig @ 0x1C00E3450 (NtUserSetDisplayConfig.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00E4560 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C00E4870 (NtUserSystemParametersInfo.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C0118228 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0123D54 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C012F970 (ProcessKeyboardInjectedInputViaRim.c)
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
      && (unsigned __int8)SeIsParentOfChildAppContainer((unsigned int)gSessionId, HIDWORD(a1), HIDWORD(a2));
}
