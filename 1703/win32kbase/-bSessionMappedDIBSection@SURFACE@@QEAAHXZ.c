/*
 * XREFs of ?bSessionMappedDIBSection@SURFACE@@QEAAHXZ @ 0x1C002CB94
 * Callers:
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bSessionMappedDIBSection(SURFACE *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_WORD *)this + 50) )
  {
    if ( *((_DWORD *)this + 56) )
      return 1LL;
  }
  return result;
}
