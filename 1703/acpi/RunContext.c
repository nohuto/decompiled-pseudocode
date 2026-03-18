/*
 * XREFs of RunContext @ 0x1C0003C60
 * Callers:
 *     InsertReadyQueue @ 0x1C0004690 (InsertReadyQueue.c)
 *     DispatchCtxtQueue @ 0x1C0025130 (DispatchCtxtQueue.c)
 * Callees:
 *     FreeData @ 0x1C0004EA8 (FreeData.c)
 *     RestartContext @ 0x1C0012000 (RestartContext.c)
 *     FreeNameSpaceObjects @ 0x1C0015460 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C0015C58 (HeapFree.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0015D30 (FreeObjData.c)
 *     DupObjData @ 0x1C001A8E0 (DupObjData.c)
 *     NewObjData @ 0x1C001A9F4 (NewObjData.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 *     LogSchedEvent @ 0x1C0025E94 (LogSchedEvent.c)
 *     ReleaseASLMutex @ 0x1C0029494 (ReleaseASLMutex.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     DumpObject @ 0x1C002C0B0 (DumpObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     AcpiDiagTraceAmlEvaluation @ 0x1C00414A0 (AcpiDiagTraceAmlEvaluation.c)
 *     AMLIDebugger @ 0x1C005BEF8 (AMLIDebugger.c)
 *     InvokePauseCallbacks @ 0x1C005EF54 (InvokePauseCallbacks.c)
 */

__int64 __fastcall RunContext(char *ListEntry)
{
  char v1; // r15
  _SLIST_ENTRY *v2; // r14
  _SLIST_ENTRY *v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rsi
  unsigned __int32 v12; // ecx
  unsigned int v13; // ecx
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  char v16; // cl
  _SLIST_ENTRY *v17; // rsi
  __int64 (__fastcall *v18)(__int64, __int64, unsigned int); // rax
  int v19; // eax
  _SLIST_ENTRY *v20; // rsi
  __int64 v21; // r15
  int v22; // eax
  _QWORD *v23; // rax
  __int64 (__fastcall *v24)(); // r10
  __int64 v25; // r11
  _SLIST_ENTRY *v26; // rbp
  __int64 v27; // rsi
  struct _KTHREAD *v28; // r15
  __int64 v29; // r9
  __int64 v30; // r12
  unsigned __int32 v31; // ecx
  unsigned int v32; // ecx
  __int64 v33; // rdx
  PSLIST_ENTRY v34; // rsi
  _SLIST_ENTRY *v35; // rcx
  _SLIST_ENTRY **v36; // rax
  _SLIST_ENTRY *v37; // rdx
  PSLIST_ENTRY *v38; // rcx
  PSLIST_ENTRY v39; // rax
  _SLIST_ENTRY *v40; // r8
  _SLIST_ENTRY **v41; // rdx
  PSLIST_ENTRY v42; // rsi
  KIRQL v43; // al
  __int64 v44; // rcx
  __int64 v45; // rcx
  _SLIST_ENTRY *v46; // rcx
  _SLIST_ENTRY *v47; // rsi
  struct _KTHREAD *v48; // r8
  __int64 v49; // r9
  unsigned __int32 v50; // r13d
  unsigned int v51; // r13d
  __int64 v52; // rdx
  _SLIST_ENTRY *v54; // rcx
  _SLIST_ENTRY *v55; // rsi
  __int64 v56; // r9
  _SLIST_ENTRY *v57; // rax
  _SLIST_ENTRY *i; // rdx
  _SLIST_ENTRY **v59; // rcx
  _SLIST_ENTRY *v60; // r8
  __int64 v61; // r10
  _SLIST_ENTRY *v62; // rax
  _SLIST_ENTRY *v63; // r10
  _SLIST_ENTRY *v64; // rsi
  _SLIST_ENTRY *v65; // rcx
  _SLIST_ENTRY **v66; // rax
  _SLIST_ENTRY *v67; // rax
  int v68; // ecx
  _SLIST_ENTRY *v69; // r12
  int v70; // ebp
  _SLIST_ENTRY *v71; // r13
  _SLIST_ENTRY *v72; // rbp
  int v73; // ecx
  int v74; // ecx
  int v75; // ecx
  __int64 v76; // rcx
  _SLIST_ENTRY *v77; // rdx
  __int64 ObjectPath; // rax
  void *v79; // rdx
  void *v80; // rbp
  __int64 v81; // rdx
  __int64 Next_high; // rcx
  int v83; // ecx
  _SLIST_ENTRY *Next; // r10
  _SLIST_ENTRY *v85; // rcx
  _SLIST_ENTRY **v86; // rax
  __int64 v87; // rcx
  _SLIST_ENTRY *v88; // rcx
  _SLIST_ENTRY **v89; // rax
  char v90; // cl
  _SLIST_ENTRY *v91; // rdx
  char v92; // cl
  _SLIST_ENTRY *v93; // rax
  void *v94; // rsi
  char v95; // [rsp+60h] [rbp+8h]

  v1 = 0;
  v2 = (_SLIST_ENTRY *)(ListEntry + 392);
  if ( v2->Next == v2 )
  {
    v4 = (_SLIST_ENTRY *)qword_1C00767A8;
    if ( *(__int64 **)qword_1C00767A8 != &RunningContextListHead )
      __fastfail(3u);
    v2->Next = (_SLIST_ENTRY *)&RunningContextListHead;
    *((_QWORD *)ListEntry + 50) = v4;
    v4->Next = v2;
    qword_1C00767A8 = (__int64)(ListEntry + 392);
    v95 = 0;
  }
  else
  {
    v95 = 1;
  }
  v5 = (*((_DWORD *)ListEntry + 16) & 0x200) == 0;
  *((_QWORD *)ListEntry + 51) = KeGetCurrentThread();
  if ( !v5 )
    gReadyQueue |= 0x200u;
  v6 = *((_QWORD *)ListEntry + 13);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 32);
  else
    v7 = *((_QWORD *)ListEntry + 9);
  CurrentThread = KeGetCurrentThread();
  v9 = *((unsigned int *)ListEntry + 16);
  v10 = *((_QWORD *)ListEntry + 51);
  v11 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C00776D0 )
  {
    v12 = _InterlockedExchangeAdd((_DWORD *)&qword_1C00776C8 + 1, 1u);
    if ( (_DWORD)qword_1C00776C8 == 204 )
      v13 = v12 % 0xCC;
    else
      v13 = v12 % (unsigned int)qword_1C00776C8;
    v14 = 72LL * v13;
    *(_QWORD *)((char *)qword_1C00776D0 + v14 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C00776D0 + v14) = 1381322307;
    *(_QWORD *)((char *)qword_1C00776D0 + v14 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_1C00776D0 + v14 + 24) = v10;
    *(_QWORD *)((char *)qword_1C00776D0 + v14 + 32) = ListEntry;
    *(_QWORD *)((char *)qword_1C00776D0 + v14 + 40) = v11;
    *(_QWORD *)((char *)qword_1C00776D0 + v14 + 48) = ListEntry;
    *(_QWORD *)((char *)qword_1C00776D0 + v14 + 56) = v7;
    *(_QWORD *)((char *)qword_1C00776D0 + v14 + 64) = v9;
  }
  do
  {
    v15 = 0LL;
    *((_DWORD *)ListEntry + 16) = *((_DWORD *)ListEntry + 16) & 0xFFFFFFE7 | 0x10;
    KeReleaseSpinLock(&SpinLock, byte_1C00775A0);
    do
    {
      if ( !*((_QWORD *)ListEntry + 52) )
        break;
      v16 = gDebugger;
      if ( (gDebugger & 0x1000) != 0 )
      {
        ConPrintf("\nProcess AML Debugger Request.\n");
        _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
        AMLIDebugger();
        v16 = gDebugger;
      }
      v17 = (_SLIST_ENTRY *)*((_QWORD *)ListEntry + 52);
      v18 = (__int64 (__fastcall *)(__int64, __int64, unsigned int))*((_QWORD *)&v17[1].Next + 1);
      if ( v18 == ProcessEvalObj )
      {
        if ( (v16 & 0xD0) != 0 && !(_DWORD)v15 )
        {
          ObjectPath = GetObjectPath(v17[2].Next);
          v79 = &unk_1C0066CD0;
          v80 = (void *)ObjectPath;
          if ( ObjectPath )
            LODWORD(v79) = ObjectPath;
          PrintDebugMessage(45, (_DWORD)v79, 0, 0, 0LL);
          if ( v80 )
            ExFreePoolWithTag(v80, 0);
          DumpObject(v17[3].Next, v81, 0LL);
          ConPrintf("\n");
        }
        v54 = (_SLIST_ENTRY *)*((_QWORD *)ListEntry + 52);
        v55 = v54 - 1;
        *((_QWORD *)ListEntry + 52) = *((_QWORD *)&v54->Next + 1);
        LODWORD(v54[-1].Next) = 0;
        NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        v56 = *((_QWORD *)&v55->Next + 1);
        v57 = *(_SLIST_ENTRY **)(v56 + 40);
        for ( i = (_SLIST_ENTRY *)(v56 + 40); v57 != i; v57 = v57->Next )
        {
          if ( &v55[1] < v57 )
            break;
        }
        v59 = (_SLIST_ENTRY **)*((_QWORD *)&v57->Next + 1);
        v60 = v55 + 1;
        if ( *v59 != v57 )
          __fastfail(3u);
        v60->Next = v57;
        *((_QWORD *)&v55[1].Next + 1) = v59;
        *v59 = v60;
        *((_QWORD *)&v57->Next + 1) = v60;
        v61 = (__int64)&v60->Next[-1];
        if ( v60->Next != i )
        {
          Next_high = HIDWORD(v55->Next);
          if ( (_SLIST_ENTRY *)v61 == (_SLIST_ENTRY *)((char *)v55 + Next_high) )
          {
            v83 = *(_DWORD *)(v61 + 4) + Next_high;
            Next = v60->Next;
            HIDWORD(v55->Next) = v83;
            v85 = Next->Next;
            v86 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1);
            if ( *(&Next->Next->Next + 1) != Next || *v86 != Next )
              __fastfail(3u);
            *v86 = v85;
            *((_QWORD *)&v85->Next + 1) = v86;
          }
        }
        v62 = (_SLIST_ENTRY *)*((_QWORD *)&v55[1].Next + 1);
        v63 = v62 - 1;
        if ( v62 != i )
        {
          v87 = HIDWORD(v63->Next);
          if ( v55 == (_SLIST_ENTRY *)((char *)v63 + v87) )
          {
            HIDWORD(v63->Next) = HIDWORD(v55->Next) + v87;
            v88 = v60->Next;
            v89 = (_SLIST_ENTRY **)*((_QWORD *)&v55[1].Next + 1);
            if ( *(&v60->Next->Next + 1) != v60 || *v89 != v60 )
              __fastfail(3u);
            *v89 = v88;
            v55 = v63;
            *((_QWORD *)&v88->Next + 1) = v89;
          }
        }
        if ( *(_QWORD *)(v56 + 32) <= (unsigned __int64)v55 + HIDWORD(v55->Next) )
        {
          *(_QWORD *)(v56 + 32) = v55;
          v64 = v55 + 1;
          v65 = v64->Next;
          v66 = (_SLIST_ENTRY **)*((_QWORD *)&v64->Next + 1);
          if ( *(&v64->Next->Next + 1) != v64 || *v66 != v64 )
            __fastfail(3u);
          *v66 = v65;
          *((_QWORD *)&v65->Next + 1) = v66;
        }
        KeReleaseSpinLock(&gmutHeap, NewIrql);
      }
      else
      {
        v15 = (unsigned int)v18((__int64)ListEntry, *((_QWORD *)ListEntry + 52), v15);
      }
    }
    while ( (_DWORD)v15 != 32772 && (_DWORD)v15 != 0x8000 );
    byte_1C00775A0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v19 = *((_DWORD *)ListEntry + 16);
    if ( (v19 & 0x80u) == 0 || (_DWORD)v15 != 0x8000 )
      *((_DWORD *)ListEntry + 16) = v19 & 0xFFFFFFEF;
  }
  while ( (*((_DWORD *)ListEntry + 16) & 8) != 0 );
  if ( (_DWORD)v15 == 32772 )
  {
    *((_DWORD *)ListEntry + 16) |= 0x20u;
    goto LABEL_49;
  }
  if ( (_DWORD)v15 != 0x8000 )
  {
    KeReleaseSpinLock(&SpinLock, byte_1C00775A0);
    if ( (_DWORD)v15 )
      goto LABEL_30;
    v20 = (_SLIST_ENTRY *)*((_QWORD *)ListEntry + 22);
    if ( !v20 )
      goto LABEL_30;
    v21 = gpheapGlobal;
    if ( v20 == (_SLIST_ENTRY *)(ListEntry + 128) )
      goto LABEL_30;
    *v20 = *((_SLIST_ENTRY *)ListEntry + 8);
    v20[1] = *((_SLIST_ENTRY *)ListEntry + 9);
    v20[2].Next = (_SLIST_ENTRY *)*((_QWORD *)ListEntry + 20);
    if ( *((_QWORD *)ListEntry + 20) == v15 )
      goto LABEL_30;
    v67 = (_SLIST_ENTRY *)NewObjData(v21, ListEntry + 128);
    v20[2].Next = v67;
    if ( !v67 )
    {
      LODWORD(v15) = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(43, 0, 0, 0, 0LL);
      goto LABEL_30;
    }
    memmove(v67, *((const void **)ListEntry + 20), *((unsigned int *)ListEntry + 38));
    v68 = WORD1(v20->Next);
    if ( v68 == 4 )
    {
      v69 = (_SLIST_ENTRY *)*((_QWORD *)ListEntry + 20);
      v70 = 0;
      v71 = v20[2].Next;
      for ( LODWORD(v71->Next) = v69->Next; v70 < SLODWORD(v69->Next); ++v70 )
      {
        LODWORD(v15) = DupObjData(v21, &v71->Next + 5 * v70 + 1, &v69->Next + 5 * v70 + 1);
        if ( (_DWORD)v15 )
          break;
      }
      goto LABEL_97;
    }
    v73 = v68 - 5;
    if ( v73 )
    {
      v74 = v73 - 125;
      if ( !v74 )
      {
        v92 = gdwfAMLI;
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)&v20[2].Next->Next[7]);
          v92 = gdwfAMLI;
        }
        v91 = (_SLIST_ENTRY *)*((_QWORD *)&v20[2].Next->Next + 1);
        if ( (v92 & 4) == 0 )
          goto LABEL_97;
LABEL_154:
        _InterlockedIncrement((volatile signed __int32 *)&v91[7]);
LABEL_97:
        LOWORD(v20->Next) &= ~1u;
        _InterlockedExchange((volatile __int32 *)&v20->Next + 2, 0);
LABEL_30:
        v22 = *((_DWORD *)ListEntry + 16);
        if ( (v22 & 0x20) != 0 )
        {
          v23 = (_QWORD *)*((_QWORD *)ListEntry + 13);
          if ( v23 )
          {
            v24 = (__int64 (__fastcall *)())v23[11];
            v25 = v23[4];
            v26 = (_SLIST_ENTRY *)v23[12];
            v27 = v23[13];
          }
          else
          {
            v24 = (__int64 (__fastcall *)())*((_QWORD *)ListEntry + 21);
            v25 = *((_QWORD *)ListEntry + 9);
            v26 = (_SLIST_ENTRY *)*((_QWORD *)ListEntry + 22);
            v27 = *((_QWORD *)ListEntry + 23);
          }
          if ( v24 == EvalMethodComplete )
          {
            LogSchedEvent(1146048069, (_DWORD)ListEntry, v25, v15, v27);
            *(_DWORD *)v27 = v15;
            *(_QWORD *)(v27 + 8) = ListEntry;
            KeSetEvent((PRKEVENT)(v27 + 16), 0, 0);
          }
          else if ( (_DWORD)v15 == 32771 )
          {
            RestartContext((PSLIST_ENTRY)ListEntry);
          }
          else if ( v24 )
          {
            v28 = KeGetCurrentThread();
            v29 = *((_QWORD *)ListEntry + 51);
            v30 = (unsigned int)gReadyQueue;
            if ( (gDebugger & 0x8000) != 0 && qword_1C00776D0 )
            {
              v31 = _InterlockedExchangeAdd((_DWORD *)&qword_1C00776C8 + 1, 1u);
              if ( (_DWORD)qword_1C00776C8 == 204 )
                v32 = v31 % 0xCC;
              else
                v32 = v31 % (unsigned int)qword_1C00776C8;
              v33 = 72LL * v32;
              *(_QWORD *)((char *)qword_1C00776D0 + v33 + 8) = MEMORY[0xFFFFF78000000008];
              *(_DWORD *)((char *)qword_1C00776D0 + v33) = 1095975746;
              *(_QWORD *)((char *)qword_1C00776D0 + v33 + 16) = v28;
              *(_QWORD *)((char *)qword_1C00776D0 + v33 + 24) = v29;
              *(_QWORD *)((char *)qword_1C00776D0 + v33 + 32) = ListEntry;
              *(_QWORD *)((char *)qword_1C00776D0 + v33 + 40) = v30;
              *(_QWORD *)((char *)qword_1C00776D0 + v33 + 48) = v25;
              *(_QWORD *)((char *)qword_1C00776D0 + v33 + 56) = (int)v15;
              *(_QWORD *)((char *)qword_1C00776D0 + v33 + 64) = v27;
            }
            ((void (__fastcall *)(__int64, _QWORD, _SLIST_ENTRY *, __int64))v24)(v25 + 120, (unsigned int)v15, v26, v27);
          }
          v22 = *((_DWORD *)ListEntry + 16);
          if ( (v22 & 0x100) != 0 )
            LODWORD(v15) = 32772;
        }
        if ( (v22 & 0x200) != 0 )
          gReadyQueue &= ~0x200u;
        v34 = (PSLIST_ENTRY)(ListEntry + 48);
        while ( v34->Next != v34 )
        {
          v77 = v34->Next;
          if ( *((_DWORD *)&v34->Next[-2].Next + 2) == 1 )
          {
            ReleaseASLMutex(ListEntry, *((_QWORD *)&v77[-1].Next + 1), 0LL);
          }
          else
          {
            v93 = v77->Next;
            if ( *(&v77->Next + 1) != v34 || *(&v93->Next + 1) != v77 )
              __fastfail(3u);
            v34->Next = v93;
            *((_QWORD *)&v93->Next + 1) = v34;
            HeapFree(&v77[-2].Next + 1);
          }
        }
        v1 = 1;
        byte_1C00775A0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
        goto LABEL_49;
      }
      v75 = v74 - 1;
      if ( v75 )
      {
        if ( v75 != 1 )
          goto LABEL_97;
        v90 = gdwfAMLI;
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v20[2].Next->Next + 1) + 112LL));
          v90 = gdwfAMLI;
        }
        v91 = v20[2].Next->Next;
        if ( (v90 & 4) == 0 )
          goto LABEL_97;
        goto LABEL_154;
      }
    }
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)&v20[2].Next->Next[7]);
    goto LABEL_97;
  }
  if ( !*((_QWORD *)ListEntry + 13) )
    *((_DWORD *)ListEntry + 16) &= ~0x80u;
  LODWORD(v15) = 0;
LABEL_49:
  if ( !v95 )
  {
    v35 = v2->Next;
    v36 = (_SLIST_ENTRY **)*((_QWORD *)&v2->Next + 1);
    if ( *(&v2->Next->Next + 1) != v2 || *v36 != v2 )
      __fastfail(3u);
    *v36 = v35;
    *((_QWORD *)&v35->Next + 1) = v36;
    *((_QWORD *)&v2->Next + 1) = v2;
    v2->Next = v2;
    *((_QWORD *)ListEntry + 51) = 0LL;
  }
  if ( v1 )
  {
    byte_1C00779B0 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
    v37 = (_SLIST_ENTRY *)*((_QWORD *)ListEntry + 2);
    v38 = (PSLIST_ENTRY *)*((_QWORD *)ListEntry + 3);
    if ( *((char **)&v37->Next + 1) != ListEntry + 16 || *v38 != (PSLIST_ENTRY)(ListEntry + 16) )
      __fastfail(3u);
    *v38 = v37;
    v39 = (PSLIST_ENTRY)(ListEntry + 32);
    *((_QWORD *)&v37->Next + 1) = v38;
    v40 = (_SLIST_ENTRY *)*((_QWORD *)ListEntry + 4);
    v41 = (_SLIST_ENTRY **)*((_QWORD *)ListEntry + 5);
    if ( *((char **)&v40->Next + 1) != ListEntry + 32 || *v41 != v39 )
      __fastfail(3u);
    *v41 = v40;
    *((_QWORD *)&v40->Next + 1) = v41;
    *((_QWORD *)ListEntry + 5) = ListEntry + 32;
    v39->Next = v39;
    KeReleaseSpinLock(&gmutCtxtList, byte_1C00779B0);
    v42 = (PSLIST_ENTRY)(ListEntry + 128);
    if ( (ListEntry[128] & 1) != 0 )
    {
      v76 = *((_QWORD *)ListEntry + 17);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v76 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v76 & 8) != 0 )
        FreeData();
    }
    else if ( *((_QWORD *)ListEntry + 20) )
    {
      if ( *((int *)ListEntry + 34) > 0 )
      {
        LOWORD(v42->Next) |= 8u;
      }
      else
      {
        if ( *((_WORD *)ListEntry + 65) == 4 )
          FreeDataBuffs(*((_QWORD *)ListEntry + 20) + 8LL, **((unsigned int **)ListEntry + 20));
        FreeObjData(ListEntry + 128);
      }
    }
    v42->Next = 0LL;
    *((_QWORD *)ListEntry + 17) = 0LL;
    *((_QWORD *)ListEntry + 18) = 0LL;
    *((_QWORD *)ListEntry + 19) = 0LL;
    *((_QWORD *)ListEntry + 20) = 0LL;
    v43 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
    --gdwcCTObjs;
    KeReleaseSpinLock(&gdwGContextSpinLock, v43);
    if ( AcpiDiagHandle )
    {
      if ( EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
      {
        v94 = (void *)GetObjectPath(*((_QWORD *)ListEntry + 9));
        AcpiDiagTraceAmlEvaluation(v94, 0LL);
        if ( v94 )
          ExFreePoolWithTag(v94, 0);
      }
    }
    v44 = *((_QWORD *)ListEntry + 9);
    if ( v44 )
    {
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v44 + 64) |= 4u;
        if ( (*(_WORD *)(v44 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v44);
      }
      *((_QWORD *)ListEntry + 9) = 0LL;
    }
    v45 = *((_QWORD *)ListEntry + 53);
    if ( v45 )
    {
      DereferenceObjectEx(v45, 0LL);
      *((_QWORD *)ListEntry + 53) = 0LL;
    }
    v46 = (_SLIST_ENTRY *)*((_QWORD *)ListEntry + 10);
    if ( v46 )
    {
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)&v46[7], 0xFFFFFFFF) == 1 )
      {
        LOWORD(v46[4].Next) |= 4u;
        if ( ((__int64)v46[4].Next & 0x40) == 0 )
          FreeNameSpaceObjects(v46);
      }
      *((_QWORD *)ListEntry + 10) = 0LL;
    }
    v47 = (_SLIST_ENTRY *)*((_QWORD *)ListEntry + 58);
    if ( v47 )
    {
      do
      {
        v72 = (_SLIST_ENTRY *)*((_QWORD *)&v47[1].Next + 1);
        ++dword_1C00779DC;
        if ( ExQueryDepthSList(&AMLIContextLookAsideList) >= (unsigned __int16)word_1C00779D0 )
        {
          ++dword_1C00779E0;
          ((void (__fastcall *)(_SLIST_ENTRY *))qword_1C00779F8)(v47);
        }
        else
        {
          ExpInterlockedPushEntrySList(&AMLIContextLookAsideList, v47);
        }
        v47 = v72;
      }
      while ( v72 );
    }
    ++dword_1C00779DC;
    if ( ExQueryDepthSList(&AMLIContextLookAsideList) >= (unsigned __int16)word_1C00779D0 )
    {
      ++dword_1C00779E0;
      ((void (__fastcall *)(char *))qword_1C00779F8)(ListEntry);
    }
    else
    {
      ExpInterlockedPushEntrySList(&AMLIContextLookAsideList, (PSLIST_ENTRY)ListEntry);
    }
  }
  if ( (gReadyQueue & 4) != 0 && glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
  {
    gReadyQueue = gReadyQueue & 0xFFFFFFF3 | 8;
    if ( (__int64 *)qword_1C00775D0 != &qword_1C00775D0 )
    {
      InvokePauseCallbacks();
      LogSchedEvent(1346454338, 0, (_DWORD)ListEntry, v15, 0LL);
    }
  }
  v48 = KeGetCurrentThread();
  v49 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C00776D0 )
  {
    v50 = _InterlockedExchangeAdd((_DWORD *)&qword_1C00776C8 + 1, 1u);
    if ( (_DWORD)qword_1C00776C8 == 204 )
      v51 = v50 % 0xCC;
    else
      v51 = v50 % (unsigned int)qword_1C00776C8;
    v52 = 72LL * v51;
    *(_QWORD *)((char *)qword_1C00776D0 + v52 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C00776D0 + v52) = 1381322273;
    *(_QWORD *)((char *)qword_1C00776D0 + v52 + 16) = v48;
    *(_QWORD *)((char *)qword_1C00776D0 + v52 + 24) = 0LL;
    *(_QWORD *)((char *)qword_1C00776D0 + v52 + 32) = 0LL;
    *(_QWORD *)((char *)qword_1C00776D0 + v52 + 40) = v49;
    *(_QWORD *)((char *)qword_1C00776D0 + v52 + 48) = ListEntry;
    *(_QWORD *)((char *)qword_1C00776D0 + v52 + 56) = (int)v15;
    *(_QWORD *)((char *)qword_1C00776D0 + v52 + 64) = 0LL;
  }
  return (unsigned int)v15;
}
