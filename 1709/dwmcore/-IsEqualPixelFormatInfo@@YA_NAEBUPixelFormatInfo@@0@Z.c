/*
 * XREFs of ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x1800BE3E0
 * Callers:
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x1800203A8 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18002DA20 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsEqualPixelFormatInfo(const struct PixelFormatInfo *a1, const struct PixelFormatInfo *a2)
{
  int v2; // r9d
  char v3; // r8
  bool result; // al
  char v5; // cl
  char v6; // dl

  v2 = *(_DWORD *)a2;
  v3 = 0;
  result = 1;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2
    || *(_DWORD *)a1 == 88 && v2 == 87 && *((_DWORD *)a2 + 1) == 3
    || v2 == 88 && *(_DWORD *)a1 == 87 && *((_DWORD *)a1 + 1) == 3 )
  {
    v3 = 1;
  }
  v5 = *((_DWORD *)a1 + 1) == 1;
  v6 = *((_DWORD *)a2 + 1) == 1;
  if ( !v3 || v6 != v5 )
    return 0;
  return result;
}
