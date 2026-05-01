/*
 * XREFs of ?RaiseCollectionChangedEvent@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@IEAAXW4SwitchItemCollectionChangedEventType@23456@PEAUISwitchItem@23456@@Z @ 0x180160D5C
 * Callers:
 *     ?OnApplicationViewChanged@AppViewSwitchItemDataSource@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18015CF30 (-OnApplicationViewChanged@AppViewSwitchItemDataSource@@UEAAJPEAUIApplicationView@@W4APPLICATION_.c)
 *     ?InternalAddSwitchItem@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@IEAAXPEAUISwitchItem@23456@@Z @ 0x180160E8C (-InternalAddSwitchItem@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18005F9D4 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E36D0 (-Release@-$RuntimeClass@U-$InterfaceList@UISwitchItemCollectionChangedEventArgs@Common@Multitask.c)
 *     ??$MakeOrThrow@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPEAUISwitchItem@23456@AEAW4SwitchItemCollectionChangedEventType@23456@@wil@@YA?AV?$ComPtr@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@AEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAW4SwitchItemCollectionChangedEventType@56789@@Z @ 0x180160CEC (--$MakeOrThrow@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableS.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataSourceBase::RaiseCollectionChangedEvent(
        RTL_SRWLOCK *a1,
        int a2,
        __int64 a3)
{
  volatile signed __int64 *v4; // r15
  PVOID Ptr; // rbx
  signed __int32 v6; // eax
  signed __int32 v7; // eax
  struct IUnknown **i; // rdi
  int v9; // eax
  int v10; // esi
  volatile signed __int64 *v11; // rcx
  volatile signed __int64 *v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+78h] [rbp+10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+20h] BYREF

  v14 = a3;
  v13 = a2;
  wil::MakeOrThrow<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem * &,enum WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventType &>(
    &v12,
    &v14,
    &v13);
  v4 = v12;
  Ptr = 0LL;
  wil::srwlock::lock_exclusive(a1 + 5, &SRWLock);
  if ( a1[4].Ptr )
  {
    Ptr = a1[4].Ptr;
    do
      v6 = *((_DWORD *)Ptr + 3);
    while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange((volatile signed __int32 *)Ptr + 3, v6 + 1, v6) );
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( Ptr )
  {
    do
      v7 = *((_DWORD *)Ptr + 3);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)Ptr + 3, v7 + 1, v7) );
    for ( i = (struct IUnknown **)*((_QWORD *)Ptr + 2); i != *((struct IUnknown ***)Ptr + 3); ++i )
    {
      v9 = ((__int64 (__fastcall *)(struct IUnknown *, RTL_SRWLOCK *, volatile signed __int64 *))(*i)->lpVtbl[1].QueryInterface)(
             *i,
             a1,
             v4);
      v10 = v9;
      if ( v9 < 0 )
      {
        RoTransformError((unsigned int)v9, 0LL, 0LL);
        if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            a1 + 4,
            *i);
      }
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)Ptr);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)Ptr);
  }
  v11 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v11);
  }
}
