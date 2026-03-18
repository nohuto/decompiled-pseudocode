/*
 * XREFs of ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x18007F9EC
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x18007FD40 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x18013B980 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::CalcSectionBitmapSize(CaptureBitsResponse *this)
{
  unsigned __int8 PixelFormatSize; // al
  _DWORD *v2; // r9
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  int v5; // eax
  DWORD v6; // ebx

  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 25));
  if ( PixelFormatSize && v2[22] <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v3 = (((v2[22] * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    v2[33] = v3;
    v4 = v3 * (unsigned __int64)(unsigned int)v2[23];
    v5 = -1;
    if ( v4 <= 0xFFFFFFFF )
      v5 = v3 * v2[23];
    v2[32] = v5;
    v6 = v4 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v4 > 0xFFFFFFFF )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x122u);
  }
  else
  {
    v2[33] = 0;
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0x120u);
  }
  return v6;
}
