/*
 * XREFs of ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x18003F5EC
 * Callers:
 *     ?Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18003F7E0 (-Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800A2380 (-CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x18003F480 (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x122u);
  }
  return v1;
}
