/*
 * XREFs of ?CreateLegacyCommandList@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x1801E4EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x1801E5174 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::CreateLegacyCommandList(
        CSwRenderTargetGetBounds *this,
        struct ID2D1PrivateCompositorBuffer *a2,
        struct ID2D1PrivateCompositorBuffer *a3,
        struct ID2D1Bitmap **a4,
        unsigned __int64 a5,
        struct ID2D1Bitmap **a6,
        unsigned __int64 a7,
        struct ID2D1PrivateCompositorPrimitiveProperties **a8,
        unsigned __int64 a9,
        struct CD2DCommandList **a10)
{
  int DefaultD2DContext; // eax
  struct ID2DContext *v14; // rdi
  unsigned int v15; // ebx
  int v16; // eax
  struct ID2DContext *v18; // [rsp+60h] [rbp-28h] BYREF

  v18 = 0LL;
  *a10 = 0LL;
  DefaultD2DContext = CSwRenderTargetGetBounds::GetDefaultD2DContext(this, &v18);
  v14 = v18;
  v15 = DefaultD2DContext;
  if ( DefaultD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DefaultD2DContext, 0x1D8u);
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1PrivateCompositorPrimitiveProperties **, unsigned __int64, struct CD2DCommandList **))(*(_QWORD *)v18 + 232LL))(
            v18,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10);
    v15 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x1E4u);
  }
  if ( v14 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v14 + 16LL))(v14);
  return v15;
}
