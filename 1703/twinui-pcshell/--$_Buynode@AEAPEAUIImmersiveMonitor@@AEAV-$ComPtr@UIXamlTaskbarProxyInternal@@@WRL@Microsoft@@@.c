/*
 * XREFs of ??$_Buynode@AEAPEAUIImmersiveMonitor@@AEAV?$ComPtr@UIXamlTaskbarProxyInternal@@@WRL@Microsoft@@@?$_List_buy@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@PEAX@1@PEAU21@0AEAPEAUIImmersiveMonitor@@AEAV?$ComPtr@UIXamlTaskbarProxyInternal@@@WRL@Microsoft@@@Z @ 0x180121F84
 * Callers:
 *     ?CreateTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180120A24 (-CreateTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@PEAX@2@PEAU32@0@Z @ 0x180100BE8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$ComPtr@UIImmersiveMonitor@@@WRL@Micr.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall std::_List_buy<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>::_Buynode<IImmersiveMonitor * &,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal> &>(
        __int64 a1,
        char *a2,
        char *a3,
        __int64 *a4,
        __int64 *a5)
{
  char *v6; // rax
  __int64 v7; // rcx
  char *v8; // rdi
  __int64 *v9; // rbx
  __int64 v10; // rcx
  char *v12; // [rsp+40h] [rbp+8h]

  v6 = std::_List_alloc<std::_List_base_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>::_Buynode0(
         a1,
         a2,
         a3);
  v8 = v6;
  v12 = v6;
  try
  {
    v9 = (__int64 *)(v6 + 16);
    if ( v6 != (char *)-16LL )
    {
      v10 = *a4;
      *v9 = *a4;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v7 = *a5;
      v9[1] = *a5;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<HostIdentifierKey const,unsigned int>,void *>>>::deallocate(
      v7,
      v12);
    throw;
  }
  return v8;
}
