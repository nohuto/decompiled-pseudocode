/*
 * XREFs of InsertReadyQueue @ 0x1C00079E0
 * Callers:
 *     AsyncEvalObject @ 0x1C00081E0 (AsyncEvalObject.c)
 *     DequeueAndReadyContext @ 0x1C0016530 (DequeueAndReadyContext.c)
 *     RestartContext @ 0x1C0018450 (RestartContext.c)
 *     ParseRelease @ 0x1C00196E0 (ParseRelease.c)
 *     RestartCtxtPassive @ 0x1C0021DE0 (RestartCtxtPassive.c)
 * Callees:
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 *     RestartContext @ 0x1C0018450 (RestartContext.c)
 *     LogSchedEvent @ 0x1C0028490 (LogSchedEvent.c)
 *     AMLIDebugger @ 0x1C005DC30 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 */

__int64 __fastcall InsertReadyQueue(PSLIST_ENTRY ListEntry, char a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r15
  unsigned __int32 v11; // ecx
  unsigned int v12; // ecx
  __int64 v13; // rdx
  int Next; // eax
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // r9
  struct _KTHREAD *v18; // rsi
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // rbp
  unsigned __int32 v22; // ecx
  unsigned int v23; // ecx
  __int64 v24; // rdx
  struct _KTHREAD *v25; // r8
  __int64 v26; // r9
  unsigned __int32 v27; // edi
  unsigned int v28; // edi
  __int64 v29; // rdx
  KIRQL v30; // al
  __int64 v31; // rax
  __int64 v32; // r8
  struct _KTHREAD *v33; // r11
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // rsi
  unsigned __int32 v37; // edi
  unsigned int v38; // edi
  __int64 v39; // rdx
  int v40; // eax
  PSLIST_ENTRY v41; // rax
  PSLIST_ENTRY *v42; // rdx
  _QWORD *v44; // r8
  __int64 (__fastcall *v45)(); // rax
  __int64 v46; // r9
  __int64 v47; // r8
  struct _KTHREAD *v48; // r11
  __int64 v49; // r10
  __int64 v50; // rbp
  unsigned __int32 v51; // edi
  unsigned int v52; // edi
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // r9
  int v58; // eax

  LODWORD(v2) = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v5 = *((_QWORD *)&ListEntry[6].Next + 1);
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 32);
  else
    v6 = *((_QWORD *)&ListEntry[4].Next + 1);
  CurrentThread = KeGetCurrentThread();
  v8 = *((_QWORD *)&ListEntry[7].Next + 1);
  v9 = *((_QWORD *)&ListEntry[25].Next + 1);
  v10 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && P )
  {
    v11 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0079788 + 1, 1u);
    if ( (_DWORD)qword_1C0079788 == 204 )
      v12 = v11 % 0xCC;
    else
      v12 = v11 % (unsigned int)qword_1C0079788;
    v13 = 72LL * v12;
    *(_QWORD *)((char *)P + v13 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)P + v13) = 1229869905;
    *(_QWORD *)((char *)P + v13 + 16) = CurrentThread;
    *(_QWORD *)((char *)P + v13 + 24) = v9;
    *(_QWORD *)((char *)P + v13 + 32) = ListEntry;
    *(_QWORD *)((char *)P + v13 + 40) = v10;
    *(_QWORD *)((char *)P + v13 + 48) = ListEntry;
    *(_QWORD *)((char *)P + v13 + 56) = v6;
    *(_QWORD *)((char *)P + v13 + 64) = v8;
  }
  Next = (int)ListEntry[4].Next;
  if ( (Next & 1) != 0 )
  {
    LODWORD(ListEntry[4].Next) = Next & 0xFFFFFFFE;
    if ( !KeCancelTimer((PKTIMER)&ListEntry[12]) )
      LODWORD(ListEntry[4].Next) |= 2u;
  }
  LODWORD(ListEntry[4].Next) |= 8u;
  v15 = (int)ListEntry[4].Next;
  if ( (v15 & 2) == 0 && ((v15 & 0x10) == 0 || (v15 & 0x80u) != 0) )
  {
    if ( !a2 )
    {
      if ( (gdwfAMLI & 4) != 0 )
      {
        if ( (gReadyQueue & 8) == 0 )
        {
LABEL_73:
          LODWORD(v2) = RunContext(ListEntry);
          return (unsigned int)v2;
        }
        v56 = *((_QWORD *)&ListEntry[6].Next + 1);
        if ( v56 )
          v57 = *(_QWORD *)(v56 + 32);
        else
          v57 = *((_QWORD *)&ListEntry[4].Next + 1);
        LogSchedEvent(1363367000, (_DWORD)ListEntry, (_DWORD)ListEntry, v57, *((_QWORD *)&ListEntry[7].Next + 1));
        v58 = (int)ListEntry[4].Next;
        if ( (v58 & 0x40) != 0 )
          goto LABEL_44;
        LODWORD(ListEntry[4].Next) = v58 | 0x40;
        v41 = ListEntry + 2;
        v42 = (PSLIST_ENTRY *)qword_1C0079650;
        if ( *(__int64 **)qword_1C0079650 != &qword_1C0079648 )
          __fastfail(3u);
      }
      else
      {
        if ( (v15 & 0x80u) != 0 && *((struct _KTHREAD **)&ListEntry[25].Next + 1) == KeGetCurrentThread() )
        {
          v54 = *((_QWORD *)&ListEntry[6].Next + 1);
          if ( v54 )
            v55 = *(_QWORD *)(v54 + 32);
          else
            v55 = *((_QWORD *)&ListEntry[4].Next + 1);
          LogSchedEvent(1313166164, (_DWORD)ListEntry, (_DWORD)ListEntry, v55, *((_QWORD *)&ListEntry[7].Next + 1));
          goto LABEL_73;
        }
        if ( (__int64 *)RunningContextListHead == &RunningContextListHead && (gReadyQueue & 8) == 0 )
        {
          v16 = *((_QWORD *)&ListEntry[6].Next + 1);
          if ( v16 )
            v17 = *(_QWORD *)(v16 + 32);
          else
            v17 = *((_QWORD *)&ListEntry[4].Next + 1);
          v18 = KeGetCurrentThread();
          v19 = *((_QWORD *)&ListEntry[7].Next + 1);
          v20 = *((_QWORD *)&ListEntry[25].Next + 1);
          v21 = (unsigned int)gReadyQueue;
          if ( (gDebugger & 0x8000) != 0 && P )
          {
            v22 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0079788 + 1, 1u);
            if ( (_DWORD)qword_1C0079788 == 204 )
              v23 = v22 % 0xCC;
            else
              v23 = v22 % (unsigned int)qword_1C0079788;
            v24 = 72LL * v23;
            *(_QWORD *)((char *)P + v24 + 8) = MEMORY[0xFFFFF78000000008];
            *(_DWORD *)((char *)P + v24) = 1163280716;
            *(_QWORD *)((char *)P + v24 + 16) = v18;
            *(_QWORD *)((char *)P + v24 + 24) = v20;
            *(_QWORD *)((char *)P + v24 + 32) = ListEntry;
            *(_QWORD *)((char *)P + v24 + 40) = v21;
            *(_QWORD *)((char *)P + v24 + 48) = ListEntry;
            *(_QWORD *)((char *)P + v24 + 56) = v17;
            *(_QWORD *)((char *)P + v24 + 64) = v19;
          }
          v2 = (int)RunContext(ListEntry);
          if ( (__int64 *)qword_1C0079648 != &qword_1C0079648 && (gReadyQueue & 2) == 0 )
          {
            v25 = KeGetCurrentThread();
            v26 = (unsigned int)gReadyQueue;
            if ( (gDebugger & 0x8000) != 0 && P )
            {
              v27 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0079788 + 1, 1u);
              if ( (_DWORD)qword_1C0079788 == 204 )
                v28 = v27 % 0xCC;
              else
                v28 = v27 % (unsigned int)qword_1C0079788;
              v29 = 72LL * v28;
              *(_QWORD *)((char *)P + v29 + 8) = MEMORY[0xFFFFF78000000008];
              *(_DWORD *)((char *)P + v29) = 1263092555;
              *(_QWORD *)((char *)P + v29 + 16) = v25;
              *(_QWORD *)((char *)P + v29 + 24) = 0LL;
              *(_QWORD *)((char *)P + v29 + 32) = 0LL;
              *(_QWORD *)((char *)P + v29 + 40) = v26;
              *(_QWORD *)((char *)P + v29 + 48) = v2;
              *(_QWORD *)((char *)P + v29 + 56) = 0LL;
              *(_QWORD *)((char *)P + v29 + 64) = 0LL;
            }
            gReadyQueue |= 2u;
            v30 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
            if ( *(__int64 **)qword_1C0078868 != &ACPIWorkQueue )
              __fastfail(3u);
            qword_1C0079668 = (__int64)&ACPIWorkQueue;
            qword_1C0079670 = qword_1C0078868;
            *(_QWORD *)qword_1C0078868 = &qword_1C0079668;
            qword_1C0078868 = (__int64)&qword_1C0079668;
            KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v30);
            KeSetEvent(&ACPIProcessWorkQueueEvent, 0, 0);
          }
          return (unsigned int)v2;
        }
        v31 = *((_QWORD *)&ListEntry[6].Next + 1);
        if ( v31 )
          v32 = *(_QWORD *)(v31 + 32);
        else
          v32 = *((_QWORD *)&ListEntry[4].Next + 1);
        v33 = KeGetCurrentThread();
        v34 = *((_QWORD *)&ListEntry[7].Next + 1);
        v35 = *((_QWORD *)&ListEntry[25].Next + 1);
        v36 = (unsigned int)gReadyQueue;
        if ( (gDebugger & 0x8000) != 0 && P )
        {
          v37 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0079788 + 1, 1u);
          if ( (_DWORD)qword_1C0079788 == 204 )
            v38 = v37 % 0xCC;
          else
            v38 = v37 % (unsigned int)qword_1C0079788;
          v39 = 72LL * v38;
          *(_QWORD *)((char *)P + v39 + 8) = MEMORY[0xFFFFF78000000008];
          *(_DWORD *)((char *)P + v39) = 1363367000;
          *(_QWORD *)((char *)P + v39 + 16) = v33;
          *(_QWORD *)((char *)P + v39 + 24) = v35;
          *(_QWORD *)((char *)P + v39 + 32) = ListEntry;
          *(_QWORD *)((char *)P + v39 + 40) = v36;
          *(_QWORD *)((char *)P + v39 + 48) = ListEntry;
          *(_QWORD *)((char *)P + v39 + 56) = v32;
          *(_QWORD *)((char *)P + v39 + 64) = v34;
        }
        v40 = (int)ListEntry[4].Next;
        if ( (v40 & 0x40) != 0 )
        {
LABEL_44:
          LODWORD(ListEntry[4].Next) |= 0x20u;
          LODWORD(v2) = 32772;
          return (unsigned int)v2;
        }
        LODWORD(ListEntry[4].Next) = v40 | 0x40;
        v41 = ListEntry + 2;
        v42 = (PSLIST_ENTRY *)qword_1C0079650;
        if ( *(__int64 **)qword_1C0079650 != &qword_1C0079648 )
          __fastfail(3u);
      }
      v41->Next = (_SLIST_ENTRY *)&qword_1C0079648;
      *((_QWORD *)&v41->Next + 1) = v42;
      *v42 = v41;
      qword_1C0079650 = (__int64)v41;
      goto LABEL_44;
    }
    KeReleaseSpinLock(&SpinLock, byte_1C0079660);
    v44 = (_QWORD *)*((_QWORD *)&ListEntry[6].Next + 1);
    if ( v44 )
    {
      v45 = (__int64 (__fastcall *)())v44[11];
      v46 = v44[4];
      v47 = v44[13];
    }
    else
    {
      v45 = (__int64 (__fastcall *)())*((_QWORD *)&ListEntry[10].Next + 1);
      v46 = *((_QWORD *)&ListEntry[4].Next + 1);
      v47 = *((_QWORD *)&ListEntry[11].Next + 1);
    }
    if ( v45 == EvalMethodComplete )
    {
      v48 = KeGetCurrentThread();
      v49 = *((_QWORD *)&ListEntry[25].Next + 1);
      v50 = (unsigned int)gReadyQueue;
      if ( (gDebugger & 0x8000) != 0 && P )
      {
        v51 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0079788 + 1, 1u);
        if ( (_DWORD)qword_1C0079788 == 204 )
          v52 = v51 % 0xCC;
        else
          v52 = v51 % (unsigned int)qword_1C0079788;
        v53 = 72LL * v52;
        *(_QWORD *)((char *)P + v53 + 8) = MEMORY[0xFFFFF78000000008];
        *(_DWORD *)((char *)P + v53) = 1146048069;
        *(_QWORD *)((char *)P + v53 + 16) = v48;
        *(_QWORD *)((char *)P + v53 + 24) = v49;
        *(_QWORD *)((char *)P + v53 + 32) = ListEntry;
        *(_QWORD *)((char *)P + v53 + 40) = v50;
        *(_QWORD *)((char *)P + v53 + 48) = v46;
        *(_QWORD *)((char *)P + v53 + 56) = 32771LL;
        *(_QWORD *)((char *)P + v53 + 64) = v47;
      }
      *(_DWORD *)v47 = 32771;
      *(_QWORD *)(v47 + 8) = ListEntry;
      KeSetEvent((PRKEVENT)(v47 + 16), 0, 0);
    }
    else
    {
      RestartContext(ListEntry, 0LL);
    }
    byte_1C0079660 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  }
  return (unsigned int)v2;
}
