/*
 * XREFs of ?GetCachedEffectNoRef@CSwRenderTargetGetBounds@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x1801E50D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x1801E5174 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::GetCachedEffectNoRef(
        CSwRenderTargetGetBounds *a1,
        unsigned int a2,
        _QWORD *a3)
{
  int DefaultD2DContext; // eax
  struct ID2DContext *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  struct ID2DContext *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  *a3 = 0LL;
  DefaultD2DContext = CSwRenderTargetGetBounds::GetDefaultD2DContext(a1, &v10);
  v6 = v10;
  v7 = DefaultD2DContext;
  if ( DefaultD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DefaultD2DContext, 0x1BFu);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, _QWORD, _QWORD *))(*(_QWORD *)v10 + 224LL))(v10, a2, a3);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1C0u);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
