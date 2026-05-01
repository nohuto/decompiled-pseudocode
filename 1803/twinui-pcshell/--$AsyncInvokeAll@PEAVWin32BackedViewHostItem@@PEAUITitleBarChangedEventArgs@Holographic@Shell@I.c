/*
 * XREFs of ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@@PEAUITitleBarChangedEventArgs@Holographic@Shell@Internal@Windows@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@@AEBQEAUITitleBarChangedEventArgs@Holographic@Shell@Internal@Windows@@@Z @ 0x1801B44E4
 * Callers:
 *     ?_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@@AEAAJXZ @ 0x1801B9B10 (-_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@IEAAKXZ.c)
 *     wistd::function_long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs_____ptr64______ptr64)_::operator___lambda_1b6451e4c080ccabeb3922fbf3bb257d___ @ 0x1801B441C (wistd--function_long___cdecl(Windows--Foundation--ITypedEventHandler_Windows--Inter_ea_1801B441C.c)
 *     _lambda_1b6451e4c080ccabeb3922fbf3bb257d_::_lambda_1b6451e4c080ccabeb3922fbf3bb257d_ @ 0x1801B563C (_lambda_1b6451e4c080ccabeb3922fbf3bb257d_--_lambda_1b6451e4c080ccabeb3922fbf3bb257d_.c)
 *     _lambda_1b6451e4c080ccabeb3922fbf3bb257d_::__lambda_1b6451e4c080ccabeb3922fbf3bb257d_ @ 0x1801B5E4C (_lambda_1b6451e4c080ccabeb3922fbf3bb257d_--__lambda_1b6451e4c080ccabeb3922fbf3bb257d_.c)
 *     ?DoAsyncInvoke@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJ$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Z@wistd@@@Z @ 0x1801B6FA0 (-DoAsyncInvoke@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Int.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Win32BackedViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>(
        PVOID Parameter,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rax
  _QWORD *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v16; // [rsp+28h] [rbp-59h] BYREF
  __int64 v17; // [rsp+30h] [rbp-51h] BYREF
  __int64 v18; // [rsp+38h] [rbp-49h] BYREF
  __int64 v19; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v20[16]; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v21[14]; // [rsp+58h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v3 = *a3;
  v21[13] = 0LL;
  v16 = v3;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v16);
  v16 = 0LL;
  v19 = v3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  v6 = *a2;
  v17 = v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 96);
    while ( v7 >= 0 )
    {
      if ( (_DWORD)v7 != 0x7FFFFFFF )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 96), v7 + 1, v7);
        if ( v8 != v7 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v7 + 16),
      (volatile int *)v6);
  }
LABEL_8:
  v9 = v17;
  v17 = 0LL;
  v18 = v9;
  Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::InternalRelease(&v17);
  v10 = (_QWORD *)lambda_1b6451e4c080ccabeb3922fbf3bb257d_::_lambda_1b6451e4c080ccabeb3922fbf3bb257d_(v20, &v18, &v19);
  wistd::function_long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs_____ptr64______ptr64__::operator___lambda_1b6451e4c080ccabeb3922fbf3bb257d___(
    v21,
    v10);
  lambda_1b6451e4c080ccabeb3922fbf3bb257d_::__lambda_1b6451e4c080ccabeb3922fbf3bb257d_(v20);
  Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v11 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::DoAsyncInvoke(Parameter);
  v13 = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161F,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v11);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v21,
    v12);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v21,
    v14);
  return v13;
}
