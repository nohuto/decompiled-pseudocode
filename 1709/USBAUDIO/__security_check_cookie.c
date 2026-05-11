/*
 * XREFs of __security_check_cookie @ 0x1C0006850
 * Callers:
 *     McTemplateK0 @ 0x1C0001954 (McTemplateK0.c)
 *     McTemplateK0zq @ 0x1C0001994 (McTemplateK0zq.c)
 *     McTemplateK0q @ 0x1C0001A30 (McTemplateK0q.c)
 *     WmiLogEvent @ 0x1C0002300 (WmiLogEvent.c)
 *     WmiLogStreamPosition @ 0x1C0002420 (WmiLogStreamPosition.c)
 *     __GSHandlerCheckCommon @ 0x1C00068CC (__GSHandlerCheckCommon.c)
 *     _handle_error @ 0x1C0006DA4 (_handle_error.c)
 *     RaiseException @ 0x1C0006FF0 (RaiseException.c)
 *     PinMatchChannelConfigToFormat @ 0x1C00140F0 (PinMatchChannelConfigToFormat.c)
 *     PinCreate @ 0x1C00144D0 (PinCreate.c)
 *     PropertyGetAudioPosition @ 0x1C0017CE0 (PropertyGetAudioPosition.c)
 *     PropertyDrmAudioStream_SetContentId @ 0x1C0018530 (PropertyDrmAudioStream_SetContentId.c)
 *     RegistryReadNameValue @ 0x1C0019EA0 (RegistryReadNameValue.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C001D070 (USBParseGetMicArrayDescriptor.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
