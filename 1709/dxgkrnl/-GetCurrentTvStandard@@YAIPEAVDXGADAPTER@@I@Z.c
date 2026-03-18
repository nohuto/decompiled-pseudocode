/*
 * XREFs of ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C01C2500
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01C2684 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C01EBEFC (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 */

__int64 __fastcall GetCurrentTvStandard(struct DXGADAPTER *a1, unsigned int a2)
{
  unsigned int v2; // edx
  unsigned int v3; // eax
  unsigned int v5[6]; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 v6; // [rsp+70h] [rbp+18h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF

  v7 = 0;
  DmmGetClientVidPnTargetModeInfo(a1, a2, (enum _D3DKMDT_VIDEO_SIGNAL_STANDARD *)&v7, v5, &v6, 0LL, 0LL, 0LL);
  v2 = 16;
  if ( v7 > 16 )
  {
    if ( v7 <= 21 )
    {
      switch ( v7 )
      {
        case 21:
          return 4096;
        case 17:
          return 256;
        case 18:
          return 512;
        case 19:
          return 1024;
        case 20:
          return 2048;
      }
      return 1;
    }
    switch ( v7 )
    {
      case 22:
        return 0x2000;
      case 23:
        return 0x4000;
      case 24:
        return 0x80000;
    }
    if ( (unsigned int)(v7 - 25) > 2 )
      return 1;
    goto LABEL_38;
  }
  if ( v7 >= 15 )
    return 128;
  if ( v7 <= 10 )
  {
    if ( v7 >= 9 )
      return 4;
    if ( v7 <= 0 )
      return 1;
    if ( v7 > 3 )
    {
      if ( v7 <= 5 )
        return 0x8000;
      if ( v7 != 6 )
      {
        if ( v7 == 7 )
          return 2;
        else
          return 0x10000;
      }
      return 1;
    }
LABEL_38:
    v3 = v5[0];
    if ( v6 )
      v3 = 2 * v5[0];
    return v3 < 0x37 ? 4 : 1;
  }
  if ( v7 == 11 )
    return 0x20000;
  if ( v7 != 12 )
  {
    if ( v7 == 13 )
      return 32;
    if ( v7 == 14 )
      return 8;
    return 1;
  }
  return v2;
}
