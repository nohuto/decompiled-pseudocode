/*
 * XREFs of ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x18002086C
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18002DA20 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVISlicerBitmap@@HH@Z @ 0x1801A62C4 (-CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV-$TMilRect@IUMilRectU@@UNo.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x1801B650C (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 *     ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801B7C60 (-CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x1801BCC98 (-PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ.c)
 * Callees:
 *     ?CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtagPOINT@@I@Z @ 0x180020784 (-CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtag.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18018E758 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

void __fastcall CD3DDeviceLevel1::CopySurfaceRect(
        CD3DDeviceLevel1 *this,
        struct CD3DSurface *a2,
        const struct tagRECT *a3,
        struct CD3DSurface *a4,
        const struct tagPOINT *a5)
{
  CD3DDeviceLevel1::CopySubresourceRectInternal1(
    this,
    *((struct ID3D11Resource **)a2 + 16),
    *((_DWORD *)a2 + 34),
    a3,
    *((struct ID3D11Resource **)a4 + 16),
    *((_DWORD *)a4 + 34),
    a5,
    0);
  if ( g_LockAndReadCopyOfTexture )
  {
    DebugInspectTexture(*((struct ID3D11Texture2D **)a4 + 16), 0);
    DebugInspectTexture(*((struct ID3D11Texture2D **)a2 + 16), 0);
  }
}
