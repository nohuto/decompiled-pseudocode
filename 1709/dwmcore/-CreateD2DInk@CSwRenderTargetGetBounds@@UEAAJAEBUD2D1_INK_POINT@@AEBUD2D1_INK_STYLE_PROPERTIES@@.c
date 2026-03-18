/*
 * XREFs of ?CreateD2DInk@CSwRenderTargetGetBounds@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x1801AAF50
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x1801AB318 (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::CreateD2DInk(
        CSwRenderTargetGetBounds *this,
        const struct D2D1_INK_POINT *a2,
        const struct D2D1_INK_STYLE_PROPERTIES *a3,
        struct CD2DInk **a4)
{
  signed int FirstAvailableD2DContext; // eax
  struct ID2DContext *v8; // rdi
  unsigned int v9; // ebx
  signed int v10; // eax
  struct ID2DContext *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  *a4 = 0LL;
  FirstAvailableD2DContext = CSwRenderTargetGetBounds::GetFirstAvailableD2DContext(this, &v12);
  v8 = v12;
  v9 = FirstAvailableD2DContext;
  if ( FirstAvailableD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, FirstAvailableD2DContext, 0x160u);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct D2D1_INK_POINT *, const struct D2D1_INK_STYLE_PROPERTIES *, struct CD2DInk **))(*(_QWORD *)v12 + 176LL))(
            v12,
            a2,
            a3,
            a4);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x162u);
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v8);
  return v9;
}
