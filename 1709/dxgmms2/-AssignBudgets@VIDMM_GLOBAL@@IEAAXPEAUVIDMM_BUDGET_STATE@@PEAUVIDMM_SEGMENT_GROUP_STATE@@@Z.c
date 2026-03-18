/*
 * XREFs of ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00AD1FC
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00AD34C (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 * Callees:
 *     ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C00AD450 (-AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STAT.c)
 *     ?AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00AD7F4 (-AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgets(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        struct VIDMM_SEGMENT_GROUP_STATE *a3)
{
  unsigned __int64 *v6; // rsi
  __int64 v7; // r8
  unsigned __int64 *v8; // rdx
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  int i; // ebp
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  int v19; // r8d
  char *v20; // rdx
  __int64 *v21; // rcx
  __int64 v22; // rax

  if ( *((_BYTE *)a3 + 120) )
  {
    v6 = (unsigned __int64 *)((char *)a3 + 224);
    v7 = 0LL;
    v8 = (unsigned __int64 *)((char *)a3 + 224);
    v9 = 3LL;
    do
    {
      v10 = v8[3];
      v11 = *v8++;
      if ( v10 < v11 )
        v11 = v10;
      v7 += v11;
      --v9;
    }
    while ( v9 );
    v12 = *((_QWORD *)a3 + 1) - v7;
    for ( i = 0; i < 3; ++i )
    {
      v14 = v6[3];
      v15 = *v6;
      if ( *v6 > v14 )
      {
        v17 = v15 - v14;
        v16 = v14 + v12;
        v18 = v12;
        if ( v17 < v12 )
          v18 = v17;
        v12 -= v18;
      }
      else
      {
        v16 = v15 + v12;
        if ( v14 > v15 + v12 )
          v16 = v6[3];
      }
      VIDMM_GLOBAL::AssignBudgetsWithinBand(this, a2, a3, (unsigned int)i, v16);
      ++v6;
    }
  }
  else
  {
    VIDMM_GLOBAL::AssignMaximumBudgets(this, a2, a3);
  }
  v19 = 0;
  v20 = (char *)a3 + 176;
  do
  {
    v21 = *(__int64 **)v20;
    if ( *(char **)(*(_QWORD *)v20 + 8LL) != v20 || (v22 = *v21, *(__int64 **)(*v21 + 8) != v21) )
      __fastfail(3u);
    while ( 1 )
    {
      *(_QWORD *)v20 = v22;
      *(_QWORD *)(v22 + 8) = v20;
      if ( v21 == (__int64 *)((char *)a3 + 16 * v19 + 176) )
        break;
      *v21 = 0LL;
      v21[1] = 0LL;
      v21 = *(__int64 **)v20;
      if ( *(char **)(*(_QWORD *)v20 + 8LL) == v20 )
      {
        v22 = *v21;
        if ( *(__int64 **)(*v21 + 8) == v21 )
          continue;
      }
      __fastfail(3u);
    }
    ++v19;
    v20 += 16;
  }
  while ( v19 < 3 );
}
