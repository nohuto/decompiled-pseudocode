/*
 * XREFs of ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18003C07C
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003D638 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??$_Insert@AEAU?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@1@@Z @ 0x18000AB88 (--$_Insert@AEAU-$pair@$$CBW4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageD.c)
 *     ?NavigationEnable@ControllerNavigationManager@@UEAAJUtagMsgRoutingInfo@@IUControllerNavigationRect@@UControllerNavigationPoint@@@Z @ 0x18003C8A0 (-NavigationEnable@ControllerNavigationManager@@UEAAJUtagMsgRoutingInfo@@IUControllerNavigationRe.c)
 *     ?NavigationPause@ControllerNavigationManager@@UEAAJXZ @ 0x18003CA30 (-NavigationPause@ControllerNavigationManager@@UEAAJXZ.c)
 *     ??$_Buynode@AEAKAEAPEAVControllerProcessor@@@?$_List_buy@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@1@PEAU21@0AEAKAEAPEAVControllerProcessor@@@Z @ 0x18003CFAC (--$_Buynode@AEAKAEAPEAVControllerProcessor@@@-$_List_buy@U-$pair@$$CBKPEAVControllerProcessor@@@.c)
 *     ?SetControllerVirtualKeyMappingFor@ControllerProcessor@@SAJW4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x18003E134 (-SetControllerVirtualKeyMappingFor@ControllerProcessor@@SAJW4GamepadButtons@Input@Gaming@Windows.c)
 */

__int64 __fastcall ControllerNavigationManager::RegisterControllerProcessor(
        ControllerNavigationManager *this,
        int a2,
        struct ControllerProcessor *a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // r9d
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int64 v13; // r8
  __int128 v14; // xmm0
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  __int128 v19; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v20[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+98h] [rbp+28h] BYREF
  struct ControllerProcessor *v23; // [rsp+A0h] [rbp+30h] BYREF

  v23 = a3;
  v22 = a2;
  *((_BYTE *)this + 90) = *((_QWORD *)this + 5) == 0LL;
  v4 = **((_QWORD **)this + 4);
  v5 = std::_List_buy<std::pair<unsigned long const,ControllerProcessor *>>::_Buynode<unsigned long &,ControllerProcessor * &>(
         (_DWORD)this,
         v4,
         *(_QWORD *)(v4 + 8),
         (unsigned int)&v22,
         (__int64)&v23);
  v6 = *((_QWORD *)this + 5);
  if ( v6 == 0x7FFFFFFFFFFFFFELL )
    std::_Xlength_error("list<T> too long");
  *((_QWORD *)this + 5) = v6 + 1;
  *(_QWORD *)(v4 + 8) = v5;
  **(_QWORD **)(v5 + 8) = v5;
  std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::_Insert<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>>>>(
    (float *)this + 6,
    (__int64)&v19,
    (unsigned int *)(**((_QWORD **)this + 4) + 16LL),
    **((__int64 ***)this + 4));
  if ( *((_BYTE *)this + 89)
    && (v8 = ControllerNavigationManager::NavigationPause((ControllerNavigationManager *)((char *)this + 16)),
        v9 = v8,
        v8 < 0) )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 145;
LABEL_7:
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, v10, v8);
    }
  }
  else
  {
    if ( *((_BYTE *)this + 88) )
    {
      v11 = *((_QWORD *)this + 14);
      v12 = *(_OWORD *)((char *)this + 536);
      v13 = *((unsigned int *)this + 23);
      v19 = *((_OWORD *)this + 6);
      v14 = *(_OWORD *)((char *)this + 520);
      v20[1] = v12;
      v20[0] = v14;
      v21 = *((_QWORD *)this + 69);
      v8 = ControllerNavigationManager::NavigationEnable((char *)this + 16, v20, v13, &v19, v11);
      v9 = v8;
      if ( v8 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        v10 = 155;
        goto LABEL_7;
      }
    }
    v15 = 196LL;
    if ( !*((_BYTE *)this + 156) )
      v15 = 27LL;
    v16 = ControllerProcessor::SetControllerVirtualKeyMappingFor(v7, v15);
    v9 = v16;
    if ( v16 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, 159, v16);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  return v9;
}
