/*
 * XREFs of ?GetAlphaMode@CBitmapColorKey@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1801A1940
 * Callers:
 *     <none>
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18007C0CC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::GetAlphaMode(CBitmapColorKey *this)
{
  unsigned int v1; // edx

  if ( (unsigned int)HasAlphaChannel(*((_DWORD *)this + 6)) )
    ++v1;
  return v1;
}
