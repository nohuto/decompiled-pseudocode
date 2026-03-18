/*
 * XREFs of ?EnsureCommandListBufferData@CCommandListBitmapRepresentation@@AEAAXPEAVID2DContextOwner@@PEAUID2D1Bitmap@@@Z @ 0x180009D90
 * Callers:
 *     ?BuildCommandBuffers@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAUID2D1PrivateCompositorBuffer@@3@Z @ 0x18000A0F4 (-BuildCommandBuffers@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAVID2DContex.c)
 * Callees:
 *     ?GetContentLocalBoundsRect@CCompositionSurfaceBitmap@@UEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A980 (-GetContentLocalBoundsRect@CCompositionSurfaceBitmap@@UEAA_NPEAV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCommandListBitmapRepresentation::EnsureCommandListBufferData(
        CCommandListBitmapRepresentation *this,
        struct ID2DContextOwner *a2,
        struct ID2D1Bitmap *a3)
{
  __int64 (__fastcall *v5)(CCommandListBitmapRepresentation *, float *); // rax
  char ContentLocalBoundsRect; // al
  float v7; // xmm2_4
  float v8; // xmm4_4
  __m128 v9; // xmm1
  bool v10; // zf
  float v11; // xmm3_4
  __m128 v12; // xmm2
  _DWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v14[4]; // [rsp+28h] [rbp-28h] BYREF
  int v15; // [rsp+2Ch] [rbp-24h]
  float v16[6]; // [rsp+30h] [rbp-20h] BYREF

  (*(void (__fastcall **)(struct ID2D1Bitmap *, _DWORD *))(*(_QWORD *)a3 + 32LL))(a3, v13);
  (*(void (__fastcall **)(struct ID2D1Bitmap *, _BYTE *))(*(_QWORD *)a3 + 48LL))(a3, v14);
  v5 = *(__int64 (__fastcall **)(CCommandListBitmapRepresentation *, float *))(*(_QWORD *)this + 88LL);
  if ( (char *)v5 == (char *)CCompositionSurfaceBitmap::GetContentLocalBoundsRect )
    ContentLocalBoundsRect = CCompositionSurfaceBitmap::GetContentLocalBoundsRect(this, v16);
  else
    ContentLocalBoundsRect = v5(this, v16);
  v7 = *(float *)&v13[1];
  v8 = *(float *)v13;
  if ( ContentLocalBoundsRect )
  {
    *(_OWORD *)((char *)this + 152) = *(_OWORD *)v16;
  }
  else
  {
    *((_DWORD *)this + 38) = 0;
    *((_DWORD *)this + 39) = 0;
    *((float *)this + 40) = v8;
    *((float *)this + 41) = v7;
  }
  v9 = 0LL;
  *(_QWORD *)&v16[1] = 0LL;
  v10 = v15 == 3;
  v11 = 1.0 / v7;
  *((_DWORD *)this + 3) = 1;
  v12 = 0LL;
  v16[3] = v11;
  v16[0] = 1.0 / v8;
  v9.m128_f32[0] = 0.0 - (float)((float)(1.0 / v8) * 0.0);
  v12.m128_f32[0] = 0.0 - (float)(v11 * 0.0);
  *(_OWORD *)((char *)this + 216) = *(_OWORD *)v16;
  *((_QWORD *)this + 29) = _mm_unpacklo_ps(v9, v12).m128_u64[0];
  if ( v10 )
    *((_DWORD *)this + 3) |= 0x10u;
}
