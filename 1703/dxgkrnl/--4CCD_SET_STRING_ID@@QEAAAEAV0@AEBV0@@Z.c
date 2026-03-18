/*
 * XREFs of ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00B1474
 * Callers:
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00AF018 (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00AF15C (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 *     _CcdRetrieveSetIdFromRegistry @ 0x1C00AFB48 (_CcdRetrieveSetIdFromRegistry.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00AFFC8 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B03E0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00B07D8 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00EBBE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C00EE288 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00EE2CC (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B0FE4 (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B1150 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C00B175C (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::operator=(CCD_SET_STRING_ID *this, __int64 a2)
{
  CCD_SET_STRING_ID *v3; // rbx
  void *v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 v10; // ax
  void *v11; // rcx
  unsigned __int64 v12; // rax
  void *v13; // rax
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rax

  v3 = this;
  if ( this != (CCD_SET_STRING_ID *)a2 )
  {
    if ( *(_WORD *)(a2 + 8) )
    {
      *((_DWORD *)this + 10) = 0;
      v4 = (void *)*((_QWORD *)this + 6);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      *((_QWORD *)v3 + 6) = 0LL;
      v5 = CCD_SET_STRING_ID::_CopyString((struct _STRING *)((char *)v3 + 8), (const struct _STRING *)(a2 + 8));
      *(_DWORD *)v3 = v5;
      if ( v5 >= 0 )
      {
        if ( !*(_QWORD *)(a2 + 24) || !*(_WORD *)(a2 + 32) )
        {
          v17 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
          WdLogEvent5_WdAssertion(v17);
        }
        if ( !*(_QWORD *)(a2 + 24) || (v10 = *(_WORD *)(a2 + 32)) == 0 )
        {
          CCD_SET_STRING_ID::_ParseMonitorDescriptors(v3, v6, v8, v9);
          return v3;
        }
        if ( v10 <= *((_WORD *)v3 + 16) )
          goto LABEL_16;
        v11 = (void *)*((_QWORD *)v3 + 3);
        *((_WORD *)v3 + 16) = 0;
        if ( v11 )
          ExFreePoolWithTag(v11, 0);
        v12 = 8LL * *(unsigned __int16 *)(a2 + 32);
        if ( !is_mul_ok(*(unsigned __int16 *)(a2 + 32), 8uLL) )
          v12 = -1LL;
        v13 = operator new(v12, 0x63644356u, PagedPool);
        *((_QWORD *)v3 + 3) = v13;
        if ( v13 )
        {
LABEL_16:
          memmove(*((void **)v3 + 3), *(const void **)(a2 + 24), 8LL * *(unsigned __int16 *)(a2 + 32));
          *((_WORD *)v3 + 16) = *(_WORD *)(a2 + 32);
          return v3;
        }
        v16 = WdLogNewEntry5_WdLowResource(v14);
        *(_QWORD *)(v16 + 24) = 8LL * *(unsigned __int16 *)(a2 + 32);
        WdLogEvent5_WdLowResource(v16);
        *(_DWORD *)v3 = -1073741801;
      }
      this = v3;
    }
    CCD_SET_STRING_ID::_Cleanup(this);
  }
  return v3;
}
