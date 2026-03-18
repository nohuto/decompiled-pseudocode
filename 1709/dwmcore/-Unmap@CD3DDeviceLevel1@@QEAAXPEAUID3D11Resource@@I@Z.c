/*
 * XREFs of ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x180020718
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18002DA20 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ @ 0x18006D0E0 (-UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x18011C75C (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 *     ?FillTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x1801AF888 (-FillTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z @ 0x1801B10F0 (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE@gsl@@@Z @ 0x1801B422C (-SetData@CD3DConstantBuffer@@QEAAJV-$span@$$CBE@gsl@@@Z.c)
 *     ?FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradientWrapMode@@W43MilColorInterpolationMode@@@Z @ 0x1801BC7F0 (-FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradie.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DDeviceLevel1::Unmap(CD3DDeviceLevel1 *this, struct ID3D11Resource *a2)
{
  (*(void (__fastcall **)(_QWORD, struct ID3D11Resource *))(**((_QWORD **)this + 82) + 120LL))(
    *((_QWORD *)this + 82),
    a2);
}
