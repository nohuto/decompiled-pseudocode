/*
 * XREFs of ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00D0764
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00CFD50 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x1C00D055C (-_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_T.c)
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C00D0C8C (_CcdLazyRetrieveSetIdFromRegistry.c)
 *     ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x1C00D0E50 (-_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA7C8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
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
  result = CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, v2, 0);
  if ( !result )
  {
    result = CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, v2, 1);
    v5 = (CCD_SET_STRING_ID *)result;
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
      return (__int64)v5;
    }
  }
  return result;
}
