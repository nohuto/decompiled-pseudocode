/*
 * XREFs of ndisXlateWakeUpPatternListToWolPatternList @ 0x1C00E4264
 * Callers:
 *     ndisOidPostWolPatternList @ 0x1C004ACC0 (ndisOidPostWolPatternList.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ndisGetWakeUpPatternSize @ 0x1C0049FB4 (ndisGetWakeUpPatternSize.c)
 */

void __fastcall ndisXlateWakeUpPatternListToWolPatternList(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // r12d
  unsigned int v4; // r9d
  SIZE_T v5; // rbp
  char *v6; // r14
  char *v7; // r10
  __int64 v8; // xmm1_8
  unsigned int WakeUpPatternSize; // eax
  int v10; // r11d
  __int64 v11; // r10
  int v12; // eax
  size_t v13; // r8
  __m128i *PoolWithTag; // rax
  __m128i *v15; // r15
  char *v16; // r13
  __m128i *v17; // rsi
  __m128i v18; // xmm0
  __int64 v19; // xmm1_8
  __int64 v20; // rax
  unsigned int v21; // edi
  unsigned int v22; // eax
  __int64 v23; // rax
  __m128i v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+40h] [rbp-38h]
  __int64 v26; // [rsp+80h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0;
  v26 = v1;
  v4 = 0;
  v5 = *(unsigned int *)(v1 + 52);
  if ( (unsigned int)v5 > *(_DWORD *)(v1 + 48) )
  {
    if ( (unsigned __int8)byte_1C0099612 >= 2u )
      WPP_SF_(0x76u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids);
    return;
  }
  if ( !(_DWORD)v5 )
    return;
  v6 = *(char **)(v1 + 40);
  *(_QWORD *)(v1 + 52) = 0LL;
  v7 = v6;
  if ( (unsigned int)v5 >= 0x18 )
  {
    do
    {
      v8 = *((_QWORD *)v7 + 2);
      v24 = *(__m128i *)v7;
      v25 = v8;
      WakeUpPatternSize = ndisGetWakeUpPatternSize((unsigned int *)&v24);
      v7 = (char *)(WakeUpPatternSize + v11);
    }
    while ( v10 - WakeUpPatternSize >= 0x18 );
  }
  *(_DWORD *)(a1 + 40) = 0;
  v12 = 0;
  if ( *(_DWORD *)(v1 + 48) < v4 )
  {
    v12 = -1073676268;
    *(_DWORD *)(v1 + 56) = v4;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( v12 )
  {
    v13 = v5;
LABEL_11:
    memset(v6, 0, v13);
    return;
  }
  PoolWithTag = (__m128i *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x7877444Eu);
  v15 = PoolWithTag;
  v13 = v5;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_11;
  }
  memmove(PoolWithTag, v6, v5);
  memset(v6, 0, *(unsigned int *)(v1 + 48));
  v16 = v6;
  if ( (unsigned int)v5 >= 0x18 )
  {
    v17 = v15;
    do
    {
      v18 = *v17;
      v19 = v17[1].m128i_i64[0];
      v20 = v17->m128i_i64[0];
      *((_DWORD *)v16 + 2) = _mm_cvtsi128_si32(*v17);
      *((_DWORD *)v16 + 37) = HIDWORD(v20);
      v24 = v18;
      *((_DWORD *)v16 + 40) = 196;
      v21 = _mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
      v25 = v19;
      *(_DWORD *)v16 = 12845440;
      *((_DWORD *)v16 + 3) = 1;
      *((_DWORD *)v16 + 41) = v21;
      *((_DWORD *)v16 + 42) = v21 + 196;
      *((_DWORD *)v16 + 43) = v19;
      memmove(v16 + 196, &v17[1].m128i_u64[1], v21);
      memmove(
        &v16[*((unsigned int *)v16 + 42)],
        &v17->m128i_i8[HIDWORD(_mm_srli_si128(v18, 8).m128i_u64[0])],
        *((unsigned int *)v16 + 43));
      v2 += (v21 + v19 + 203) & 0xFFFFFFF8;
      v22 = ndisGetWakeUpPatternSize((unsigned int *)&v24);
      LODWORD(v5) = v5 - v22;
      v17 = (__m128i *)((char *)v17 + v22);
      v23 = v2;
      if ( (unsigned int)v5 < 0x18 )
        v23 = 0LL;
      *((_DWORD *)v16 + 38) = v23;
      v16 = &v6[v23];
    }
    while ( (unsigned int)v5 >= 0x18 );
    v1 = v26;
  }
  *(_DWORD *)(v1 + 52) = v2;
  *(_DWORD *)(v1 + 56) = v2;
  ExFreePoolWithTag(v15, 0);
}
