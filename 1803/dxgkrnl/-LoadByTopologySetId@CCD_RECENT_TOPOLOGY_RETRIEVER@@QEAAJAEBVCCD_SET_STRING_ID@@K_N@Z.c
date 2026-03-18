/*
 * XREFs of ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C009D82C
 * Callers:
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C009D8DC (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00B2F88 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C009D9E4 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B09A4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00B09C8 (-ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00B40E8 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
        CCD_RECENT_TOPOLOGY_RETRIEVER *this,
        const struct CCD_SET_STRING_ID *a2,
        char a3,
        bool a4)
{
  __int64 result; // rax
  CCD_BTL *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  int TopologyClass; // eax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  int v15; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0xF) != 0xF )
    return 3221225485LL;
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this) + 1744) )
    return 3221226021LL;
  result = CCD_STORE::ForTopology(
             a2,
             (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))CCD_RECENT_TOPOLOGY_RETRIEVER::_LoadTopologyDescriptorCallback,
             this,
             0);
  if ( (int)result >= 0 )
  {
    CCD_BTL::Global();
    v9 = CCD_BTL::ResolveTopologySetId(v8, *(struct CCD_TOPOLOGY **)this, a4);
    v11 = v9;
    if ( v9 < 0 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v14[3] = v11;
      v14[4] = this;
      v14[5] = *(_QWORD *)this;
      v14[6] = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v14[7] = *((unsigned int *)this + 2);
    }
    else
    {
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(*(CCD_TOPOLOGY **)this, (enum CCD_TOPOLOGY_CLASS *)&v15);
      v11 = TopologyClass;
      if ( TopologyClass >= 0 )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 32LL) = v15;
        return (unsigned int)v11;
      }
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v14[3] = v11;
      v14[4] = *(_QWORD *)this;
      v14[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    }
    WdLogEvent5_WdError(v14);
    return (unsigned int)v11;
  }
  return result;
}
