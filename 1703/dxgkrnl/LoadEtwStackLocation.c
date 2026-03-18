/*
 * XREFs of LoadEtwStackLocation @ 0x1C0035B1C
 * Callers:
 *     DpiDispatchPnp @ 0x1C00A9AE0 (DpiDispatchPnp.c)
 *     DpiDispatchInternalIoctl @ 0x1C00A9C10 (DpiDispatchInternalIoctl.c)
 *     DpiDispatchPower @ 0x1C01036E0 (DpiDispatchPower.c)
 *     DpiDispatchIoctl @ 0x1C011D0D0 (DpiDispatchIoctl.c)
 *     DpiDispatchSystemControl @ 0x1C01CA9E0 (DpiDispatchSystemControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LoadEtwStackLocation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm2
  __m128i v4; // xmm4
  __int128 v5; // xmm1
  __int64 v6; // xmm0_8
  char v7; // dl
  __m128i v9; // [rsp+20h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(__m128i *)v2;
  v4 = *(__m128i *)(v2 + 48);
  v5 = *(_OWORD *)(v2 + 16);
  v6 = *(_QWORD *)(v2 + 64);
  v7 = _mm_cvtsi128_si32(*(__m128i *)v2);
  v9 = *(__m128i *)(v2 + 32);
  *(_BYTE *)a1 = v7;
  *(_BYTE *)(a1 + 2) = v3.m128i_i8[2];
  *(_QWORD *)(a1 + 48) = v4.m128i_i64[0];
  *(_QWORD *)(a1 + 64) = v6;
  *(_BYTE *)(a1 + 1) = v3.m128i_i8[1];
  *(_BYTE *)(a1 + 3) = v3.m128i_i8[3];
  *(_QWORD *)(a1 + 40) = _mm_srli_si128(v9, 8).m128i_u64[0];
  *(_QWORD *)(a1 + 56) = _mm_srli_si128(v4, 8).m128i_u64[0];
  if ( v7 != 27 )
    return a1;
  if ( v3.m128i_u8[1] > 0xCu )
  {
    if ( v3.m128i_u8[1] < 0xFu )
      return a1;
    if ( v3.m128i_u8[1] <= 0x10u )
    {
      *(_DWORD *)(a1 + 8) = v3.m128i_i32[2];
      *(_QWORD *)(a1 + 16) = v5;
      *(_DWORD *)(a1 + 24) = DWORD2(v5);
      *(_DWORD *)(a1 + 28) = v9.m128i_i32[0];
      return a1;
    }
    if ( v3.m128i_u8[1] == 18 )
    {
      *(_BYTE *)(a1 + 8) = v3.m128i_i8[8];
      return a1;
    }
    if ( v3.m128i_u8[1] == 19 )
      goto LABEL_11;
    if ( v3.m128i_u8[1] != 22 )
      return a1;
    *(_BYTE *)(a1 + 8) = v3.m128i_i8[8];
LABEL_15:
    *(_DWORD *)(a1 + 12) = v5;
    return a1;
  }
  if ( v3.m128i_u8[1] == 12 )
  {
    *(_DWORD *)(a1 + 8) = v3.m128i_i32[2];
    goto LABEL_15;
  }
  if ( !v3.m128i_i8[1] )
    goto LABEL_11;
  if ( v3.m128i_u8[1] == 1 )
  {
    *(_QWORD *)(a1 + 8) = v3.m128i_i64[1];
    return a1;
  }
  if ( v3.m128i_u8[1] > 1u )
  {
    if ( v3.m128i_u8[1] <= 3u )
    {
      *(_DWORD *)(a1 + 8) = v3.m128i_i32[2];
      *(_DWORD *)(a1 + 12) = v5;
      *(_DWORD *)(a1 + 16) = DWORD2(v5);
      *(_DWORD *)(a1 + 20) = DWORD2(v5);
      *(_DWORD *)(a1 + 24) = v9.m128i_i32[0];
      return a1;
    }
    if ( v3.m128i_u8[1] != 7 )
    {
      if ( v3.m128i_u8[1] == 8 )
      {
        *(_QWORD *)(a1 + 8) = v3.m128i_i64[1];
        *(_DWORD *)(a1 + 16) = v5;
        *(_QWORD *)(a1 + 24) = *((_QWORD *)&v5 + 1);
        *(_QWORD *)(a1 + 32) = v9.m128i_i64[0];
      }
      return a1;
    }
LABEL_11:
    *(_DWORD *)(a1 + 8) = v3.m128i_i32[2];
  }
  return a1;
}
