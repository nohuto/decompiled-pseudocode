/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18000A394
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180006028 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ??1?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAA@XZ @ 0x180009EE0 (--1-$unordered_map@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHead.c)
 *     ??_GControllerNavigationManager@@UEAAPEAXI@Z @ 0x18003BF00 (--_GControllerNavigationManager@@UEAAPEAXI@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VInputAttemptedTargetManager@@@std@@EEAAXXZ @ 0x180080C50 (-_Destroy@-$_Ref_count_obj@VInputAttemptedTargetManager@@@std@@EEAAXXZ.c)
 *     _dynamic_atexit_destructor_for__TestCommandHost::m_instance__ @ 0x1800D26E0 (_dynamic_atexit_destructor_for__TestCommandHost--m_instance__.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::~_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>(
        __int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  _QWORD **v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = (__int64)(*(_QWORD *)(a1 + 40) - v2) >> 3;
    if ( v3 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v3 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v2);
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_QWORD *)(a1 + 32) = 0LL;
        *(_QWORD *)(a1 + 40) = 0LL;
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
    _o__invalid_parameter_noinfo_noreturn(v2);
    JUMPOUT(0x18000A447LL);
  }
LABEL_9:
  v5 = *(_QWORD ***)(a1 + 8);
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( v6 != *(_QWORD **)(a1 + 8) )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      operator delete(v6);
      v6 = v7;
    }
    while ( v7 != *(_QWORD **)(a1 + 8) );
  }
  operator delete(*(void **)(a1 + 8));
}
