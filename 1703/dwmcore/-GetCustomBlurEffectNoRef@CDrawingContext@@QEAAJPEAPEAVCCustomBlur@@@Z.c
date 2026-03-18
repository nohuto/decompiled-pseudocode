/*
 * XREFs of ?GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z @ 0x18000CDA8
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180019824 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800242B0 (-Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetCustomBlurEffectNoRef(CDrawingContext *this, struct CCustomBlur **a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  struct CCustomBlur **v5; // rdi
  int v7; // eax

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 49) + 176LL))(*((_QWORD *)this + 49));
  v4 = 0;
  v5 = (struct CCustomBlur **)(v3 + 312);
  if ( *(_QWORD *)(v3 + 312)
    || (v7 = CCustomBlur::Create(*(struct ID2D1DeviceContext **)(v3 + 176), (struct CCustomBlur **)(v3 + 312)),
        v4 = v7,
        v7 >= 0) )
  {
    *a2 = *v5;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x988u);
  }
  return v4;
}
