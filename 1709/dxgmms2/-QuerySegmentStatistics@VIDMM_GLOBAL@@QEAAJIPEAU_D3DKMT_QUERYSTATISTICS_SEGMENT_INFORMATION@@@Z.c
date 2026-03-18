/*
 * XREFs of ?QuerySegmentStatistics@VIDMM_GLOBAL@@QEAAJIPEAU_D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION@@@Z @ 0x1C0022918
 * Callers:
 *     ?VidMmQuerySegmentStatistics@@YAJPEAVVIDMM_GLOBAL@@IPEAU_D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION@@@Z @ 0x1C0020990 (-VidMmQuerySegmentStatistics@@YAJPEAVVIDMM_GLOBAL@@IPEAU_D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMAT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::QuerySegmentStatistics(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION *a3)
{
  __int64 result; // rax
  __int64 v6; // r11
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  BOOL v11; // eax
  __int64 v12; // r8

  if ( a2 >= *(_DWORD *)(*((_QWORD *)this + 5021) + 24LL) )
    return 3221225485LL;
  _mm_lfence();
  v6 = a2;
  v7 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * a2);
  *(_QWORD *)a3 = *(_QWORD *)(v7 + 208);
  *((_QWORD *)a3 + 1) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * a2) + 216LL);
  v8 = (_QWORD *)((char *)a3 + 48);
  *((_QWORD *)a3 + 2) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * a2) + 224LL);
  *((_QWORD *)a3 + 3) = *(_QWORD *)(v7 + 312);
  *((_DWORD *)a3 + 8) = *(_DWORD *)(v7 + 320);
  v9 = v7 + 312 - (_QWORD)a3;
  *((_DWORD *)a3 + 9) = *(_DWORD *)(v7 + 324);
  v10 = 5LL;
  do
  {
    *v8 = *(_QWORD *)((char *)v8 + v9 - 32);
    ++v8;
    --v10;
  }
  while ( v10 );
  v11 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8 * v6) + 80LL) & 1) == 0 )
  {
    _mm_lfence();
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8 * v6) + 80LL) & 0x1001) == 0 )
      v11 = 0;
  }
  *((_DWORD *)a3 + 10) = v11;
  *((_QWORD *)a3 + 11) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8 * v6) + 128LL);
  *((_QWORD *)a3 + 12) ^= (*((_DWORD *)a3 + 24) ^ (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8 * v6) + 80LL) >> 7)) & 1;
  v12 = *((_QWORD *)a3 + 12) ^ ((unsigned __int8)*((_QWORD *)a3 + 12) ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8 * v6) + 80LL) >> 7)) & 2;
  *((_QWORD *)a3 + 12) = v12;
  result = 0LL;
  *((_QWORD *)a3 + 12) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8 * v6) + 80LL) >> 7)) & 4;
  return result;
}
