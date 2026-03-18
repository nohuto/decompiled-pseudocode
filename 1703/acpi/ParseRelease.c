/*
 * XREFs of ParseRelease @ 0x1C0015880
 * Callers:
 *     ParseCall @ 0x1C0014BC0 (ParseCall.c)
 *     ReleaseASLMutex @ 0x1C0029494 (ReleaseASLMutex.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C0004690 (InsertReadyQueue.c)
 *     HeapFree @ 0x1C0015C58 (HeapFree.c)
 *     HeapInsertFreeList @ 0x1C00162F0 (HeapInsertFreeList.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     PerformMutexDriverCallbacks @ 0x1C00234C8 (PerformMutexDriverCallbacks.c)
 *     ReleaseGL @ 0x1C005DDF0 (ReleaseGL.c)
 */

__int64 __fastcall ParseRelease(__int64 a1, __int64 a2, unsigned int a3)
{
  int *v3; // rsi
  int v5; // edx
  KIRQL v8; // r14
  __int64 v9; // rax
  int v10; // edx
  KSPIN_LOCK *v11; // r14
  KIRQL v12; // al
  KIRQL v13; // r12
  __int64 v14; // rdi
  __int64 v15; // r8
  _QWORD *v16; // rdx
  struct _SLIST_ENTRY **v17; // rsi
  KIRQL v18; // al
  struct _SLIST_ENTRY *v19; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // r8d
  int v24; // edx
  int v25; // r8d
  _SLIST_ENTRY *Next; // rax

  v3 = *(int **)(a2 + 32);
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
      v21 = *(_QWORD *)(a1 + 416);
      *(_QWORD *)(a1 + 416) = *(_QWORD *)(v21 + 8);
      HeapFree(v21);
    }
    return a3;
  }
  a3 = 0;
  *(_DWORD *)(a2 + 16) = v5 + 1;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3 + 23);
  if ( !v3[1] )
  {
    a3 = -1072431082;
    LogError(3222536214LL);
    AcpiDiagTraceAmlError(a1, 3222536214LL);
    v22 = 137;
LABEL_30:
    v23 = 0;
    v24 = 0;
    goto LABEL_31;
  }
  v9 = *((_QWORD *)v3 + 1);
  if ( !v9 || *(_QWORD *)(v9 + 8) != a1 )
  {
    a3 = -1072431081;
    LogError(3222536215LL);
    AcpiDiagTraceAmlError(a1, 3222536215LL);
    v22 = 138;
    goto LABEL_30;
  }
  if ( (unsigned int)*v3 > *(_DWORD *)(a1 + 112) )
  {
    a3 = -1072431083;
    LogError(3222536213LL);
    AcpiDiagTraceAmlError(a1, 3222536213LL);
    v23 = *(_DWORD *)(a1 + 112);
    v22 = 136;
    v24 = *v3;
LABEL_31:
    PrintDebugMessage(v22, v24, v23, 0, 0LL);
    *(_DWORD *)(a2 + 16) += 2;
    goto LABEL_8;
  }
  *(_DWORD *)(a1 + 112) = *v3;
  if ( v3[1] == 1 )
    *(_DWORD *)(a2 + 16) |= 0x80000u;
LABEL_8:
  KeReleaseSpinLock((PKSPIN_LOCK)v3 + 23, v8);
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
  if ( v3[8] != 3 )
    goto LABEL_11;
  v25 = a1;
  if ( !v10 )
    v25 = 0;
  a3 = PerformMutexDriverCallbacks(3, (_DWORD)v3, v25, 0, 0);
  if ( a3 != 32772 )
  {
LABEL_11:
    ++*(_DWORD *)(a2 + 16);
LABEL_12:
    ++*(_DWORD *)(a2 + 16);
    v11 = (KSPIN_LOCK *)(v3 + 46);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3 + 23);
    --v3[1];
    v13 = v12;
    if ( (*(_DWORD *)(a2 + 16) & 0x80000) != 0 )
    {
      v14 = *((_QWORD *)v3 + 1);
      v15 = *(_QWORD *)(v14 + 24);
      v16 = *(_QWORD **)(v14 + 32);
      if ( *(_QWORD *)(v15 + 8) != v14 + 24 || *v16 != v14 + 24 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *(_DWORD *)(v14 - 16) = 0;
      NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v14 - 8), v14 - 16);
      KeReleaseSpinLock(&gmutHeap, NewIrql);
      *((_QWORD *)v3 + 1) = 0LL;
      v17 = (struct _SLIST_ENTRY **)(v3 + 4);
      v18 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
      byte_1C00775A0 = v18;
      v19 = *v17;
      if ( *v17 != (struct _SLIST_ENTRY *)v17 )
      {
        Next = v19->Next;
        if ( *((struct _SLIST_ENTRY ***)&v19->Next + 1) != v17 || *(&Next->Next + 1) != v19 )
          __fastfail(3u);
        *v17 = Next;
        *((_QWORD *)&Next->Next + 1) = v17;
        *((_QWORD *)&v19->Next + 1) = v19;
        v19->Next = v19;
        InsertReadyQueue(v19 - 2, 1);
        v18 = byte_1C00775A0;
      }
      KeReleaseSpinLock(&SpinLock, v18);
    }
    KeReleaseSpinLock(v11, v13);
    goto LABEL_18;
  }
  return a3;
}
