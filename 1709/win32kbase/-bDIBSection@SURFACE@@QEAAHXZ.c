/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C001FE2C
 * Callers:
 *     GreMakeBitmapNonStock @ 0x1C001EBA0 (GreMakeBitmapNonStock.c)
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
