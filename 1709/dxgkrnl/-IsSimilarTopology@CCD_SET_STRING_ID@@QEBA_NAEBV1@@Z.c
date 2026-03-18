/*
 * XREFs of ?IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C01FBE24
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00CFD50 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ?_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z @ 0x1C01FBF78 (-_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::IsSimilarTopology(CCD_SET_STRING_ID *this, const struct CCD_SET_STRING_ID *a2)
{
  __int16 v2; // ax
  unsigned __int16 v5; // cx
  unsigned int v6; // edx
  char v7; // si
  unsigned int v8; // ebp
  __int64 v9; // rcx
  _QWORD *v11; // rax

  v2 = *((_WORD *)this + 16);
  if ( !v2 )
    return 0;
  v5 = *((_WORD *)a2 + 16);
  if ( v2 != v5 )
    return 0;
  v6 = v5;
  v7 = 1;
  v8 = 0;
  if ( v5 )
  {
    v9 = *((_QWORD *)this + 3);
    while ( !*(_WORD *)(v9 + 8LL * v8 + 4) && !*(_WORD *)(*((_QWORD *)a2 + 3) + 8LL * v8 + 4) )
    {
      if ( ++v8 >= v6 )
        goto LABEL_8;
    }
    v11 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9);
    v11[3] = v8;
    v11[4] = this;
    v11[5] = *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * v8 + 4);
    v11[6] = a2;
    v11[7] = *(unsigned __int16 *)(*((_QWORD *)a2 + 3) + 8LL * v8 + 4);
    WdLogEvent5_WdAssertion(v11);
    return 0;
  }
LABEL_8:
  if ( !CCD_SET_STRING_ID::_TryToMapCloneGroups(this, a2) || !CCD_SET_STRING_ID::_TryToMapCloneGroups(a2, this) )
    return 0;
  return v7;
}
