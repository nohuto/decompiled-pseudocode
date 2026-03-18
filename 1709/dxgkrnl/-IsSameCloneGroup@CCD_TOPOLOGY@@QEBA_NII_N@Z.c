/*
 * XREFs of ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C01F760C
 * Callers:
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00DBD7C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00DBFE4 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DD780 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCD_TOPOLOGY::IsSameCloneGroup(CCD_TOPOLOGY *this, unsigned int a2, unsigned int a3, char a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v7; // rbp
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rax

  v4 = 0;
  v5 = a3;
  v7 = a2;
  if ( !*((_QWORD *)this + 8) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)this + 8);
  if ( !v10 || (v11 = *(unsigned __int16 *)(v10 + 20), (unsigned int)v7 >= v11) || (unsigned int)v5 >= v11 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(this);
    v18[3] = v7;
    v18[4] = v5;
    v18[5] = this;
    v18[6] = *((_QWORD *)this + 8);
    v19 = *((_QWORD *)this + 8);
    if ( v19 )
      v4 = *(unsigned __int16 *)(v19 + 20);
    v18[7] = v4;
    WdLogEvent5_WdAssertion(v18);
    return 0;
  }
  if ( !a4 )
    return *(_DWORD *)(264 * v7 + v10 + 232) == *(_DWORD *)(264 * v5 + v10 + 232);
  v12 = 264 * v5;
  v13 = 264 * v7;
  if ( *(_DWORD *)(264 * v7 + v10 + 72) != *(_DWORD *)(v12 + v10 + 72)
    || *(_DWORD *)(v13 + v10 + 64) != *(_DWORD *)(v12 + v10 + 64)
    || *(_DWORD *)(v13 + v10 + 68) != *(_DWORD *)(v12 + v10 + 68) )
  {
    return 0;
  }
  if ( *(_DWORD *)(v13 + v10 + 232) != *(_DWORD *)(v12 + v10 + 232) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)this + 8);
  if ( *(_DWORD *)(v15 + v13 + 76) == *(_DWORD *)(v12 + v15 + 76) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v16);
  }
  return 1;
}
