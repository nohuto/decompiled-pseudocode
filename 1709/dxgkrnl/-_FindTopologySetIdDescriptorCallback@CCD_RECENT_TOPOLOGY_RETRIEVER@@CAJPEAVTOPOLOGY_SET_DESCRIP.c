/*
 * XREFs of ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00CFD50
 * Callers:
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C00CEE6C (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 * Callees:
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00D0764 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1C00D0A34 (-_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z.c)
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C00D0C8C (_CcdLazyRetrieveSetIdFromRegistry.c)
 *     ?GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ @ 0x1C00D9EF8 (-GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00D9FB4 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00DA838 (-IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00DA8FC (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00DAB54 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00DBD7C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C00DC360 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00E0A0C (-ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00E0CC8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C01FBE24 (-IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a2)
{
  const union _LARGE_INTEGER *Timestamp; // r15
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v7; // rcx
  CCD_SET_STRING_ID *v8; // rdi
  unsigned __int16 v9; // r14
  const struct CCD_SET_STRING_ID *v10; // rsi
  int SetIdFromRegistry; // eax
  __int64 v12; // rcx
  __int64 v13; // r12
  CCD_TOPOLOGY *OverflowTopology; // rax
  __int64 v15; // rcx
  struct CCD_TOPOLOGY *v16; // rsi
  CCD_BTL *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r14
  CCD_SET_STRING_ID *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  CCD_SET_STRING_ID *RecentTopologySetId; // rsi
  __int64 v27; // r8
  __int64 v28; // rbp
  bool IsSimilarTopology; // al
  _QWORD *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  int TopologyClass; // eax
  __int64 v39; // rcx
  __int64 v40; // r14
  _QWORD *v41; // rax
  __int64 v42; // r14
  __int64 v43; // rax
  _QWORD *v44; // rax
  int v45; // eax
  int v46; // [rsp+58h] [rbp+10h] BYREF

  Timestamp = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetTimestamp(this);
  if ( *((_QWORD *)a2 + 9) > Timestamp->QuadPart )
    return 0LL;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v8 = SetId;
  if ( !SetId || *(int *)SetId < 0 )
  {
    v31 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v31 + 24) = v8;
    if ( v8 )
      v45 = *(_DWORD *)v8;
    else
      v45 = -1073741823;
    *(_QWORD *)(v31 + 32) = v45;
    goto LABEL_37;
  }
  v9 = *((_WORD *)SetId + 16);
  if ( !v9 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v30[3] = this;
    v30[4] = v8;
    v30[5] = *(_QWORD *)a2;
    v31 = (__int64)v30;
    v30[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_37:
    WdLogEvent5_WdError(v31);
    return 0LL;
  }
  v10 = (const struct CCD_SET_STRING_ID *)*((_QWORD *)a2 + 22);
  SetIdFromRegistry = CcdLazyRetrieveSetIdFromRegistry(*((_QWORD *)v10 + 12), L"SetId", v10);
  v13 = SetIdFromRegistry;
  if ( SetIdFromRegistry < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v32[3] = v13;
    v32[4] = v10;
    v32[5] = *((_QWORD *)v10 + 12);
    WdLogEvent5_WdError(v32);
    v34 = (_QWORD *)WdLogNewEntry5_WdAssertion(v33);
    v34[3] = this;
    v34[4] = v8;
    v34[5] = *(_QWORD *)a2;
    v34[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    v34[7] = *((_QWORD *)a2 + 22);
    WdLogEvent5_WdAssertion(v34);
    return 3221225473LL;
  }
  if ( !CCD_SET_STRING_ID::IsSubsetOf(v8, v10) )
    return 0LL;
  OverflowTopology = CCD_RECENT_TOPOLOGY_RETRIEVER::_GetOverflowTopology(a2, v9);
  v16 = OverflowTopology;
  if ( !OverflowTopology )
  {
    v35 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v35 + 24) = v9;
    WdLogEvent5_WdLowResource(v35);
    return 3221225495LL;
  }
  CCD_TOPOLOGY::SetModalitySetId(OverflowTopology, v8);
  CCD_BTL::Global();
  v18 = CCD_BTL::ResolveTopologySetId(v17, v16, 0);
  v22 = v18;
  if ( v18 < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
    v37[3] = v22;
    v37[4] = v16;
    v37[5] = *(_QWORD *)a2;
    v37[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    v37[7] = *((unsigned int *)a2 + 2);
    WdLogEvent5_WdWarning(v37);
    return 0LL;
  }
  v23 = (CCD_SET_STRING_ID *)*((_QWORD *)a2 + 23);
  if ( v23 )
  {
    IsSimilarTopology = CCD_SET_STRING_ID::IsSimilarTopology(v23, v8);
LABEL_15:
    if ( IsSimilarTopology )
    {
      *((union _LARGE_INTEGER *)a2 + 9) = *Timestamp;
      CCD_SET_STRING_ID::operator=((CCD_RECENT_TOPOLOGY_RETRIEVER *)((char *)a2 + 16));
    }
    return 0LL;
  }
  if ( (*((_BYTE *)a2 + 8) & 0xF) == 0xF )
  {
    RecentTopologySetId = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
                                                 *((_QWORD *)a2 + 22),
                                                 15LL);
    if ( RecentTopologySetId )
      goto LABEL_13;
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v36[3] = this;
    v36[4] = *((_QWORD *)a2 + 22);
    v36[5] = *(_QWORD *)a2;
    v36[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    goto LABEL_21;
  }
  TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(v16, (enum CCD_TOPOLOGY_CLASS *)&v46);
  v40 = TopologyClass;
  if ( TopologyClass < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v39);
    v41[3] = v40;
    v41[4] = v16;
    v41[5] = *((_QWORD *)a2 + 22);
    v41[6] = *(_QWORD *)a2;
    v41[7] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    WdLogEvent5_WdError(v41);
    return (unsigned int)v40;
  }
  v42 = v46;
  if ( !v46 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v39);
    WdLogEvent5_WdAssertion(v43);
  }
  if ( ((unsigned int)v42 & *((_DWORD *)a2 + 2)) == 0 )
    return 0LL;
  RecentTopologySetId = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
                                               *((_QWORD *)a2 + 22),
                                               (unsigned int)v42);
  if ( !RecentTopologySetId )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v36[3] = v42;
    v36[4] = this;
    v36[5] = *((_QWORD *)a2 + 22);
    v36[6] = *(_QWORD *)a2;
    v36[7] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_21:
    WdLogEvent5_WdError(v36);
    return 3221225495LL;
  }
LABEL_13:
  v28 = *(int *)RecentTopologySetId;
  if ( (int)v28 >= 0 )
  {
    IsSimilarTopology = CCD_SET_STRING_ID::IsEnabledSetEqual(RecentTopologySetId, v8);
    goto LABEL_15;
  }
  v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v27);
  v44[3] = v28;
  v44[4] = RecentTopologySetId;
  v44[5] = *(_QWORD *)a2;
  v44[6] = *((unsigned int *)a2 + 2);
  WdLogEvent5_WdWarning(v44);
  return (unsigned int)v28;
}
