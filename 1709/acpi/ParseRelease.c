/*
 * XREFs of ParseRelease @ 0x1C00196E0
 * Callers:
 *     ParseCall @ 0x1C000B660 (ParseCall.c)
 *     ReleaseASLMutex @ 0x1C002A3E0 (ReleaseASLMutex.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C00079E0 (InsertReadyQueue.c)
 *     HeapFree @ 0x1C000D8A0 (HeapFree.c)
 *     PerformMutexDriverCallbacks @ 0x1C0011AC8 (PerformMutexDriverCallbacks.c)
 *     HeapInsertFreeList @ 0x1C0019BF0 (HeapInsertFreeList.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     ReleaseGL @ 0x1C005DBEC (ReleaseGL.c)
 */

__int64 __fastcall ParseRelease(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v5; // edx
  KIRQL v8; // bp
  __int64 v9; // rax
  int v10; // edx
  KSPIN_LOCK *v11; // rbp
  KIRQL v12; // al
  KIRQL v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdx
  _QWORD *v16; // rax
  struct _SLIST_ENTRY **v17; // rsi
  struct _SLIST_ENTRY *v18; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // r8d
  int v23; // edx
  __int64 v24; // r8
  struct _SLIST_ENTRY *Next; // rax

  v3 = *(_QWORD *)(a2 + 32);
  v5 = *(_DWORD *)(a2 + 16);
  if ( (v5 & 0xF) != 0 )
  {
    if ( (v5 & 0xF) == 1 )
      goto LABEL_10;
    if ( (v5 & 0xF) == 2 )
      goto LABEL_12;
    if ( (v5 & 0xF) != 3 )
    {
      if ( (v5 & 0xF) != 4 )
        return a3;
      goto LABEL_19;
    }
LABEL_18:
    if ( (++*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
    {
      a3 = ReleaseGL(a1);
      if ( a3 )
      {
        LogError(3222536195LL);
        AcpiDiagTraceAmlError(a1, 3222536195LL);
        PrintDebugMessage(172, a3, 0, 0, 0LL);
        a3 = -1072431101;
      }
    }
LABEL_19:
    if ( (*(_DWORD *)(a2 + 16) & 0x40000) == 0 )
    {
      v20 = *(_QWORD *)(a1 + 416);
      *(_QWORD *)(a1 + 416) = *(_QWORD *)(v20 + 8);
      HeapFree(v20);
    }
    return a3;
  }
  a3 = 0;
  *(_DWORD *)(a2 + 16) = v5 + 1;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 184));
  if ( !*(_DWORD *)(v3 + 4) )
  {
    a3 = -1072431082;
    LogError(3222536214LL);
    AcpiDiagTraceAmlError(a1, 3222536214LL);
    v21 = 137;
LABEL_30:
    v22 = 0;
    v23 = 0;
    goto LABEL_31;
  }
  v9 = *(_QWORD *)(v3 + 8);
  if ( !v9 || *(_QWORD *)(v9 + 8) != a1 )
  {
    a3 = -1072431081;
    LogError(3222536215LL);
    AcpiDiagTraceAmlError(a1, 3222536215LL);
    v21 = 138;
    goto LABEL_30;
  }
  if ( *(_DWORD *)v3 > *(_DWORD *)(a1 + 112) )
  {
    a3 = -1072431083;
    LogError(3222536213LL);
    AcpiDiagTraceAmlError(a1, 3222536213LL);
    v22 = *(_DWORD *)(a1 + 112);
    v21 = 136;
    v23 = *(_DWORD *)v3;
LABEL_31:
    PrintDebugMessage(v21, v23, v22, 0, 0LL);
    *(_DWORD *)(a2 + 16) += 2;
    goto LABEL_8;
  }
  *(_DWORD *)(a1 + 112) = *(_DWORD *)v3;
  if ( *(_DWORD *)(v3 + 4) == 1 )
    *(_DWORD *)(a2 + 16) |= 0x80000u;
LABEL_8:
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 184), v8);
  v5 = *(_DWORD *)(a2 + 16);
  if ( (*(_BYTE *)(a2 + 16) & 0xF) == 3 )
    goto LABEL_18;
  if ( (v5 & 0x80000) == 0 )
  {
    *(_DWORD *)(a2 + 16) = v5 + 1;
    goto LABEL_12;
  }
LABEL_10:
  v10 = v5 & 0x20000;
  if ( *(_DWORD *)(v3 + 32) != 3 )
    goto LABEL_11;
  v24 = a1;
  if ( !v10 )
    v24 = 0LL;
  a3 = PerformMutexDriverCallbacks(3, v3, v24, 0LL, 0);
  if ( a3 != 32772 )
  {
LABEL_11:
    ++*(_DWORD *)(a2 + 16);
LABEL_12:
    ++*(_DWORD *)(a2 + 16);
    v11 = (KSPIN_LOCK *)(v3 + 184);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 184));
    --*(_DWORD *)(v3 + 4);
    v13 = v12;
    if ( (*(_DWORD *)(a2 + 16) & 0x80000) != 0 )
    {
      v14 = *(_QWORD *)(v3 + 8);
      v15 = *(_QWORD *)(v14 + 24);
      if ( *(_QWORD *)(v15 + 8) != v14 + 24 || (v16 = *(_QWORD **)(v14 + 32), *v16 != v14 + 24) )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *(_DWORD *)(v14 - 16) = 0;
      NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v14 - 8), v14 - 16);
      KeReleaseSpinLock(&gmutHeap, NewIrql);
      *(_QWORD *)(v3 + 8) = 0LL;
      v17 = (struct _SLIST_ENTRY **)(v3 + 16);
      byte_1C0079660 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
      v18 = *v17;
      if ( *v17 != (struct _SLIST_ENTRY *)v17 )
      {
        if ( *((struct _SLIST_ENTRY ***)&v18->Next + 1) != v17 || (Next = v18->Next, *(&v18->Next->Next + 1) != v18) )
          __fastfail(3u);
        *v17 = Next;
        *((_QWORD *)&Next->Next + 1) = v17;
        *((_QWORD *)&v18->Next + 1) = v18;
        v18->Next = v18;
        InsertReadyQueue(v18 - 2, 1);
      }
      KeReleaseSpinLock(&SpinLock, byte_1C0079660);
    }
    KeReleaseSpinLock(v11, v13);
    goto LABEL_18;
  }
  return a3;
}
