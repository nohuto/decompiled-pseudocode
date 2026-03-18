/*
 * XREFs of ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00DAB54
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00CFD50 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00D06A8 (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00D07EC (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 *     _CcdRetrieveSetIdFromRegistry @ 0x1C00D0CB0 (_CcdRetrieveSetIdFromRegistry.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00D99E4 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00D9E48 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C00DC360 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00DC3A4 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DF0C8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA65C (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA7C8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C00DADE0 (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::operator=(CCD_SET_STRING_ID *this, __int64 a2)
{
  CCD_SET_STRING_ID *v3; // rbx
  void *v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
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
          v14 = WdLogNewEntry5_WdAssertion(v6);
          WdLogEvent5_WdAssertion(v14);
        }
        if ( !*(_QWORD *)(a2 + 24) || (v7 = *(_WORD *)(a2 + 32)) == 0 )
        {
          CCD_SET_STRING_ID::_ParseMonitorDescriptors(v3);
          return v3;
        }
        if ( v7 <= *((_WORD *)v3 + 16) )
          goto LABEL_16;
        v8 = (void *)*((_QWORD *)v3 + 3);
        *((_WORD *)v3 + 16) = 0;
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        v9 = 8LL * *(unsigned __int16 *)(a2 + 32);
        if ( !is_mul_ok(*(unsigned __int16 *)(a2 + 32), 8uLL) )
          v9 = -1LL;
        v10 = operator new(v9, 0x63644356u, PagedPool);
        *((_QWORD *)v3 + 3) = v10;
        if ( v10 )
        {
LABEL_16:
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
