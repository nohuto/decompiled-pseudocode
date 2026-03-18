/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C002CB74
 * Callers:
 *     GreMakeBitmapNonStock @ 0x1C0078230 (GreMakeBitmapNonStock.c)
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
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
