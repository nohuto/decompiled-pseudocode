/*
 * XREFs of ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180086778
 * Callers:
 *     ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18005D0A0 (-ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VI.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18007AE68 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     memcpy_s @ 0x180086D40 (memcpy_s.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180086DE0 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x180095188 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1801004EC (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        char *pv,
        int a2,
        union wil_details_FeaturePropertyCache *a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int Source; // [rsp+20h] [rbp-18h] BYREF
  union wil_details_FeaturePropertyCache *v11; // [rsp+28h] [rbp-10h]

  if ( *pv && !wil::ProcessShutdownInProgress((wil *)pv) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)pv + 1);
    v11 = a3;
    v6 = *((_QWORD *)pv + 7) - *((_QWORD *)pv + 6);
    v7 = *((_QWORD *)pv + 8) - *((_QWORD *)pv + 6);
    Source = a2;
    if ( v6 + 16 < v7 )
      goto LABEL_4;
    v8 = 16LL;
    if ( 2 * v7 > 0x10 )
      v8 = 2 * v7;
    if ( wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)(pv + 48), v8) )
    {
LABEL_4:
      memcpy_s(
        *((void *const *)pv + 7),
        (*((_QWORD *)pv + 8) - *((_QWORD *)pv + 7)) & -(__int64)(*((_QWORD *)pv + 7) < *((_QWORD *)pv + 8)),
        &Source,
        0x10uLL);
      *((_QWORD *)pv + 7) += 16LL;
    }
    if ( !pv[24] )
    {
      if ( !*((_QWORD *)pv + 2) )
      {
        ThreadpoolTimer = CreateThreadpoolTimer(
                            lambda_d920a0a3d4a387d1d77e21b11a8b43bc_::_lambda_invoker_cdecl_,
                            pv,
                            0LL);
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
          (struct _TP_TIMER **)pv + 2,
          ThreadpoolTimer);
      }
      wil::details::EnsureCoalescedTimer_SetTimer(pv + 16, pv + 24, 300000LL);
    }
    if ( pv != (char *)-8LL )
      ReleaseSRWLockExclusive((PSRWLOCK)pv + 1);
  }
}
