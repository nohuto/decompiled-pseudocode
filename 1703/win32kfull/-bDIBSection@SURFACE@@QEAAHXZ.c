/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0084384
 * Callers:
 *     GreGetDIBColorTable @ 0x1C009F140 (GreGetDIBColorTable.c)
 *     GreMakeBitmapStock @ 0x1C00F87D4 (GreMakeBitmapStock.c)
 *     GreSetDIBColorTable @ 0x1C0295CB0 (GreSetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C0296FD0 (NtGdiGetColorSpaceforBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bDIBSection(SURFACE *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_WORD *)this + 50) )
  {
    if ( *((_QWORD *)this + 25) )
      return 1LL;
  }
  return result;
}
