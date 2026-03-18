/*
 * XREFs of __security_check_cookie @ 0x1C0011E70
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0001580 (NVMeHwFindAdapter.c)
 *     GetInterruptMessageInformation @ 0x1C00038A4 (GetInterruptMessageInformation.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000631C (NVMeInitHostMemoryBuffer.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C0006580 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C0006668 (NVMeInitStreams.c)
 *     BuildReadWriteCommand @ 0x1C0006F74 (BuildReadWriteCommand.c)
 *     SrbAssignQueueId @ 0x1C000718C (SrbAssignQueueId.c)
 *     FormInquiryStandardData @ 0x1C00073E0 (FormInquiryStandardData.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C000BE0C (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C000C2BC (IoctlStorageStreamsGetOpenStreams.c)
 *     NVMeLogTelemetry @ 0x1C000CE9C (NVMeLogTelemetry.c)
 *     GetRegistrySettings @ 0x1C0010E90 (GetRegistrySettings.c)
 *     __GSHandlerCheckCommon @ 0x1C0011EDC (__GSHandlerCheckCommon.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
LABEL_4:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto LABEL_4;
  }
}
