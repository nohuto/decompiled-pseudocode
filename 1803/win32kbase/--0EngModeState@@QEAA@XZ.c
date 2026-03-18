/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C0077A3C
 * Callers:
 *     EngCombineRgn @ 0x1C00D91E0 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C00D9280 (EngCopyRgn.c)
 *     EngCreateRectRgn @ 0x1C00D9300 (EngCreateRectRgn.c)
 *     EngDeleteRgn @ 0x1C00D9380 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C00D93F0 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C00D94A0 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C00D9500 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C00D9570 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C00D9610 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C00D9680 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C00D96E0 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C00D9770 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00D9810 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00D98B0 (EngXorRgn.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
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
