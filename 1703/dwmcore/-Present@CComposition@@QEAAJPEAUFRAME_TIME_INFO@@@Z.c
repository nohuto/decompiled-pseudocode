/*
 * XREFs of ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180065118
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z @ 0x18013D22C (-PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z.c)
 * Callees:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18005C970 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18006BA60 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_xx @ 0x18016786C (Template_xx.c)
 */

__int64 __fastcall CComposition::Present(CComposition *this, struct FRAME_TIME_INFO *a2)
{
  unsigned __int8 v4; // si
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // eax
  int v10; // esi
  __int64 v11; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)this + 49) = a2;
  PerformanceCount.QuadPart = 0LL;
  v4 = 1;
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))Template_xx)(
      v5,
      &EVTDESC_MILEVENT_MEDIA_UCE_PRESENTEVENT_Start,
      this,
      (LARGE_INTEGER)PerformanceCount.QuadPart);
  v6 = CRenderTargetManager::Present(
         *((CRenderTargetManager **)this + 4),
         *(_DWORD *)(*(_QWORD *)a2 + 96LL),
         (unsigned int *)(*(_QWORD *)a2 + 164LL));
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x492u);
  }
  else if ( v6 )
  {
    if ( v6 == 142213130 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v7, &EVTDESC_SCHEDULE_DXGI_PRESENT_POSTPONED);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 70) + 104LL))(*((_QWORD *)this + 70));
      v4 = 0;
      v8 = 142213130;
    }
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v7, &EVTDESC_SCHEDULE_DXGI_PRESENT_SUCCEEDED);
    v4 = 0;
  }
  v9 = CComposition::ProcessPostPresent(this, v4);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x4ACu);
  if ( !v8 )
    goto LABEL_11;
  if ( v8 < 0 )
    goto LABEL_15;
  if ( v10 < 0 )
LABEL_11:
    v8 = v10;
  if ( v8 >= 0 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))Template_xx)(
        v11,
        &EVTDESC_MILEVENT_MEDIA_UCE_PRESENTEVENT_Stop,
        this,
        (LARGE_INTEGER)PerformanceCount.QuadPart);
  }
LABEL_15:
  *((_QWORD *)this + 49) = 0LL;
  return (unsigned int)v8;
}
