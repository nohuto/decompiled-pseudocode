/*
 * XREFs of EtwTracePointerDeviceOutOfRangeMessageStop @ 0x1C00DA350
 * Callers:
 *     RIMRemoveFromActiveDevices @ 0x1C00096B0 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00DB150 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTracePointerDeviceOutOfRangeMessageStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &PointerDeviceOutOfRangeMessageStop, &W32kControlGuid);
  return result;
}
