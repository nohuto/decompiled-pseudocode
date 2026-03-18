/*
 * XREFs of ??$SetInterface@VCRenderTargetBitmap@@V1@@@YAXAEAPEAVCRenderTargetBitmap@@PEAV0@@Z @ 0x1800C5A9C
 * Callers:
 *     ?Construct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXAEBUMilRectF@@PEAV2@PEAVCRenderTargetBitmap@@W4Enum@MilStretch@@@Z @ 0x180046D7C (-Construct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXAEBUMilRectF@@PEAV2@PEAVCRenderTarget.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180047874 (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitma.c)
 * Callees:
 *     ?AddRef@CHolographicClient@@UEAAKXZ @ 0x1800471A0 (-AddRef@CHolographicClient@@UEAAKXZ.c)
 */

void __fastcall SetInterface<CRenderTargetBitmap,CRenderTargetBitmap>(
        CBitmapOfDeviceBitmaps **a1,
        CBitmapOfDeviceBitmaps *a2)
{
  __int64 (__fastcall *v2)(CBitmapOfDeviceBitmaps *); // rax

  *a1 = a2;
  if ( a2 )
  {
    v2 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)a2 + 8LL);
    if ( v2 == CHolographicClient::AddRef )
      CHolographicClient::AddRef(a2);
    else
      v2(a2);
  }
}
