/*
 * XREFs of EtwTraceStartProcessQueuedMouseEvents @ 0x1C008A5C0
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0013E1C (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceStartProcessQueuedMouseEvents(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0(a1, &StartProcessQueuedMouseEvents, &W32kControlGuid);
  return result;
}
