/*
 * XREFs of ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x1800B0560
 * Callers:
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z @ 0x180014704 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z.c)
 * Callees:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18001B8C4 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800AABCC (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800AB6B0 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     McTemplateU0xx @ 0x180126DF8 (McTemplateU0xx.c)
 */

__int64 __fastcall CComposition::Present(CComposition *this, struct FRAME_TIME_INFO *a2)
{
  unsigned __int8 v4; // di
  signed int v5; // eax
  __int64 v6; // r8
  int v7; // esi
  signed int v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)this + 44) = a2;
  PerformanceCount.QuadPart = 0LL;
  v4 = 1;
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xx)(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PRESENTEVENT_Start,
      this,
      (LARGE_INTEGER)PerformanceCount.QuadPart);
  v5 = CRenderTargetManager::Present(
         *((CRenderTargetManager **)this + 9),
         *(_DWORD *)(*(_QWORD *)a2 + 96LL),
         (unsigned int *)(*(_QWORD *)a2 + 164LL));
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x44Eu);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_PRESENT_SUCCEEDED);
    v4 = v7 == 142213121;
  }
  CComposition::ProcessRenderingStatus(this, v7, v6);
  v8 = CComposition::ProcessPostPresent(this, v4);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x45Du);
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xx)(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PRESENTEVENT_Stop,
      this,
      (LARGE_INTEGER)PerformanceCount.QuadPart);
  result = v9;
  *((_QWORD *)this + 44) = 0LL;
  return result;
}
