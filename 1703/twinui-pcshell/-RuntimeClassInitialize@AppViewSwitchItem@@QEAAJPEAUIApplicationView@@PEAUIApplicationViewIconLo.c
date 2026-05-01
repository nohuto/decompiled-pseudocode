/*
 * XREFs of ?RuntimeClassInitialize@AppViewSwitchItem@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@@Z @ 0x180163AD8
 * Callers:
 *     ?AppViewSwitchItem_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@AEBU_GUID@@PEAPEAX@Z @ 0x1801641E4 (-AppViewSwitchItem_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@PEAU.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InititializeThumbnailFactory@AppViewSwitchItem@@AEAAJPEAUIApplicationView@@PEAUIThumbnailInteropDevice@@@Z @ 0x180164088 (-InititializeThumbnailFactory@AppViewSwitchItem@@AEAAJPEAUIApplicationView@@PEAUIThumbnailIntero.c)
 *     ?NotifyPropertyChanged@SwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@IEAAXW4SwitchItemProperty@23456@@Z @ 0x180165A5C (-NotifyPropertyChanged@SwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 *     ?InitializeSwitchItemBase@SwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UEAAJXZ @ 0x180165B60 (-InitializeSwitchItemBase@SwitchItemBase@Common@Multitasking@Experiences@ComposableShell@Windows.c)
 *     ?AppViewIconFactory_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x1801662B8 (-AppViewIconFactory_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEB.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewSwitchItem::RuntimeClassInitialize(
        RTL_SRWLOCK *this,
        struct IApplicationView *a2,
        struct IApplicationViewIconLoader *a3,
        struct IThumbnailInteropDevice *a4)
{
  int v8; // eax
  const struct _GUID *v9; // r8
  unsigned int v10; // ebp
  int v11; // eax
  void *v12; // r14
  PVOID Ptr; // r15
  int v14; // eax
  PVOID v15; // rcx
  PVOID v16; // rcx
  void *v17; // rcx
  void *v19; // [rsp+20h] [rbp-38h] BYREF
  PSRWLOCK SRWLock[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  v8 = WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase::InitializeSwitchItemBase((WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase *)this);
  v10 = v8;
  if ( v8 >= 0 )
  {
    v19 = 0LL;
    v11 = AppViewIconFactory_CreateInstance(a2, a3, v9, &v19);
    v10 = v11;
    if ( v11 >= 0 )
    {
      v12 = v19;
      wil::srwlock::lock_exclusive(this + 4, SRWLock);
      Ptr = this[10].Ptr;
      this[10].Ptr = v12;
      if ( v12 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 8LL))(v12);
      if ( Ptr )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      if ( SRWLock[0] )
        ReleaseSRWLockExclusive(SRWLock[0]);
      WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase::NotifyPropertyChanged(
        this,
        5LL);
      v14 = AppViewSwitchItem::InititializeThumbnailFactory((AppViewSwitchItem *)this, a2, a4);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x30,
          (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitem.cpp",
          (const char *)(unsigned int)v14);
      if ( this[23].Ptr != a2 )
      {
        if ( a2 )
          (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
        v15 = this[23].Ptr;
        this[23].Ptr = a2;
        if ( v15 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v15 + 16LL))(v15);
      }
      LOBYTE(this[25].Ptr) = 0;
      if ( this[24].Ptr != a4 )
      {
        if ( a4 )
          (*(void (__fastcall **)(struct IThumbnailInteropDevice *))(*(_QWORD *)a4 + 8LL))(a4);
        v16 = this[24].Ptr;
        this[24].Ptr = a4;
        if ( v16 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v16 + 16LL))(v16);
      }
      v10 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2D,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitem.cpp",
        (const char *)(unsigned int)v11);
    }
    v17 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2A,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitem.cpp",
      (const char *)(unsigned int)v8);
  }
  return v10;
}
