/*
 * XREFs of ??1CProcessSubmixProxy@@MEAA@XZ @ 0x1800124D4
 * Callers:
 *     ??_GCProcessSubmixProxy@@MEAAPEAXI@Z @ 0x1800124A0 (--_GCProcessSubmixProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?GetStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAPEAUIStreamGroup@@@Z @ 0x18000D550 (-GetStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAPEAUIStreamGroup@@@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CProcessSubmixProxy::~CProcessSubmixProxy(CProcessSubmixProxy *this)
{
  CBaseStreamGroupProxy *v2; // rcx
  __int64 (__fastcall *v3)(CBaseStreamGroupProxy *, struct IStreamGroup **); // rax
  int StreamGroup; // eax
  void *v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct IStreamGroup *v10; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)this = &CProcessSubmixProxy::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CProcessSubmixProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IProcessSubmixProxy,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 2) = &CProcessSubmixProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  v2 = (CBaseStreamGroupProxy *)*((_QWORD *)this + 25);
  if ( v2 )
  {
    v10 = 0LL;
    v3 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *, struct IStreamGroup **))(*(_QWORD *)v2 + 264LL);
    if ( v3 == CBaseStreamGroupProxy::GetStreamGroup )
      StreamGroup = CBaseStreamGroupProxy::GetStreamGroup(v2, &v10);
    else
      StreamGroup = v3(v2, &v10);
    if ( StreamGroup >= 0 )
      (*(void (__fastcall **)(_QWORD, struct IStreamGroup *))(**((_QWORD **)this + 6) + 80LL))(
        *((_QWORD *)this + 6),
        v10);
    if ( v10 )
      (*(void (__fastcall **)(struct IStreamGroup *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v5 = (void *)*((_QWORD *)this + 26);
  if ( v5 )
    CoTaskMemFree(v5);
  v6 = *((_QWORD *)this + 25);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = (void *)*((_QWORD *)this + 22);
  if ( v7 )
  {
    std::_Deallocate(v7, (__int64)(*((_QWORD *)this + 24) - (_QWORD)v7) >> 3, 8uLL);
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v8 = *((_QWORD *)this + 14);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>((__int64)this);
}
