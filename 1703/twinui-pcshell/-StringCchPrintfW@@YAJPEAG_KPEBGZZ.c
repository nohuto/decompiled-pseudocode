/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180002A54
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000575C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x1800219FC (-s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180029DB0 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18004F18C (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?RuntimeClassInitialize@CGlobals@ApplicationViewManagement@@QEAAJPEAVCApplicationViewManager@@@Z @ 0x18007A50C (-RuntimeClassInitialize@CGlobals@ApplicationViewManagement@@QEAAJPEAVCApplicationViewManager@@@Z.c)
 *     ?ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAH@Z @ 0x1800CAEE0 (-ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAH@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x18011D3C8 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 *     ?GetDesktopUniqueName@@YAXPEBGPEAGK@Z @ 0x18016DCDC (-GetDesktopUniqueName@@YAXPEBGPEAGK@Z.c)
 *     ?CreateComponentEventHandles@@YAJW4_CUI_VIEW_EVENT_TYPE@@IIW4EventOptions@wil@@PEAPEAX@Z @ 0x1801788B8 (-CreateComponentEventHandles@@YAJW4_CUI_VIEW_EVENT_TYPE@@IIW4EventOptions@wil@@PEAPEAX@Z.c)
 *     ?GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z @ 0x18017C6E8 (-GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z.c)
 *     _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0 @ 0x1801977A2 (_wil--details--RecognizeCaughtExceptionFromCallback_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$1 @ 0x18019785E (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x180197928 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x180197976 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$5.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$6 @ 0x18019F6A7 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$6.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$10 @ 0x18019F7B9 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$10.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$11 @ 0x18019F807 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$11.c)
 * Callees:
 *     _vsnwprintf @ 0x180194E70 (_vsnwprintf.c)
 */

__int64 StringCchPrintfW(wchar_t *Buffer, __int64 a2, const unsigned __int16 *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnwprintf(Buffer, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      Buffer[v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      Buffer[v5] = 0;
    }
  }
  return (unsigned int)v4;
}
