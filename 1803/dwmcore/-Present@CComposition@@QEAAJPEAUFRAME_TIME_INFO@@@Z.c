/*
 * XREFs of ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18003444C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x18002D650 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18002E2A8 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18005F57C (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     McTemplateU0pp @ 0x18014AD40 (McTemplateU0pp.c)
 */

__int64 __fastcall CComposition::Present(CComposition *this, struct FRAME_TIME_INFO *a2)
{
  bool v4; // di
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  int v8; // esi
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 result; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)this + 47) = a2;
  PerformanceCount.QuadPart = 0LL;
  v4 = 1;
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0pp)(
      v5,
      &EVTDESC_MILEVENT_MEDIA_UCE_PRESENTEVENT_Start,
      this,
      (LARGE_INTEGER)PerformanceCount.QuadPart);
  v6 = CRenderTargetManager::Present(
         *((CRenderTargetManager **)this + 9),
         *(_DWORD *)(*(_QWORD *)a2 + 96LL),
         (unsigned int *)(*(_QWORD *)a2 + 172LL));
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x42Au);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_PRESENT_SUCCEEDED);
    v4 = v8 == 142213121;
  }
  CComposition::ProcessRenderingStatus((struct _RTL_CRITICAL_SECTION *)this, v8, v7);
  v9 = CComposition::ProcessPostPresent(this, v4);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x439u);
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0pp)(
      v11,
      &EVTDESC_MILEVENT_MEDIA_UCE_PRESENTEVENT_Stop,
      this,
      (LARGE_INTEGER)PerformanceCount.QuadPart);
  result = v10;
  *((_QWORD *)this + 47) = 0LL;
  return result;
}
