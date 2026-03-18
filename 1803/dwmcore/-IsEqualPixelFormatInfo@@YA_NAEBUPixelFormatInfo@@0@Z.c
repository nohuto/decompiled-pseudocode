/*
 * XREFs of ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x1800C7658
 * Callers:
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x18000D180 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180042B90 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 * Callees:
 *     <none>
 */

char __fastcall IsEqualPixelFormatInfo(const struct PixelFormatInfo *a1, const struct PixelFormatInfo *a2)
{
  int v2; // r9d
  char v3; // al
  char v4; // r8

  v2 = *(_DWORD *)a2;
  v3 = 0;
  v4 = 1;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2
    || *(_DWORD *)a1 == 88 && v2 == 87 && *((_DWORD *)a2 + 1) == 3
    || v2 == 88 && *(_DWORD *)a1 == 87 && *((_DWORD *)a1 + 1) == 3 )
  {
    v3 = 1;
  }
  if ( !v3 || (*((_DWORD *)a2 + 1) == 1) != (*((_DWORD *)a1 + 1) == 1) )
    return 0;
  return v4;
}
