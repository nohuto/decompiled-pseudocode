/*
 * XREFs of __security_check_cookie @ 0x1C0013F20
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0001590 (NVMeHwFindAdapter.c)
 *     GetInterruptMessageInformation @ 0x1C0003B64 (GetInterruptMessageInformation.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C00069A4 (NVMeInitHostMemoryBuffer.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C0006C10 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C0006CF8 (NVMeInitStreams.c)
 *     BuildReadWriteCommand @ 0x1C00076A4 (BuildReadWriteCommand.c)
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     FormInquiryStandardData @ 0x1C0007B20 (FormInquiryStandardData.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C000C9A8 (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C000CE78 (IoctlStorageStreamsGetOpenStreams.c)
 *     NVMeLogTelemetry @ 0x1C000DABC (NVMeLogTelemetry.c)
 *     GetRegistrySettings @ 0x1C0012E34 (GetRegistrySettings.c)
 *     __GSHandlerCheckCommon @ 0x1C0013FAC (__GSHandlerCheckCommon.c)
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
