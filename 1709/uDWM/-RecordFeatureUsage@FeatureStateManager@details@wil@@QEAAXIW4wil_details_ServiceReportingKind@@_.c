/*
 * XREFs of ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180031838
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180031720 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18003179C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1800318F0 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180031A18 (-RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N@Z @ 0x180036770 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800367B0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 */

void __fastcall wil::details::FeatureStateManager::RecordFeatureUsage(
        RTL_SRWLOCK *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  wil *v8; // rcx
  PTP_TIMER ThreadpoolTimer; // rax

  if ( LOBYTE(a1->Ptr)
    && wil::details::FeatureStateManager::EnsureStateData(a1)
    && (unsigned __int8)wil::details_abi::FeatureStateData::RecordFeatureUsage(a1[3].Ptr, a2, a3, a4)
    && !wil::ProcessShutdownInProgress(v8) )
  {
    AcquireSRWLockExclusive(a1 + 4);
    if ( !LOBYTE(a1[6].Ptr) )
    {
      if ( !a1[5].Ptr )
      {
        ThreadpoolTimer = CreateThreadpoolTimer(
                            lambda_4acbc82402014b2d4c356edc25e0df58_::_lambda_invoker_cdecl_,
                            a1,
                            0LL);
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
          &a1[5],
          ThreadpoolTimer);
      }
      wil::details::EnsureCoalescedTimer_SetTimer(&a1[5], &a1[6]);
    }
    if ( a1 != (RTL_SRWLOCK *)-32LL )
      ReleaseSRWLockExclusive(a1 + 4);
  }
}
