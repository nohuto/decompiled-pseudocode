/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00381D8
 * Callers:
 *     UmfdQueryAdvanceWidths @ 0x1C00380D0 (UmfdQueryAdvanceWidths.c)
 *     UmfdDestroyFont @ 0x1C003F0D0 (UmfdDestroyFont.c)
 *     UmfdQueryFont @ 0x1C003F180 (UmfdQueryFont.c)
 *     UmfdQueryTrueTypeTable @ 0x1C003F460 (UmfdQueryTrueTypeTable.c)
 *     UmfdQueryFontTree @ 0x1C0040420 (UmfdQueryFontTree.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C0040D74 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdQueryFontFile @ 0x1C00412C0 (UmfdQueryFontFile.c)
 *     UmfdLoadFontFile @ 0x1C0041350 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00419A0 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C01315F0 (UmfdQueryTrueTypeOutline.c)
 *     UmfdDrvFreeInternal @ 0x1C02B34C0 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02B3520 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02B35D0 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02B3690 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02B3710 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00FE468 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C00FE530 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C00FECF4 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C0120038 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ??1AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C01430F0 (--1AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C01A0DA8 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C01A0DC4 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     _CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy @ 0x1C01A0DE4 (_CMultipleConsumerWorkQueue--WaitForCompletionAndReleaseWorkItem_--_2_--CEventPoolEntryAutoDestr.c)
 *     ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x1C02999F8 (-QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C02B37A8 (-UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 */

__int64 __fastcall UmfdClientSendAndWaitForCompletion(unsigned int a1, struct _SLIST_ENTRY *a2)
{
  _QWORD *v2; // r14
  __int64 *v3; // rdi
  signed int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // rax
  bool v7; // zf
  volatile signed __int32 *v8; // rsi
  struct _SLIST_ENTRY *v9; // rax
  __int64 v11; // rbx
  PSLIST_ENTRY v12; // rax
  char *v13; // rax
  struct _SLIST_ENTRY *v14; // rbx
  PSLIST_ENTRY v15; // xmm0_8
  struct _SLIST_ENTRY *v16; // rax
  _BYTE *v17; // rsi
  struct _SLIST_ENTRY *v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  void *v21; // rax
  const GUID *v22; // r9
  PSLIST_ENTRY v23; // [rsp+38h] [rbp-69h] BYREF
  signed int v24; // [rsp+40h] [rbp-61h] BYREF
  int v25; // [rsp+44h] [rbp-5Dh] BYREF
  struct _SLIST_ENTRY *v26; // [rsp+48h] [rbp-59h] BYREF
  volatile signed __int32 *v27; // [rsp+50h] [rbp-51h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+58h] [rbp-49h]
  PSLIST_ENTRY v29; // [rsp+60h] [rbp-41h]
  void *v30; // [rsp+68h] [rbp-39h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+70h] [rbp-31h] BYREF
  __int64 v32; // [rsp+78h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-19h] BYREF
  signed int *v34; // [rsp+A8h] [rbp+7h]
  int v35; // [rsp+B0h] [rbp+Fh]
  int v36; // [rsp+B4h] [rbp+13h]
  int *v37; // [rsp+B8h] [rbp+17h]
  int v38; // [rsp+C0h] [rbp+1Fh]
  int v39; // [rsp+C4h] [rbp+23h]

  if ( a1 > 3 )
    return 3221225485LL;
  _mm_lfence();
  v2 = (_QWORD *)g_pUmfdClientPort[a1];
  v3 = (__int64 *)EngAllocMem(0, 8u, 0x71724446u);
  if ( !v3 )
    return 3221225495LL;
  *v3 = 0LL;
  v30 = &UmfdHostLifeTimeManager::s_ReadyLock;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    if ( ((unsigned __int8 (__fastcall *)(struct _SLIST_ENTRY *))a2->Next[1].Next)(a2)
      && UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread != KeGetCurrentThread() )
    {
      v19 = (*((__int64 (__fastcall **)(struct _SLIST_ENTRY *))&a2->Next->Next + 1))(a2);
      UmfdHostLifeTimeManager::QueueTryResurrectPffApc(v19);
      v4 = -1073741823;
      goto LABEL_26;
    }
    v11 = v2[1];
    v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v11 + 16));
    if ( v12 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v11);
    }
    else
    {
      v12 = (PSLIST_ENTRY)CEventPool::CEventPoolEntry::Create();
      if ( !v12 )
      {
        v23 = 0LL;
        goto LABEL_29;
      }
    }
    v23 = v12;
    v29 = v12;
    v13 = (char *)EngAllocMem(0, 0x40u, 0x676D6466u);
    v14 = (struct _SLIST_ENTRY *)v13;
    if ( v13 )
    {
      v15 = v29;
      *((_DWORD *)v13 + 6) = 8;
      *((_QWORD *)v13 + 5) = v15;
      *((_DWORD *)v13 + 7) = 8;
      v16 = (struct _SLIST_ENTRY *)(v13 + 56);
      v14[1].Next = v16;
      v26 = v14;
      v16->Next = a2;
      *((_DWORD *)&v14->Next + 2) = 0;
      v17 = (_BYTE *)*v2;
      if ( !*(_BYTE *)*v2 )
      {
        *((_DWORD *)&v14->Next + 2) = 1;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v17 + 1, v14);
        KeSetEvent(**((PRKEVENT **)v17 + 1), 1, 0);
LABEL_18:
        *v3 = (__int64)v14;
        v4 = v14 == 0LL ? 0xC0000001 : 0;
LABEL_26:
        AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v30);
        goto LABEL_5;
      }
    }
    else
    {
      v26 = 0LL;
    }
    CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v26);
LABEL_29:
    CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v23);
    v14 = 0LL;
    goto LABEL_18;
  }
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  v4 = -1073741823;
LABEL_5:
  if ( v4 >= 0 )
  {
    v5 = *v3;
    if ( *v3 )
    {
      v6 = *(_QWORD *)(v5 + 40);
      Timeout.QuadPart = -300000000LL;
      if ( KeWaitForSingleObject(**(PVOID **)(v6 + 8), Executive, 0, 0, &Timeout) == 258 )
      {
        v20 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v21 = UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle();
        if ( v21 )
          ZwClose(v21);
        UmfdCancelServerOutstandingRequests(v2);
        v4 = UmfdClientWaitForCompletion(v2, v3, 0LL);
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
        {
          v36 = 0;
          v34 = &v24;
          v35 = 4;
          v24 = v4;
          v38 = 4;
          v37 = &v25;
          v39 = 0;
          v25 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v20;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E9B76, (LPCGUID)4, v22, 4u, &pData);
        }
      }
      else
      {
        v7 = *(_DWORD *)(v5 + 8) == 3;
        v8 = (volatile signed __int32 *)v2[1];
        v9 = *(struct _SLIST_ENTRY **)(v5 + 40);
        v27 = v8;
        ListEntry = v9;
        v32 = v5;
        if ( v7 )
        {
          CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v32);
          CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy(&v27);
          *v3 = 0LL;
          v4 = 0;
        }
        else
        {
          EngFreeMem((PVOID)v5);
          if ( (unsigned int)_InterlockedIncrement(v8) > 8 )
          {
            _InterlockedDecrement(v27);
            CEventPool::CEventPoolEntry::Destroy(ListEntry);
          }
          else
          {
            v18 = ListEntry;
            KeResetEvent(**((PRKEVENT **)&ListEntry->Next + 1));
            ExpInterlockedPushEntrySList((PSLIST_HEADER)v27 + 1, v18);
          }
          *v3 = 0LL;
          v4 = -1073741823;
        }
      }
    }
    else
    {
      v4 = -1073741811;
    }
  }
  EngFreeMem(v3);
  return (unsigned int)v4;
}
