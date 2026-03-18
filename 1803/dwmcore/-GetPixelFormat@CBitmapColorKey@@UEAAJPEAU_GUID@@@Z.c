/*
 * XREFs of ?GetPixelFormat@CBitmapColorKey@@UEAAJPEAU_GUID@@@Z @ 0x1801F5BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x180204FC8 (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 */

__int64 __fastcall CBitmapColorKey::GetPixelFormat(CBitmapColorKey *this, struct _GUID *a2)
{
  struct _GUID *v2; // r8
  unsigned int v3; // eax

  v2 = a2;
  if ( *((_DWORD *)this + 4) == 88 )
  {
    v3 = 16;
  }
  else
  {
    LOBYTE(a2) = *((_DWORD *)this + 5) == 1;
    v3 = DXGIFormatToPixelFormat(*((unsigned int *)this + 4), a2, v2);
  }
  return MilPfToWic(v3, v2);
}
