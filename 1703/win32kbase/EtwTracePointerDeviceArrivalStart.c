/*
 * XREFs of EtwTracePointerDeviceArrivalStart @ 0x1C0090E60
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C0054C24 (RIMAllocateHidDesc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTracePointerDeviceArrivalStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &PointerDeviceArrivalStart, &W32kControlGuid);
  return result;
}
