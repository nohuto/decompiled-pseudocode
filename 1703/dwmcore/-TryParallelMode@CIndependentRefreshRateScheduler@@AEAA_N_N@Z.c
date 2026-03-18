/*
 * XREFs of ?TryParallelMode@CIndependentRefreshRateScheduler@@AEAA_N_N@Z @ 0x18013E630
 * Callers:
 *     ?ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013D4F4 (-ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?GlitchDetected@CDebugFrameCounter@@QEAAXXZ @ 0x1800C7AAC (-GlitchDetected@CDebugFrameCounter@@QEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     Template_xqqq @ 0x18013BE70 (Template_xqqq.c)
 */

unsigned __int8 __fastcall CIndependentRefreshRateScheduler::TryParallelMode(
        CIndependentRefreshRateScheduler *this,
        __int64 a2)
{
  unsigned __int8 v2; // di

  v2 = a2;
  if ( !(_BYTE)a2 && !*(_BYTE *)(*((_QWORD *)this + 2685) + 1288LL) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
      TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_GLITCH_DETECTED);
    CDebugFrameCounter::GlitchDetected((CIndependentRefreshRateScheduler *)((char *)this + 25480));
    if ( *((_DWORD *)this + 6365) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_x(
          (__int64)this,
          &EVTDESC_SCHEDULE_GLITCH_RECOVERY_ATTEMPT,
          *(_QWORD *)(*((_QWORD *)this + 2685) + 88LL));
    }
    else
    {
      *((_DWORD *)this + 6365) = 1;
      v2 = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_ENTER_PARALLEL_MODE);
    }
  }
  *(_BYTE *)(*((_QWORD *)this + 2685) + 1288LL) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    Template_xqqq((__int64)this, a2, *((_QWORD *)this + 2685), v2, *((_DWORD *)this + 6364), *((_DWORD *)this + 6365));
  return v2;
}
