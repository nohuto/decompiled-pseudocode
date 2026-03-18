/*
 * XREFs of ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18011D0D4
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180014D80 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     McTemplateU0xxxxx @ 0x180126F0C (McTemplateU0xxxxx.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TraceTime(CPartitionVerticalBlankScheduler *this)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xxxxx(
      *((_QWORD *)this + 3691),
      (unsigned int)&EVTDESC_SCHEDULE_TIME,
      (unsigned __int64)(10000000 * (*((_QWORD *)this + 3690) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
    + 10000000 * (*((_QWORD *)this + 3690) / g_qpcFrequency.QuadPart),
      (unsigned __int64)(10000000 * ((*((_QWORD *)this + 3690) - *((_QWORD *)this + 3689)) % g_qpcFrequency.QuadPart))
    / g_qpcFrequency.QuadPart
    + 10000000 * ((*((_QWORD *)this + 3690) - *((_QWORD *)this + 3689)) / g_qpcFrequency.QuadPart),
      *((_QWORD *)this + 3690),
      *((_QWORD *)this + 3691),
      *((_QWORD *)this + 3688));
}
