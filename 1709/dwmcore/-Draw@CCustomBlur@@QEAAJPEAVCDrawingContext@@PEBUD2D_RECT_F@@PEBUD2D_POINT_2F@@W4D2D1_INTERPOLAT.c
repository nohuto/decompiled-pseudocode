/*
 * XREFs of ?Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800BCC2C
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006F640 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCustomBlur::Draw(
        CCustomBlur *this,
        struct CDrawingContext *a2,
        const struct D2D_RECT_F *a3,
        const struct D2D_POINT_2F *a4)
{
  signed int v4; // eax
  unsigned int v5; // ebx

  v4 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, const struct D2D_RECT_F *, _QWORD, int, int))(**((_QWORD **)a2 + 48) + 96LL))(
         *((_QWORD *)a2 + 48),
         (char *)a2 + 8,
         *((_QWORD *)this + 7),
         a3,
         0LL,
         1,
         10);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0xDAu);
  return v5;
}
