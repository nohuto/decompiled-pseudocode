/*
 * XREFs of EtwTraceCopyPointerInputFrameStart @ 0x1C00DFF40
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C012A90C (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceCopyPointerInputFrameStart(__int64 a1)
{
  __int64 result; // rax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 1) != 0 )
    return McTemplateK0(a1, &CopyPointerInputFrameStart, &W32kControlGuid);
  return result;
}
