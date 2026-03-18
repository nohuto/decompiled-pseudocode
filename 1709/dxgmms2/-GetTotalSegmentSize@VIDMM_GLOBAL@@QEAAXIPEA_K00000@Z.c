/*
 * XREFs of ?GetTotalSegmentSize@VIDMM_GLOBAL@@QEAAXIPEA_K00000@Z @ 0x1C0063F64
 * Callers:
 *     VidMmGetTotalSegmentSize @ 0x1C00139F0 (VidMmGetTotalSegmentSize.c)
 * Callees:
 *     ?GetCurrent@VIDMM_PARTITION@@SAPEAU1@XZ @ 0x1C0013300 (-GetCurrent@VIDMM_PARTITION@@SAPEAU1@XZ.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00581DC (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_GLOBAL::GetTotalSegmentSize(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r15
  _DWORD *v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // r10
  __int64 v17; // r14
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rsi
  struct VIDMM_PARTITION *Current; // rax
  int v26; // ecx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rbx
  struct VIDMM_PARTITION *v28; // r9

  *a6 = 0LL;
  v11 = 0LL;
  *a7 = 0LL;
  v12 = 0LL;
  *a8 = 0LL;
  v13 = 0LL;
  v14 = (_DWORD *)(*((_QWORD *)this + 5021) + 1552LL * a2);
  v15 = v14[6];
  if ( !v15 )
    goto LABEL_12;
  v16 = 0LL;
  v17 = v15;
  do
  {
    v18 = *(_QWORD *)(v16 + *((_QWORD *)this + 464));
    v19 = *(_QWORD *)(v18 + 48);
    if ( *(_QWORD *)(v18 + 208) < v19 )
      v19 = *(_QWORD *)(v18 + 208);
    v20 = *(_DWORD *)(v18 + 80);
    if ( (v20 & 0x1001) != 0 )
    {
      if ( (v20 & 1) != 0 )
        v11 += v19;
      else
        v12 += v19;
    }
    else if ( (v20 & 0x40) != 0 )
    {
      *a7 += v19;
    }
    else
    {
      *a6 += v19;
    }
    v21 = v16 + *((_QWORD *)this + 464);
    v16 += 8LL;
    v22 = *(_DWORD *)(*(_QWORD *)v21 + 476LL);
    v23 = v19 + v13;
    if ( v22 != 2 )
      v23 = v13;
    v13 = v23;
    --v17;
  }
  while ( v17 );
  if ( v11 <= v12 )
LABEL_12:
    v11 = v12;
  *a8 = v11;
  v24 = qword_1C0040470;
  Current = VIDMM_PARTITION::GetCurrent();
  if ( Current )
    v24 = *(_QWORD *)(368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL) + *((_QWORD *)Current + 4) + 16);
  if ( *a8 > v24 )
    *a8 = v24;
  v26 = *((_DWORD *)this + 10216);
  if ( *a8 > 1LL << v26 && (*((_BYTE *)this + 40872) & 1) != 0 )
    *a8 = 1LL << v26;
  if ( Current )
  {
    SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(this, a2, D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL, Current);
    *a3 = 100LL
        * *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(this, a2, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL, v28) + 1)
        / (unsigned __int64)(unsigned int)(100 - v14[122]);
    *a4 = 100LL * *((_QWORD *)SegmentGroupState + 1) / (unsigned __int64)(unsigned int)(100 - v14[128]);
    *a5 = v13;
  }
  else
  {
    *a3 = 0LL;
    *a4 = 0LL;
    *a5 = 0LL;
  }
}
