/*
 * XREFs of __security_check_cookie @ 0x1C00138B0
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C00015C0 (NVMeHwFindAdapter.c)
 *     GetInterruptMessageInformation @ 0x1C0003B4C (GetInterruptMessageInformation.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000672C (NVMeInitHostMemoryBuffer.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C0006990 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C0006A78 (NVMeInitStreams.c)
 *     BuildReadWriteCommand @ 0x1C00073B0 (BuildReadWriteCommand.c)
 *     SrbAssignQueueId @ 0x1C00075C0 (SrbAssignQueueId.c)
 *     FormInquiryStandardData @ 0x1C000782C (FormInquiryStandardData.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C000C578 (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C000CA48 (IoctlStorageStreamsGetOpenStreams.c)
 *     NVMeLogTelemetry @ 0x1C000D608 (NVMeLogTelemetry.c)
 *     GetRegistrySettings @ 0x1C00128E0 (GetRegistrySettings.c)
 *     __GSHandlerCheckCommon @ 0x1C001393C (__GSHandlerCheckCommon.c)
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
