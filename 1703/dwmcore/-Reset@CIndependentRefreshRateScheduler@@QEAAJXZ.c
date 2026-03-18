/*
 * XREFs of ?Reset@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013DA8C
 * Callers:
 *     ?UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ @ 0x18013E820 (-UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180036AF0 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     ?Reinitialize@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013D770 (-Reinitialize@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 *     ?RetireFrames@CIndependentRefreshRateScheduler@@AEAAJ_N@Z @ 0x18013DF10 (-RetireFrames@CIndependentRefreshRateScheduler@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CIndependentRefreshRateScheduler::Reset(CCrossThreadComposition **this)
{
  int v2; // eax
  int v3; // edx
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v6; // rcx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_RESET_Start);
  v2 = CIndependentRefreshRateScheduler::RetireFrames((CIndependentRefreshRateScheduler *)this, 1);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x992u);
  }
  else
  {
    CCrossThreadComposition::Reset(this[16], v3);
    v5 = CIndependentRefreshRateScheduler::Reinitialize((CIndependentRefreshRateScheduler *)this);
    *((_BYTE *)this + 21826) = 1;
    v4 = v5;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v6, &EVTDESC_SCHEDULE_RESET_Stop);
  }
  return v4;
}
