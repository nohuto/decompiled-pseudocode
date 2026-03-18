/*
 * XREFs of ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00EB9B0
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EBFAC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9B80 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01DE30C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01E0D9C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C00EA2CC (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EA544 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00EA684 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  unsigned int i; // edi
  __int64 v15; // rax
  unsigned __int16 v16; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR **v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rax
  unsigned __int16 v29; // ax

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
    v25 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v25 + 24) = this;
    v26 = *((_QWORD *)a2 + 8);
    if ( v26 )
      v7 = *(_WORD *)(v26 + 20);
    *(_QWORD *)(v25 + 32) = v7;
    WdLogEvent5_WdLowResource(v25);
    return 3221225495LL;
  }
  else
  {
    LODWORD(v13) = 0;
    for ( i = 0; ; ++i )
    {
      v15 = *((_QWORD *)a2 + 8);
      v16 = v15 ? *(_WORD *)(v15 + 20) : 0;
      if ( i >= v16 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, i, v11, v12);
      v19 = CCD_TOPOLOGY::AddPathDescriptor(this, PathDescriptor, v18);
      v13 = v19;
      if ( v19 < 0 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdAssertion(v21, v20, v11, v12);
        v27[3] = v13;
        v27[4] = i;
        v27[5] = this;
        v28 = *((_QWORD *)a2 + 8);
        if ( v28 )
          v29 = *(_WORD *)(v28 + 20);
        else
          v29 = 0;
        v27[6] = v29;
        WdLogEvent5_WdAssertion(v27);
        break;
      }
    }
    if ( (int)v13 >= 0 )
    {
      v22 = *((_QWORD *)this + 8);
      if ( v22 )
      {
        v23 = *((_QWORD *)a2 + 8);
        if ( v23 )
        {
          *(_OWORD *)v22 = *(_OWORD *)v23;
          *(_DWORD *)(v22 + 16) = *(_DWORD *)(v23 + 16);
        }
      }
    }
    return (unsigned int)v13;
  }
}
