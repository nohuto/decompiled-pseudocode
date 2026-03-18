/*
 * XREFs of ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00AF0D4
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B03E0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x1C00AE87C (-_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_.c)
 *     ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x1C00AEECC (-_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_T.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B1150 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C00B1828 (_CcdLazyRetrieveSetIdFromRegistry.c)
 */

__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v7; // r8
  CCD_SET_STRING_ID *v8; // rbx
  int SetIdFromRegistry; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  _QWORD *v15; // rax
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (int)a2;
  CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(a2, (__int64)v16, a3, a4);
  result = CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, (unsigned int)v4, 0LL);
  if ( !result )
  {
    LOBYTE(v7) = 1;
    result = CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, (unsigned int)v4, v7);
    v8 = (CCD_SET_STRING_ID *)result;
    if ( result )
    {
      SetIdFromRegistry = CcdLazyRetrieveSetIdFromRegistry(*(_QWORD *)(a1 + 96), v16[1], result);
      v14 = SetIdFromRegistry;
      if ( SetIdFromRegistry < 0 )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
        v15[3] = v14;
        v15[4] = v4;
        v15[5] = a1;
        v15[6] = *(_QWORD *)(a1 + 96);
        WdLogEvent5_WdWarning(v15);
        CCD_SET_STRING_ID::_Cleanup(v8);
      }
      return (__int64)v8;
    }
  }
  return result;
}
