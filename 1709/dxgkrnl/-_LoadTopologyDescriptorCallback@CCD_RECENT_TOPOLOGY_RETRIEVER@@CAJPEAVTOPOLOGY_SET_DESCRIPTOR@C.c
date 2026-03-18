/*
 * XREFs of ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00D09A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00D9FB4 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00D9FF4 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DB8E8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_LoadTopologyDescriptorCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *a1,
        _WORD *a2)
{
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v5; // rcx
  const struct CCD_SET_STRING_ID *v6; // rbx
  __int16 v7; // ax
  CCD_TOPOLOGY *v8; // rcx
  unsigned __int16 v9; // bx
  int Topology; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  int v17; // eax

  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(a1);
  v6 = SetId;
  if ( !SetId || *(int *)SetId < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v15 + 24) = v6;
    if ( v6 )
      v17 = *(_DWORD *)v6;
    else
      v17 = -1073741823;
    *(_QWORD *)(v15 + 32) = v17;
    goto LABEL_14;
  }
  v7 = *((_WORD *)SetId + 16);
  if ( !v7 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v14[3] = a1;
    v14[4] = v6;
    v14[5] = *(_QWORD *)a2;
    v15 = (__int64)v14;
    v14[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_14:
    WdLogEvent5_WdError(v15);
    return 3221225473LL;
  }
  v8 = *(CCD_TOPOLOGY **)a2;
  a2[6] = v7;
  v9 = *((_WORD *)v6 + 16);
  if ( CCD_TOPOLOGY::Reserve(v8, v9) < v9 )
    return 3221225507LL;
  Topology = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(a1, *(struct CCD_TOPOLOGY **)a2);
  v12 = Topology;
  if ( Topology >= 0 )
    return 0LL;
  v16 = (_QWORD *)WdLogNewEntry5_WdError(v11);
  v16[3] = v12;
  v16[4] = a1;
  v16[5] = *(_QWORD *)a2;
  v16[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
  WdLogEvent5_WdError(v16);
  return (unsigned int)v12;
}
