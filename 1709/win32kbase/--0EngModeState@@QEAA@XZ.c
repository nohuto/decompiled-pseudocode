/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C00AA27C
 * Callers:
 *     EngCombineRgn @ 0x1C00FC410 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C00FC4B0 (EngCopyRgn.c)
 *     EngCreateRectRgn @ 0x1C00FC530 (EngCreateRectRgn.c)
 *     EngDeleteRgn @ 0x1C00FC5B0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C00FC620 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C00FC6D0 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C00FC730 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C00FC7A0 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C00FC840 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C00FC8B0 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C00FC910 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C00FC9A0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00FCA40 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00FCAE0 (EngXorRgn.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

EngModeState *__fastcall EngModeState::EngModeState(EngModeState *this)
{
  __int64 ThreadWin32Thread; // rax

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)this = ThreadWin32Thread;
  if ( ThreadWin32Thread )
    *(_BYTE *)(ThreadWin32Thread + 331) = 1;
  return this;
}
