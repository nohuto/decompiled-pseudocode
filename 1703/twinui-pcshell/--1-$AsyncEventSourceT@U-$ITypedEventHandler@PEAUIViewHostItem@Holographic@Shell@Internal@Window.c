/*
 * XREFs of ??1?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E0D20
 * Callers:
 *     ??_GWin32BackedViewHostItem@@UEAAPEAXI@Z @ 0x1800E0740 (--_GWin32BackedViewHostItem@@UEAAPEAXI@Z.c)
 *     ??_GApplicationViewBackedViewHostItem@@UEAAPEAXI@Z @ 0x1800E0800 (--_GApplicationViewBackedViewHostItem@@UEAAPEAXI@Z.c)
 *     ??_EHolographicPositioner@@UEAAPEAXI@Z @ 0x1800E0A08 (--_EHolographicPositioner@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::~AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>(
        __int64 a1)
{
  struct _TP_WORK *v1; // rsi
  DWORD LastError; // ebx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  struct _TP_WORK *v5; // rbx
  volatile signed __int32 *v6; // rcx

  v1 = *(struct _TP_WORK **)(a1 + 40);
  if ( v1 )
  {
    LastError = GetLastError();
    WaitForThreadpoolWorkCallbacks(v1, 0);
    CloseThreadpoolWork(v1);
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 56);
  if ( v4 )
    (**v4)(v4, 1LL);
  v5 = *(struct _TP_WORK **)(a1 + 40);
  if ( v5 )
  {
    WaitForThreadpoolWorkCallbacks(*(PTP_WORK *)(a1 + 40), 0);
    CloseThreadpoolWork(v5);
  }
  if ( *(_QWORD *)(a1 + 32) )
    CoDecrementMTAUsage();
  v6 = *(volatile signed __int32 **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v6);
  }
}
