/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0090638
 * Callers:
 *     UmfdQueryAdvanceWidths @ 0x1C008FFF0 (UmfdQueryAdvanceWidths.c)
 *     UmfdLoadFontFile @ 0x1C00BA910 (UmfdLoadFontFile.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C00D48C8 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdQueryFontTree @ 0x1C00D49D0 (UmfdQueryFontTree.c)
 *     UmfdQueryFont @ 0x1C00D4D30 (UmfdQueryFont.c)
 *     UmfdQueryTrueTypeTable @ 0x1C00F2C20 (UmfdQueryTrueTypeTable.c)
 *     UmfdDestroyFont @ 0x1C00F4B40 (UmfdDestroyFont.c)
 *     UmfdQueryFontFile @ 0x1C00F7160 (UmfdQueryFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C01082F0 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C012E0D0 (UmfdQueryTrueTypeOutline.c)
 *     UmfdDrvFreeInternal @ 0x1C02B96C0 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02B9720 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02B97C0 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02B9870 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02B98F0 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     ??1AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C001EB80 (--1AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     _lambda_fe455f6b6173b0bb193a7b901cfd063e_::operator() @ 0x1C0090A98 (_lambda_fe455f6b6173b0bb193a7b901cfd063e_--operator().c)
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

__int64 __fastcall UmfdClientSendAndWaitForCompletion(unsigned int a1, __int64 a2)
{
  _QWORD *v2; // r14
  __int64 *v3; // rax
  __int64 *v4; // rdi
  int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rax
  bool v8; // zf
  volatile signed __int32 *v9; // rsi
  struct _SLIST_ENTRY *v10; // rax
  unsigned __int64 v12; // rsi
  void *v13; // rax
  const GUID *v14; // r9
  int v15; // [rsp+38h] [rbp-99h] BYREF
  int v16; // [rsp+3Ch] [rbp-95h] BYREF
  volatile signed __int32 *v17; // [rsp+40h] [rbp-91h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-89h]
  void *v19; // [rsp+50h] [rbp-81h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+58h] [rbp-79h] BYREF
  __int64 v21; // [rsp+60h] [rbp-71h] BYREF
  __int128 v22; // [rsp+68h] [rbp-69h]
  __int64 *v23; // [rsp+78h] [rbp-59h]
  __int128 v24; // [rsp+88h] [rbp-49h] BYREF
  __int64 *v25; // [rsp+98h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-29h] BYREF
  int *v27; // [rsp+C8h] [rbp-9h]
  int v28; // [rsp+D0h] [rbp-1h]
  int v29; // [rsp+D4h] [rbp+3h]
  int *v30; // [rsp+D8h] [rbp+7h]
  int v31; // [rsp+E0h] [rbp+Fh]
  int v32; // [rsp+E4h] [rbp+13h]
  __int64 v33; // [rsp+140h] [rbp+6Fh] BYREF

  v33 = a2;
  if ( a1 > 3 )
    return 3221225485LL;
  _mm_lfence();
  v2 = (_QWORD *)g_pUmfdClientPort[a1];
  v3 = (__int64 *)EngAllocMem(0, 8u, 0x71724446u);
  v4 = v3;
  if ( !v3 )
    return 3221225495LL;
  *(_QWORD *)&v22 = v2;
  *v3 = 0LL;
  v23 = v3;
  *((_QWORD *)&v22 + 1) = &v33;
  v19 = &UmfdHostLifeTimeManager::s_ReadyLock;
  v25 = v3;
  v24 = v22;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    v5 = lambda_fe455f6b6173b0bb193a7b901cfd063e_::operator()(&v24);
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v19);
  }
  else
  {
    GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    KeLeaveCriticalRegion();
    v5 = -1073741823;
  }
  if ( v5 >= 0 )
  {
    v6 = *v4;
    if ( *v4 )
    {
      v7 = *(_QWORD *)(v6 + 40);
      Timeout.QuadPart = -300000000LL;
      if ( KeWaitForSingleObject(**(PVOID **)(v7 + 8), Executive, 0, 0, &Timeout) == 258 )
      {
        v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v13 = UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle();
        if ( v13 )
          ZwClose(v13);
        UmfdCancelServerOutstandingRequests(v2);
        v5 = UmfdClientWaitForCompletion(v2, v4, 0LL);
        if ( dword_1C0324850 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000000uLL) )
        {
          v29 = 0;
          v27 = &v15;
          v28 = 4;
          v15 = v5;
          v31 = 4;
          v30 = &v16;
          v32 = 0;
          v16 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v12;
          TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02ECF1C, (LPCGUID)4, v14, 4u, &pData);
        }
      }
      else
      {
        v8 = *(_DWORD *)(v6 + 8) == 3;
        v9 = (volatile signed __int32 *)v2[1];
        v10 = *(struct _SLIST_ENTRY **)(v6 + 40);
        v17 = v9;
        ListEntry = v10;
        v21 = v6;
        if ( v8 )
        {
          CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v21);
          CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy(&v17);
          *v4 = 0LL;
          v5 = 0;
        }
        else
        {
          EngFreeMem((PVOID)v6);
          if ( (unsigned int)_InterlockedIncrement(v9) > 8 )
          {
            _InterlockedDecrement(v17);
            CEventPool::CEventPoolEntry::Destroy((struct CEventPool::CEventPoolEntry *const)ListEntry);
          }
          else
          {
            KeResetEvent(**((PRKEVENT **)&ListEntry->Next + 1));
            ExpInterlockedPushEntrySList((PSLIST_HEADER)v17 + 1, ListEntry);
          }
          *v4 = 0LL;
          v5 = -1073741823;
        }
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  EngFreeMem(v4);
  return (unsigned int)v5;
}
