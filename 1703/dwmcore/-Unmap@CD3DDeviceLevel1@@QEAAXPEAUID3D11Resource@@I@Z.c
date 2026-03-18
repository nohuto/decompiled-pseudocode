/*
 * XREFs of ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x1800778A8
 * Callers:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ @ 0x180016EDC (-UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180072AE4 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z @ 0x1800CEC60 (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801329C0 (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 *     ?UpdateConstantBufferIfNeeded@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@AEA_KPEAUID3D11Buffer@@2@Z @ 0x180199CFC (-UpdateConstantBufferIfNeeded@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@AEA_KPEAUID3D.c)
 *     ?FillTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x18019CBD0 (-FillTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 *     ?FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradientWrapMode@@W43MilColorInterpolationMode@@@Z @ 0x1801A2F0C (-FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradie.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DDeviceLevel1::Unmap(CD3DDeviceLevel1 *this, struct ID3D11Resource *a2)
{
  (*(void (__fastcall **)(_QWORD, struct ID3D11Resource *))(**((_QWORD **)this + 81) + 120LL))(
    *((_QWORD *)this + 81),
    a2);
}
