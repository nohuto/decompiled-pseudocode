/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@2@@std@@QEAA@XZ @ 0x18014C46C
 * Callers:
 *     ??_GXamlTaskbarManager@@UEAAPEAXI@Z @ 0x18014C180 (--_GXamlTaskbarManager@@UEAAPEAXI@Z.c)
 *     ??1?$unordered_map@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@U?$hash@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@6@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@6@@std@@QEAA@XZ @ 0x18014C334 (--1-$unordered_map@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V-$ComPtr@UIXamlTaskbarProxyInt.c)
 *     _XamlTaskbarManager_CreateInstance_::_1_::dtor$20 @ 0x1801F0188 (_XamlTaskbarManager_CreateInstance_--_1_--dtor$20.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>::~list<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>(
        void **a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *(_QWORD **)*a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 1) = *a1;
  a1[1] = 0LL;
  if ( v2 != *a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      v4 = v2[3];
      if ( v4 )
      {
        v2[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v5 = v2[2];
      if ( v5 )
      {
        v2[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 != *a1 );
  }
  operator delete(*a1);
}
