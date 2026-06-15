/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180006280
 * Callers:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180006248 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x1800018F4 (-RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x180005D8C (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180006014 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x1800065B0 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180006BA8 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180006C14 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800072B0 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180007320 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18005C160 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18008A9D4 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18008AB4C (-Destroy@-$DestroyThreadPoolTimer@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18008C304 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IG@Z @ 0x18008D7DC (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IG@Z.c)
 *     ?wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z @ 0x18008D96C (-wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18008D9A0 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, int a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // r14d
  unsigned int v5; // esi
  PSRWLOCK v6; // rbx
  int v7; // eax
  char Ptr; // di
  unsigned __int8 v9; // al
  unsigned __int64 Size; // rax
  __int16 v11; // r8
  __int16 v12; // r8
  char v13; // r9
  void *v14; // rbx
  void *v15; // rbx
  HANDLE v16; // rax
  struct _TP_TIMER *v17; // rdi
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v19; // rsi
  HANDLE ProcessHeap; // rax
  RTL_SRWLOCK *v21; // rax
  bool v22; // sf
  RTL_SRWLOCK *v23; // rbx
  RTL_SRWLOCK *v24; // rax
  DWORD LastError; // ebx
  _FILETIME pftDueTime; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v27; // [rsp+38h] [rbp-C8h] BYREF
  char v28; // [rsp+3Ah] [rbp-C6h]
  int v29; // [rsp+3Ch] [rbp-C4h]
  __int16 v30; // [rsp+40h] [rbp-C0h]
  __int128 v31; // [rsp+48h] [rbp-B8h]
  _BYTE v32[96]; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+C0h] [rbp-40h] BYREF
  char v34; // [rsp+C4h] [rbp-3Ch]
  __int16 v35; // [rsp+C6h] [rbp-3Ah]
  char v36; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  __int128 v39; // [rsp+E0h] [rbp-20h]
  LPVOID lpMem; // [rsp+F0h] [rbp-10h]
  __int16 v41; // [rsp+F8h] [rbp-8h]
  char v42; // [rsp+FAh] [rbp-6h]
  char v43[48]; // [rsp+100h] [rbp+0h] BYREF
  LPVOID v44; // [rsp+130h] [rbp+30h]
  char v45[48]; // [rsp+140h] [rbp+40h] BYREF
  void *v46; // [rsp+170h] [rbp+70h]

  v3 = a2;
  v4 = a3;
  v5 = (unsigned int)this;
  if ( (_DWORD)this )
  {
    if ( (_DWORD)a3 )
      goto LABEL_3;
  }
  else
  {
    if ( (_DWORD)a3 )
      goto LABEL_3;
    if ( !a2 )
    {
      if ( !wil::ProcessShutdownInProgress(this)
        && wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager) )
      {
        wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)&SRWLock[25], SRWLock);
      }
      return;
    }
  }
  if ( a2 != 254 )
  {
    if ( !g_wil_details_preventOnDemandStagingConfigReads
      && !(unsigned int)wil_details_StagingConfig_Load(v32, 0LL, a3, &v33) )
    {
      wil_details_StagingConfig_FireNotification((struct wil_details_StagingConfig *)v32, v5, v3);
      wil_details_StagingConfig_Free((struct wil_details_StagingConfig *)v32);
    }
    return;
  }
LABEL_3:
  if ( !wil::details::g_featureStateManager )
    return;
  v6 = SRWLock;
  if ( !SRWLock )
  {
    v21 = (RTL_SRWLOCK *)qword_18014BF50;
    if ( !qword_18014BF50 )
    {
      pftDueTime = 0LL;
      v22 = (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
                   qword_18014BF48,
                   &pftDueTime) < 0;
      v21 = (RTL_SRWLOCK *)qword_18014BF50;
      if ( v22 )
        goto LABEL_50;
      if ( !qword_18014BF50 )
      {
        v21 = (RTL_SRWLOCK *)pftDueTime;
        qword_18014BF50 = (LPVOID)pftDueTime;
LABEL_50:
        v23 = 0LL;
        if ( !v21 )
          goto LABEL_52;
      }
    }
    v23 = v21 + 4;
LABEL_52:
    AcquireSRWLockExclusive(&stru_18014BF60);
    v24 = SRWLock;
    if ( !SRWLock )
      v24 = v23;
    SRWLock = v24;
    ReleaseSRWLockExclusive(&stru_18014BF60);
    v6 = SRWLock;
    if ( !SRWLock )
      return;
  }
  if ( (_DWORD)v3 == 254 )
  {
    v33 = 0x40000;
    v35 = 4;
    v27 = 4;
    v31 = 0LL;
    v34 = 1;
    v36 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v27);
    v39 = 0LL;
    v37 = Size;
    v38 = 0LL;
    lpMem = 0LL;
    v41 = 0;
    v42 = 0;
    wil::details_abi::RawUsageIndex::RawUsageIndex((__int64)v43, 0, v11, 1, v11, 2);
    wil::details_abi::RawUsageIndex::RawUsageIndex((__int64)v45, 0, v12, v13, 0, v13);
    AcquireSRWLockExclusive(v6);
    wil::details_abi::FeatureStateData::RetrieveUsageUnderLock(
      (wil::details_abi::FeatureStateData *)v6,
      (struct wil::details_abi::UsageIndexes *)&v33);
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    wil::details_abi::UsageIndexes::Record((wil::details_abi::UsageIndexes *)&v33);
    if ( v46 )
      operator delete(v46);
    v14 = v44;
    if ( v44 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v14);
    }
    v15 = lpMem;
    if ( lpMem )
    {
      v16 = GetProcessHeap();
      HeapFree(v16, 0, v15);
    }
    goto LABEL_13;
  }
  if ( v3 < 0xC8 || (int)v3 >= 256 && v3 < 0x200 )
  {
    AcquireSRWLockExclusive(v6);
    if ( (unsigned int)v3 <= 7 && (v7 = 204, _bittest(&v7, v3)) || (unsigned int)(v3 - 256) <= 0x7F )
    {
      wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage(
        (wil::details_abi::RawUsageIndex *)&v6[1],
        v3,
        v5);
      Ptr = (char)v6[8].Ptr;
    }
    else
    {
      Ptr = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
              &v6[9],
              (unsigned int)v3,
              v5,
              v4);
    }
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    if ( Ptr )
    {
LABEL_13:
      if ( !wil::details::g_processShutdownInProgress )
      {
        if ( !wil::details::g_pfnRtlDllShutdownInProgress
          || ((char *)wil::details::g_pfnRtlDllShutdownInProgress != (char *)wil::details::RtlDllShutdownInProgress
            ? (v9 = wil::details::g_pfnRtlDllShutdownInProgress())
            : (v9 = wil::details::RtlDllShutdownInProgress((wil::details *)wil::details::RtlDllShutdownInProgress)),
              !v9) )
        {
          AcquireSRWLockExclusive(&stru_18014BF60);
          if ( !byte_18014BF70 )
          {
            v17 = pti;
            if ( pti )
              goto LABEL_37;
            ThreadpoolTimer = CreateThreadpoolTimer(
                                lambda_4acbc82402014b2d4c356edc25e0df58_::_lambda_invoker_cdecl_,
                                &wil::details::g_featureStateManager,
                                0LL);
            v19 = pti;
            v17 = ThreadpoolTimer;
            if ( pti )
            {
              LastError = GetLastError();
              wil::details::DestroyThreadPoolTimer<0>::Destroy(v19);
              SetLastError(LastError);
            }
            pti = v17;
            if ( v17 )
            {
LABEL_37:
              pftDueTime = (_FILETIME)-3000000000LL;
              SetThreadpoolTimer(v17, &pftDueTime, 0, 0x124F8u);
              byte_18014BF70 = 1;
            }
          }
          ReleaseSRWLockExclusive(&stru_18014BF60);
        }
      }
    }
  }
}
