/*
 * XREFs of ?UpdateSwapChains@CCommonRenderingEffect@@UEAAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001FB90
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180023E10 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180028C20 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18003AEA4 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18004D7E0 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCommonRenderingEffect::UpdateSwapChains(__int64 a1, __int64 a2, __int64 a3)
{
  struct IDeviceTexture **v4; // rbx
  __int64 v6; // r14
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // r9
  __int64 v8; // rcx
  struct IDeviceTexture *v9; // rdx
  struct IBitmapRealization *v10; // rcx
  CCompositionSurfaceBitmap *v11; // rdi
  __int64 (__fastcall *v12)(CCompositionSurfaceBitmap *__hidden, struct IBitmapRealization **); // rax
  int CurrentRenderingRealization; // eax
  struct IDeviceTexture *v14; // rcx
  CDxHandleBitmapRealization *v15; // rdi
  const struct RenderTargetInfo *v16; // rdx
  __int64 (__fastcall *v17)(CDxHandleBitmapRealization *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  int DeviceTexture; // eax
  struct IBitmapRealization *v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  struct IBitmapRealization *v21; // [rsp+88h] [rbp+48h] BYREF

  v4 = (struct IDeviceTexture **)(a1 + 24);
  v6 = 2LL;
  do
  {
    v7 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*(v4 - 1);
    v8 = 0LL;
    v20 = 0LL;
    if ( v7 )
    {
      if ( (**v7)(v7, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v20) >= 0 )
      {
        v9 = *v4;
        v10 = 0LL;
        v21 = 0LL;
        if ( v9 )
        {
          *v4 = 0LL;
          (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v9 + 16LL))(v9);
          v10 = v21;
        }
        v11 = *(v4 - 1);
        if ( v10 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v10 + 16LL))(v10);
        }
        v12 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *__hidden, struct IBitmapRealization **))(*(_QWORD *)v11 + 80LL);
        if ( v12 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
          CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(v11, &v21);
        else
          CurrentRenderingRealization = v12(v11, &v21);
        if ( CurrentRenderingRealization >= 0 )
        {
          v14 = *v4;
          v15 = v21;
          if ( *v4 )
          {
            *v4 = 0LL;
            (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v14 + 16LL))(v14);
          }
          v16 = (const struct RenderTargetInfo *)(a2 + 392);
          v17 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v15 + 144LL);
          if ( v17 == CDxHandleBitmapRealization::GetDeviceTexture )
            DeviceTexture = CDxHandleBitmapRealization::GetDeviceTexture(v15, v16, v4);
          else
            DeviceTexture = v17(v15, v16, v4);
          if ( DeviceTexture < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceTexture, 0x65u);
          CDrawingContext::RecordBitmapContentInfo(a2, v20, v20, a3, 0LL);
        }
        v19 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
      v8 = v20;
    }
    if ( v8 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v4 += 3;
    --v6;
  }
  while ( v6 );
}
