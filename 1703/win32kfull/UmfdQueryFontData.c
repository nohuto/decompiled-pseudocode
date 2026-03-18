/*
 * XREFs of UmfdQueryFontData @ 0x1C0090830
 * Callers:
 *     <none>
 * Callees:
 *     ??1AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C001EB80 (--1AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     _lambda_fe455f6b6173b0bb193a7b901cfd063e_::operator() @ 0x1C0090A98 (_lambda_fe455f6b6173b0bb193a7b901cfd063e_--operator().c)
 *     ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C0090BB4 (-UmfdCreateRequestContext@@YAPEAXXZ.c)
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00D5C18 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C0116348 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C0195C54 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     _CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy @ 0x1C0195C74 (_CMultipleConsumerWorkQueue--WaitForCompletionAndReleaseWorkItem_--_2_--CEventPoolEntryAutoDestr.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C029D2CC (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C02B99A0 (-UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 */

__int64 __fastcall UmfdQueryFontData(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  _QWORD *RequestContext; // rdi
  int v10; // ebx
  __int64 v11; // rbx
  __int64 v12; // rax
  bool v13; // zf
  volatile signed __int32 *v14; // rsi
  struct _SLIST_ENTRY *v15; // rax
  unsigned __int64 v17; // r14
  void *v18; // rax
  const GUID *v19; // r9
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  volatile signed __int32 *v22; // [rsp+40h] [rbp-C8h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-C0h]
  void ***v24; // [rsp+50h] [rbp-B8h] BYREF
  void *v25; // [rsp+58h] [rbp-B0h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v28; // [rsp+70h] [rbp-98h]
  _QWORD *v29; // [rsp+80h] [rbp-88h]
  void **v30; // [rsp+88h] [rbp-80h] BYREF
  int v31; // [rsp+90h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  int v34; // [rsp+A8h] [rbp-60h]
  int v35; // [rsp+ACh] [rbp-5Ch]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  __int64 v37; // [rsp+B8h] [rbp-50h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  int v39; // [rsp+C8h] [rbp-40h]
  unsigned int v40; // [rsp+CCh] [rbp-3Ch]
  __int64 v41; // [rsp+D0h] [rbp-38h]
  __int128 v42; // [rsp+D8h] [rbp-30h]
  __int128 v43; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD *v44; // [rsp+F8h] [rbp-10h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF
  int *v46; // [rsp+128h] [rbp+20h]
  int v47; // [rsp+130h] [rbp+28h]
  int v48; // [rsp+134h] [rbp+2Ch]
  int *v49; // [rsp+138h] [rbp+30h]
  int v50; // [rsp+140h] [rbp+38h]
  int v51; // [rsp+144h] [rbp+3Ch]

  v31 = 2;
  v41 = 0LL;
  v40 = -1;
  CurrentThread = KeGetCurrentThread();
  v30 = &QueryFontDataRequest::`vftable';
  v37 = a5;
  v38 = a6;
  v39 = a7;
  v42 = 0LL;
  v33 = a1;
  v36 = a2;
  v34 = a3;
  v35 = a4;
  v7 = *(int *)(*(_QWORD *)(a2 + 24) + 8LL);
  v24 = &v30;
  if ( (unsigned int)v7 > 3 )
    return 0xFFFFFFFFLL;
  _mm_lfence();
  v8 = (_QWORD *)g_pUmfdClientPort[v7];
  RequestContext = UmfdCreateRequestContext();
  if ( !RequestContext )
    return 0xFFFFFFFFLL;
  *(_QWORD *)&v28 = v8;
  *((_QWORD *)&v28 + 1) = &v24;
  v29 = RequestContext;
  v43 = v28;
  v44 = RequestContext;
  v25 = &UmfdHostLifeTimeManager::s_ReadyLock;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    v10 = lambda_fe455f6b6173b0bb193a7b901cfd063e_::operator()(&v43);
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v25);
  }
  else
  {
    GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    KeLeaveCriticalRegion();
    v10 = -1073741823;
  }
  if ( v10 >= 0 )
  {
    v11 = *RequestContext;
    if ( *RequestContext )
    {
      v12 = *(_QWORD *)(v11 + 40);
      Timeout.QuadPart = -300000000LL;
      if ( KeWaitForSingleObject(**(PVOID **)(v12 + 8), Executive, 0, 0, &Timeout) == 258 )
      {
        v17 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v18 = UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle();
        if ( v18 )
          ZwClose(v18);
        UmfdCancelServerOutstandingRequests(v8);
        v10 = UmfdClientWaitForCompletion(v8, RequestContext, 0LL);
        if ( dword_1C0324850 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000000uLL) )
        {
          v48 = 0;
          v46 = &v20;
          v20 = v10;
          v47 = 4;
          v50 = 4;
          v49 = &v21;
          v51 = 0;
          v21 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v17;
          TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02ECF1C, (LPCGUID)4, v19, 4u, &pData);
        }
      }
      else
      {
        v13 = *(_DWORD *)(v11 + 8) == 3;
        v14 = (volatile signed __int32 *)v8[1];
        v15 = *(struct _SLIST_ENTRY **)(v11 + 40);
        v22 = v14;
        ListEntry = v15;
        v27 = v11;
        if ( v13 )
        {
          CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v27);
          CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy(&v22);
          *RequestContext = 0LL;
          v10 = 0;
        }
        else
        {
          EngFreeMem((PVOID)v11);
          if ( (unsigned int)_InterlockedIncrement(v14) > 8 )
          {
            _InterlockedDecrement(v22);
            CEventPool::CEventPoolEntry::Destroy((struct CEventPool::CEventPoolEntry *const)ListEntry);
          }
          else
          {
            KeResetEvent(**((PRKEVENT **)&ListEntry->Next + 1));
            ExpInterlockedPushEntrySList((PSLIST_HEADER)v22 + 1, ListEntry);
          }
          *RequestContext = 0LL;
          v10 = -1073741823;
        }
      }
    }
    else
    {
      v10 = -1073741811;
    }
  }
  EngFreeMem(RequestContext);
  if ( v10 >= 0 )
    return v40;
  else
    return 0xFFFFFFFFLL;
}
