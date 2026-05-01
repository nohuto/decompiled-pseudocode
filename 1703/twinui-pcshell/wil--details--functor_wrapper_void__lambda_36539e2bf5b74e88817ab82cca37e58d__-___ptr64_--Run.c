/*
 * XREFs of wil::details::functor_wrapper_void__lambda_36539e2bf5b74e88817ab82cca37e58d__&___ptr64_::Run @ 0x180084D10
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180084250 (-Release@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithGITSite@@U-$InterfaceList@.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_057997b9bbf85cf4f9ee751d30e1f3a6___ @ 0x18008490C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_057997b9bbf85cf4f9ee751d30e1f3a6___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::details::functor_wrapper_void__lambda_36539e2bf5b74e88817ab82cca37e58d______ptr64_::Run(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  signed __int32 v3; // eax
  signed __int32 v4; // eax
  int v5; // edi
  IUnknown **v6; // rax
  int v7; // edi
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  if ( (**(_BYTE **)v1 & 0x20) != 0 )
  {
    v2 = *(_QWORD *)(v1 + 8);
    if ( v2 )
    {
      do
        v3 = *(_DWORD *)(v2 + 132);
      while ( v3 != 0x7FFFFFFF && v3 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 132), v3 + 1, v3) );
    }
    if ( v2 )
    {
      do
        v4 = *(_DWORD *)(v2 + 132);
      while ( v4 != 0x7FFFFFFF && v4 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 132), v4 + 1, v4) );
    }
    v5 = *(_DWORD *)(*(_QWORD *)(v1 + 8) + 160LL);
    v6 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_057997b9bbf85cf4f9ee751d30e1f3a6___(&v11);
    v7 = Windows::Internal::ComTaskPool::RunTask(0, 2u, v5, 0, *v6, 0LL);
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v2 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF9,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v7);
    if ( v2 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
  }
  return 0LL;
}
