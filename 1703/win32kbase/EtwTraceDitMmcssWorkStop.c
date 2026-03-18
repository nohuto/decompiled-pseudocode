/*
 * XREFs of EtwTraceDitMmcssWorkStop @ 0x1C00916B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceDitMmcssWorkStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return TemplateEventDescriptor(a1, &DitMmcssWorkStop, &W32kControlGuid);
  return result;
}
