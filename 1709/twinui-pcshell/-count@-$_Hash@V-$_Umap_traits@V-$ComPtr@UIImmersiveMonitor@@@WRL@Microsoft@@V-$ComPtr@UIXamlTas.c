/*
 * XREFs of ?count@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@V?$_Uhash_compare@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@6@$0A@@std@@@std@@QEBA_KAEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x18014B968
 * Callers:
 *     ?UpdateTaskbarExistenceForMonitor@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18014AE30 (-UpdateTaskbarExistenceForMonitor@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?_Hashval@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@V?$_Uhash_compare@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@6@$0A@@std@@@std@@IEBA_KAEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x18014BDF8 (-_Hashval@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V-$ComPtr@UIXaml.c)
 *     ??R?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@QEBA_NAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@0@Z @ 0x18014BEA0 (--R-$_Uhash_compare@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U-$hash@V-$ComPtr@UIVirtualDeskt.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IImmersiveMonitor>,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IImmersiveMonitor>,std::hash<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,std::equal_to<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>,0>>::count(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rsi
  _QWORD *i; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v4 = std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IImmersiveMonitor>,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IImmersiveMonitor>,std::hash<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,std::equal_to<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>,0>>::_Hashval();
  v5 = 2 * v4;
  v6 = 0LL;
  for ( i = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 16 * v4); ; i = (_QWORD *)*i )
  {
    v8 = *(_QWORD *)(a1 + 24);
    v9 = *(_QWORD **)(a1 + 8);
    if ( *(_QWORD **)(v8 + 8 * v5) != v9 )
      v9 = **(_QWORD ***)(v8 + 8 * v5 + 8);
    if ( i == v9 )
      break;
    if ( !(unsigned __int8)std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::operator()(
                             v8,
                             i + 2,
                             a2) )
    {
      v10 = i;
      while ( 1 )
      {
        v11 = *(_QWORD *)(a1 + 24);
        v12 = *(_QWORD **)(a1 + 8);
        if ( *(_QWORD **)(v11 + 8 * v5) != v12 )
          v12 = **(_QWORD ***)(v11 + 8 * v5 + 8);
        if ( i == v12
          || (unsigned __int8)std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::operator()(
                                v11,
                                a2,
                                i + 2) )
        {
          break;
        }
        i = (_QWORD *)*i;
      }
      if ( v10 != i )
        goto LABEL_15;
      break;
    }
  }
  v10 = *(_QWORD **)(a1 + 8);
  i = v10;
  while ( v10 != i )
  {
LABEL_15:
    v10 = (_QWORD *)*v10;
    ++v6;
  }
  return v6;
}
