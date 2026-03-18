/*
 * XREFs of ?BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@IEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00ADA3C
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00AD34C (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 * Callees:
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00581DC (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_GLOBAL::BucketizeBudgetStateProcesses(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3)
{
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  __int64 *i; // rbx
  __int64 v11; // r9
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  char *v13; // rdx
  struct VIDMM_SEGMENT_GROUP_STATE *v14; // r9
  char *v15; // rcx
  char **v16; // rax

  if ( (*(_BYTE *)(1552LL * a2 + 24 * ((int)a3 + 21LL) + *((_QWORD *)this + 5021)) & 1) != 0 )
  {
    v6 = VIDMM_PARTITION::_PartitionTree;
    v7 = 0LL;
    while ( v6 )
    {
      v7 = v6;
      v6 = (_QWORD *)*v6;
    }
    while ( v7 )
    {
      v8 = (_QWORD *)v7[1];
      v9 = v7;
      if ( v8 )
      {
        do
        {
          v7 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
      else
      {
        while ( 1 )
        {
          v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v7 || (_QWORD *)*v7 == v9 )
            break;
          v9 = v7;
        }
      }
    }
  }
  for ( i = (__int64 *)*((_QWORD *)this + 5126); i != (__int64 *)((char *)this + 41008); i = (__int64 *)*i )
  {
    v11 = i[2];
    if ( *(_QWORD *)(v11 + 32) && (VIDMM_PROCESS *)v11 != g_pVidMmSystemProcess )
    {
      SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(this, a2, a3, *(struct VIDMM_PARTITION **)(v11 + 168));
      v13 = (char *)(i + 47);
      v14 = SegmentGroupState;
      v15 = (char *)SegmentGroupState + 16 * *((int *)i + 92) + 128;
      v16 = (char **)*((_QWORD *)v15 + 1);
      if ( *v16 != v15 )
        __fastfail(3u);
      i[48] = (__int64)v16;
      *(_QWORD *)v13 = v15;
      *v16 = v13;
      *((_QWORD *)v15 + 1) = v13;
      *((_DWORD *)v14 + *((int *)i + 92) + 77) += dword_1C0034D48[*((int *)i + 90)];
    }
  }
}
