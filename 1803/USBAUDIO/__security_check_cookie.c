/*
 * XREFs of __security_check_cookie @ 0x1C00089A0
 * Callers:
 *     McTemplateK0 @ 0x1C0001A98 (McTemplateK0.c)
 *     McTemplateK0zq @ 0x1C0001AD8 (McTemplateK0zq.c)
 *     McTemplateK0q @ 0x1C0001B74 (McTemplateK0q.c)
 *     WmiLogEvent @ 0x1C000241C (WmiLogEvent.c)
 *     WmiLogStreamPosition @ 0x1C000253C (WmiLogStreamPosition.c)
 *     USBD_CreateHandle @ 0x1C0007F5C (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C00087A4 (USBD_QueryUsbCapability.c)
 *     __GSHandlerCheckCommon @ 0x1C0008A1C (__GSHandlerCheckCommon.c)
 *     _handle_error @ 0x1C0008EF4 (_handle_error.c)
 *     RaiseException @ 0x1C0009140 (RaiseException.c)
 *     PinMatchChannelConfigToFormat @ 0x1C001853C (PinMatchChannelConfigToFormat.c)
 *     PinCreate @ 0x1C0018920 (PinCreate.c)
 *     PropertyGetAudioPosition @ 0x1C001C090 (PropertyGetAudioPosition.c)
 *     PropertyDrmAudioStream_SetContentId @ 0x1C001C8D0 (PropertyDrmAudioStream_SetContentId.c)
 *     RegistryReadNameValue @ 0x1C001E250 (RegistryReadNameValue.c)
 *     USBDeviceStart @ 0x1C001F2A0 (USBDeviceStart.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C0021B90 (USBParseGetMicArrayDescriptor.c)
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
