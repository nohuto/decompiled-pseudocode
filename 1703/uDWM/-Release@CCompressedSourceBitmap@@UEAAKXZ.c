/*
 * XREFs of ?Release@CCompressedSourceBitmap@@UEAAKXZ @ 0x180013470
 * Callers:
 *     ?Release@CCompressedSourceBitmap@@WBA@EAAKXZ @ 0x18004E220 (-Release@CCompressedSourceBitmap@@WBA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x18004E230 (-Release@CCompressedSourceBitmap@@WBI@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WCA@EAAKXZ @ 0x18004E240 (-Release@CCompressedSourceBitmap@@WCA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WCI@EAAKXZ @ 0x18004E250 (-Release@CCompressedSourceBitmap@@WCI@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WDA@EAAKXZ @ 0x18004E260 (-Release@CCompressedSourceBitmap@@WDA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WPA@EAAKXZ @ 0x18004E270 (-Release@CCompressedSourceBitmap@@WPA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WPI@EAAKXZ @ 0x18004E280 (-Release@CCompressedSourceBitmap@@WPI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::Release(CCompressedSourceBitmap *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    (*(void (__fastcall **)(CCompressedSourceBitmap *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v1;
}
