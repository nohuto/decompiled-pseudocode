/*
 * XREFs of ?_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BDCA4
 * Callers:
 *     ?Hide@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800BAD30 (-Hide@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800BCFE4 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180098068 (-Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_StartDeferredSuspensionTimer(struct _TP_TIMER **this)
{
  const struct _TlgProvider_t *v2; // rax
  void *v3; // rdx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v5; // r9
  struct _TP_TIMER *v6; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = CortanaProactiveLogging::Provider();
  if ( *(_DWORD *)v2 > 4u )
    TlgWrite(v2, &unk_1801F85C9, 0LL, 0LL, 2u, &pData);
  v3 = (void *)*((unsigned int *)this + 110);
  pftDueTime = (struct _FILETIME)-50000000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(lambda_426d63d8a8f31d1aac1a208ad6758ad1_::_lambda_invoker_cdecl_, v3, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 56,
    ThreadpoolTimer);
  v6 = this[56];
  if ( !v6 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x55A,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
             v5);
  SetThreadpoolTimer(v6, &pftDueTime, 0, 0);
  return 0LL;
}
