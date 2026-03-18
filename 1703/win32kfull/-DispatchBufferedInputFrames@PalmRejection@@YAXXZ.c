/*
 * XREFs of ?DispatchBufferedInputFrames@PalmRejection@@YAXXZ @ 0x1C01D3B10
 * Callers:
 *     EditionHandleMitSignal @ 0x1C00FF5C0 (EditionHandleMitSignal.c)
 *     UserProcessDwmInput @ 0x1C01A12C0 (UserProcessDwmInput.c)
 *     ?ProcessInput@PalmRejection@@YAHPEAX@Z @ 0x1C01D3CC4 (-ProcessInput@PalmRejection@@YAHPEAX@Z.c)
 * Callees:
 *     ?DispatchFrameAndGetNext@PalmRejection@@YAPEAXPEAX@Z @ 0x1C01D3BF4 (-DispatchFrameAndGetNext@PalmRejection@@YAPEAXPEAX@Z.c)
 */

void __fastcall PalmRejection::DispatchBufferedInputFrames(PalmRejection *this)
{
  struct tagPOINTERINPUTFRAME *i; // rdx
  struct tagPOINTERINPUTFRAME *v2; // rbx
  struct tagPOINTERINPUTFRAME *Next; // rax

  if ( *(&gPalmRejectData + 1) == 1 && !*(&gPalmRejectData + 1) )
  {
    v2 = *(&xmmword_1C03304D0 + 1);
    for ( i = xmmword_1C03304D0; i && i != v2; i = Next )
    {
      if ( (gdwMitConfig & 4) != 0 )
        Next = (struct tagPOINTERINPUTFRAME *)CTouchProcessor::DispatchFrameAndGetNext(gpTouchProcessor, i);
      else
        Next = (struct tagPOINTERINPUTFRAME *)PalmRejection::DispatchFrameAndGetNext(i, i);
    }
    if ( v2 )
    {
      if ( (gdwMitConfig & 4) != 0 )
        CTouchProcessor::DispatchFrameAndGetNext(gpTouchProcessor, v2);
      else
        PalmRejection::DispatchFrameAndGetNext(v2, i);
    }
    *(_OWORD *)&xmmword_1C03304D0 = 0LL;
    if ( (_QWORD)xmmword_1C03304C0 )
    {
      *(&gPalmRejectData + 1) = 2;
    }
    else
    {
      xmmword_1C03304B0 = 0uLL;
      *(&gPalmRejectData + 1) = 0;
    }
  }
}
