/*
 * XREFs of ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x1800C9B68
 * Callers:
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z @ 0x180055FC0 (-GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetPixelFormat@CBitmapColorKey@@UEAAJPEAU_GUID@@@Z @ 0x1801A1960 (-GetPixelFormat@CBitmapColorKey@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1801A9C70 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGIFormatToPixelFormat(int a1, char a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx

  if ( a1 <= 49 )
  {
    if ( a1 == 49 )
      return 11LL;
    if ( a1 == 2 )
      return (unsigned int)(a2 != 0) + 25;
    if ( a1 > 9 )
    {
      if ( a1 <= 11 )
        return (unsigned int)(a2 != 0) + 22;
      if ( a1 == 24 )
        return 20LL;
      if ( a1 == 28 )
        return (unsigned int)(a2 != 0) + 68;
    }
    return 0LL;
  }
  v2 = a1 - 61;
  if ( !v2 )
    return 8LL;
  v3 = v2 - 26;
  if ( !v3 )
    return (unsigned int)(a2 != 0) + 15;
  v5 = v3 - 1;
  if ( v5 )
  {
    if ( v5 == 3 )
      return (unsigned int)(a2 != 0) + 15;
    return 0LL;
  }
  return 14LL;
}
