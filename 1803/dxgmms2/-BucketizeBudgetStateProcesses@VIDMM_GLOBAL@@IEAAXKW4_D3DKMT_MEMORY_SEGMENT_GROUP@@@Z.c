/*
 * XREFs of ?BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@IEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00B62F4
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00B5C0C (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 * Callees:
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C006BCB0 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_GLOBAL::BucketizeBudgetStateProcesses(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3)
{
  _QWORD *v6; // rax
  _QWORD *i; // rdx
  _QWORD **v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  __int64 *j; // rbx
  __int64 v12; // r9
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  char *v14; // rdx
  struct VIDMM_SEGMENT_GROUP_STATE *v15; // r9
  char *v16; // rcx
  char **v17; // rax

  if ( (*(_BYTE *)(*((_QWORD *)this + 5090) + 24 * ((int)a3 + 65LL * a2) + 512) & 1) != 0 )
  {
    v6 = VIDMM_PARTITION::_PartitionTree;
    i = 0LL;
    while ( v6 )
    {
      i = v6;
      v6 = (_QWORD *)*v6;
    }
    while ( i )
    {
      v8 = (_QWORD **)i[1];
      v9 = i;
      if ( v8 )
      {
        v10 = *v8;
        for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
          i = v10;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v9 )
            break;
          v9 = i;
        }
      }
    }
  }
  for ( j = (__int64 *)*((_QWORD *)this + 5198); j != (__int64 *)((char *)this + 41584); j = (__int64 *)*j )
  {
    v12 = j[2];
    if ( *(_QWORD *)(v12 + 32) && (VIDMM_PROCESS *)v12 != g_pVidMmSystemProcess )
    {
      SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(this, a2, a3, *(struct VIDMM_PARTITION **)(v12 + 240));
      v14 = (char *)(j + 47);
      v15 = SegmentGroupState;
      v16 = (char *)SegmentGroupState + 16 * *((int *)j + 92) + 128;
      v17 = (char **)*((_QWORD *)v16 + 1);
      if ( *v17 != v16 )
        __fastfail(3u);
      j[48] = (__int64)v17;
      *(_QWORD *)v14 = v16;
      *v17 = v14;
      *((_QWORD *)v16 + 1) = v14;
      *((_DWORD *)v15 + *((int *)j + 92) + 77) += dword_1C003BDF8[*((int *)j + 90)];
    }
  }
}
