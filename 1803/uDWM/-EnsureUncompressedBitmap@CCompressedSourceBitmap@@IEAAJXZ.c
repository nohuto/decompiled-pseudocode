/*
 * XREFs of ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x180046578
 * Callers:
 *     ?Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180046770 (-Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800A9AD0 (-CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x18004640C (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompressedSourceBitmap::EnsureUncompressedBitmap(CCompressedSourceBitmap *this)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = 0;
  if ( !*((_QWORD *)this + 33) )
  {
    v2 = CCompressedSourceBitmap::DecompressBitmap(this);
    v1 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x12Cu);
  }
  return v1;
}
