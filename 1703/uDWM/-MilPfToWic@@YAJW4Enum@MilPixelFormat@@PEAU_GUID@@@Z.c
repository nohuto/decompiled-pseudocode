/*
 * XREFs of ?MilPfToWic@@YAJW4Enum@MilPixelFormat@@PEAU_GUID@@@Z @ 0x1800A2F2C
 * Callers:
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z @ 0x1800A2B40 (-GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1800A3110 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MilPfToWic(int a1, GUID *a2)
{
  GUID v2; // xmm0

  if ( a1 <= 31 )
  {
    *a2 = GUID_WICPixelFormatDontCare;
    a2->Data4[7] = a1;
    return 0LL;
  }
  switch ( a1 )
  {
    case ',':
      v2 = GUID_WICPixelFormat40bppCMYKAlpha;
LABEL_39:
      *a2 = v2;
      return 0LL;
    case '-':
      v2 = GUID_WICPixelFormat80bppCMYKAlpha;
      goto LABEL_39;
    case 'C':
      v2 = GUID_WICPixelFormat8bppAlpha;
      goto LABEL_39;
    case 'D':
      v2 = GUID_WICPixelFormat32bppRGBA;
      goto LABEL_39;
    case 'E':
      v2 = GUID_WICPixelFormat32bppPRGBA;
      goto LABEL_39;
    case 'H':
      v2 = GUID_WICPixelFormat64bppBGRA;
      goto LABEL_39;
    case 'I':
      v2 = GUID_WICPixelFormat64bppPBGRA;
      goto LABEL_39;
    case 'G':
      v2 = GUID_WICPixelFormat48bppBGR;
      goto LABEL_39;
    case 'F':
      v2 = GUID_WICPixelFormat16bppBGRA5551;
      goto LABEL_39;
    case 'J':
      v2 = GUID_WICPixelFormat48bppBGRFixedPoint;
      goto LABEL_39;
    case 'K':
      v2 = GUID_WICPixelFormat64bppBGRAFixedPoint;
      goto LABEL_39;
    case 'L':
      v2 = GUID_WICPixelFormat96bppRGBFloat;
      goto LABEL_39;
    case 'M':
      v2 = GUID_WICPixelFormat32bppRGB;
      goto LABEL_39;
    case 'N':
      v2 = GUID_WICPixelFormat64bppRGB;
      goto LABEL_39;
    case 'O':
      v2 = GUID_WICPixelFormat8bppY;
      goto LABEL_39;
    case 'P':
      v2 = GUID_WICPixelFormat8bppCb;
      goto LABEL_39;
    case 'Q':
      v2 = GUID_WICPixelFormat8bppCr;
      goto LABEL_39;
    case 'R':
      v2 = GUID_WICPixelFormat16bppCbCr;
      goto LABEL_39;
  }
  return 2147500037LL;
}
