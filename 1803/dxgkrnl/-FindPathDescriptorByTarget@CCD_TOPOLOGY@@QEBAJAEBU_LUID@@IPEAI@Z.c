/*
 * XREFs of ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C0225120
 * Callers:
 *     DxgkGetPathsModality @ 0x1C00C4CF0 (DxgkGetPathsModality.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00D7B0C (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C67BC (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C0225824 (-RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C0229D54 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FindPathDescriptorByTarget(
        CCD_TOPOLOGY *this,
        const struct _LUID *a2,
        int a3,
        unsigned int *a4)
{
  unsigned int i; // ebx
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax

  if ( a3 == -1 )
    return 3223191554LL;
  if ( !*((_QWORD *)this + 8) )
    return 3221225485LL;
  for ( i = 0; ; ++i )
  {
    v10 = *((_QWORD *)this + 8);
    if ( v10 )
      v11 = *(_WORD *)(v10 + 20);
    else
      v11 = 0;
    if ( i >= v11 )
      return 3221226021LL;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( *((_DWORD *)PathDescriptor + 4) == a2->LowPart
      && *((_DWORD *)PathDescriptor + 5) == a2->HighPart
      && *((_DWORD *)PathDescriptor + 7) == a3 )
    {
      break;
    }
  }
  if ( a4 )
    *a4 = i;
  return 0LL;
}
