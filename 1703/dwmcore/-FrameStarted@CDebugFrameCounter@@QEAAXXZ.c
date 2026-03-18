/*
 * XREFs of ?FrameStarted@CDebugFrameCounter@@QEAAXXZ @ 0x180130E0C
 * Callers:
 *     ?WaitForNextFrameStart@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013E9B4 (-WaitForNextFrameStart@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180143C48 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 */

void __fastcall CDebugFrameCounter::FrameStarted(CDebugFrameCounter *this)
{
  if ( *((_BYTE *)this + 24) )
  {
    *(_WORD *)((char *)this + 25) = 1;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 5) = CDebugFrameCounter::CurrentTime(this);
  }
}
