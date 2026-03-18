/*
 * XREFs of EtwTracePointerDeviceInRangeMessageStop @ 0x1C00DA2F0
 * Callers:
 *     RIMAddToActiveDevices @ 0x1C0105BF0 (RIMAddToActiveDevices.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00DB150 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTracePointerDeviceInRangeMessageStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &PointerDeviceInRangeMessageStop, &W32kControlGuid);
  return result;
}
