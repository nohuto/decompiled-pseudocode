/*
 * XREFs of EtwTraceLatencyModeSwitchStart @ 0x1C009ADF0
 * Callers:
 *     RIMSendLatencyMgtRequest @ 0x1C009A9C0 (RIMSendLatencyMgtRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceLatencyModeSwitchStart(__int64 a1)
{
  __int64 result; // rax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x400000000LL) != 0 )
    return TemplateEventDescriptor(a1, &LatencyModeSwitchStart, &W32kControlGuid);
  return result;
}
