/*
 * XREFs of ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C00AE9A4
 * Callers:
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C00AEA38 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00EBBE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00AEB28 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00AECB0 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00EB8BC (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00EFCE8 (-ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
        CCD_RECENT_TOPOLOGY_RETRIEVER *this,
        const struct CCD_SET_STRING_ID *a2,
        char a3,
        bool a4)
{
  __int64 result; // rax
  CCD_BTL *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  int TopologyClass; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0xF) != 0xF )
    return 3221225485LL;
  result = CCD_STORE::ForTopology(
             a2,
             (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))CCD_RECENT_TOPOLOGY_RETRIEVER::_LoadTopologyDescriptorCallback,
             this,
             0);
  if ( (int)result >= 0 )
  {
    CCD_BTL::Global();
    v8 = CCD_BTL::ResolveTopologySetId(v7, *(struct CCD_TOPOLOGY **)this, a4);
    v11 = v8;
    if ( v8 < 0 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
      v15[3] = v11;
      v15[4] = this;
      v15[5] = *(_QWORD *)this;
      v15[6] = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v15[7] = *((unsigned int *)this + 2);
    }
    else
    {
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(*(CCD_TOPOLOGY **)this, (enum CCD_TOPOLOGY_CLASS *)&v16);
      v11 = TopologyClass;
      if ( TopologyClass >= 0 )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 32LL) = v16;
        return (unsigned int)v11;
      }
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
      v15[3] = v11;
      v15[4] = *(_QWORD *)this;
      v15[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    }
    WdLogEvent5_WdError(v15);
    return (unsigned int)v11;
  }
  return result;
}
