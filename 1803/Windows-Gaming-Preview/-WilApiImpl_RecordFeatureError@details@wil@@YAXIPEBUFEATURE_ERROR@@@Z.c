/*
 * XREFs of ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x1800069E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x180005F2C (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180006324 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18000766C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureError(
        wil::details *this,
        struct FEATURE_ERROR *a2,
        const struct FEATURE_ERROR *a3)
{
  int v4; // edi
  int v5; // eax
  struct _TP_TIMER *v6; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  struct _FILETIME pftDueTime; // [rsp+70h] [rbp+18h] BYREF

  v4 = (int)this;
  if ( wil::details::g_featureStateManager )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook((unsigned int)this, 0LL, a2, 1, 0LL, 0LL, 0, 1uLL);
    if ( wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)&wil::details::g_featureStateManager)
      && wil::details_abi::FeatureStateData::RecordFeatureError(qword_18005D058, v4, a2)
      && !wil::details::g_processShutdownInProgress )
    {
      v5 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
      if ( wil::details::g_pfnRtlDllShutdownInProgress )
        v5 = wil::details::g_pfnRtlDllShutdownInProgress();
      if ( !v5 )
      {
        AcquireSRWLockExclusive(&stru_18005D060);
        if ( !HIBYTE(word_18005D080) )
        {
          v6 = pti;
          if ( pti
            || (ThreadpoolTimer = CreateThreadpoolTimer(
                                    lambda_2586d60923f8412dce879009b83555c3_::_lambda_invoker_cdecl_,
                                    &wil::details::g_featureStateManager,
                                    0LL),
                wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
                  &pti,
                  ThreadpoolTimer),
                (v6 = pti) != 0LL) )
          {
            pftDueTime = (struct _FILETIME)-3000000000LL;
            SetThreadpoolTimer(v6, &pftDueTime, 0, 0x124F8u);
            HIBYTE(word_18005D080) = 1;
          }
        }
        ReleaseSRWLockExclusive(&stru_18005D060);
      }
    }
  }
}
