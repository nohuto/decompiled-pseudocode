/*
 * XREFs of ?CreateMeshFromRects@CSwRenderTargetGetBounds@@UEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z @ 0x18019A460
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z @ 0x18000213C (--$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18019A73C (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::CreateMeshFromRects(
        CSwRenderTargetGetBounds *this,
        const struct MilRectU *a2,
        unsigned int a3,
        struct CD2DMesh **a4)
{
  int FirstAvailableD2DContext; // eax
  CD3DDeviceLevel1 *v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  struct ID2DContext *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  *a4 = 0LL;
  FirstAvailableD2DContext = CSwRenderTargetGetBounds::GetFirstAvailableD2DContext(
                               (CSwRenderTargetGetBounds *)((char *)this - 24),
                               &v12);
  v8 = v12;
  v9 = FirstAvailableD2DContext;
  if ( FirstAvailableD2DContext < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD2DContext, 0x1E2u);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct MilRectU *, _QWORD, struct CD2DMesh **))(*(_QWORD *)v12 + 248LL))(
            v12,
            a2,
            a3,
            a4);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1E4u);
  }
  ReleaseInterfaceNoNULL<ID2DContext>(v8);
  return v9;
}
