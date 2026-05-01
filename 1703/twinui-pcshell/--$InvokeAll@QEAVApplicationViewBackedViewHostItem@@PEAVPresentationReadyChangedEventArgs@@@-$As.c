/*
 * XREFs of ??$InvokeAll@QEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJ$$QEBQEAVApplicationViewBackedViewHostItem@@$$QEAPEAVPresentationReadyChangedEventArgs@@@Z @ 0x1800E3E40
 * Callers:
 *     ?put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z @ 0x1800E28F0 (-put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z.c)
 *     ?RaisePresentationNotReady@Win32BackedViewHostItem@@UEAAJXZ @ 0x1800E3030 (-RaisePresentationNotReady@Win32BackedViewHostItem@@UEAAJXZ.c)
 *     ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x1800E5DD0 (-put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z.c)
 *     ?RaisePresentationNotReady@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1800E6B70 (-RaisePresentationNotReady@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 *     ?OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersiveApplication@@W4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x1800E6FF0 (-OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersive.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18005F9D4 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::InvokeAll<ApplicationViewBackedViewHostItem * const,PresentationReadyChangedEventArgs *>(
        RTL_SRWLOCK *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // r15
  __int64 v5; // rsi
  RTL_SRWLOCK v6; // rbx
  signed __int32 v7; // eax
  signed __int32 v8; // eax
  struct IUnknown **v9; // rdi
  __int64 v10; // rbp
  int v11; // eax
  int v12; // esi
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
    v9 = (struct IUnknown **)*((_QWORD *)v6.Ptr + 2);
    if ( v9 != *((struct IUnknown ***)v6.Ptr + 3) )
    {
      v10 = (v5 + 40) & -(__int64)(v5 != 0);
      do
      {
        v11 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64))(*v9)->lpVtbl[1].QueryInterface)(
                *v9,
                v3,
                v10);
        v12 = v11;
        if ( v11 < 0 )
        {
          RoTransformError((unsigned int)v11, 0LL, 0LL);
          if ( v12 == -2147417848 || v12 == -2147023174 || v12 == -1996357631 )
            Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
              a1,
              *v9);
        }
        ++v9;
      }
      while ( v9 != *((struct IUnknown ***)v6.Ptr + 3) );
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v6.Ptr);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v6.Ptr);
  }
  return 0LL;
}
