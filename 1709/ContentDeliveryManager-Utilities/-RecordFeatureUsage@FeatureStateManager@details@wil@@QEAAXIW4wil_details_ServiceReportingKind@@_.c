/*
 * XREFs of ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18000A3E4
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18000AC20 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18000A298 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18000A640 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?EnsureTimerUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x18000A6D8 (-EnsureTimerUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180014620 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180014650 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureStateManager::RecordFeatureUsage(
        _BYTE *a1,
        unsigned int a2,
        int a3,
        unsigned int a4)
{
  unsigned __int64 v5; // rbx
  __int64 v8; // rdi
  int v9; // eax
  char v10; // bl
  int v11; // eax

  v5 = a3;
  if ( *a1 && wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)a1) )
  {
    v8 = *((_QWORD *)a1 + 3);
    if ( (_DWORD)v5 == 254 )
    {
      wil::details_abi::FeatureStateData::RecordUsage(*((PSRWLOCK *)a1 + 3));
      v10 = 1;
    }
    else
    {
      if ( v5 >= 0xC8 && ((int)v5 < 256 || v5 >= 0x200) )
        return;
      AcquireSRWLockExclusive(*((PSRWLOCK *)a1 + 3));
      if ( (unsigned int)v5 <= 7 && (v9 = 204, _bittest(&v9, v5)) || (unsigned int)(v5 - 256) <= 0x7F )
      {
        wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage(
          v8 + 8,
          (unsigned int)v5,
          a2);
        v10 = *(_BYTE *)(v8 + 64);
      }
      else
      {
        v10 = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
                v8 + 72,
                (unsigned int)v5,
                a2,
                a4);
      }
      if ( v8 )
        ReleaseSRWLockExclusive((PSRWLOCK)v8);
    }
    if ( v10 && !wil::details::g_processShutdownInProgress )
    {
      v11 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
      if ( wil::details::g_pfnRtlDllShutdownInProgress )
        v11 = wil::details::g_pfnRtlDllShutdownInProgress();
      if ( !v11 )
      {
        AcquireSRWLockExclusive((PSRWLOCK)a1 + 4);
        wil::details::FeatureStateManager::EnsureTimerUnderLock(a1);
        if ( a1 != (_BYTE *)-32LL )
          ReleaseSRWLockExclusive((PSRWLOCK)a1 + 4);
      }
    }
  }
}
