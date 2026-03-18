/*
 * XREFs of ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x1801E5174
 * Callers:
 *     ?CreateD2DInk@CSwRenderTargetGetBounds@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x1801E4D60 (-CreateD2DInk@CSwRenderTargetGetBounds@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@.c)
 *     ?CreateGenericInk@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x1801E4E10 (-CreateGenericInk@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DGenericInk@@@Z.c)
 *     ?CreateLegacyCommandList@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x1801E4EB0 (-CreateLegacyCommandList@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPE.c)
 *     ?CreatePrimitiveProperties@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x1801E4FC0 (-CreatePrimitiveProperties@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z.c)
 *     ?GetCachedEffectNoRef@CSwRenderTargetGetBounds@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x1801E50D0 (-GetCachedEffectNoRef@CSwRenderTargetGetBounds@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?IntersectGeometryWithSafeBounds@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x1801E5210 (-IntersectGeometryWithSafeBounds@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1Geometry@@0PEBUD2D_MATR.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800768D0 (-QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801DE2C4 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::GetDefaultD2DContext(
        CSwRenderTargetGetBounds *this,
        struct ID2DContext **a2)
{
  int DefaultD3DDevice; // eax
  CD3DDeviceLevel1 *v4; // rdi
  unsigned int v5; // ebx
  int Interface; // eax
  CD3DDeviceLevel1 *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  DefaultD3DDevice = CD3DDeviceManager::GetDefaultD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, &v8);
  v4 = v8;
  v5 = DefaultD3DDevice;
  if ( DefaultD3DDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DefaultD3DDevice, 0x18Eu);
  }
  else
  {
    Interface = CD3DDeviceLevel1::QueryInterface(v8, &GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b, (void **)a2);
    v5 = Interface;
    if ( Interface < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Interface, 0x191u);
  }
  if ( v4 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v4 + 472));
  return v5;
}
