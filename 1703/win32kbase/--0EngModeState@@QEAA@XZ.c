/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C00A09A4
 * Callers:
 *     EngCombineRgn @ 0x1C00FBEB0 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C00FBF50 (EngCopyRgn.c)
 *     EngCreateRectRgn @ 0x1C00FBFD0 (EngCreateRectRgn.c)
 *     EngDeleteRgn @ 0x1C00FC050 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C00FC0C0 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C00FC170 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C00FC1D0 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C00FC240 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C00FC2E0 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C00FC350 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C00FC3B0 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C00FC440 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00FC4E0 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00FC580 (EngXorRgn.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
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
