/*
 * XREFs of ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00AEB50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00B0944 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00B0984 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00EA684 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_LoadTopologyDescriptorCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *a1,
        _WORD *a2)
{
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  const struct CCD_SET_STRING_ID *v7; // rbx
  __int16 v8; // ax
  CCD_TOPOLOGY *v9; // rcx
  unsigned __int16 v10; // bx
  int Topology; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  int v19; // eax

  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(a1);
  v7 = SetId;
  if ( !SetId || *(int *)SetId < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v17 + 24) = v7;
    if ( v7 )
      v19 = *(_DWORD *)v7;
    else
      v19 = -1073741823;
    *(_QWORD *)(v17 + 32) = v19;
    goto LABEL_14;
  }
  v8 = *((_WORD *)SetId + 16);
  if ( !v8 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v16[3] = a1;
    v16[4] = v7;
    v16[5] = *(_QWORD *)a2;
    v17 = (__int64)v16;
    v16[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_14:
    WdLogEvent5_WdError(v17);
    return 3221225473LL;
  }
  v9 = *(CCD_TOPOLOGY **)a2;
  a2[6] = v8;
  v10 = *((_WORD *)v7 + 16);
  if ( CCD_TOPOLOGY::Reserve(v9, v10) < v10 )
    return 3221225507LL;
  Topology = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(a1, *(struct CCD_TOPOLOGY **)a2);
  v14 = Topology;
  if ( Topology >= 0 )
    return 0LL;
  v18 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
  v18[3] = v14;
  v18[4] = a1;
  v18[5] = *(_QWORD *)a2;
  v18[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
  WdLogEvent5_WdError(v18);
  return (unsigned int)v14;
}
