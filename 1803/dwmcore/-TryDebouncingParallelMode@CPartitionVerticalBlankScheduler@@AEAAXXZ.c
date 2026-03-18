/*
 * XREFs of ?TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005A314
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBAJPEAW4ParallelModePolicy@@@Z @ 0x18005A26C (-GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBAJPEAW4ParallelModePolicy@@@Z.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TryDebouncingParallelMode(CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // r8
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 7638) || !*((_DWORD *)this + 7639) )
    return;
  CPartitionVerticalBlankScheduler::GetActualParallelModePolicy(this, (enum ParallelModePolicy *)&v3);
  switch ( v3 )
  {
    case 1:
LABEL_5:
      *((_DWORD *)this + 7639) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PARALLEL_MODE_Stop);
      return;
    case 2:
      v2 = *((unsigned int *)this + 6459);
      if ( (_DWORD)v2 != -1
        && *((_QWORD *)this + 4412) < (unsigned __int64)(*((_QWORD *)this + 201 * v2 + 55)
                                                       + g_qpcFrequency.QuadPart
                                                       * CCommonRegistryData::m_dwParallelModeLeaveAfterThresholdMS
                                                       / 1000) )
      {
        *((_BYTE *)this + 35276) = 1;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          McTemplateU0d(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_SCHEDULE_PARALLEL_MODE_NEEDS_TO_WAIT_FOR_NEXT_VSYNC,
            2LL);
      }
      if ( !*((_BYTE *)this + 35276) )
        goto LABEL_5;
      break;
    case 3:
      *((_BYTE *)this + 35276) = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0d(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_SCHEDULE_PARALLEL_MODE_NEEDS_TO_WAIT_FOR_NEXT_VSYNC,
          3LL);
      break;
  }
}
