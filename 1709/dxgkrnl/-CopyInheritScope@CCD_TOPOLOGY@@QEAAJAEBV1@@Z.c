/*
 * XREFs of ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00DBE70
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DF48C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0102AA4 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C010392C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01FA5E0 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01FB08C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DB8E8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C00DED1C (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DF6CC (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyInheritScope(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  __int64 v4; // rax
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // di
  __int64 v8; // rcx
  __int64 v9; // rbp
  unsigned int i; // edi
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rax
  unsigned __int16 v24; // ax

  CCD_TOPOLOGY::Clear(this);
  v4 = *((_QWORD *)a2 + 8);
  v5 = 0;
  if ( v4 )
    v6 = *(_WORD *)(v4 + 20);
  else
    v6 = 0;
  if ( v4 )
    v7 = *(_WORD *)(v4 + 20);
  else
    v7 = 0;
  if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(this, v6) < v7 )
  {
    v20 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v20 + 24) = this;
    v21 = *((_QWORD *)a2 + 8);
    if ( v21 )
      v5 = *(_WORD *)(v21 + 20);
    *(_QWORD *)(v20 + 32) = v5;
    WdLogEvent5_WdLowResource(v20);
    return 3221225495LL;
  }
  else
  {
    LODWORD(v9) = 0;
    for ( i = 0; ; ++i )
    {
      v11 = *((_QWORD *)a2 + 8);
      v12 = v11 ? *(_WORD *)(v11 + 20) : 0;
      if ( i >= v12 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, i);
      v15 = CCD_TOPOLOGY::AddPathDescriptor(this, PathDescriptor, v14);
      v9 = v15;
      if ( v15 < 0 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdAssertion(v16);
        v22[3] = v9;
        v22[4] = i;
        v22[5] = this;
        v23 = *((_QWORD *)a2 + 8);
        if ( v23 )
          v24 = *(_WORD *)(v23 + 20);
        else
          v24 = 0;
        v22[6] = v24;
        WdLogEvent5_WdAssertion(v22);
        break;
      }
    }
    if ( (int)v9 >= 0 )
    {
      v17 = *((_QWORD *)this + 8);
      if ( v17 )
      {
        v18 = *((_QWORD *)a2 + 8);
        if ( v18 )
        {
          *(_OWORD *)v17 = *(_OWORD *)v18;
          *(_DWORD *)(v17 + 16) = *(_DWORD *)(v18 + 16);
        }
      }
    }
    return (unsigned int)v9;
  }
}
