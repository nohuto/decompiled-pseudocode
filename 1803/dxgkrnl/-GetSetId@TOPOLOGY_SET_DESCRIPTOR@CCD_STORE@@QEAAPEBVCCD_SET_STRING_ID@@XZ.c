/*
 * XREFs of ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00B1BCC
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B0500 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00B1CC8 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00DDF90 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C00B0030 (_CcdLazyRetrieveSetIdFromRegistry.c)
 */

void **__fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(void **this)
{
  int SetIdFromRegistry; // eax
  __int64 v3; // rcx
  __int64 v4; // rdi
  _QWORD *v6; // rax

  SetIdFromRegistry = CcdLazyRetrieveSetIdFromRegistry(this[8], L"SetId", (CCD_SET_STRING_ID *)this);
  v4 = SetIdFromRegistry;
  if ( SetIdFromRegistry >= 0 )
    return this;
  v6 = (_QWORD *)WdLogNewEntry5_WdError(v3);
  v6[3] = v4;
  v6[4] = this;
  v6[5] = this[8];
  WdLogEvent5_WdError(v6);
  return 0LL;
}
