/*
 * XREFs of ?CreatePencilStroke@CSwRenderTargetGetBounds@@UEAAJPEBUD2D1_PENCIL_POINT@@PEAPEAVCD2DPencil@@@Z @ 0x18019A500
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z @ 0x18000213C (--$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18019A73C (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::CreatePencilStroke(
        CSwRenderTargetGetBounds *this,
        const struct D2D1_PENCIL_POINT *a2,
        struct CD2DPencil **a3)
{
  int FirstAvailableD2DContext; // eax
  CD3DDeviceLevel1 *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  struct ID2DContext *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  *a3 = 0LL;
  FirstAvailableD2DContext = CSwRenderTargetGetBounds::GetFirstAvailableD2DContext(
                               (CSwRenderTargetGetBounds *)((char *)this - 24),
                               &v10);
  v6 = v10;
  v7 = FirstAvailableD2DContext;
  if ( FirstAvailableD2DContext < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD2DContext, 0x175u);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct D2D1_PENCIL_POINT *, struct CD2DPencil **))(*(_QWORD *)v10 + 200LL))(
           v10,
           a2,
           a3);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x176u);
  }
  ReleaseInterfaceNoNULL<ID2DContext>(v6);
  return v7;
}
