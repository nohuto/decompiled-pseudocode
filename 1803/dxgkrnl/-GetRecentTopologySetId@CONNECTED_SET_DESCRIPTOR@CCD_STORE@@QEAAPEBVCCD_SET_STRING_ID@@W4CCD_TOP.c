/*
 * XREFs of ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C009DE0C
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B0500 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x1C009DC08 (-_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_T.c)
 *     ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x1C009DFDC (-_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_.c)
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C00B0030 (_CcdLazyRetrieveSetIdFromRegistry.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B2714 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  CCD_SET_STRING_ID *result; // rax
  CCD_SET_STRING_ID *v5; // rbx
  int SetIdFromRegistry; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbp
  _QWORD *v11; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (int)a2;
  CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(a2, v12);
  result = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, v2, 0);
  if ( !result )
  {
    result = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, v2, 1);
    v5 = result;
    if ( result )
    {
      SetIdFromRegistry = CcdLazyRetrieveSetIdFromRegistry(*(_QWORD *)(a1 + 96), v12[1], result);
      v10 = SetIdFromRegistry;
      if ( SetIdFromRegistry < 0 )
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
        v11[3] = v10;
        v11[4] = v2;
        v11[5] = a1;
        v11[6] = *(_QWORD *)(a1 + 96);
        WdLogEvent5_WdWarning(v11);
        CCD_SET_STRING_ID::_Cleanup(v5);
      }
      return v5;
    }
  }
  return result;
}
