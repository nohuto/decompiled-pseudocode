/*
 * XREFs of ??_GXamlTaskbarManager@@UEAAPEAXI@Z @ 0x18014C180
 * Callers:
 *     <none>
 * Callees:
 *     ??1SmartCookie@@QEAA@XZ @ 0x18007B2F8 (--1SmartCookie@@QEAA@XZ.c)
 *     ??1?$list@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@2@@std@@QEAA@XZ @ 0x18014C46C (--1-$list@U-$pair@$$CBV-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V-$ComPtr@UIXamlTaskbarProxy.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
SmartCookie **__fastcall XamlTaskbarManager::`scalar deleting destructor'(SmartCookie **this, char a2)
{
  volatile signed __int32 *v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  SmartCookie *v8; // rcx
  SmartCookie *v9; // rcx
  SmartCookie *v10; // rcx
  SmartCookie *v11; // rcx

  SmartCookie::~SmartCookie(this + 20);
  v4 = (volatile signed __int32 *)this[19];
  if ( v4 )
  {
    this[19] = 0LL;
    if ( _InterlockedExchangeAdd(v4 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 72LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v5 = (unsigned __int64)this[14];
  if ( v5 )
  {
    v6 = (__int64)((__int64)this[16] - v5) >> 3;
    if ( v6 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v6 < 0x1000 )
      {
LABEL_12:
        operator delete((void *)v5);
        this[14] = 0LL;
        this[15] = 0LL;
        this[16] = 0LL;
        goto LABEL_14;
      }
      if ( (v5 & 0x1F) == 0 )
      {
        v7 = *(_QWORD *)(v5 - 8);
        if ( v7 < v5 )
        {
          v5 = v5 - v7 - 8;
          if ( v5 <= 0x1F )
          {
            v5 = v7;
            goto LABEL_12;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v5);
    __debugbreak();
  }
LABEL_14:
  std::list<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>::~list<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>(this + 12);
  v8 = this[10];
  if ( v8 )
  {
    this[10] = 0LL;
    (*(void (__fastcall **)(SmartCookie *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = this[9];
  if ( v9 )
  {
    this[9] = 0LL;
    (*(void (__fastcall **)(SmartCookie *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = this[8];
  if ( v10 )
    (*(void (__fastcall **)(SmartCookie *))(*(_QWORD *)v10 + 16LL))(v10);
  *((_DWORD *)this + 15) = -1073741823;
  v11 = this[6];
  if ( v11 )
  {
    this[6] = 0LL;
    (*(void (__fastcall **)(SmartCookie *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
