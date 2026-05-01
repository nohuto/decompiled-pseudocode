/*
 * XREFs of ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013BF4C
 * Callers:
 *     ?v_SetDesiredNavigationLevel@LegacyViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013ADD0 (-v_SetDesiredNavigationLevel@LegacyViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180026834 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z @ 0x18013B09C (-SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x18013BEDC (-GetNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEBA-AW4NavigationLevel@ViewManager.c)
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180141554 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall LegacyViewWrapper::NavigationLevelHelper::SetDesiredNavigationLevel(unsigned int *a1)
{
  int NavigationLevel; // eax
  __m128i si128; // xmm1
  __int64 v4; // rcx
  int v5; // r15d
  __int64 v6; // r8
  bool v7; // sf
  bool v8; // of
  int v9; // r14d
  signed int v10; // edx
  signed int v11; // edi
  unsigned int v12; // esi
  PTP_TIMER ThreadpoolTimer; // rax
  __int64 v14; // rax
  struct _TP_TIMER *v15; // rcx
  struct _TP_TIMER *v16; // rcx
  __int64 result; // rax
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-40h] BYREF
  __m128i v19; // [rsp+28h] [rbp-38h]
  __m128i v20; // [rsp+38h] [rbp-28h]
  __m128i v21; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  NavigationLevel = LegacyViewWrapper::NavigationLevelHelper::GetNavigationLevel(a1);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v4 = *a1;
  v5 = NavigationLevel;
  v19 = _mm_load_si128((const __m128i *)&_xmm);
  *a1 = v6;
  v21 = _mm_load_si128((const __m128i *)&_xmm);
  v20 = si128;
  v8 = __OFSUB__(v19.m128i_i32[2 * v4 + 1], 2);
  v7 = v19.m128i_i32[2 * v4 + 1] - 2 < 0;
  v19 = _mm_load_si128((const __m128i *)&_xmm);
  v9 = v7 == v8;
  v20 = si128;
  v10 = v19.m128i_i32[2 * v4 + 1];
  v20 = si128;
  v11 = v19.m128i_i32[2 * v6 + 1];
  v20 = si128;
  v12 = v19.m128i_i32[2 * v6 + 1] >= 2;
  if ( v10 <= v11 )
  {
    if ( v10 >= v11 || (int)a1[1] > v11 )
      goto LABEL_18;
    v16 = (struct _TP_TIMER *)*((_QWORD *)a1 + 1);
    if ( v16 && IsThreadpoolTimerSet(v16) )
      SetThreadpoolTimer(*((PTP_TIMER *)a1 + 1), 0LL, 0, 0);
LABEL_17:
    a1[1] = v11;
    goto LABEL_18;
  }
  if ( (int)a1[1] > v10 )
    goto LABEL_18;
  if ( !*((_QWORD *)a1 + 1) )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_0d87a18e5f704446e4cb6a14906b73a9_::_lambda_invoker_cdecl_, a1, 0LL);
    *((_QWORD *)a1 + 1) = ThreadpoolTimer;
    if ( !ThreadpoolTimer )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x80,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacyviewwrapper.navigationlevelhelper.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_17;
    }
  }
  if ( a1[1] == 1 )
  {
    v14 = *((_BYTE *)a1 + 20) != 0 ? 10000 : 2000;
  }
  else if ( a1[1] == 2 )
  {
    v14 = 300LL;
  }
  else
  {
    v14 = 0LL;
  }
  v15 = (struct _TP_TIMER *)*((_QWORD *)a1 + 1);
  pftDueTime = (struct _FILETIME)(-10000 * v14);
  SetThreadpoolTimer(v15, &pftDueTime, 0, 0);
LABEL_18:
  if ( v9 != v12 )
    LegacyViewWrapper::SendVisibilityToWindow((__int64)(a1 - 138), v12);
  result = LegacyViewWrapper::NavigationLevelHelper::GetNavigationLevel(a1);
  if ( *(a1 - 97) )
  {
    if ( (_DWORD)result != v5 )
      return ViewWrapperBase::NavigateInternal(a1 - 136, (unsigned int)result);
  }
  return result;
}
