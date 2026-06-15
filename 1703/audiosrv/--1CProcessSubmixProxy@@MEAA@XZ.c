/*
 * XREFs of ??1CProcessSubmixProxy@@MEAA@XZ @ 0x1800080C4
 * Callers:
 *     ??_GCProcessSubmixProxy@@MEAAPEAXI@Z @ 0x180008090 (--_GCProcessSubmixProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008690 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x180009730 (-GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CProcessSubmixProxy::~CProcessSubmixProxy(CProcessSubmixProxy *this)
{
  CSaDeviceProxy *v2; // rcx
  __int64 (__fastcall *v3)(CSaDeviceProxy *__hidden, struct IAudioDeviceGraph **); // rax
  int DeviceGraph; // eax
  void *v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct IAudioDeviceGraph *v11; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)this = &CProcessSubmixProxy::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CProcessSubmixProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IProcessSubmixProxy,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 2) = &CProcessSubmixProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
  v2 = (CSaDeviceProxy *)*((_QWORD *)this + 20);
  if ( v2 )
  {
    v11 = 0LL;
    v3 = *(__int64 (__fastcall **)(CSaDeviceProxy *__hidden, struct IAudioDeviceGraph **))(*(_QWORD *)v2 + 272LL);
    if ( v3 == CSaDeviceProxy::GetDeviceGraph )
      DeviceGraph = CSaDeviceProxy::GetDeviceGraph(v2, &v11);
    else
      DeviceGraph = v3(v2, &v11);
    if ( DeviceGraph >= 0 )
      (*(void (__fastcall **)(_QWORD, struct IAudioDeviceGraph *))(**((_QWORD **)this + 6) + 80LL))(
        *((_QWORD *)this + 6),
        v11);
    if ( v11 )
      (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v5 = (void *)*((_QWORD *)this + 21);
  if ( v5 )
    CoTaskMemFree(v5);
  v6 = *((_QWORD *)this + 20);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = (void *)*((_QWORD *)this + 17);
  if ( v7 )
  {
    std::_Deallocate(v7, (__int64)(*((_QWORD *)this + 19) - (_QWORD)v7) >> 3, 8uLL);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 15);
  if ( v8 )
    CoTaskMemFree(v8);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 5);
  if ( v10 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(2 * v10);
}
