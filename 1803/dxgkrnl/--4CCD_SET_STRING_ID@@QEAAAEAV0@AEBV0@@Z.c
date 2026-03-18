/*
 * XREFs of ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00B2A84
 * Callers:
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C009DD50 (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C009DE94 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 *     _CcdRetrieveSetIdFromRegistry @ 0x1C00AFE04 (_CcdRetrieveSetIdFromRegistry.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B0500 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00B1B1C (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00B2288 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00B2F88 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C00B3EC8 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00B3F08 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B25A0 (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B2714 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C00B2B8C (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::operator=(CCD_SET_STRING_ID *this, __int64 a2)
{
  CCD_SET_STRING_ID *v3; // rbx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  void *v8; // rcx
  SIZE_T v9; // rax
  PVOID v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = this;
  if ( this != (CCD_SET_STRING_ID *)a2 )
  {
    if ( *(_WORD *)(a2 + 8) )
    {
      *((_DWORD *)this + 10) = 0;
      operator delete[](*((void **)this + 6));
      *((_QWORD *)v3 + 6) = 0LL;
      v4 = CCD_SET_STRING_ID::_CopyString((struct _STRING *)((char *)v3 + 8), (const struct _STRING *)(a2 + 8));
      *(_DWORD *)v3 = v4;
      if ( v4 >= 0 )
      {
        v6 = *(_QWORD *)(a2 + 24);
        if ( !v6 || !*(_WORD *)(a2 + 32) )
        {
          v14 = WdLogNewEntry5_WdAssertion(v5);
          WdLogEvent5_WdAssertion(v14);
          v6 = *(_QWORD *)(a2 + 24);
        }
        if ( !v6 || (v7 = *(_WORD *)(a2 + 32)) == 0 )
        {
          CCD_SET_STRING_ID::_ParseMonitorDescriptors(v3);
          return v3;
        }
        if ( v7 <= *((_WORD *)v3 + 16) )
          goto LABEL_12;
        v8 = (void *)*((_QWORD *)v3 + 3);
        *((_WORD *)v3 + 16) = 0;
        operator delete[](v8);
        v9 = 8LL * *(unsigned __int16 *)(a2 + 32);
        if ( !is_mul_ok(*(unsigned __int16 *)(a2 + 32), 8uLL) )
          v9 = -1LL;
        v10 = operator new[](v9, 0x63644356u, PagedPool);
        *((_QWORD *)v3 + 3) = v10;
        if ( v10 )
        {
LABEL_12:
          memmove(*((void **)v3 + 3), *(const void **)(a2 + 24), 8LL * *(unsigned __int16 *)(a2 + 32));
          *((_WORD *)v3 + 16) = *(_WORD *)(a2 + 32);
          return v3;
        }
        v13 = WdLogNewEntry5_WdLowResource(v11);
        *(_QWORD *)(v13 + 24) = 8LL * *(unsigned __int16 *)(a2 + 32);
        WdLogEvent5_WdLowResource(v13);
        *(_DWORD *)v3 = -1073741801;
      }
      this = v3;
    }
    CCD_SET_STRING_ID::_Cleanup(this);
  }
  return v3;
}
