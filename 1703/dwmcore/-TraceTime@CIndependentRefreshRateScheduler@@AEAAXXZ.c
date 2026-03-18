/*
 * XREFs of ?TraceTime@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013E5A8
 * Callers:
 *     ?ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013D4F4 (-ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 *     ?WaitForNextFrameStart@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013E9B4 (-WaitForNextFrameStart@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 * Callees:
 *     Template_xxxxx @ 0x18013C060 (Template_xxxxx.c)
 */

void __fastcall CIndependentRefreshRateScheduler::TraceTime(CIndependentRefreshRateScheduler *this)
{
  LONGLONG v1; // rbx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v1 = (*((_QWORD *)this + 5) - *((_QWORD *)this + 4) - *((_QWORD *)this + 4)) / g_qpcFrequency.QuadPart;
    Template_xxxxx(
      v1 * g_qpcFrequency.QuadPart,
      &EVTDESC_SCHEDULE_TIME,
      *((_QWORD *)this + 2),
      *((_QWORD *)this + 1)
    + 10000000 * v1
    + (unsigned __int64)(10000000
                       * (*((_QWORD *)this + 5)
                        - *((_QWORD *)this + 4)
                        - *((_QWORD *)this + 4)
                        - v1 * g_qpcFrequency.QuadPart))
    / g_qpcFrequency.QuadPart,
      *((_QWORD *)this + 5),
      *((_QWORD *)this + 6),
      *((_QWORD *)this + 3));
  }
}
