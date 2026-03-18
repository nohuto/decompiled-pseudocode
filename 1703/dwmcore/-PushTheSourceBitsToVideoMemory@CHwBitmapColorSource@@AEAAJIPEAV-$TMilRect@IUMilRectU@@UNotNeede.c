/*
 * XREFs of ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x1800442F0
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1800447F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180045DB0 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x1800798A0 (-UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qqqq @ 0x18013BCF4 (Template_qqqq.c)
 */

__int64 __fastcall CHwBitmapColorSource::PushTheSourceBitsToVideoMemory(
        __int64 a1,
        unsigned int a2,
        __m128i *a3,
        __int64 *a4,
        unsigned int a5)
{
  int D3DSurfaceLevel; // eax
  struct ID3D11Resource **v10; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // r14d
  __m128i v13; // xmm0
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned __int8 PixelFormatSize; // al
  char v22; // r11
  unsigned int v23; // edx
  __int64 v24; // rcx
  const void *v25; // r8
  bool v27; // [rsp+28h] [rbp-38h]
  __int32 v28; // [rsp+30h] [rbp-30h]
  LONG v29; // [rsp+34h] [rbp-2Ch]
  LONG v30; // [rsp+38h] [rbp-28h]
  _BYTE v31[4]; // [rsp+3Ch] [rbp-24h] BYREF
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  const void *v33; // [rsp+48h] [rbp-18h]
  struct tagRECT v34; // [rsp+50h] [rbp-10h] BYREF
  struct ID3D11Resource **v35; // [rsp+90h] [rbp+30h] BYREF

  v35 = 0LL;
  D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*(CD3DTexture **)(a1 + 160), a2, (struct CD3DSurface **)&v35);
  v10 = v35;
  v11 = D3DSurfaceLevel;
  if ( D3DSurfaceLevel < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSurfaceLevel, 0xF19u);
  }
  else
  {
    v12 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v13 = *a3;
        v14 = *(_DWORD *)(a1 + 124);
        v15 = -*(_DWORD *)(a1 + 120);
        v32 = 0LL;
        v16 = -v14;
        v34.right = v13.m128i_i32[2];
        v34.top = v16 + v13.m128i_i32[1];
        v30 = v15 + _mm_cvtsi128_si32(v13);
        v34.left = v30;
        v29 = v15 + v13.m128i_i32[2];
        v28 = v16 + v13.m128i_i32[3];
        v34.bottom = v16 + v13.m128i_i32[3];
        v17 = *a4;
        v34.right = v29;
        v18 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int64 *))(v17 + 64))(a4, v31, &v32);
        v11 = v18;
        if ( v18 < 0 )
          break;
        v19 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*a4 + 56))(a4, &a5);
        v11 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xF3Bu);
          goto LABEL_9;
        }
        v20 = (*(__int64 (__fastcall **)(__int64 *, struct ID3D11Resource ***))(*a4 + 24))(a4, &v35);
        v11 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xF3Cu);
          goto LABEL_9;
        }
        PixelFormatSize = GetPixelFormatSize((enum DXGI_FORMAT)v35);
        v23 = a5;
        v24 = v32 + a5 * a3->m128i_i32[1];
        v25 = (const void *)(v24 + a3->m128i_i32[0] * (PixelFormatSize >> 3));
        v33 = v25;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          Template_qqqq(
            v24,
            (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT,
            v29 - v30,
            v28 - v34.top,
            v22,
            PixelFormatSize >> 3);
          v23 = a5;
          v25 = v33;
        }
        CD3DDeviceLevel1::UpdateSubresource(*(CD3DDeviceLevel1 **)(a1 + 16), v10[17], &v34, v25, v23, v27);
        ++v12;
        ++a3;
        if ( v12 >= a2 )
          goto LABEL_9;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xF39u);
    }
  }
LABEL_9:
  if ( v10 )
    CMILPoolResource::Release((CMILPoolResource *)v10);
  return v11;
}
