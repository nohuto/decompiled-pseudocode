/*
 * XREFs of ?CreateGenericInk@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x1801E4E10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x1801E5174 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::CreateGenericInk(
        CSwRenderTargetGetBounds *this,
        struct CD2DGenericInk **a2)
{
  int DefaultD2DContext; // eax
  struct ID2DContext *v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  struct ID2DContext *v8; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  DefaultD2DContext = CSwRenderTargetGetBounds::GetDefaultD2DContext(this, &v8);
  v4 = v8;
  v5 = DefaultD2DContext;
  if ( DefaultD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DefaultD2DContext, 0x173u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct CD2DGenericInk **))(*(_QWORD *)v8 + 192LL))(v8, a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x174u);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
