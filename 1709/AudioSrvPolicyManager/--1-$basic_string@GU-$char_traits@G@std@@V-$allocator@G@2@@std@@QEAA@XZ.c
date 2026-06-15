/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18001A690
 * Callers:
 *     ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x18001A410 (--_GCAastPreStartContext@@UEAAPEAXI@Z.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x180024D80 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180024E60 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x1800250F0 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ??1?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@QEAA@XZ @ 0x18002528C (--1-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@VCEndpoint.c)
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@2@@Z @ 0x180025DC8 (-_Freenode@-$_List_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     _CAastPreStartContext::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x180028AF7 (_CAastPreStartContext--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::dtor$2 @ 0x180029136 (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--dtor$2.c)
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::dtor$5 @ 0x180029177 (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::~wstring(__int64 a1)
{
  unsigned __int64 v1; // rax
  void *v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  HANDLE ProcessHeap; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 8 )
  {
    v3 = *(void **)a1;
    v4 = v1 + 1;
    if ( v4 <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( 2 * v4 < 0x1000 )
      {
LABEL_8:
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v3);
        goto LABEL_9;
      }
      if ( ((unsigned __int8)v3 & 0x1F) == 0 )
      {
        v5 = *((_QWORD *)v3 - 1);
        if ( v5 < (unsigned __int64)v3 && (unsigned __int64)v3 - v5 - 8 <= 0x1F )
        {
          v3 = (void *)*((_QWORD *)v3 - 1);
          goto LABEL_8;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn();
    JUMPOUT(0x18001A71BLL);
  }
LABEL_9:
  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  return result;
}
