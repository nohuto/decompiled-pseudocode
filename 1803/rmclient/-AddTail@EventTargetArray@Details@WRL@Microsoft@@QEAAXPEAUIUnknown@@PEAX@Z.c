/*
 * XREFs of ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800021F4
 * Callers:
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180001D44 (-AddInternal@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Wind.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180001F1C (-AddInternal@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeMode.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000B8F8 (-Remove@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000BA68 (-Remove@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800023C8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::Details::EventTargetArray::AddTail(
        Microsoft::WRL::Details::EventTargetArray *this,
        struct IUnknown *a2,
        void *a3)
{
  struct IUnknown **v3; // rsi
  struct IUnknown *v7; // rax
  struct IUnknown *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct IUnknown **)*((_QWORD *)this + 3);
  v7 = *v3;
  if ( *v3 != a2 )
  {
    if ( a2 )
    {
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
      v7 = *v3;
    }
    v8 = v7;
    *v3 = a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  }
  *(_QWORD *)(*((_QWORD *)this + 4) + 8 * ((__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3)) = a3;
  *((_QWORD *)this + 3) += 8LL;
}
