/*
 * XREFs of ?InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z @ 0x1C0079544
 * Callers:
 *     ?CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00164C0 (-CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_AD.c)
 *     ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C007A540 (-InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNA.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::InitializeSegmentGroupState(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_SEGMENT_GROUP_STATE *a3,
        __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // rdi
  _BOOL8 v7; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  int v12; // esi
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  _DWORD *v17; // r9
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // r9
  unsigned __int64 *v25; // r8
  unsigned __int64 v26; // rcx
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // r10
  unsigned __int64 v33; // rcx

  v4 = 0LL;
  v5 = a2;
  v7 = 0LL;
  v9 = *((_QWORD *)this + 5021) + 1552 * v5;
  if ( a4 )
    v7 = (*(_BYTE *)(v9 + 437) & 8) != 0;
  *(_DWORD *)a3 = v7;
  v10 = *(_QWORD *)(v9 + 24 * v7 + 496) + a4;
  v11 = *(_QWORD *)(v9 + 8 * v7);
  v12 = *(_DWORD *)(v9 + 24 * v7 + 488);
  if ( v11 && v10 >= v11 )
    v10 = *(_QWORD *)(v9 + 8 * v7);
  v13 = v10 * (unsigned int)(100 - v12) / 0x64;
  *((_QWORD *)a3 + 1) = v13;
  *((_QWORD *)a3 + 2) = v13;
  v14 = (unsigned int)(100 - dword_1C00403AC - v12);
  v15 = 3LL;
  v16 = v10 * v14;
  v17 = (_DWORD *)((char *)a3 + 308);
  v18 = (_QWORD *)((char *)a3 + 40);
  *((_QWORD *)a3 + 3) = v16 / 0x64;
  v19 = (_QWORD *)((char *)a3 + 128);
  *((_QWORD *)a3 + 4) = v13 >> 1;
  do
  {
    v20 = 3LL;
    do
    {
      *v18++ = *((_QWORD *)a3 + 3);
      --v20;
    }
    while ( v20 );
    v19[1] = v19;
    v21 = v19 + 6;
    *v19 = v19;
    v19[7] = v19 + 6;
    v19 += 2;
    *v21 = v21;
    *v17++ = 0;
    --v15;
  }
  while ( v15 );
  if ( (*((_BYTE *)this + 40872) & 1) != 0 )
  {
    v22 = *(_QWORD *)(*((_QWORD *)this + 2) + 992LL);
    if ( v22 )
      v4 = v22 + 144 * v5;
    v23 = 1LL << *(_DWORD *)(v4 + 8);
    v24 = 2LL;
    do
    {
      v25 = (unsigned __int64 *)((char *)a3 + 40);
      v26 = v23;
      v27 = 3LL;
      if ( *((_QWORD *)a3 + 2) < v23 )
        v26 = *((_QWORD *)a3 + 2);
      v28 = *((_QWORD *)a3 + 3);
      *((_QWORD *)a3 + 2) = v26;
      v29 = v23;
      if ( v28 < v23 )
        v29 = v28;
      v30 = *((_QWORD *)a3 + 4);
      *((_QWORD *)a3 + 3) = v29;
      v31 = v23;
      if ( v30 < v23 )
        v31 = v30;
      *((_QWORD *)a3 + 4) = v31;
      do
      {
        v32 = 3LL;
        do
        {
          v33 = v23;
          if ( *v25 < v23 )
            v33 = *v25;
          *v25++ = v33;
          --v32;
        }
        while ( v32 );
        --v27;
      }
      while ( v27 );
      --v24;
    }
    while ( v24 );
  }
}
