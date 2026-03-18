/*
 * XREFs of ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800663E0
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800687D0 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     Template_xxxxx @ 0x18013C060 (Template_xxxxx.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TraceTime(CPartitionVerticalBlankScheduler *this)
{
  LONGLONG v1; // rbx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v1 = (*((_QWORD *)this + 5) - *((_QWORD *)this + 4) - *((_QWORD *)this + 4)) / g_qpcFrequency.QuadPart;
    Template_xxxxx(
      v1 * g_qpcFrequency.LowPart,
      (unsigned int)&EVTDESC_SCHEDULE_TIME,
      *((_QWORD *)this + 2),
      *((_DWORD *)this + 2)
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
