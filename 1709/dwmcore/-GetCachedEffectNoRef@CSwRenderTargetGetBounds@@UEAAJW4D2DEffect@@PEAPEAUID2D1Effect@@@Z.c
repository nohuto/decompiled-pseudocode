/*
 * XREFs of ?GetCachedEffectNoRef@CSwRenderTargetGetBounds@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x1801AB280
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x1801AB318 (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::GetCachedEffectNoRef(
        CSwRenderTargetGetBounds *a1,
        unsigned int a2,
        _QWORD *a3)
{
  signed int FirstAvailableD2DContext; // eax
  struct ID2DContext *v6; // rdi
  unsigned int v7; // ebx
  signed int v8; // eax
  struct ID2DContext *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  *a3 = 0LL;
  FirstAvailableD2DContext = CSwRenderTargetGetBounds::GetFirstAvailableD2DContext(a1, &v10);
  v6 = v10;
  v7 = FirstAvailableD2DContext;
  if ( FirstAvailableD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, FirstAvailableD2DContext, 0x1C0u);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, _QWORD, _QWORD *))(*(_QWORD *)v10 + 216LL))(v10, a2, a3);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x1C1u);
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v6);
  return v7;
}
