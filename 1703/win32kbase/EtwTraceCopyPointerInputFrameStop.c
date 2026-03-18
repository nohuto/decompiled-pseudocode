/*
 * XREFs of EtwTraceCopyPointerInputFrameStop @ 0x1C00D9C00
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C012B260 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00DB150 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceCopyPointerInputFrameStop(__int64 a1)
{
  __int64 result; // rax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000000LL) != 0 )
    return TemplateEventDescriptor(a1, &CopyPointerInputFrameStop, &W32kControlGuid);
  return result;
}
