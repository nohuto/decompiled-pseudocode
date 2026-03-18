/*
 * XREFs of ?GetPixelFormat@CBitmapColorKey@@UEAAJPEAU_GUID@@@Z @ 0x1801A1960
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x1800C9B68 (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 */

__int64 __fastcall CBitmapColorKey::GetPixelFormat(CBitmapColorKey *this, struct _GUID *a2)
{
  struct _GUID *v2; // r8
  int v3; // eax
  GUID v4; // xmm0

  v2 = a2;
  if ( *((_DWORD *)this + 4) == 88 )
  {
    LOBYTE(v3) = 16;
LABEL_4:
    *v2 = GUID_WICPixelFormatDontCare;
    v2->Data4[7] = v3;
    return 0LL;
  }
  v3 = DXGIFormatToPixelFormat(*((_DWORD *)this + 4), *((_DWORD *)this + 5) == 1);
  if ( v3 <= 31 )
    goto LABEL_4;
  switch ( v3 )
  {
    case ',':
      v4 = GUID_WICPixelFormat40bppCMYKAlpha;
LABEL_41:
      *v2 = v4;
      return 0LL;
    case '-':
      v4 = GUID_WICPixelFormat80bppCMYKAlpha;
      goto LABEL_41;
    case 'C':
      v4 = GUID_WICPixelFormat8bppAlpha;
      goto LABEL_41;
    case 'D':
      v4 = GUID_WICPixelFormat32bppRGBA;
      goto LABEL_41;
    case 'E':
      v4 = GUID_WICPixelFormat32bppPRGBA;
      goto LABEL_41;
    case 'H':
      v4 = GUID_WICPixelFormat64bppBGRA;
      goto LABEL_41;
    case 'I':
      v4 = GUID_WICPixelFormat64bppPBGRA;
      goto LABEL_41;
    case 'G':
      v4 = GUID_WICPixelFormat48bppBGR;
      goto LABEL_41;
    case 'F':
      v4 = GUID_WICPixelFormat16bppBGRA5551;
      goto LABEL_41;
    case 'J':
      v4 = GUID_WICPixelFormat48bppBGRFixedPoint;
      goto LABEL_41;
    case 'K':
      v4 = GUID_WICPixelFormat64bppBGRAFixedPoint;
      goto LABEL_41;
    case 'L':
      v4 = GUID_WICPixelFormat96bppRGBFloat;
      goto LABEL_41;
    case 'M':
      v4 = GUID_WICPixelFormat32bppRGB;
      goto LABEL_41;
    case 'N':
      v4 = GUID_WICPixelFormat64bppRGB;
      goto LABEL_41;
    case 'O':
      v4 = GUID_WICPixelFormat8bppY;
      goto LABEL_41;
    case 'P':
      v4 = GUID_WICPixelFormat8bppCb;
      goto LABEL_41;
    case 'Q':
      v4 = GUID_WICPixelFormat8bppCr;
      goto LABEL_41;
    case 'R':
      v4 = GUID_WICPixelFormat16bppCbCr;
      goto LABEL_41;
  }
  return 2147500037LL;
}
