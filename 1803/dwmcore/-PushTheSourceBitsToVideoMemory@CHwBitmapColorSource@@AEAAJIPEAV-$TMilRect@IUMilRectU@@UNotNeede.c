/*
 * XREFs of ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x1801F04A4
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801EFC8C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x1800218B0 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x180021E58 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N3@Z @ 0x180076A30 (-UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N3@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180084360 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqq @ 0x180148DD8 (McTemplateU0qqqq.c)
 */

__int64 __fastcall CHwBitmapColorSource::PushTheSourceBitsToVideoMemory(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __int64 *a4)
{
  unsigned int v7; // r12d
  int D3DSurfaceLevel; // eax
  struct CD3DSurface *v9; // r13
  unsigned int v10; // ebx
  unsigned int v11; // edi
  __m128i v12; // xmm0
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  int *v19; // rax
  unsigned __int8 PixelFormatSize; // al
  char v21; // r9
  unsigned int v22; // edx
  int v23; // r10d
  __int64 v24; // rcx
  const void *v25; // r8
  bool v27; // [rsp+28h] [rbp-49h]
  unsigned int v28; // [rsp+40h] [rbp-31h] BYREF
  struct tagRECT v29; // [rsp+48h] [rbp-29h] BYREF
  __int32 v30; // [rsp+58h] [rbp-19h]
  __int32 v31; // [rsp+5Ch] [rbp-15h]
  struct CD3DSurface *v32; // [rsp+60h] [rbp-11h] BYREF
  __int64 v33; // [rsp+68h] [rbp-9h] BYREF
  const void *v34; // [rsp+70h] [rbp-1h]
  _BYTE v35[16]; // [rsp+78h] [rbp+7h] BYREF

  v32 = 0LL;
  v7 = a2;
  D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*(CD3DTexture **)(a1 + 168), a2, &v32);
  v9 = v32;
  v10 = D3DSurfaceLevel;
  if ( D3DSurfaceLevel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D3DSurfaceLevel, 0xF06u);
  }
  else
  {
    v11 = 0;
    if ( v7 )
    {
      while ( 1 )
      {
        v12 = *a3;
        v13 = *(_DWORD *)(a1 + 132);
        v14 = -*(_DWORD *)(a1 + 128);
        v33 = 0LL;
        v15 = -v13;
        v29.bottom = v12.m128i_i32[3];
        v29.top = v15 + v12.m128i_i32[1];
        v29.left = v14 + _mm_cvtsi128_si32(v12);
        v31 = v14 + v12.m128i_i32[2];
        v29.right = v14 + v12.m128i_i32[2];
        v16 = *a4;
        v30 = v15 + v12.m128i_i32[3];
        v29.bottom = v15 + v12.m128i_i32[3];
        v17 = (*(__int64 (__fastcall **)(__int64 *, struct CD3DSurface **, __int64 *))(v16 + 48))(a4, &v32, &v33);
        v10 = v17;
        if ( v17 < 0 )
          break;
        v18 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*a4 + 40))(a4, &v28);
        v10 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xF28u);
          goto LABEL_12;
        }
        v19 = (int *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*a4 + 24))(a4, v35);
        PixelFormatSize = GetPixelFormatSize(*v19);
        v22 = v28;
        v23 = PixelFormatSize >> 3;
        v24 = v33 + v28 * a3->m128i_i32[1];
        v25 = (const void *)(v24 + (unsigned int)(v23 * a3->m128i_i32[0]));
        v34 = v25;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          McTemplateU0qqqq(v24, &EVTDESC_ETWGUID_BITMAPCOPYEVENT, v31 - v29.left, v30 - v29.top, v21, v23);
          v22 = v28;
          v25 = v34;
        }
        CD3DDeviceLevel1::UpdateSubresource(
          *(CD3DDeviceLevel1 **)(a1 + 16),
          *((struct ID3D11Resource **)v9 + 16),
          &v29,
          v25,
          v22,
          v27,
          0);
        ++v11;
        ++a3;
        if ( v11 >= v7 )
          goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xF26u);
    }
  }
LABEL_12:
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v9);
  return v10;
}
