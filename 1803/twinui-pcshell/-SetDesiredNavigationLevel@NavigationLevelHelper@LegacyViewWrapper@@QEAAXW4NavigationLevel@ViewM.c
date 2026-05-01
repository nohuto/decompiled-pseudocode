/*
 * XREFs of ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801E3620
 * Callers:
 *     ?v_SetDesiredNavigationLevel@LegacyViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801E29D0 (-v_SetDesiredNavigationLevel@LegacyViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800EFD10 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18010894C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z @ 0x1801E2730 (-SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyViewWrapper@@AEBAKXZ @ 0x1801E33FC (-GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyViewWrapper@@AEBAKXZ.c)
 *     ?GetNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x1801E3424 (-GetNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEBA-AW4NavigationLevel@ViewManager.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA?AW4Visibility@@XZ @ 0x1801E3494 (-GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA-AW4Visibility@@XZ.c)
 */

__int64 __fastcall LegacyViewWrapper::NavigationLevelHelper::SetDesiredNavigationLevel(__int64 a1)
{
  int NavigationLevel; // r14d
  int Visibility; // ebp
  __m128i si128; // xmm1
  __int64 v5; // r8
  int v6; // edi
  int v7; // edx
  int v8; // esi
  PTP_TIMER ThreadpoolTimer; // rax
  PTP_TIMER v10; // r10
  struct _TP_TIMER *v11; // rcx
  __int64 result; // rax
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v14[3]; // [rsp+28h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  NavigationLevel = LegacyViewWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)a1);
  Visibility = LegacyViewWrapper::NavigationLevelHelper::GetVisibility((unsigned int *)a1);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(_DWORD *)a1 = v5;
  v14[0] = _mm_load_si128((const __m128i *)&_xmm);
  v14[2] = _mm_load_si128((const __m128i *)&_xmm);
  v14[1] = si128;
  v6 = *((_DWORD *)v14 + 2 * v5 + 1);
  v8 = LegacyViewWrapper::NavigationLevelHelper::GetVisibility((unsigned int *)a1);
  if ( v7 > v6 )
  {
    if ( *(_DWORD *)(a1 + 4) > v7 )
      goto LABEL_13;
    if ( *(_QWORD *)(a1 + 8)
      || (ThreadpoolTimer = CreateThreadpoolTimer(
                              (PTP_TIMER_CALLBACK)lambda_0d87a18e5f704446e4cb6a14906b73a9_::_lambda_invoker_cdecl_,
                              (PVOID)a1,
                              0LL),
          (*(_QWORD *)(a1 + 8) = ThreadpoolTimer) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)(-10000LL
                                    * (unsigned int)LegacyViewWrapper::NavigationLevelHelper::GetDebounceDurationInMilliseconds((LegacyViewWrapper::NavigationLevelHelper *)a1));
      SetThreadpoolTimer(v10, &pftDueTime, 0, 0);
      goto LABEL_13;
    }
    wil::details::in1diag3::Log_Hr(
      retaddr,
      128LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacyviewwrapper.navigationlevelhelper.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_12;
  }
  if ( v7 < v6 && *(_DWORD *)(a1 + 4) <= v6 )
  {
    v11 = *(struct _TP_TIMER **)(a1 + 8);
    if ( v11 && IsThreadpoolTimerSet(v11) )
      SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 8), 0LL, 0, 0);
LABEL_12:
    *(_DWORD *)(a1 + 4) = v6;
  }
LABEL_13:
  if ( Visibility != v8 )
    LegacyViewWrapper::SendVisibilityToWindow(a1 - 552, v8);
  result = LegacyViewWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)a1);
  if ( *(_DWORD *)(a1 - 396) )
  {
    if ( (_DWORD)result != NavigationLevel )
      return ViewWrapperBase::NavigateInternal(a1 - 544, result);
  }
  return result;
}
