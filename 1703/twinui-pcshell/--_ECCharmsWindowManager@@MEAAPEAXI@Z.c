/*
 * XREFs of ??_ECCharmsWindowManager@@MEAAPEAXI@Z @ 0x18003B410
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAA@XZ @ 0x180017184 (--1-$CActivationBasedCollection@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CCharmsWindowManager *__fastcall CCharmsWindowManager::`vector deleting destructor'(
        CCharmsWindowManager *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CCharmsWindowManager::`vftable';
  *((_QWORD *)this + 2) = &CCharmsWindowManager::`vftable'{for `IImmersiveCharmsWindowManager'};
  *((_QWORD *)this + 3) = &CCharmsWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ICharmWindowManagerInternal,Microsoft::WRL::Details::Nil>,1,0>'};
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::~CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>((__int64)this + 40);
  *((_DWORD *)this + 9) = -1073741823;
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
