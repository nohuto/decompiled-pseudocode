/*
 * XREFs of ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18019A73C
 * Callers:
 *     ?CreateD2DInk@CSwRenderTargetGetBounds@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x18019A230 (-CreateD2DInk@CSwRenderTargetGetBounds@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@.c)
 *     ?CreateGenericInk@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x18019A2D0 (-CreateGenericInk@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DGenericInk@@@Z.c)
 *     ?CreateLegacyCommandList@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x18019A360 (-CreateLegacyCommandList@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPE.c)
 *     ?CreateMeshFromRects@CSwRenderTargetGetBounds@@UEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z @ 0x18019A460 (-CreateMeshFromRects@CSwRenderTargetGetBounds@@UEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z.c)
 *     ?CreatePencilStroke@CSwRenderTargetGetBounds@@UEAAJPEBUD2D1_PENCIL_POINT@@PEAPEAVCD2DPencil@@@Z @ 0x18019A500 (-CreatePencilStroke@CSwRenderTargetGetBounds@@UEAAJPEBUD2D1_PENCIL_POINT@@PEAPEAVCD2DPencil@@@Z.c)
 *     ?CreatePrimitiveProperties@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18019A5A0 (-CreatePrimitiveProperties@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z.c)
 *     ?GetCachedEffectNoRef@CSwRenderTargetGetBounds@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x18019A6A0 (-GetCachedEffectNoRef@CSwRenderTargetGetBounds@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?IntersectGeometryWithSafeBounds@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x18019A7E0 (-IntersectGeometryWithSafeBounds@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1Geometry@@0PEBUD2D_MATR.c)
 * Callees:
 *     ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001AEF4 (-GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077700 (-QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::GetFirstAvailableD2DContext(
        CSwRenderTargetGetBounds *this,
        struct ID2DContext **a2)
{
  int FirstAvailableD3DDevice; // eax
  CD3DDeviceLevel1 *v4; // rdi
  unsigned int v5; // ebx
  int Interface; // eax
  CD3DDeviceLevel1 *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  FirstAvailableD3DDevice = CD3DDeviceManager::GetFirstAvailableD3DDevice(
                              (CD3DDeviceManager *)&g_D3DDeviceManager,
                              (const struct _GUID *)(*((_QWORD *)this + 5) + 324LL),
                              &v8);
  v4 = v8;
  v5 = FirstAvailableD3DDevice;
  if ( FirstAvailableD3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD3DDevice, 0x1B1u);
  }
  else
  {
    Interface = CD3DDeviceLevel1::QueryInterface(v8, &GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b, (void **)a2);
    v5 = Interface;
    if ( Interface < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Interface, 0x1B4u);
  }
  if ( v4 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v4 + 488));
  return v5;
}
