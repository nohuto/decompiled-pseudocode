/*
 * XREFs of UmfdQueryFontData @ 0x1C00368E0
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C0036AF8 (-WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@P.c)
 *     _lambda_fe455f6b6173b0bb193a7b901cfd063e_::operator() @ 0x1C0036BCC (_lambda_fe455f6b6173b0bb193a7b901cfd063e_--operator().c)
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00FE468 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C00FECF4 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     ??1AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C01430F0 (--1AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C02B37A8 (-UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 */

__int64 __fastcall UmfdQueryFontData(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v11; // rcx
  void *v12; // rsi
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem **v13; // rax
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem **v14; // rdi
  int v15; // ebx
  unsigned __int64 v17; // r14
  void *v18; // rax
  const GUID *v19; // r9
  bool v20[4]; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v22; // [rsp+40h] [rbp-C8h] BYREF
  void ***v23; // [rsp+48h] [rbp-C0h] BYREF
  void *v24; // [rsp+50h] [rbp-B8h] BYREF
  void **v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-A0h]
  __int64 v28; // [rsp+70h] [rbp-98h]
  __int64 v29; // [rsp+78h] [rbp-90h]
  __int64 v30; // [rsp+80h] [rbp-88h]
  int v31; // [rsp+88h] [rbp-80h]
  int v32; // [rsp+8Ch] [rbp-7Ch]
  __int64 v33; // [rsp+90h] [rbp-78h]
  __int64 v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  int v36; // [rsp+A8h] [rbp-60h]
  unsigned int v37; // [rsp+ACh] [rbp-5Ch]
  __int64 v38; // [rsp+B0h] [rbp-58h]
  __int128 v39; // [rsp+B8h] [rbp-50h]
  __int128 v40; // [rsp+C8h] [rbp-40h] BYREF
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem **v41; // [rsp+D8h] [rbp-30h]
  __int128 ThreadInformation; // [rsp+E8h] [rbp-20h] BYREF
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem **v43; // [rsp+F8h] [rbp-10h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF
  int *v45; // [rsp+128h] [rbp+20h]
  int v46; // [rsp+130h] [rbp+28h]
  int v47; // [rsp+134h] [rbp+2Ch]
  __int64 *v48; // [rsp+138h] [rbp+30h]
  int v49; // [rsp+140h] [rbp+38h]
  int v50; // [rsp+144h] [rbp+3Ch]

  v25 = &FontDriverDdiRequest::`vftable';
  LODWORD(v26) = 2;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v29) = 0;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    v28 = ThreadInformation;
    LOBYTE(v29) = 1;
  }
  v38 = 0LL;
  v37 = -1;
  v25 = &QueryFontDataRequest::`vftable';
  v34 = a5;
  v35 = a6;
  v36 = a7;
  v39 = 0LL;
  v30 = a1;
  v33 = a2;
  v31 = a3;
  v32 = a4;
  v11 = *(int *)(*(_QWORD *)(a2 + 24) + 8LL);
  v23 = &v25;
  if ( (unsigned int)v11 > 3 )
    return 0xFFFFFFFFLL;
  v12 = (void *)g_pUmfdClientPort[v11];
  v13 = (struct CMultipleConsumerWorkQueue::CWaitableWorkItem **)EngAllocMem(0, 8u, 0x71724446u);
  v14 = v13;
  if ( !v13 )
    return 0xFFFFFFFFLL;
  *(_QWORD *)&ThreadInformation = v12;
  *v13 = 0LL;
  v43 = v13;
  *((_QWORD *)&ThreadInformation + 1) = &v23;
  v24 = &UmfdHostLifeTimeManager::s_ReadyLock;
  v41 = v13;
  v40 = ThreadInformation;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    v15 = lambda_fe455f6b6173b0bb193a7b901cfd063e_::operator()(&v40);
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v24);
  }
  else
  {
    GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    KeLeaveCriticalRegion();
    v15 = -1073741823;
  }
  if ( v15 >= 0 )
  {
    if ( *v14 )
    {
      if ( CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem(
             (CMultipleConsumerWorkQueue *)v12,
             *v14,
             (const unsigned int *)"0u",
             v20) )
      {
        *v14 = 0LL;
        v15 = 0;
      }
      else if ( v20[0] )
      {
        v17 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v18 = UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle();
        if ( v18 )
          ZwClose(v18);
        UmfdCancelServerOutstandingRequests(v12);
        v15 = UmfdClientWaitForCompletion(v12, v14, 0LL);
        if ( hProvider > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
          {
            v47 = 0;
            v45 = &v21;
            v21 = v15;
            v46 = 4;
            v49 = 4;
            v48 = &v22;
            v50 = 0;
            LODWORD(v22) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v17;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E9B76, (LPCGUID)4, v19, 4u, &pData);
          }
        }
      }
      else
      {
        *v14 = 0LL;
        v15 = -1073741823;
      }
    }
    else
    {
      v15 = -1073741811;
    }
  }
  EngFreeMem(v14);
  if ( v15 >= 0 )
    return v37;
  else
    return 0xFFFFFFFFLL;
}
