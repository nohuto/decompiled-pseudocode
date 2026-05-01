/*
 * XREFs of ??$InvokeAll@QEAVApplicationViewBackedViewHostItem@@$$T@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJ$$QEBQEAVApplicationViewBackedViewHostItem@@$$QEA$$T@Z @ 0x1800DEC80
 * Callers:
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800D9E64 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DA250 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DA4AC (-_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DA590 (-_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DAC2C (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?EnterFullScreen@Win32BackedViewHostItem@@UEAAJXZ @ 0x1800E30D0 (-EnterFullScreen@Win32BackedViewHostItem@@UEAAJXZ.c)
 *     ?ExitFullScreen@Win32BackedViewHostItem@@UEAAJXZ @ 0x1800E3180 (-ExitFullScreen@Win32BackedViewHostItem@@UEAAJXZ.c)
 *     ?RaiseSizePreferencesChanged@ApplicationViewBackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@Z @ 0x1800E6AD0 (-RaiseSizePreferencesChanged@ApplicationViewBackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@.c)
 *     ?BindSizeToRectangle@ApplicationViewBackedViewHostItem@@UEAAJURect@Foundation@Windows@@@Z @ 0x1800E6C10 (-BindSizeToRectangle@ApplicationViewBackedViewHostItem@@UEAAJURect@Foundation@Windows@@@Z.c)
 *     ?EnterFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1800E6DE0 (-EnterFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 *     ?ExitFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1800E6E90 (-ExitFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 *     ?OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersiveApplication@@W4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x1800E6FF0 (-OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersive.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18005F9D4 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::InvokeAll<ApplicationViewBackedViewHostItem * const,std::nullptr_t>(
        RTL_SRWLOCK *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rbp
  __int64 v5; // r15
  RTL_SRWLOCK v6; // rbx
  signed __int32 v7; // eax
  signed __int32 v8; // eax
  struct IUnknown **i; // rdi
  int v10; // eax
  int v11; // esi
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a2;
  v5 = *a3;
  v6.Ptr = 0LL;
  wil::srwlock::lock_exclusive(a1 + 1, &SRWLock);
  if ( a1->Ptr )
  {
    v6.Ptr = a1->Ptr;
    do
      v7 = *((_DWORD *)v6.Ptr + 3);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)v6.Ptr + 3, v7 + 1, v7) );
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v6.Ptr )
  {
    do
      v8 = *((_DWORD *)v6.Ptr + 3);
    while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange((volatile signed __int32 *)v6.Ptr + 3, v8 + 1, v8) );
    for ( i = (struct IUnknown **)*((_QWORD *)v6.Ptr + 2); i != *((struct IUnknown ***)v6.Ptr + 3); ++i )
    {
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64))(*i)->lpVtbl[1].QueryInterface)(*i, v3, v5);
      v11 = v10;
      if ( v10 < 0 )
      {
        RoTransformError((unsigned int)v10, 0LL, 0LL);
        if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            a1,
            *i);
      }
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v6.Ptr);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v6.Ptr);
  }
  return 0LL;
}
