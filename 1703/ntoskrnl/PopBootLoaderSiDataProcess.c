/*
 * XREFs of PopBootLoaderSiDataProcess @ 0x14040BB18
 * Callers:
 *     PoBroadcastSystemState @ 0x140408390 (PoBroadcastSystemState.c)
 * Callees:
 *     BapdRegisterSiData @ 0x14040EF8C (BapdRegisterSiData.c)
 */

__int64 PopBootLoaderSiDataProcess()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __m128i *v3; // r9
  unsigned __int64 v4; // xmm2_8
  __m128i v5; // [rsp+30h] [rbp-28h]

  result = qword_14034B1C0;
  if ( qword_14034B1C0 )
  {
    v1 = *(_QWORD *)(qword_14034B1C0 + 216);
    if ( v1 )
    {
      v2 = *(unsigned int *)(qword_14034B1C0 + 224);
      v3 = *(__m128i **)(v1 + 32);
      v5 = v3[1];
      v4 = _mm_srli_si128(v5, 8).m128i_u64[0];
      result = HIDWORD(v4);
      if ( HIDWORD(v4) == 1 )
      {
        if ( (_DWORD)v2 )
          return BapdRegisterSiData(&v3->m128i_i8[v2], (unsigned int)(v5.m128i_i32[0] - v2));
      }
    }
  }
  return result;
}
