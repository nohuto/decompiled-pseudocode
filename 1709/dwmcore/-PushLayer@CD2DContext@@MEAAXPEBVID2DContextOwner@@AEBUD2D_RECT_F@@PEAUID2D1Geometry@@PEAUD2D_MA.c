/*
 * XREFs of ?PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180044BD0
 * Callers:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800818D0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x180043D34 (-D2DRemoveClip@CD2DContext@@IEAAXXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180043ED0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180043FB4 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::PushLayer(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const __m128i *a3,
        struct ID2D1Geometry *a4,
        struct D2D_MATRIX_3X2_F *a5,
        float a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_LAYER_OPTIONS1 a8,
        enum D2D1_PRIMITIVE_BLEND a9)
{
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // xmm1_8
  __m128i v17; // xmm2
  __int64 v18; // rax
  unsigned int v19; // esi
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int128 v23; // xmm0
  _BYTE v24[4]; // [rsp+2Ch] [rbp-ADh] BYREF
  _BYTE v25[40]; // [rsp+38h] [rbp-A1h]
  __int64 v26; // [rsp+60h] [rbp-79h]
  __int64 v27; // [rsp+68h] [rbp-71h]
  __int128 v28; // [rsp+70h] [rbp-69h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp-59h]
  _OWORD v30[4]; // [rsp+88h] [rbp-51h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-11h]

  CD2DContext::FlushDrawList(this);
  v12 = *((_DWORD *)this + 86);
  v13 = 0LL;
  if ( v12 )
    v13 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(v12 - 1));
  CD2DContext::EnsureBeginDraw(this);
  v14 = *(_QWORD *)(v13 + 16);
  v29 = 0LL;
  v28 = _xmm;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v14 + 176) + 240LL))(*(_QWORD *)(v14 + 176), &v28);
  v15 = *(_QWORD *)(v13 + 16);
  if ( a9 != *(_DWORD *)(v15 + 388) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v15 + 176) + 624LL))(
      *(_QWORD *)(v15 + 176),
      (unsigned int)a9);
    *(_DWORD *)(v15 + 388) = a9;
  }
  if ( a5 )
  {
    v16 = *(_QWORD *)&a5->m[2][0];
    v28 = *(_OWORD *)&a5->m11;
    v29 = v16;
  }
  else
  {
    v28 = _xmm;
    v29 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  memset_0(v24, 0, 0x44uLL);
  v17 = _mm_loadu_si128(a3);
  v26 = 0LL;
  *(_DWORD *)&v25[8] = a7;
  *(_OWORD *)&v25[12] = v28;
  LODWORD(v27) = a8;
  v18 = *(_QWORD *)(v13 + 16);
  *(_QWORD *)&v25[28] = v29;
  *(_QWORD *)v25 = a4;
  *(float *)&v25[36] = a6;
  v30[2] = *(_OWORD *)&v25[16];
  v30[1] = *(_OWORD *)v25;
  v30[0] = v17;
  v30[3] = *(unsigned __int64 *)&v25[32];
  v31 = v27;
  (*(void (__fastcall **)(_QWORD, _OWORD *, _QWORD))(**(_QWORD **)(v18 + 176) + 688LL))(
    *(_QWORD *)(v18 + 176),
    v30,
    0LL);
  if ( *(_BYTE *)(v13 + 56) )
  {
    v19 = *(_DWORD *)(v13 + 76);
    if ( *(_BYTE *)(v13 + 48) )
    {
      v20 = *(_QWORD *)(v13 + 16);
      v29 = 0LL;
      v21 = *(_QWORD *)(v20 + 176);
      v28 = _xmm;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v21 + 240LL))(v21, &v28);
      v22 = *(_QWORD *)(v20 + 184);
      *(_BYTE *)(v20 + 466) = 0;
      v23 = *(_OWORD *)(v13 + 60);
      *(_DWORD *)(v20 + 408) = v19;
      *(_OWORD *)(v20 + 392) = v23;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v22 + 80LL))(v22, v13 + 60, v19);
    }
    *(_BYTE *)(v13 + 56) = 1;
  }
  else
  {
    CD2DContext::D2DRemoveClip(*(CD2DContext **)(v13 + 16));
  }
  ++*(_DWORD *)(v13 + 52);
}
