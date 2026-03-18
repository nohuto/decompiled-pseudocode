/*
 * XREFs of ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x1800AFF8C
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1800AFD60 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x180149F90 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::CalcSectionBitmapSize(CaptureBitsResponse *this)
{
  unsigned __int8 PixelFormatSize; // al
  _DWORD *v2; // r8
  unsigned int v3; // ebx
  unsigned __int64 v4; // rcx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 25));
  v3 = 0;
  if ( !PixelFormatSize || v2[22] > 0x7FFFFFF8u / PixelFormatSize )
  {
    v2[33] = 0;
    v6 = 310;
    goto LABEL_8;
  }
  v2[33] = (((v2[22] * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  v4 = (unsigned int)v2[33] * (unsigned __int64)(unsigned int)v2[23];
  if ( v4 > 0xFFFFFFFF )
  {
    v2[32] = -1;
    v6 = 312;
LABEL_8:
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v6);
    return v3;
  }
  v2[32] = v4;
  return v3;
}
