/*
 * XREFs of ?GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z @ 0x1800375C4
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006F640 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800BCB7C (-Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetCustomBlurEffectNoRef(CDrawingContext *this, struct CCustomBlur **a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  struct CCustomBlur **v5; // rdi
  int v7; // eax

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 152LL))(*((_QWORD *)this + 48));
  v4 = 0;
  v5 = (struct CCustomBlur **)(v3 + 288);
  if ( *(_QWORD *)(v3 + 288)
    || (v7 = CCustomBlur::Create(*(struct ID2D1DeviceContext **)(v3 + 176), (struct CCustomBlur **)(v3 + 288)),
        v4 = v7,
        v7 >= 0) )
  {
    *a2 = *v5;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x73Cu);
  }
  return v4;
}
