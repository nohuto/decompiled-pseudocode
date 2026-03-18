/*
 * XREFs of ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x18007521C
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180042B90 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x1800711B0 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z @ 0x1800D8FFC (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x18013F57C (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 *     ?FillTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x1801EA1AC (-FillTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 *     ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x1801EDF14 (-SetData@CD3DConstantBuffer@@QEAAJV-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradientWrapMode@@W43MilColorInterpolationMode@@@Z @ 0x1801F7314 (-FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradie.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DDeviceLevel1::Unmap(CD3DDeviceLevel1 *this, struct ID3D11Resource *a2)
{
  (*(void (__fastcall **)(_QWORD, struct ID3D11Resource *))(**((_QWORD **)this + 82) + 120LL))(
    *((_QWORD *)this + 82),
    a2);
}
