/*
 * XREFs of ?Render@CIndependentRefreshRateScheduler@@AEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18013D984
 * Callers:
 *     ?ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013D4F4 (-ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x180131A38 (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ?Compose@CComposition@@QEAAJPEA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180131B7C (-Compose@CComposition@@QEAAJPEA_NPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?NeedsPresent@CFrameInfo@@QEAA_NXZ @ 0x180134324 (-NeedsPresent@CFrameInfo@@QEAA_NXZ.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 */

__int64 __fastcall CIndependentRefreshRateScheduler::Render(CComposition **this, struct FRAME_TIME_INFO *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  bool v9; // al
  __int64 v10; // rcx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_RENDER_Start);
  v4 = CComposition::Compose(this[16], (bool *)this[2685] + 272, a2);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x445u);
  LOBYTE(v5) = *((_BYTE *)a2 + 28);
  *((_BYTE *)this + 21824) |= v5;
  if ( v6 == 142213121 )
  {
    v6 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v5, &EVTDESC_SCHEDULE_DXGI_STATUS_OCCLUDED);
  }
  if ( *((_BYTE *)this + 21824) )
    *((_BYTE *)this + 21825) = *((_DWORD *)this[16] + 96) == 0;
  if ( v6 >= 0 )
  {
    if ( !CFrameInfo::NeedsPresent(this[2685]) )
      CComposition::FlushChannels(this[16], v7, v8);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v9 = CFrameInfo::NeedsPresent(this[2685]);
      Template_q(v10, &EVTDESC_SCHEDULE_RENDER_Stop, v9);
    }
  }
  return (unsigned int)v6;
}
