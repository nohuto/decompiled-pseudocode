/*
 * XREFs of EtwTraceStartProcessQueuedMouseEvents @ 0x1C008C980
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00477DC (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceStartProcessQueuedMouseEvents(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return TemplateEventDescriptor(a1, &StartProcessQueuedMouseEvents, &W32kControlGuid);
  return result;
}
