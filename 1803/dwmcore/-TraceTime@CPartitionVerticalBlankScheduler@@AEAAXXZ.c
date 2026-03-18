/*
 * XREFs of ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005B120
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18005D88C (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     McTemplateU0xxxxx @ 0x1801491B4 (McTemplateU0xxxxx.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TraceTime(CPartitionVerticalBlankScheduler *this)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xxxxx(
      *((_QWORD *)this + 4413),
      (unsigned int)&EVTDESC_SCHEDULE_TIME,
      (unsigned __int64)(10000000 * (*((_QWORD *)this + 4412) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
    + 10000000 * (*((_QWORD *)this + 4412) / g_qpcFrequency.QuadPart),
      (unsigned __int64)(10000000 * ((*((_QWORD *)this + 4412) - *((_QWORD *)this + 4411)) % g_qpcFrequency.QuadPart))
    / g_qpcFrequency.QuadPart
    + 10000000 * ((*((_QWORD *)this + 4412) - *((_QWORD *)this + 4411)) / g_qpcFrequency.QuadPart),
      *((_QWORD *)this + 4412),
      *((_QWORD *)this + 4413),
      *((_QWORD *)this + 4410));
}
