/*
 * XREFs of ?ComputeFrameTime@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013C784
 * Callers:
 *     ?ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013D4F4 (-ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 * Callees:
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     ?CalculatePresentAndGlitchDeadlines@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013C620 (-CalculatePresentAndGlitchDeadlines@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 */

void __fastcall CIndependentRefreshRateScheduler::ComputeFrameTime(CIndependentRefreshRateScheduler *this)
{
  _QWORD *v1; // rdx
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // r10
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8

  v1 = (_QWORD *)*((_QWORD *)this + 2685);
  v3 = v1[162];
  v4 = v1[163];
  v1[10] = v1[11] + *((unsigned int *)this + 42);
  **((_QWORD **)this + 2685) = *(_QWORD *)(*((_QWORD *)this + 2685) + 80LL)
                             / (unsigned __int64)*((unsigned int *)this + 42);
  *(_QWORD *)(*((_QWORD *)this + 2685) + 1304LL) = *((_QWORD *)this + 23)
                                                 + *(_QWORD *)(*((_QWORD *)this + 2685) + 240LL);
  v5 = *((_QWORD *)this + 2685);
  v6 = *(_QWORD *)(v5 + 1304) - *((_QWORD *)this + 1);
  v7 = v6 / 0x989680 * g_qpcFrequency.QuadPart + g_qpcFrequency.QuadPart * (v6 % 0x989680) / 0x989680;
  *(_QWORD *)(v5 + 1296) = v7;
  *(_QWORD *)(v5 + 1296) = v7 + *((_QWORD *)this + 4);
  CIndependentRefreshRateScheduler::CalculatePresentAndGlitchDeadlines(this);
  v8 = *(_QWORD *)(*((_QWORD *)this + 2685) + 1296LL);
  v9 = *(_QWORD *)(*((_QWORD *)this + 2686) + 1296LL);
  if ( v8 >= v9 && v8 >= v3 )
    goto LABEL_13;
  if ( v8 >= v3 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      goto LABEL_7;
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v9 = v3;
LABEL_7:
    Template_x(v8, &EVTDESC_SCHEDULE_TIMEADJUSTED_BETWEENFRAMES, v9 - v8);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2686) + 1296LL) > v3 )
    v3 = *(_QWORD *)(*((_QWORD *)this + 2686) + 1296LL);
  *(_QWORD *)(*((_QWORD *)this + 2685) + 1296LL) = v3;
  if ( *(_QWORD *)(*((_QWORD *)this + 2686) + 1304LL) > v4 )
    v4 = *(_QWORD *)(*((_QWORD *)this + 2686) + 1304LL);
  *(_QWORD *)(*((_QWORD *)this + 2685) + 1304LL) = v4;
LABEL_13:
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(this);
}
