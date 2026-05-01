/*
 * XREFs of wil::details::functor_wrapper_void__lambda_0cb0a454b9f2570e0892a1dab0e748f4__&___ptr64_::Run @ 0x180084B40
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180084250 (-Release@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithGITSite@@U-$InterfaceList@.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_c2cf7c6b9060da334c300199a815b5d4___ @ 0x180084950 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_c2cf7c6b9060da334c300199a815b5d4___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::details::functor_wrapper_void__lambda_0cb0a454b9f2570e0892a1dab0e748f4______ptr64_::Run(
        __int64 a1)
{
  int **v1; // r8
  int *v2; // rcx
  int v3; // edx
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  signed __int32 v7; // eax
  signed __int32 v8; // eax
  int v9; // edi
  IUnknown **v10; // rax
  int v11; // edi
  __int64 v12; // rcx
  __int64 v14; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h]
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v1 = *(int ***)(a1 + 8);
  v2 = v1[1];
  v3 = **v1;
  v4 = v3 ^ v2[39];
  if ( v4 )
  {
    v2[39] = v3;
    if ( (v4 & 0xF) != 0 )
    {
      v5 = (__int64)v1[1];
      v6 = *(_DWORD *)(v5 + 156);
      if ( (v6 & 1) == 0 || (v6 & 4) == 0 || (v6 & 2) == 0 || (v6 & 8) == 0 )
      {
        v16 = (__int64)v1[1];
        if ( v5 )
        {
          do
            v7 = *(_DWORD *)(v5 + 132);
          while ( v7 != 0x7FFFFFFF
               && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 132), v7 + 1, v7) );
          v5 = v16;
        }
        v14 = v5;
        if ( v5 )
        {
          do
            v8 = *(_DWORD *)(v5 + 132);
          while ( v8 != 0x7FFFFFFF
               && v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 132), v8 + 1, v8) );
          v5 = v16;
        }
        v9 = v1[1][40];
        v10 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_c2cf7c6b9060da334c300199a815b5d4___(&v17);
        v11 = Windows::Internal::ComTaskPool::RunTask(0, 2u, v9, 0, *v10, 0LL);
        v12 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        if ( v14 )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v14);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x121,
            (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
            (const char *)(unsigned int)v11);
        if ( v5 )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
      }
    }
  }
  return 0LL;
}
