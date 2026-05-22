/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180009C58
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x1800063BC (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ??1?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAA@XZ @ 0x180009C50 (--1-$unordered_map@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHead.c)
 *     ??_ENonBamoInputDeliveryServer@@EEAAPEAXI@Z @ 0x180024200 (--_ENonBamoInputDeliveryServer@@EEAAPEAXI@Z.c)
 *     ??_GControllerNavigationManager@@UEAAPEAXI@Z @ 0x18002ED70 (--_GControllerNavigationManager@@UEAAPEAXI@Z.c)
 *     ??_EISMHeatFrameworkHost@@MEAAPEAXI@Z @ 0x180039A4C (--_EISMHeatFrameworkHost@@MEAAPEAXI@Z.c)
 *     ??_EDragNDropProcessor@@EEAAPEAXI@Z @ 0x180063C30 (--_EDragNDropProcessor@@EEAAPEAXI@Z.c)
 *     ??1SystemContextProvider@@MEAA@XZ @ 0x180090EF0 (--1SystemContextProvider@@MEAA@XZ.c)
 *     ??_GDragNDropProcessorLegacy@@EEAAPEAXI@Z @ 0x1800B1D3C (--_GDragNDropProcessorLegacy@@EEAAPEAXI@Z.c)
 *     _dynamic_atexit_destructor_for__TestCommandHost::m_instance__ @ 0x1800EAA40 (_dynamic_atexit_destructor_for__TestCommandHost--m_instance__.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::~_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>(
        _QWORD *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  _QWORD **v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx

  v2 = a1[3];
  if ( v2 )
  {
    v3 = (__int64)(a1[5] - v2) >> 3;
    if ( v3 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v3 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v2);
        a1[3] = 0LL;
        a1[4] = 0LL;
        a1[5] = 0LL;
        goto LABEL_9;
      }
      if ( (v2 & 0x1F) == 0 )
      {
        v4 = *(_QWORD *)(v2 - 8);
        if ( v4 < v2 )
        {
          v2 = v2 - v4 - 8;
          if ( v2 <= 0x1F )
          {
            v2 = v4;
            goto LABEL_8;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v2, 0x1FFFFFFFFFFFFFFFLL);
    JUMPOUT(0x180009D14LL);
  }
LABEL_9:
  v5 = (_QWORD **)a1[1];
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  a1[2] = 0LL;
  v7 = (_QWORD *)a1[1];
  if ( v6 != v7 )
  {
    do
    {
      v8 = (_QWORD *)*v6;
      operator delete(v6);
      v7 = (_QWORD *)a1[1];
      v6 = v8;
    }
    while ( v8 != v7 );
  }
  operator delete(v7);
}
