/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C00125C8
 * Callers:
 *     GreGetDIBColorTable @ 0x1C00FF920 (GreGetDIBColorTable.c)
 *     GreMakeBitmapStock @ 0x1C0104B20 (GreMakeBitmapStock.c)
 *     GreSetDIBColorTable @ 0x1C0292360 (GreSetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C0293690 (NtGdiGetColorSpaceforBitmap.c)
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
