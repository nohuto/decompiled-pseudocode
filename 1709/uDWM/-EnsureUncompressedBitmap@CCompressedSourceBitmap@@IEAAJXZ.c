/*
 * XREFs of ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1800438C8
 * Callers:
 *     ?Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180043AC0 (-Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800A0A50 (-CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x18004375C (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
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
