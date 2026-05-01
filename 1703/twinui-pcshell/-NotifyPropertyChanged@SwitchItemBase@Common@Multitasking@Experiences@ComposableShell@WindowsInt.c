/*
 * XREFs of ?NotifyPropertyChanged@SwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@IEAAXW4SwitchItemProperty@23456@@Z @ 0x180165A5C
 * Callers:
 *     ?RuntimeClassInitialize@AppViewSwitchItem@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@@Z @ 0x180163AD8 (-RuntimeClassInitialize@AppViewSwitchItem@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewIconLo.c)
 *     ?SetFocus@AppViewSwitchItem@@UEAAX_N@Z @ 0x180164020 (-SetFocus@AppViewSwitchItem@@UEAAX_N@Z.c)
 *     ?InititializeThumbnailFactory@AppViewSwitchItem@@AEAAJPEAUIApplicationView@@PEAUIThumbnailInteropDevice@@@Z @ 0x180164088 (-InititializeThumbnailFactory@AppViewSwitchItem@@AEAAJPEAUIApplicationView@@PEAUIThumbnailIntero.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18005F9D4 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase::NotifyPropertyChanged(
        RTL_SRWLOCK *a1,
        unsigned int a2)
{
  RTL_SRWLOCK *v2; // r14
  RTL_SRWLOCK v5; // rbx
  signed __int32 v6; // eax
  signed __int32 v7; // eax
  struct IUnknown **i; // rdi
  int v9; // eax
  int v10; // esi
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1 + 13;
  v5.Ptr = 0LL;
  wil::srwlock::lock_exclusive(a1 + 14, &SRWLock);
  if ( v2->Ptr )
  {
    v5.Ptr = v2->Ptr;
    do
      v6 = *((_DWORD *)v5.Ptr + 3);
    while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange((volatile signed __int32 *)v5.Ptr + 3, v6 + 1, v6) );
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v5.Ptr )
  {
    do
      v7 = *((_DWORD *)v5.Ptr + 3);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)v5.Ptr + 3, v7 + 1, v7) );
    for ( i = (struct IUnknown **)*((_QWORD *)v5.Ptr + 2); i != *((struct IUnknown ***)v5.Ptr + 3); ++i )
    {
      v9 = ((__int64 (__fastcall *)(struct IUnknown *, RTL_SRWLOCK *, _QWORD))(*i)->lpVtbl[1].QueryInterface)(
             *i,
             a1,
             a2);
      v10 = v9;
      if ( v9 < 0 )
      {
        RoTransformError((unsigned int)v9, 0LL, 0LL);
        if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            v2,
            *i);
      }
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v5.Ptr);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v5.Ptr);
  }
}
