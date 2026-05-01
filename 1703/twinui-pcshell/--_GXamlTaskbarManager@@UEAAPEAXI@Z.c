/*
 * XREFs of ??_GXamlTaskbarManager@@UEAAPEAXI@Z @ 0x180121C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18007866C (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$list@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@2@@std@@QEAA@XZ @ 0x180121ED8 (--1-$list@U-$pair@$$CBV-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V-$ComPtr@UIXamlTaskbarProxy.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
XamlTaskbarManager *__fastcall XamlTaskbarManager::`scalar deleting destructor'(XamlTaskbarManager *this, char a2)
{
  char *v4; // rdi
  __int64 v5; // rdx
  char *v6; // rcx
  char *v7; // rcx
  volatile signed __int32 *v8; // rcx
  char *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v4 = (char *)this + 144;
  SmartCookie::Unregister((XamlTaskbarManager *)((char *)this + 144));
  v6 = (char *)*((_QWORD *)v4 + 13);
  if ( v6 )
  {
    LOBYTE(v5) = v6 != v4;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v6 + 24LL))(v6, v5);
    *((_QWORD *)v4 + 13) = 0LL;
  }
  v7 = (char *)*((_QWORD *)v4 + 13);
  if ( v7 )
  {
    LOBYTE(v5) = v7 != v4;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v7 + 24LL))(v7, v5);
    *((_QWORD *)v4 + 13) = 0LL;
  }
  v8 = (volatile signed __int32 *)*((_QWORD *)this + 17);
  if ( v8 )
  {
    *((_QWORD *)this + 17) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v8);
  }
  v9 = (char *)*((_QWORD *)this + 12);
  if ( v9 )
  {
    std::_Deallocate(v9, (__int64)(*((_QWORD *)this + 14) - (_QWORD)v9) >> 3, 8uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  std::list<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>::~list<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>((char *)this + 80);
  v10 = *((_QWORD *)this + 8);
  if ( v10 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 7);
  if ( v11 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 6);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  *((_DWORD *)this + 11) = -1073741823;
  v13 = *((_QWORD *)this + 4);
  if ( v13 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
