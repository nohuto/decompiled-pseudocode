/*
 * XREFs of ?RuntimeClassInitialize@XamlTaskbarProxy@@QEAAJPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEAUIXamlTaskbarProxyHost@@@Z @ 0x180152C38
 * Callers:
 *     ??$MakeAndInitialize@VXamlTaskbarProxy@@V1@AEAPEAUIImmersiveMonitor@@AEAPEAVCreationThreadDispatcher@@PEAUIXamlTaskbarProxyHost@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VXamlTaskbarProxy@@@WRL@Microsoft@@@012@AEAPEAUIImmersiveMonitor@@AEAPEAVCreationThreadDispatcher@@$$QEAPEAUIXamlTaskbarProxyHost@@@Z @ 0x1801493B4 (--$MakeAndInitialize@VXamlTaskbarProxy@@V1@AEAPEAUIImmersiveMonitor@@AEAPEAVCreationThreadDispat.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlTaskbarProxy::RuntimeClassInitialize(
        XamlTaskbarProxy *this,
        struct IImmersiveMonitor *a2,
        struct CreationThreadDispatcher *a3,
        struct IXamlTaskbarProxyHost *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rcx

  if ( *((struct IXamlTaskbarProxyHost **)this + 7) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct IXamlTaskbarProxyHost *))(*(_QWORD *)a4 + 8LL))(a4);
    v8 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = a4;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( *((struct IImmersiveMonitor **)this + 8) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 8LL))(a2);
    v9 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = a2;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( *((struct CreationThreadDispatcher **)this + 12) != a3 )
  {
    if ( a3 )
      _InterlockedAdd((volatile signed __int32 *)a3 + 11, 1u);
    v10 = (volatile signed __int32 *)*((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = a3;
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd(v10 + 11, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 72LL))(v10, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  return 0LL;
}
