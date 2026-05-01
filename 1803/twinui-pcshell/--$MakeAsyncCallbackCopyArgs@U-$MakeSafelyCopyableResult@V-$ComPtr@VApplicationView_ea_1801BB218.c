/*
 * XREFs of ??$MakeAsyncCallbackCopyArgs@U?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@wil@@AEB$$T@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@CAJAEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Z@wistd@@$$QEAU?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@1@AEB$$T@Z @ 0x1801BB218
 * Callers:
 *     ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@$$T@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEB$$T@Z @ 0x1801BAA18 (--$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@$$T@-$AsyncEventSourceT@U-$ITypedEventH.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall ___MakeAsyncCallbackCopyArgs_U__MakeSafelyCopyableResult_V__ComPtr_VApplicationViewBackedViewHostItem___WRL_Microsoft__PEAVApplicationViewBackedViewHostItem___details_wil__AEB__T___AsyncEventSourceT_U__ITypedEventHandler_PEAUIViewHostItem_Holographic_Shell_Internal_Windows__PEAUIInspectable___Foundation_Windows__VGitEventSourceSupportsAgile_Internal_3_U__InvokeModeOptions__01_WRL_Microsoft___00Uerr_returncode_policy_wil___wil__CAJAEAV__function___A6AJPEAU__ITypedEventHandler_PEAUIViewHostItem_Holographic_Shell_Internal_Windows__PEAUIInspectable___Foundation_Windows___Z_wistd____QEAU__MakeSafelyCopyableResult_V__ComPtr_VApplicationViewBackedViewHostItem___WRL_Microsoft__PEAVApplicationViewBackedViewHostItem___details_1_AEB__T_Z(
        _QWORD *a1,
        volatile int *a2,
        __int64 *a3)
{
  __int64 v3; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v8; // rsi
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)a2;
  v10[0] = v3;
  if ( v3 )
  {
    v6 = *(_QWORD *)(v3 + 96);
    while ( 1 )
    {
      a2 = (volatile int *)((unsigned __int64)v6 >> 63);
      if ( v6 < 0 )
        break;
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 96), v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v6 + 16), a2);
  }
LABEL_8:
  v8 = *a3;
  v10[1] = v8;
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)a1,
    (__int64)a2);
  *a1 = off_180320B68;
  a1[1] = 0LL;
  if ( a1 + 1 != v10 )
  {
    v10[0] = 0LL;
    a1[1] = v3;
  }
  a1[2] = v8;
  a1[13] = a1;
  Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::InternalRelease(v10);
  return 0LL;
}
