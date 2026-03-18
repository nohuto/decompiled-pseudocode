/*
 * XREFs of ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C01DE52C
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EAC10 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00EB8BC (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00EC3E0 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0003A50 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 */

bool __fastcall CCD_TOPOLOGY::IsSameCloneGroup(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  char v6; // r14
  __int64 v7; // rbp
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx

  v4 = 0LL;
  v5 = (unsigned int)a3;
  v6 = a4;
  v7 = (unsigned int)a2;
  if ( !*((_QWORD *)this + 8) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)this + 8);
  if ( !v10 || (v11 = *(unsigned __int16 *)(v10 + 20), (unsigned int)v7 >= v11) || (unsigned int)v5 >= v11 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdAssertion(this, a2, a3, v10);
    v22[3] = v7;
    v22[4] = v5;
    v22[5] = this;
    v22[6] = *((_QWORD *)this + 8);
    v23 = *((_QWORD *)this + 8);
    if ( v23 )
      v4 = *(unsigned __int16 *)(v23 + 20);
    v22[7] = v4;
    WdLogEvent5_WdAssertion(v22);
    return 0;
  }
  if ( !v6 )
    return *(_DWORD *)(264 * v7 + v10 + 280) == *(_DWORD *)(264 * v5 + v10 + 280);
  v12 = 264 * v5;
  v13 = 264 * v7;
  if ( !CCD_TOPOLOGY::IsMatchingSource(
          (const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v13 + v10 + 48),
          (const struct _LUID *)(v12 + v10 + 64),
          *(_DWORD *)(v12 + v10 + 72)) )
    return 0;
  if ( *(_DWORD *)(v17 + v13 + 280) != *(_DWORD *)(v12 + v17 + 280) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = *((_QWORD *)this + 8);
  if ( *(_DWORD *)(v19 + v13 + 76) == *(_DWORD *)(v19 + v12 + 76) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19, v14, v16, v17);
    WdLogEvent5_WdAssertion(v20);
  }
  return 1;
}
