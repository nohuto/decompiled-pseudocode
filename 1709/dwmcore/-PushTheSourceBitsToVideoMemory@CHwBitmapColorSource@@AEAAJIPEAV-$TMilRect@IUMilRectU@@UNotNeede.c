/*
 * XREFs of ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x1801B5F00
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801B56F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N3@Z @ 0x18001FECC (-UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N3@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180081D60 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x1800824B8 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqq @ 0x180126AC8 (McTemplateU0qqqq.c)
 */

__int64 __fastcall CHwBitmapColorSource::PushTheSourceBitsToVideoMemory(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __int64 *a4)
{
  int v7; // esi
  signed int D3DSurfaceLevel; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  __m128i v11; // xmm0
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  __int32 v15; // esi
  __int32 v16; // r14d
  LONG v17; // edx
  __int64 v18; // rax
  signed int v19; // eax
  signed int v20; // eax
  int *v21; // rax
  unsigned __int8 PixelFormatSize; // al
  char v23; // r10
  unsigned int v24; // edx
  int v25; // r9d
  __int64 v26; // rcx
  const void *v27; // r8
  bool v29; // [rsp+28h] [rbp-59h]
  unsigned int v30; // [rsp+40h] [rbp-41h] BYREF
  struct tagRECT v31; // [rsp+48h] [rbp-39h] BYREF
  LONG v32; // [rsp+58h] [rbp-29h]
  unsigned int v33; // [rsp+5Ch] [rbp-25h]
  struct CD3DSurface *v34; // [rsp+60h] [rbp-21h] BYREF
  __int64 v35; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v36[8]; // [rsp+70h] [rbp-11h] BYREF
  const void *v37; // [rsp+78h] [rbp-9h]
  _BYTE v38[16]; // [rsp+80h] [rbp-1h] BYREF

  v34 = 0LL;
  v33 = a2;
  v7 = a2;
  D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*(CD3DTexture **)(a1 + 168), a2, &v34);
  v9 = D3DSurfaceLevel;
  if ( D3DSurfaceLevel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D3DSurfaceLevel, 0xF06u);
  }
  else
  {
    v10 = 0;
    if ( v7 )
    {
      while ( 1 )
      {
        v11 = *a3;
        v12 = *(_DWORD *)(a1 + 132);
        v13 = -*(_DWORD *)(a1 + 128);
        v35 = 0LL;
        v14 = -v12;
        v31.left = v11.m128i_i32[0];
        v15 = v13 + v11.m128i_i32[2];
        v31.top = v14 + v11.m128i_i32[1];
        v16 = v14 + v11.m128i_i32[3];
        v31.right = v13 + v11.m128i_i32[2];
        v31.bottom = v14 + v11.m128i_i32[3];
        v17 = v13 + _mm_cvtsi128_si32(v11);
        v18 = *a4;
        v32 = v17;
        v31.left = v17;
        v19 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int64 *))(v18 + 48))(a4, v36, &v35);
        v9 = v19;
        if ( v19 < 0 )
          break;
        v20 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*a4 + 40))(a4, &v30);
        v9 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0xF28u);
          goto LABEL_12;
        }
        v21 = (int *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*a4 + 24))(a4, v38);
        PixelFormatSize = GetPixelFormatSize(*v21);
        v24 = v30;
        v25 = PixelFormatSize >> 3;
        v26 = v35 + v30 * a3->m128i_i32[1];
        v27 = (const void *)(v26 + (unsigned int)(v25 * a3->m128i_i32[0]));
        v37 = v27;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          McTemplateU0qqqq(v26, &EVTDESC_ETWGUID_BITMAPCOPYEVENT, v15 - v32, v16 - v31.top, v23, v25);
          v24 = v30;
          v27 = v37;
        }
        CD3DDeviceLevel1::UpdateSubresource(
          *(CD3DDeviceLevel1 **)(a1 + 16),
          *((struct ID3D11Resource **)v34 + 16),
          &v31,
          v27,
          v24,
          v29,
          0);
        ++v10;
        ++a3;
        if ( v10 >= v33 )
          goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0xF26u);
    }
  }
LABEL_12:
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v34);
  return v9;
}
