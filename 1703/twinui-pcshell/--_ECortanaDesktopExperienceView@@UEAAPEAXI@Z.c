/*
 * XREFs of ??_ECortanaDesktopExperienceView@@UEAAPEAXI@Z @ 0x1800C9030
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x18018C008 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CortanaDesktopExperienceView *__fastcall CortanaDesktopExperienceView::`vector deleting destructor'(
        CortanaDesktopExperienceView *this,
        char a2)
{
  __int64 v4; // rcx
  HWND v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CortanaDesktopExperienceView *)((char *)this + 296));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CortanaDesktopExperienceView *)((char *)this + 264));
  v4 = *((_QWORD *)this + 31);
  if ( v4 )
  {
    *((_QWORD *)this + 31) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (HWND)*((_QWORD *)this + 29);
  if ( v5 )
    DestroyWindow(v5);
  v6 = *((_QWORD *)this + 18);
  if ( v6 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 15);
  if ( v7 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 14);
  if ( v8 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (void *)*((_QWORD *)this + 13);
  if ( v9 )
    operator delete(v9);
  v10 = *((_QWORD *)this + 12);
  if ( v10 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 11);
  if ( v11 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v11));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
