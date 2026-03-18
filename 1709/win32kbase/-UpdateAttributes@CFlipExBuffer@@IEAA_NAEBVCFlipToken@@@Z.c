/*
 * XREFs of ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C00397DC
 * Callers:
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C0039700 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CFlipExBuffer::UpdateAttributes(CFlipExBuffer *this, const struct CFlipToken *a2)
{
  __m128 v2; // xmm6
  int v5; // edx
  char v6; // di
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  __m128i v13; // xmm1
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128 v17; // xmm2
  __int64 v18; // xmm3_8
  int v19; // eax

  v2 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a2 + 120));
  v5 = *((_DWORD *)this + 41);
  v6 = 0;
  v7 = *((unsigned __int8 *)a2 + 117);
  if ( (v5 & 1) != v7 )
  {
    v6 = 1;
    *((_DWORD *)this + 41) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)v7) & 1;
  }
  v8 = *((_DWORD *)a2 + 36);
  if ( *((_DWORD *)this + 28) != v8 )
  {
    *((_DWORD *)this + 28) = v8;
    v6 = 1;
  }
  if ( ((*((_DWORD *)this + 41) >> 5) & 1) != ((*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 136LL))(a2) != 0) )
  {
    v6 = 1;
    *((_DWORD *)this + 41) = ((*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 136LL))(a2) != 0
                            ? 0x20
                            : 0) | *((_DWORD *)this + 41) & 0xFFFFFFDF;
  }
  if ( *((float *)this + 17) != v2.m128_f32[0]
    || *((float *)this + 18) != _mm_shuffle_ps(v2, v2, 85).m128_f32[0]
    || *((float *)this + 19) != _mm_shuffle_ps(v2, v2, 170).m128_f32[0]
    || *((float *)this + 20) != _mm_shuffle_ps(v2, v2, 255).m128_f32[0] )
  {
    *(__m128 *)((char *)this + 68) = v2;
    v6 = 1;
  }
  v9 = *((unsigned __int8 *)a2 + 136);
  if ( ((*((_DWORD *)this + 41) >> 2) & 1) != v9 )
  {
    v6 = 1;
    *((_DWORD *)this + 41) ^= ((unsigned __int8)*((_DWORD *)this + 41) ^ (unsigned __int8)(4 * v9)) & 4;
  }
  v10 = *((_DWORD *)a2 + 53);
  if ( *((_DWORD *)this + 21) != v10 )
  {
    *((_DWORD *)this + 21) = v10;
    v6 = 1;
  }
  v11 = *((_DWORD *)a2 + 35);
  if ( *((_DWORD *)this + 12) != v11 )
  {
    *((_DWORD *)this + 12) = v11;
    v6 = 1;
  }
  v12 = *((unsigned __int8 *)a2 + 137);
  if ( ((*((_DWORD *)this + 41) >> 3) & 1) != v12 )
  {
    v6 = 1;
    *((_DWORD *)this + 41) ^= ((unsigned __int8)*((_DWORD *)this + 41) ^ (unsigned __int8)(8 * v12)) & 8;
  }
  v13 = *(__m128i *)((char *)a2 + 148);
  if ( *((_QWORD *)this + 12) != *(_QWORD *)((char *)a2 + 148)
    || *((_QWORD *)this + 13) != _mm_srli_si128(v13, 8).m128i_u64[0] )
  {
    *((__m128i *)this + 6) = v13;
    v6 = 1;
  }
  v14 = *(__m128i *)((char *)a2 + 164);
  if ( *(_QWORD *)((char *)this + 148) != *(_QWORD *)((char *)a2 + 164)
    || *(_QWORD *)((char *)this + 156) != _mm_srli_si128(v14, 8).m128i_u64[0] )
  {
    *(__m128i *)((char *)this + 148) = v14;
    v6 = 1;
  }
  v15 = *((_DWORD *)a2 + 45);
  if ( *((_DWORD *)this + 35) != v15 )
  {
    *((_DWORD *)this + 35) = v15;
    v6 = 1;
  }
  v16 = *((_DWORD *)a2 + 46);
  if ( *((_DWORD *)this + 36) != v16 )
  {
    *((_DWORD *)this + 36) = v16;
    v6 = 1;
  }
  v17 = *(__m128 *)((char *)a2 + 188);
  v18 = *(_QWORD *)((char *)a2 + 204);
  if ( *((float *)this + 29) != v17.m128_f32[0]
    || *((float *)this + 30) != _mm_shuffle_ps(v17, v17, 85).m128_f32[0]
    || *((float *)this + 31) != _mm_shuffle_ps(v17, v17, 170).m128_f32[0]
    || *((float *)this + 32) != _mm_shuffle_ps(v17, v17, 255).m128_f32[0]
    || *((float *)this + 33) != *(float *)&v18
    || *((float *)this + 34) != *((float *)&v18 + 1) )
  {
    *(__m128 *)((char *)this + 116) = v17;
    v6 = 1;
    *(_QWORD *)((char *)this + 132) = v18;
  }
  v19 = *((_DWORD *)a2 + 54);
  if ( *((_DWORD *)this + 23) != v19 )
  {
    *((_DWORD *)this + 23) = v19;
    v6 = 1;
  }
  if ( *((_BYTE *)a2 + 138) )
  {
    *((_DWORD *)this + 41) |= 0x800u;
    return 1;
  }
  return v6;
}
