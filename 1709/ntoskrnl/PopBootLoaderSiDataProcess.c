/*
 * XREFs of PopBootLoaderSiDataProcess @ 0x1404323D0
 * Callers:
 *     PoBroadcastSystemState @ 0x140436BFC (PoBroadcastSystemState.c)
 * Callees:
 *     BapdRegisterSiData @ 0x140424DC8 (BapdRegisterSiData.c)
 */

void PopBootLoaderSiDataProcess()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __m128i *v2; // r9
  __m128i v3; // [rsp+30h] [rbp-28h]

  if ( BugCheckParameter4 )
  {
    v0 = *(_QWORD *)(BugCheckParameter4 + 216);
    if ( v0 )
    {
      v1 = *(unsigned int *)(BugCheckParameter4 + 224);
      v2 = *(__m128i **)(v0 + 32);
      v3 = v2[1];
      if ( _mm_srli_si128(v3, 8).m128i_i32[1] == 1 )
      {
        if ( (_DWORD)v1 )
          BapdRegisterSiData((ULONG *)((char *)v2->m128i_u32 + v1), v3.m128i_i32[0] - v1, 1);
      }
    }
  }
}
