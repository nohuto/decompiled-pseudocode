/*
 * XREFs of ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x18001E4E4
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x18001E3A0 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x18015DEB0 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180084360 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::CalcSectionBitmapSize(enum DXGI_FORMAT *this)
{
  unsigned __int8 PixelFormatSize; // al
  _DWORD *v2; // r9
  int v3; // ebx
  unsigned int v4; // r8d
  unsigned __int64 v5; // rcx

  PixelFormatSize = GetPixelFormatSize(this[25]);
  if ( PixelFormatSize && v2[22] <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v3 = 0;
    v4 = (((v2[22] * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  }
  else
  {
    v3 = -2147024362;
    v4 = 0;
  }
  v2[33] = v4;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x11Eu);
  }
  else
  {
    v5 = v4 * (unsigned __int64)(unsigned int)v2[23];
    if ( v5 > 0xFFFFFFFF )
    {
      v2[32] = -1;
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x120u);
    }
    else
    {
      v2[32] = v5;
      return 0;
    }
  }
  return (unsigned int)v3;
}
