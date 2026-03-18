/*
 * XREFs of ?CreatePrimitiveProperties@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x1801AB180
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x1801AB318 (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::CreatePrimitiveProperties(
        CSwRenderTargetGetBounds *this,
        struct CD2DPrimitiveProperties **a2)
{
  signed int FirstAvailableD2DContext; // eax
  struct ID2DContext *v4; // rdi
  unsigned int v5; // ebx
  signed int v6; // eax
  struct ID2DContext *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  FirstAvailableD2DContext = CSwRenderTargetGetBounds::GetFirstAvailableD2DContext(this, &v8);
  v4 = v8;
  v5 = FirstAvailableD2DContext;
  if ( FirstAvailableD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, FirstAvailableD2DContext, 0x1F4u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct CD2DPrimitiveProperties **))(*(_QWORD *)v8 + 232LL))(
           v8,
           a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x1F6u);
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v4);
  return v5;
}
