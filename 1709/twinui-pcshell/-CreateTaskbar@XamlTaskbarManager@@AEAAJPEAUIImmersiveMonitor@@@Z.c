/*
 * XREFs of ?CreateTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18014AF78
 * Callers:
 *     ?UpdateTaskbarExistenceForMonitor@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18014AE30 (-UpdateTaskbarExistenceForMonitor@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateInitialTaskbars@XamlTaskbarManager@@UEAAJPEAUIXamlTaskbarProxyHost@@@Z @ 0x18014B120 (-CreateInitialTaskbars@XamlTaskbarManager@@UEAAJPEAUIXamlTaskbarProxyHost@@@Z.c)
 * Callees:
 *     ?CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180147F1C (-CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEA.c)
 *     ??$_Insert@AEAU?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@V?$_Uhash_compare@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@1@@Z @ 0x18014BF68 (--$_Insert@AEAU-$pair@$$CBV-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V-$ComPtr@UIXamlTaskbarP.c)
 *     ??$_Buynode@AEAPEAUIImmersiveMonitor@@AEAV?$ComPtr@UIXamlTaskbarProxyInternal@@@WRL@Microsoft@@@?$_List_buy@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@PEAX@1@PEAU21@0AEAPEAUIImmersiveMonitor@@AEAV?$ComPtr@UIXamlTaskbarProxyInternal@@@WRL@Microsoft@@@Z @ 0x18014C508 (--$_Buynode@AEAPEAUIImmersiveMonitor@@AEAV-$ComPtr@UIXamlTaskbarProxyInternal@@@WRL@Microsoft@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlTaskbarManager::CreateTaskbar(XamlTaskbarManager *this, struct IImmersiveMonitor *a2)
{
  __int64 v3; // rdi
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rax
  const char *v7; // r9
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-38h]
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  struct IImmersiveMonitor *v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = a2;
  try
  {
    v13 = 0LL;
    XamlExplorerHost::CreateTaskbar(
      *((RTL_SRWLOCK **)this + 8),
      (__int64)a2,
      *((_QWORD *)this + 19),
      *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 9),
      v10,
      (__int64)&v13);
    v3 = **((_QWORD **)this + 12);
    v5 = std::_List_buy<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>::_Buynode<IImmersiveMonitor * &,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal> &>(
           v4,
           v3,
           *(_QWORD *)(v3 + 8),
           (unsigned int)&v14,
           (__int64)&v13);
    v6 = *((_QWORD *)this + 13);
    if ( v6 == 0x7FFFFFFFFFFFFFELL )
      std::_Xlength_error("list<T> too long");
    *((_QWORD *)this + 13) = v6 + 1;
    *(_QWORD *)(v3 + 8) = v5;
    **(_QWORD **)(v5 + 8) = v5;
    std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IImmersiveMonitor>,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IImmersiveMonitor>,std::hash<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,std::equal_to<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>,0>>::_Insert<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>(
      (char *)this + 88,
      v11,
      **((_QWORD **)this + 12) + 16LL);
    v8 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8A,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
                           v7);
  }
  return result;
}
