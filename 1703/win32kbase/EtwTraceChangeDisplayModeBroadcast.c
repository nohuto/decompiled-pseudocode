/*
 * XREFs of EtwTraceChangeDisplayModeBroadcast @ 0x1C0092460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceChangeDisplayModeBroadcast(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return TemplateEventDescriptor(a1, &ChangeDisplayModeBroadcast, a1);
  return result;
}
