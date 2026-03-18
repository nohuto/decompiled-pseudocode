/*
 * XREFs of EtwTraceDitShutdown @ 0x1C0092AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceDitShutdown(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return TemplateEventDescriptor(a1, &DitShutdown, &W32kControlGuid);
  return result;
}
