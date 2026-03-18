/*
 * XREFs of ?PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180008A68
 * Callers:
 *     ?PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800100C0 (-PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 * Callees:
 *     ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x1800AC694 (-D2DRemoveClip@CD2DContext@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DTarget::PushLayer(
        CD2DTarget *this,
        const __m128i *a2,
        struct ID2D1Geometry *a3,
        struct D2D_MATRIX_3X2_F *a4,
        float a5,
        enum D2D1_ANTIALIAS_MODE a6,
        enum D2D1_LAYER_OPTIONS1 a7,
        enum D2D1_PRIMITIVE_BLEND a8)
{
  __int64 v8; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // xmm1_8
  __m128i v15; // xmm2
  __int64 v16; // rax
  unsigned int v17; // r14d
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int128 v21; // xmm0
  _BYTE v22[4]; // [rsp+2Ch] [rbp-B5h] BYREF
  _BYTE v23[40]; // [rsp+38h] [rbp-A9h]
  __int64 v24; // [rsp+60h] [rbp-81h]
  __int64 v25; // [rsp+68h] [rbp-79h]
  __int128 v26; // [rsp+70h] [rbp-71h] BYREF
  unsigned __int64 v27; // [rsp+80h] [rbp-61h]
  _OWORD v28[4]; // [rsp+88h] [rbp-59h] BYREF
  __int64 v29; // [rsp+C8h] [rbp-19h]

  v8 = *((_QWORD *)this + 2);
  v27 = 0LL;
  v26 = _xmm;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v8 + 176) + 240LL))(*(_QWORD *)(v8 + 176), &v26);
  v13 = *((_QWORD *)this + 2);
  if ( a8 != *(_DWORD *)(v13 + 404) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v13 + 176) + 624LL))(
      *(_QWORD *)(v13 + 176),
      (unsigned int)a8);
    *(_DWORD *)(v13 + 404) = a8;
  }
  if ( a4 )
  {
    v14 = *(_QWORD *)&a4->m[2][0];
    v26 = *(_OWORD *)&a4->m11;
    v27 = v14;
  }
  else
  {
    v26 = _xmm;
    v27 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  memset_0(v22, 0, 0x44uLL);
  v15 = _mm_loadu_si128(a2);
  v24 = 0LL;
  *(_DWORD *)&v23[8] = a6;
  *(_OWORD *)&v23[12] = v26;
  LODWORD(v25) = a7;
  v16 = *((_QWORD *)this + 2);
  *(_QWORD *)&v23[28] = v27;
  *(_QWORD *)v23 = a3;
  *(float *)&v23[36] = a5;
  v28[2] = *(_OWORD *)&v23[16];
  v28[1] = *(_OWORD *)v23;
  v28[0] = v15;
  v28[3] = *(unsigned __int64 *)&v23[32];
  v29 = v25;
  (*(void (__fastcall **)(_QWORD, _OWORD *, _QWORD))(**(_QWORD **)(v16 + 176) + 688LL))(
    *(_QWORD *)(v16 + 176),
    v28,
    0LL);
  if ( *((_BYTE *)this + 56) )
  {
    v17 = *((_DWORD *)this + 19);
    if ( *((_BYTE *)this + 48) )
    {
      v18 = *((_QWORD *)this + 2);
      v27 = 0LL;
      v19 = *(_QWORD *)(v18 + 176);
      v26 = _xmm;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v19 + 240LL))(v19, &v26);
      v20 = *(_QWORD *)(v18 + 184);
      *(_BYTE *)(v18 + 482) = 0;
      v21 = *(_OWORD *)((char *)this + 60);
      *(_DWORD *)(v18 + 424) = v17;
      *(_OWORD *)(v18 + 408) = v21;
      (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v20 + 80LL))(v20, (char *)this + 60, v17);
    }
    *((_BYTE *)this + 56) = 1;
  }
  else
  {
    CD2DContext::D2DRemoveClip(*((CD2DContext **)this + 2));
  }
  ++*((_DWORD *)this + 13);
}
