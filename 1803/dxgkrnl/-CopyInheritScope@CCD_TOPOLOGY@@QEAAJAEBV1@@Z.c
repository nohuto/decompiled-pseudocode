/*
 * XREFs of ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00B41DC
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B334C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C5C40 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0228194 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C0228A04 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C02296CC (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B358C (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00B36B8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C00B6A00 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyInheritScope(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // di
  __int64 v10; // rcx
  __int64 v11; // rbp
  unsigned int i; // edi
  __int64 v13; // rax
  unsigned __int16 v14; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rax
  unsigned __int16 v26; // ax

  CCD_TOPOLOGY::Clear(this);
  v6 = *((_QWORD *)a2 + 8);
  v7 = 0;
  if ( v6 )
    v8 = *(_WORD *)(v6 + 20);
  else
    v8 = 0;
  if ( v6 )
    v9 = *(_WORD *)(v6 + 20);
  else
    v9 = 0;
  if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(this, v8, v4, v5) < v9 )
  {
    v22 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v22 + 24) = this;
    v23 = *((_QWORD *)a2 + 8);
    if ( v23 )
      v7 = *(_WORD *)(v23 + 20);
    *(_QWORD *)(v22 + 32) = v7;
    WdLogEvent5_WdLowResource(v22);
    return 3221225495LL;
  }
  else
  {
    LODWORD(v11) = 0;
    for ( i = 0; ; ++i )
    {
      v13 = *((_QWORD *)a2 + 8);
      v14 = v13 ? *(_WORD *)(v13 + 20) : 0;
      if ( i >= v14 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, i);
      v17 = CCD_TOPOLOGY::AddPathDescriptor(this, PathDescriptor, v16);
      v11 = v17;
      if ( v17 < 0 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdAssertion(v18);
        v24[3] = v11;
        v24[4] = i;
        v24[5] = this;
        v25 = *((_QWORD *)a2 + 8);
        if ( v25 )
          v26 = *(_WORD *)(v25 + 20);
        else
          v26 = 0;
        v24[6] = v26;
        WdLogEvent5_WdAssertion(v24);
        break;
      }
    }
    if ( (int)v11 >= 0 )
    {
      v19 = *((_QWORD *)this + 8);
      if ( v19 )
      {
        v20 = *((_QWORD *)a2 + 8);
        if ( v20 )
        {
          *(_OWORD *)v19 = *(_OWORD *)v20;
          *(_DWORD *)(v19 + 16) = *(_DWORD *)(v20 + 16);
        }
      }
    }
    return (unsigned int)v11;
  }
}
