/*
 * XREFs of ?InititializeThumbnailFactory@AppViewSwitchItem@@AEAAJPEAUIApplicationView@@PEAUIThumbnailInteropDevice@@@Z @ 0x180164088
 * Callers:
 *     ?RuntimeClassInitialize@AppViewSwitchItem@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@@Z @ 0x180163AD8 (-RuntimeClassInitialize@AppViewSwitchItem@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewIconLo.c)
 *     ?WindowChanged@AppViewSwitchItem@@UEAAXXZ @ 0x180164070 (-WindowChanged@AppViewSwitchItem@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?NotifyPropertyChanged@SwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@IEAAXW4SwitchItemProperty@23456@@Z @ 0x180165A5C (-NotifyPropertyChanged@SwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewSwitchItem::InititializeThumbnailFactory(
        RTL_SRWLOCK *this,
        struct IApplicationView *a2,
        struct IThumbnailInteropDevice *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // eax
  void *v9; // rcx
  void *v10; // rbx
  PVOID Ptr; // rsi
  void *v12; // rcx
  PSRWLOCK SRWLock[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  if ( a3 )
  {
    v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v16);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x7F,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitem.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    v15 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct IThumbnailInteropDevice *, __int64, GUID *, void **))(*(_QWORD *)a3 + 24LL))(
           a3,
           v16,
           &GUID_5c594542_969f_4b3c_971b_c13cb89bbdbb,
           &v15);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x82,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitem.cpp",
        (const char *)(unsigned int)v8);
      v9 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      return v6;
    }
    v10 = v15;
    wil::srwlock::lock_exclusive(this + 4, SRWLock);
    Ptr = this[11].Ptr;
    this[11].Ptr = v10;
    if ( v10 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 8LL))(v10);
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
    WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase::NotifyPropertyChanged(
      this,
      6LL);
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return 0LL;
}
