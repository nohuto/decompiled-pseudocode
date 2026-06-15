/*
 * XREFs of ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180006664
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180006D50 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180004384 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18000700C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     memset_0 @ 0x180035A50 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180035AB6 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        RTL_SRWLOCK *pv,
        int a2,
        union wil_details_FeaturePropertyCache *a3)
{
  int v6; // eax
  __int64 v7; // rdx
  _OWORD *Ptr; // rcx
  signed __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _TP_TIMER **v12; // rdi
  struct _TP_TIMER *v13; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  __int128 v15; // [rsp+20h] [rbp-18h]
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  if ( LOBYTE(pv->Ptr) && !wil::details::g_processShutdownInProgress )
  {
    v6 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v6 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( !v6 )
    {
      AcquireSRWLockExclusive(pv + 1);
      LODWORD(v15) = a2;
      *((_QWORD *)&v15 + 1) = a3;
      if ( !wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&pv[6], 0x10uLL) )
        goto LABEL_14;
      Ptr = pv[7].Ptr;
      v9 = (char *)pv[8].Ptr - (char *)Ptr;
      if ( Ptr )
      {
        if ( (v9 & (unsigned __int64)-(__int64)(Ptr < pv[8].Ptr)) >= 0x10 )
        {
          *Ptr = v15;
LABEL_13:
          pv[7].Ptr = (char *)pv[7].Ptr + 16;
LABEL_14:
          v12 = (struct _TP_TIMER **)&pv[2];
          if ( !LOBYTE(pv[3].Ptr) )
          {
            v13 = *v12;
            if ( *v12
              || (ThreadpoolTimer = CreateThreadpoolTimer(
                                      lambda_d920a0a3d4a387d1d77e21b11a8b43bc_::_lambda_invoker_cdecl_,
                                      pv,
                                      0LL),
                  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
                    &pv[2],
                    ThreadpoolTimer),
                  (v13 = *v12) != 0LL) )
            {
              pftDueTime = (struct _FILETIME)-3000000000LL;
              SetThreadpoolTimer(v13, &pftDueTime, 0, 0x124F8u);
              LOBYTE(pv[3].Ptr) = 1;
            }
          }
          if ( pv != (RTL_SRWLOCK *)-8LL )
            ReleaseSRWLockExclusive(pv + 1);
          return;
        }
        memset_0(Ptr, 0, v9 & -(__int64)(Ptr < pv[8].Ptr));
        *(_DWORD *)_o__errno(v11, v10) = 34;
      }
      else
      {
        *(_DWORD *)_o__errno(0LL, v7) = 22;
      }
      invalid_parameter_noinfo();
      goto LABEL_13;
    }
  }
}
