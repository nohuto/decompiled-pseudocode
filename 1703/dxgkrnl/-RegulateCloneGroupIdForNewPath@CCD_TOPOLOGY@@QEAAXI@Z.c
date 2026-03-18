/*
 * XREFs of ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C01DE7C4
 * Callers:
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00A68C0 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00A8CB8 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9B80 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C01E1C44 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C0003A74 (-GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(
        const struct _D3DKMT_GETPATHSMODALITY **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  const struct _D3DKMT_GETPATHSMODALITY *v11; // rax
  int v12; // ebx
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // r14
  __int64 v19; // rax
  int PrimaryPathInCloneGroup; // eax

  v4 = a2;
  *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)this, a2, a3, a4) + 58) = -1;
  PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)this, v4, v6, v7);
  *(_QWORD *)PathDescriptor |= 0x4000000000000uLL;
  v11 = this[8];
  if ( v11 )
    LOWORD(v11) = *((_WORD *)v11 + 10);
  v12 = (unsigned __int16)v11;
  if ( (_WORD)v11 )
  {
    v13 = (unsigned __int16)v11 - 1;
    do
    {
      v18 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)this, v13, v9, v10);
      if ( (*(_QWORD *)v18 & 0x4000000000000LL) == 0 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
        *(_QWORD *)(v19 + 24) = 6473LL;
        WdLogEvent5_WdAssertion(v19);
      }
      PrimaryPathInCloneGroup = GetPrimaryPathInCloneGroup(this[8], v13--);
      *((_DWORD *)v18 + 58) = PrimaryPathInCloneGroup | 0xFE558000;
      --v12;
    }
    while ( v12 );
  }
}
