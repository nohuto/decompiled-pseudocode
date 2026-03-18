/*
 * XREFs of RunContext @ 0x1C0008F50
 * Callers:
 *     InsertReadyQueue @ 0x1C00079E0 (InsertReadyQueue.c)
 *     DispatchCtxtQueue @ 0x1C0021E30 (DispatchCtxtQueue.c)
 * Callees:
 *     DupObjData @ 0x1C00078C0 (DupObjData.c)
 *     NewObjData @ 0x1C0008108 (NewObjData.c)
 *     FreeData @ 0x1C000CC84 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C000CD80 (FreeObjData.c)
 *     HeapFree @ 0x1C000D8A0 (HeapFree.c)
 *     RestartContext @ 0x1C0018450 (RestartContext.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     _TlgWrite @ 0x1C00253BC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0025458 (_TlgKeywordOn.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     LogSchedEvent @ 0x1C0028490 (LogSchedEvent.c)
 *     ReleaseASLMutex @ 0x1C002A3E0 (ReleaseASLMutex.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     AcpiQueueRecordBlackboxInformation @ 0x1C002BD2C (AcpiQueueRecordBlackboxInformation.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     AmliWatchdogTimeoutAction @ 0x1C005B2C0 (AmliWatchdogTimeoutAction.c)
 *     AMLIDebugger @ 0x1C005DC30 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 *     InvokePauseCallbacks @ 0x1C006014C (InvokePauseCallbacks.c)
 */

__int64 __fastcall RunContext(PSLIST_ENTRY ListEntry)
{
  char v1; // r14
  _SLIST_ENTRY *v2; // rsi
  _SLIST_ENTRY *v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // r8
  struct _KTHREAD *CurrentThread; // r11
  __int64 Next_low; // r9
  __int64 v10; // r10
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned int v13; // edi
  unsigned int v14; // eax
  int Next; // eax
  int v16; // eax
  _SLIST_ENTRY *v17; // rsi
  __int64 v18; // r13
  _SLIST_ENTRY *v19; // rax
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  _SLIST_ENTRY *v24; // r15
  int v25; // r14d
  _SLIST_ENTRY *v26; // r12
  int v27; // eax
  _QWORD *v28; // rax
  __int64 (__fastcall *v29)(); // r11
  __int64 v30; // r8
  _SLIST_ENTRY *v31; // r14
  __int64 v32; // rsi
  struct _KTHREAD *v33; // r15
  __int64 v34; // r9
  __int64 v35; // r12
  __int64 v36; // r10
  PSLIST_ENTRY v37; // rsi
  _SLIST_ENTRY *v38; // rdx
  _SLIST_ENTRY *v39; // rcx
  _SLIST_ENTRY *v40; // rax
  _SLIST_ENTRY **v41; // rcx
  _SLIST_ENTRY *v42; // rdx
  PSLIST_ENTRY *v43; // rcx
  PSLIST_ENTRY v44; // rax
  _SLIST_ENTRY *v45; // r8
  _SLIST_ENTRY **v46; // rdx
  PSLIST_ENTRY v47; // rsi
  __int64 v48; // rcx
  KIRQL v49; // al
  unsigned __int64 v50; // kr00_8
  unsigned __int16 v51; // ax
  const GUID *v52; // r8
  unsigned __int64 v53; // r9
  _SLIST_ENTRY *v54; // rsi
  KIRQL v55; // r15
  _SLIST_ENTRY *v56; // r14
  _SLIST_ENTRY *v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  _SLIST_ENTRY *v60; // rcx
  __int64 v61; // rsi
  __int64 v62; // r14
  struct _KTHREAD *v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  char v67; // [rsp+30h] [rbp-89h]
  __int16 v68; // [rsp+34h] [rbp-85h] BYREF
  __int16 v69; // [rsp+38h] [rbp-81h] BYREF
  int v70; // [rsp+3Ch] [rbp-7Dh] BYREF
  unsigned __int64 v71; // [rsp+40h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-69h] BYREF
  _SLIST_ENTRY *v73; // [rsp+60h] [rbp-59h]
  int v74; // [rsp+68h] [rbp-51h]
  int v75; // [rsp+6Ch] [rbp-4Dh]
  __int16 *v76; // [rsp+70h] [rbp-49h]
  __int64 v77; // [rsp+78h] [rbp-41h]
  unsigned __int64 *v78; // [rsp+80h] [rbp-39h]
  __int64 v79; // [rsp+88h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-29h] BYREF
  _DWORD *v81; // [rsp+B0h] [rbp-9h]
  __int64 v82; // [rsp+B8h] [rbp-1h]
  _SLIST_ENTRY *v83; // [rsp+C0h] [rbp+7h]
  _DWORD v84[2]; // [rsp+C8h] [rbp+Fh] BYREF
  int *v85; // [rsp+D0h] [rbp+17h]
  __int64 v86; // [rsp+D8h] [rbp+1Fh]

  v1 = 0;
  v2 = (PSLIST_ENTRY)((char *)ListEntry + 392);
  if ( v2->Next == v2 )
  {
    v4 = (_SLIST_ENTRY *)qword_1C0078808;
    if ( *(__int64 **)qword_1C0078808 != &RunningContextListHead )
      __fastfail(3u);
    v2->Next = (_SLIST_ENTRY *)&RunningContextListHead;
    ListEntry[25].Next = v4;
    v4->Next = v2;
    qword_1C0078808 = (__int64)(&ListEntry[24].Next + 1);
    v67 = 0;
  }
  else
  {
    v67 = 1;
  }
  v5 = ((__int64)ListEntry[4].Next & 0x200) == 0;
  *((_QWORD *)&ListEntry[25].Next + 1) = KeGetCurrentThread();
  if ( !v5 )
    gReadyQueue |= 0x200u;
  v6 = *((_QWORD *)&ListEntry[6].Next + 1);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 32);
  else
    v7 = *((_QWORD *)&ListEntry[4].Next + 1);
  CurrentThread = KeGetCurrentThread();
  Next_low = LODWORD(ListEntry[4].Next);
  v10 = *((_QWORD *)&ListEntry[25].Next + 1);
  v11 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && P )
  {
    v12 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_1C0079788 + 1, 1u) % (unsigned int)qword_1C0079788);
    *(_QWORD *)((char *)P + v12 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)P + v12) = 1381322307;
    *(_QWORD *)((char *)P + v12 + 16) = CurrentThread;
    *(_QWORD *)((char *)P + v12 + 24) = v10;
    *(_QWORD *)((char *)P + v12 + 32) = ListEntry;
    *(_QWORD *)((char *)P + v12 + 40) = v11;
    *(_QWORD *)((char *)P + v12 + 48) = ListEntry;
    *(_QWORD *)((char *)P + v12 + 56) = v7;
    *(_QWORD *)((char *)P + v12 + 64) = Next_low;
  }
  do
  {
    v13 = 0;
    LODWORD(ListEntry[4].Next) = (__int64)ListEntry[4].Next & 0xFFFFFFE7 | 0x10;
    KeReleaseSpinLock(&SpinLock, byte_1C0079660);
    do
    {
      if ( !ListEntry[26].Next )
        break;
      if ( (gDebugger & 0x1000) != 0 )
      {
        ConPrintf("\nProcess AML Debugger Request.\n");
        _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
        AMLIDebugger();
      }
      v14 = (*((__int64 (__fastcall **)(PSLIST_ENTRY, _SLIST_ENTRY *, _QWORD))&ListEntry[26].Next[1].Next + 1))(
              ListEntry,
              ListEntry[26].Next,
              v13);
      v13 = v14;
      if ( v14 == 32772 )
        break;
    }
    while ( v14 != 0x8000 );
    byte_1C0079660 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    Next = (int)ListEntry[4].Next;
    if ( (Next & 0x80u) == 0 || v13 != 0x8000 )
      LODWORD(ListEntry[4].Next) = Next & 0xFFFFFFEF;
    v16 = (int)ListEntry[4].Next;
  }
  while ( (v16 & 8) != 0 );
  if ( v13 == 32772 )
  {
    LODWORD(ListEntry[4].Next) = v16 | 0x20;
    goto LABEL_79;
  }
  if ( v13 == 0x8000 )
  {
    if ( !*((_QWORD *)&ListEntry[6].Next + 1) )
      LODWORD(ListEntry[4].Next) = v16 & 0xFFFFFF7F;
    v13 = 0;
    goto LABEL_79;
  }
  KeReleaseSpinLock(&SpinLock, byte_1C0079660);
  if ( !v13 )
  {
    v17 = ListEntry[11].Next;
    if ( v17 )
    {
      v18 = gpheapGlobal;
      v13 = 0;
      if ( v17 != &ListEntry[8] )
      {
        *v17 = ListEntry[8];
        v17[1] = ListEntry[9];
        v17[2].Next = ListEntry[10].Next;
        if ( ListEntry[10].Next )
        {
          v19 = (_SLIST_ENTRY *)NewObjData(v18, (__int64)&ListEntry[8]);
          v17[2].Next = v19;
          if ( !v19 )
          {
            v13 = -1073741670;
            LogError(3221225626LL);
            AcpiDiagTraceAmlError(0LL, 3221225626LL);
            PrintDebugMessage(43, 0, 0, 0, 0LL);
            goto LABEL_53;
          }
          memmove(v19, ListEntry[10].Next, *((unsigned int *)&ListEntry[9].Next + 2));
          v20 = WORD1(v17->Next);
          if ( v20 == 4 )
          {
            v24 = ListEntry[10].Next;
            v25 = 0;
            v26 = v17[2].Next;
            for ( LODWORD(v26->Next) = v24->Next; v25 < SLODWORD(v24->Next); ++v25 )
            {
              v13 = DupObjData(v18, (__int64)(&v26->Next + 5 * v25 + 1), (__int64)(&v24->Next + 5 * v25 + 1));
              if ( v13 )
                break;
            }
            goto LABEL_52;
          }
          v21 = v20 - 5;
          if ( v21 )
          {
            v22 = v21 - 125;
            if ( !v22 )
            {
              if ( (gdwfAMLI & 4) != 0 )
                _InterlockedIncrement((volatile signed __int32 *)&v17[2].Next->Next[7]);
              if ( (gdwfAMLI & 4) != 0 )
                _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v17[2].Next->Next + 1) + 112LL));
              goto LABEL_52;
            }
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( v23 != 1 )
              {
LABEL_52:
                LOWORD(v17->Next) &= ~1u;
                _InterlockedExchange((volatile __int32 *)&v17->Next + 2, 0);
                goto LABEL_53;
              }
              if ( (gdwfAMLI & 4) != 0 )
                _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v17[2].Next->Next + 1) + 112LL));
            }
          }
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)&v17[2].Next->Next[7]);
          goto LABEL_52;
        }
      }
    }
  }
LABEL_53:
  v27 = (int)ListEntry[4].Next;
  if ( (v27 & 0x20) != 0 )
  {
    v28 = (_QWORD *)*((_QWORD *)&ListEntry[6].Next + 1);
    if ( v28 )
    {
      v29 = (__int64 (__fastcall *)())v28[11];
      v30 = v28[4];
      v31 = (_SLIST_ENTRY *)v28[12];
      v32 = v28[13];
    }
    else
    {
      v29 = (__int64 (__fastcall *)())*((_QWORD *)&ListEntry[10].Next + 1);
      v30 = *((_QWORD *)&ListEntry[4].Next + 1);
      v31 = ListEntry[11].Next;
      v32 = *((_QWORD *)&ListEntry[11].Next + 1);
    }
    if ( v29 == EvalMethodComplete )
    {
      LogSchedEvent(1146048069, (_DWORD)ListEntry, v30, v13, v32);
      *(_DWORD *)v32 = v13;
      *(_QWORD *)(v32 + 8) = ListEntry;
      KeSetEvent((PRKEVENT)(v32 + 16), 0, 0);
    }
    else if ( v13 == 32771 )
    {
      RestartContext(ListEntry, 0LL);
    }
    else if ( v29 )
    {
      v33 = KeGetCurrentThread();
      v34 = *((_QWORD *)&ListEntry[25].Next + 1);
      v35 = (unsigned int)gReadyQueue;
      if ( (gDebugger & 0x8000) != 0 && P )
      {
        v36 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_1C0079788 + 1, 1u) % (unsigned int)qword_1C0079788);
        *(_QWORD *)((char *)P + v36 + 8) = MEMORY[0xFFFFF78000000008];
        *(_DWORD *)((char *)P + v36) = 1095975746;
        *(_QWORD *)((char *)P + v36 + 16) = v33;
        *(_QWORD *)((char *)P + v36 + 24) = v34;
        *(_QWORD *)((char *)P + v36 + 32) = ListEntry;
        *(_QWORD *)((char *)P + v36 + 40) = v35;
        *(_QWORD *)((char *)P + v36 + 48) = v30;
        *(_QWORD *)((char *)P + v36 + 56) = (int)v13;
        *(_QWORD *)((char *)P + v36 + 64) = v32;
      }
      ((void (__fastcall *)(__int64, _QWORD, _SLIST_ENTRY *, __int64))v29)(v30 + 120, v13, v31, v32);
    }
    v27 = (int)ListEntry[4].Next;
    if ( (v27 & 0x100) != 0 )
      v13 = 32772;
  }
  if ( (v27 & 0x200) != 0 )
    gReadyQueue &= ~0x200u;
  v37 = ListEntry + 3;
  while ( v37->Next != v37 )
  {
    v38 = v37->Next;
    if ( *((_DWORD *)&v37->Next[-2].Next + 2) == 1 )
    {
      ReleaseASLMutex(ListEntry, *((_QWORD *)&v38[-1].Next + 1), 0LL);
    }
    else
    {
      if ( *(&v38->Next + 1) != v37 || (v39 = v38->Next, *(&v38->Next->Next + 1) != v38) )
        __fastfail(3u);
      v37->Next = v39;
      *((_QWORD *)&v39->Next + 1) = v37;
      HeapFree(&v38[-2].Next + 1);
    }
  }
  v1 = 1;
  byte_1C0079660 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v2 = (PSLIST_ENTRY)((char *)ListEntry + 392);
LABEL_79:
  if ( !v67 )
  {
    v40 = v2->Next;
    if ( *(&v2->Next->Next + 1) != v2 || (v41 = (_SLIST_ENTRY **)*((_QWORD *)&v2->Next + 1), *v41 != v2) )
      __fastfail(3u);
    *v41 = v40;
    *((_QWORD *)&v40->Next + 1) = v41;
    *((_QWORD *)&v2->Next + 1) = v2;
    v2->Next = v2;
    *((_QWORD *)&ListEntry[25].Next + 1) = 0LL;
  }
  if ( v1 )
  {
    byte_1C0079CC8 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
    v42 = ListEntry[1].Next;
    if ( *(&v42->Next + 1) != &ListEntry[1]
      || (v43 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry[1].Next + 1), *v43 != &ListEntry[1]) )
    {
      __fastfail(3u);
    }
    *v43 = v42;
    v44 = ListEntry + 2;
    *((_QWORD *)&v42->Next + 1) = v43;
    v45 = ListEntry[2].Next;
    if ( *(&v45->Next + 1) != &ListEntry[2] || (v46 = (_SLIST_ENTRY **)*((_QWORD *)&ListEntry[2].Next + 1), *v46 != v44) )
      __fastfail(3u);
    *v46 = v45;
    *((_QWORD *)&v45->Next + 1) = v46;
    *((_QWORD *)&ListEntry[2].Next + 1) = ListEntry + 2;
    v44->Next = v44;
    KeReleaseSpinLock(&gmutCtxtList, byte_1C0079CC8);
    v47 = ListEntry + 8;
    if ( ((__int64)ListEntry[8].Next & 1) != 0 )
    {
      v48 = *((_QWORD *)&ListEntry[8].Next + 1);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v48 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v48 & 8) != 0 )
        FreeData(v48);
    }
    else if ( ListEntry[10].Next )
    {
      if ( *((int *)&ListEntry[8].Next + 2) <= 0 )
      {
        if ( WORD1(ListEntry[8].Next) == 4 )
          FreeDataBuffs(&ListEntry[10].Next->Next + 1, ListEntry[10].Next->Next);
        FreeObjData(&ListEntry[8]);
      }
      else
      {
        LOWORD(v47->Next) |= 8u;
      }
    }
    v47->Next = 0LL;
    *((_QWORD *)&ListEntry[8].Next + 1) = 0LL;
    ListEntry[9].Next = 0LL;
    *((_QWORD *)&ListEntry[9].Next + 1) = 0LL;
    ListEntry[10].Next = 0LL;
    v49 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
    --gdwcCTObjs;
    KeReleaseSpinLock(&gdwGContextSpinLock, v49);
    v71 = 0LL;
    if ( AcpiDiagHandle && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
    {
      *(_QWORD *)&UserData.Size = 2LL;
      v50 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)&ListEntry[28].Next + 1);
      v51 = *((_WORD *)&ListEntry[27].Next + 4);
      v74 = v51;
      v68 = v51 >> 1;
      UserData.Ptr = (unsigned __int64)&v68;
      v73 = ListEntry[28].Next;
      v76 = &v69;
      v71 = v50 / 0x2710;
      v78 = &v71;
      v75 = 0;
      v69 = 0;
      v77 = 2LL;
      v79 = 8LL;
      EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE, 0LL, 4u, &UserData);
    }
    v52 = (const GUID *)*((_QWORD *)&ListEntry[28].Next + 1);
    v53 = (MEMORY[0xFFFFF78000000008] - (_QWORD)v52) / 0x2710uLL;
    if ( v52
      && (unsigned int)v53 >= 0x3E8
      && hProvider > 5u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v70 = v53;
      v81 = v84;
      v83 = ListEntry[28].Next;
      v84[0] = *((unsigned __int16 *)&ListEntry[27].Next + 4);
      v85 = &v70;
      v82 = 2LL;
      v84[1] = 0;
      v86 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C006A000, v52, (LPCGUID)v53, 5u, &pData);
    }
    v54 = ListEntry[29].Next;
    if ( v54 )
    {
      v55 = KeAcquireSpinLockRaiseToDpc(&AcpiWatchdogLock);
      v56 = v54->Next;
      if ( *((_BYTE *)&v54[5].Next + 8) || *((_BYTE *)&v56[29].Next + 8) )
      {
        *((_BYTE *)&v54[5].Next + 8) = 0;
        if ( !KeCancelTimer((PKTIMER)(&v54[6].Next + 1)) )
        {
          if ( *((_BYTE *)&v56[29].Next + 8) )
            AcpiQueueRecordBlackboxInformation();
          else
            AmliWatchdogTimeoutAction(v54);
        }
      }
      KeReleaseSpinLock(&AcpiWatchdogLock, v55);
      ExFreePoolWithTag(ListEntry[29].Next, 0);
    }
    v57 = ListEntry[28].Next;
    if ( v57 )
      ExFreePoolWithTag(v57, 0);
    v58 = *((_QWORD *)&ListEntry[4].Next + 1);
    if ( v58 )
    {
      DereferenceObjectEx(v58, 0LL, v52, v53);
      *((_QWORD *)&ListEntry[4].Next + 1) = 0LL;
    }
    v59 = *((_QWORD *)&ListEntry[26].Next + 1);
    if ( v59 )
    {
      DereferenceObjectEx(v59, 0LL, v52, v53);
      *((_QWORD *)&ListEntry[26].Next + 1) = 0LL;
    }
    v60 = ListEntry[5].Next;
    if ( v60 )
    {
      DereferenceObjectEx(v60, 0LL, v52, v53);
      ListEntry[5].Next = 0LL;
    }
    v61 = *((_QWORD *)&ListEntry[31].Next + 1);
    if ( v61 )
    {
      do
      {
        v62 = *(_QWORD *)(v61 + 24);
        ++dword_1C0079C5C;
        if ( ExQueryDepthSList(&AMLIContextLookAsideList) < (unsigned __int16)word_1C0079C50 )
        {
          ExpInterlockedPushEntrySList(&AMLIContextLookAsideList, (PSLIST_ENTRY)v61);
        }
        else
        {
          ++dword_1C0079C60;
          ((void (__fastcall *)(__int64))qword_1C0079C78)(v61);
        }
        v61 = v62;
      }
      while ( v62 );
    }
    ++dword_1C0079C5C;
    if ( ExQueryDepthSList(&AMLIContextLookAsideList) < (unsigned __int16)word_1C0079C50 )
    {
      ExpInterlockedPushEntrySList(&AMLIContextLookAsideList, ListEntry);
    }
    else
    {
      ++dword_1C0079C60;
      ((void (__fastcall *)(PSLIST_ENTRY))qword_1C0079C78)(ListEntry);
    }
  }
  if ( (gReadyQueue & 4) != 0 && glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
  {
    gReadyQueue = gReadyQueue & 0xFFFFFFF3 | 8;
    if ( (__int64 *)qword_1C0079690 != &qword_1C0079690 )
    {
      InvokePauseCallbacks();
      LogSchedEvent(1346454338, 0, (_DWORD)ListEntry, v13, 0LL);
    }
  }
  v63 = KeGetCurrentThread();
  v64 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && P )
  {
    v65 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_1C0079788 + 1, 1u) % (unsigned int)qword_1C0079788);
    *(_QWORD *)((char *)P + v65 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)P + v65) = 1381322273;
    *(_QWORD *)((char *)P + v65 + 16) = v63;
    *(_QWORD *)((char *)P + v65 + 24) = 0LL;
    *(_QWORD *)((char *)P + v65 + 32) = 0LL;
    *(_QWORD *)((char *)P + v65 + 40) = v64;
    *(_QWORD *)((char *)P + v65 + 48) = ListEntry;
    *(_QWORD *)((char *)P + v65 + 56) = (int)v13;
    *(_QWORD *)((char *)P + v65 + 64) = 0LL;
  }
  return v13;
}
