/*
 * XREFs of ?GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18009A698
 * Callers:
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800964C4 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180001500 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWindowPropertyTracker::GetWindowBeginPosition(
        CWindowPropertyTracker *this,
        HWND a2,
        struct tagPOINT *a3)
{
  unsigned int v5; // ebx
  int Record; // eax
  __int64 v7; // rax

  v5 = -2147467259;
  Record = CWindowPropertyTracker::_FindRecord(this, a2);
  if ( Record >= 0 )
  {
    _mm_lfence();
    v7 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    if ( (*(_BYTE *)(v7 + 40) & 4) != 0 )
    {
      v5 = 0;
      *a3 = *(struct tagPOINT *)(v7 + 48);
    }
  }
  return v5;
}
