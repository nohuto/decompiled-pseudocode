/*
 * XREFs of wistd::function_long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs_____ptr64______ptr64)_::operator___lambda_19c96ee671dc75efd0180bb3274076f4___ @ 0x1801BA898
 * Callers:
 *     ??$MakeAsyncCallbackCopyArgs@U?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@wil@@U?$MakeSafelyCopyableResult@V?$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@PEAVViewSizePreferencesChangedEventArgs@@@23@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@CAJAEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Z@wistd@@$$QEAU?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@1@$$QEAU?$MakeSafelyCopyableResult@V?$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@PEAVViewSizePreferencesChangedEventArgs@@@51@@Z @ 0x1801B52F8 (--$MakeAsyncCallbackCopyArgs@U-$MakeSafelyCopyableResult@V-$ComPtr@VApplicationView_ea_1801B52F8.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 */

_QWORD *__fastcall wistd::function_long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs_____ptr64______ptr64__::operator___lambda_19c96ee671dc75efd0180bb3274076f4___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi

  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)a1,
    (__int64)a2);
  *a1 = off_180320AA8;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[2] = 0LL;
  if ( a1 + 2 != v4 )
  {
    a1[2] = *v4;
    *v4 = 0LL;
  }
  a1[13] = a1;
  return a1;
}
