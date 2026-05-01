/*
 * XREFs of ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVFrameworkViewTypeSetEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEBQEAVFrameworkViewTypeSetEventArgs@@@Z @ 0x1801BAB20
 * Callers:
 *     ?RaiseFrameworkViewTypeSet@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1801BC270 (-RaiseFrameworkViewTypeSet@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1801AF274 (-InternalAddRef@-$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAsyncCallbackCopyArgs@U?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@wil@@U?$MakeSafelyCopyableResult@V?$ComPtr@VFrameworkViewTypeSetEventArgs@@@WRL@Microsoft@@PEAVFrameworkViewTypeSetEventArgs@@@23@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@CAJAEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@$$QEAU?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@1@$$QEAU?$MakeSafelyCopyableResult@V?$ComPtr@VFrameworkViewTypeSetEventArgs@@@WRL@Microsoft@@PEAVFrameworkViewTypeSetEventArgs@@@51@@Z @ 0x1801B5248 (--$MakeAsyncCallbackCopyArgs@U-$MakeSafelyCopyableResult@V-$ComPtr@VApplicationView_ea_1801B5248.c)
 *     ?DoAsyncInvoke@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJ$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Z@wistd@@@Z @ 0x1801B6FA0 (-DoAsyncInvoke@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Int.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E5C98 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<ApplicationViewBackedViewHostItem *,FrameworkViewTypeSetEventArgs *>(
        _QWORD *Parameter,
        volatile int *a2,
        __int64 *a3)
{
  __int64 v3; // r9
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v8; // rax
  __int64 v9; // r10
  int v10; // ebx
  unsigned __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v16; // [rsp+20h] [rbp-49h] BYREF
  __int64 v17; // [rsp+28h] [rbp-41h] BYREF
  __int64 v18; // [rsp+30h] [rbp-39h] BYREF
  __int64 v19; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v20[14]; // [rsp+40h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v3 = *a3;
  v20[13] = 0LL;
  v16 = v3;
  if ( v3 )
  {
    v6 = *(_QWORD *)(v3 + 56);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 56), v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v6 + 16), a2);
  }
LABEL_8:
  v8 = v16;
  v16 = 0LL;
  v19 = v8;
  Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v16);
  v17 = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::InternalAddRef(&v17);
  v17 = 0LL;
  v18 = v9;
  Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::InternalRelease(&v17);
  v10 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::MakeAsyncCallbackCopyArgs<wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>,ApplicationViewBackedViewHostItem *>,wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<FrameworkViewTypeSetEventArgs>,FrameworkViewTypeSetEventArgs *>>(
          v20,
          (volatile int *)&v18,
          &v19);
  Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v19);
  if ( v10 < 0 )
  {
    v11 = (unsigned int)v10;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161F,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)v11);
    goto LABEL_13;
  }
  v12 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::DoAsyncInvoke(
          Parameter,
          (__int64)v20);
  v10 = v12;
  if ( v12 < 0 )
  {
    v11 = (unsigned int)v12;
    goto LABEL_12;
  }
LABEL_13:
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v20,
    v13);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v20,
    v14);
  return (unsigned int)v10;
}
