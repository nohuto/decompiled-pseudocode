/*
 * XREFs of ?CreateD2DInk@CSwRenderTargetGetBounds@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x1801E4D60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x1801E5174 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::CreateD2DInk(
        CSwRenderTargetGetBounds *this,
        const struct D2D1_INK_POINT *a2,
        const struct D2D1_INK_STYLE_PROPERTIES *a3,
        struct CD2DInk **a4)
{
  int DefaultD2DContext; // eax
  struct ID2DContext *v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  struct ID2DContext *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  *a4 = 0LL;
  DefaultD2DContext = CSwRenderTargetGetBounds::GetDefaultD2DContext(this, &v12);
  v8 = v12;
  v9 = DefaultD2DContext;
  if ( DefaultD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DefaultD2DContext, 0x160u);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct D2D1_INK_POINT *, const struct D2D1_INK_STYLE_PROPERTIES *, struct CD2DInk **))(*(_QWORD *)v12 + 184LL))(
            v12,
            a2,
            a3,
            a4);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x162u);
  }
  if ( v8 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
