/*
 * XREFs of ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180028DBC
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180028D50 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180028F44 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x180028F90 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180029408 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800294A4 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N@Z @ 0x18002A2DC (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?GetShared@?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFeatureStateData@23@XZ @ 0x18002A31C (-GetShared@-$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFe.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18002A990 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800ABF48 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 */

void __fastcall wil::details::FeatureStateManager::RecordFeatureUsage(
        _BYTE *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v8; // rsi
  int v9; // eax
  char v10; // bl
  int v11; // eax
  PTP_TIMER ThreadpoolTimer; // rax
  __int64 Shared; // rsi
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  if ( *a1 )
  {
    if ( !*((_QWORD *)a1 + 3) )
    {
      Shared = wil::details_abi::ProcessLocalStorage<wil::details_abi::FeatureStateData>::GetShared(a1 + 8);
      wil::srwlock::lock_exclusive(a1 + 32, &SRWLock);
      if ( !*((_QWORD *)a1 + 3) )
        *((_QWORD *)a1 + 3) = Shared;
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    v8 = *((_QWORD *)a1 + 3);
    if ( v8 )
    {
      if ( a3 == 254 )
      {
        wil::details_abi::FeatureStateData::RecordUsage(*((wil::details_abi::FeatureStateData **)a1 + 3));
        v10 = 1;
      }
      else
      {
        if ( a3 >= 0xC8 && ((int)a3 < 256 || a3 >= 0x200) )
          return;
        wil::srwlock::lock_exclusive(*((_QWORD *)a1 + 3), &SRWLock);
        if ( a3 <= 7 && (v9 = 204, _bittest(&v9, a3)) || a3 - 256 <= 0x7F )
        {
          wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage(
            v8 + 8,
            a3,
            a2);
          v10 = *(_BYTE *)(v8 + 64);
        }
        else
        {
          v10 = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
                  v8 + 72,
                  a3,
                  a2,
                  a4);
        }
        if ( SRWLock )
          ReleaseSRWLockExclusive(SRWLock);
      }
      if ( v10 && !wil::details::g_processShutdownInProgress )
      {
        v11 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
        if ( wil::details::g_pfnRtlDllShutdownInProgress )
        {
          if ( (char *)wil::details::g_pfnRtlDllShutdownInProgress == (char *)wil::details::RtlDllShutdownInProgress )
            LOBYTE(v11) = wil::details::RtlDllShutdownInProgress((wil::details *)wil::details::RtlDllShutdownInProgress);
          else
            LOBYTE(v11) = wil::details::g_pfnRtlDllShutdownInProgress();
          v11 = (unsigned __int8)v11;
        }
        if ( !v11 )
        {
          wil::srwlock::lock_exclusive(a1 + 32, &SRWLock);
          if ( !a1[88] )
          {
            if ( !*((_QWORD *)a1 + 10) )
            {
              ThreadpoolTimer = CreateThreadpoolTimer(
                                  lambda_4acbc82402014b2d4c356edc25e0df58_::_lambda_invoker_cdecl_,
                                  a1,
                                  0LL);
              wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
                a1 + 80,
                ThreadpoolTimer);
            }
            wil::details::EnsureCoalescedTimer_SetTimer(a1 + 80, a1 + 88);
          }
          if ( SRWLock )
            ReleaseSRWLockExclusive(SRWLock);
        }
      }
    }
  }
}
