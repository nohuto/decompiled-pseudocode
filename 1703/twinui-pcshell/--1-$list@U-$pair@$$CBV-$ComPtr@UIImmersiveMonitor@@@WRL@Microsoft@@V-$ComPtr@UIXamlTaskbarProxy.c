/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@2@@std@@QEAA@XZ @ 0x180121ED8
 * Callers:
 *     ??_GXamlTaskbarManager@@UEAAPEAXI@Z @ 0x180121C70 (--_GXamlTaskbarManager@@UEAAPEAXI@Z.c)
 *     ??1?$unordered_map@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@U?$hash@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@6@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@6@@std@@QEAA@XZ @ 0x180121E00 (--1-$unordered_map@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V-$ComPtr@UIXamlTaskbarProxyInt.c)
 *     _XamlTaskbarManager_CreateInstance_::_1_::dtor$20 @ 0x1801A002D (_XamlTaskbarManager_CreateInstance_--_1_--dtor$20.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>::~list<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>(
        char **a1)
{
  char *v2; // rbx
  char *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *(char **)*a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 1) = *a1;
  a1[1] = 0LL;
  if ( v2 != *a1 )
  {
    do
    {
      v3 = *(char **)v2;
      v4 = *((_QWORD *)v2 + 3);
      if ( v4 )
      {
        *((_QWORD *)v2 + 3) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v5 = *((_QWORD *)v2 + 2);
      if ( v5 )
      {
        *((_QWORD *)v2 + 2) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      std::_Deallocate(v2, 1uLL, 0x20uLL);
      v2 = v3;
    }
    while ( v3 != *a1 );
  }
  std::_Deallocate(*a1, 1uLL, 0x20uLL);
}
