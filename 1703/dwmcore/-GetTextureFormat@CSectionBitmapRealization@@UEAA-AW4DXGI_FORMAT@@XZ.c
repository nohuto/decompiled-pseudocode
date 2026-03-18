/*
 * XREFs of ?GetTextureFormat@CSectionBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x1801B4E30
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ @ 0x1801B4A00 (-CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ.c)
 */

__int64 __fastcall CSectionBitmapRealization::GetTextureFormat(CSectionBitmapRealization *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (int)CSectionBitmapRealization::CalcPixelFormatInfo((CSectionBitmapRealization *)((char *)this - 104)) >= 0 )
    return *((unsigned int *)this + 84);
  return v2;
}
