/*
 * XREFs of ParseAcquire @ 0x1C0019550
 * Callers:
 *     <none>
 * Callees:
 *     PerformMutexDriverCallbacks @ 0x1C0011AC8 (PerformMutexDriverCallbacks.c)
 *     HeapInsertFreeList @ 0x1C0019BF0 (HeapInsertFreeList.c)
 *     AcquireASLMutex @ 0x1C0019D00 (AcquireASLMutex.c)
 *     IsCompatableDSDTRevision @ 0x1C001F658 (IsCompatableDSDTRevision.c)
 *     AcquireGL @ 0x1C0020828 (AcquireGL.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     ReleaseASLMutex @ 0x1C002A3E0 (ReleaseASLMutex.c)
 *     ReleaseGL @ 0x1C005DBEC (ReleaseGL.c)
 */

__int64 __fastcall ParseAcquire(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  int v25; // r14d

  v6 = a3;
  v7 = *(unsigned int *)(a2 + 16);
  v8 = v7 & 0xF;
  if ( (_DWORD)v8 == 3 )
  {
    v9 = 3;
  }
  else
  {
    v9 = 5;
    if ( !(_DWORD)a3 )
      v9 = v7 & 0xF;
  }
  if ( !v9 )
  {
    a4 = *(_QWORD *)(a2 + 56);
    v10 = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 16) = v7 + 1;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 32), 0, 0) == 2
      && (int)PerformMutexDriverCallbacks(4, v10, a1, a4, 0) >= 0 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 32), 3, 2);
    }
LABEL_6:
    if ( (++*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
    {
      v6 = AcquireGL(a1, v7, a3, a4);
      if ( v6 )
        return v6;
    }
    goto LABEL_7;
  }
  v16 = v9 - 1;
  if ( !v16 )
    goto LABEL_6;
  v17 = v16 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 != 1 )
            return v6;
          goto LABEL_20;
        }
LABEL_18:
        if ( (*(_DWORD *)(a2 + 16) & 0x40000) != 0 )
        {
          *(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL) = 1;
          if ( v6 )
          {
            v6 = 0;
            *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = (-(__int64)((unsigned __int8)IsCompatableDSDTRevision(
                                                                                      v8,
                                                                                      v7,
                                                                                      a3,
                                                                                      a4) != 0) & 0xFFFFFFFF00000000uLL)
                                                     + 0xFFFFFFFF;
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
          }
        }
        ++*(_DWORD *)(a2 + 16);
LABEL_20:
        v13 = *(_QWORD *)(a1 + 416);
        v14 = v13 - 16;
        *(_QWORD *)(a1 + 416) = *(_QWORD *)(v13 + 8);
        *(_DWORD *)(v13 - 16) = 0;
        NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        HeapInsertFreeList(*(_QWORD *)(v14 + 8), v14);
        KeReleaseSpinLock(&gmutHeap, NewIrql);
        return v6;
      }
LABEL_16:
      if ( v6 )
      {
        v22 = *(_DWORD *)(a2 + 16);
        if ( (v22 & 0x80000) != 0 )
        {
          v23 = *(_QWORD *)(a2 + 32);
          *(_DWORD *)(a2 + 16) = v22 & 0xFFF7FFFF;
          ReleaseASLMutex(a1, v23, 0LL);
        }
        v24 = *(_DWORD *)(a2 + 16);
        if ( (v24 & 0x20000) != 0 )
        {
          *(_DWORD *)(a2 + 16) = v24 & 0xFFFDFFFF;
          v25 = ReleaseGL(a1);
          if ( v25 )
          {
            LogError(3222536195LL);
            AcpiDiagTraceAmlError(a1, 3222536195LL);
            PrintDebugMessage(172, v25, 0, 0, 0LL);
            v6 = -1072431101;
          }
        }
        v8 = *(unsigned int *)(*(_QWORD *)(a2 + 32) + 32LL);
        if ( (_DWORD)v8 == 3 )
        {
          if ( *(_WORD *)(a2 + 40) == 0xFFFF )
          {
            *(_DWORD *)(a2 + 16) = 1;
            return v6;
          }
          v6 = 32773;
        }
      }
      ++*(_DWORD *)(a2 + 16);
      goto LABEL_18;
    }
    goto LABEL_13;
  }
LABEL_7:
  v11 = *(_DWORD *)(a2 + 16);
  if ( (v11 & 0x10000) != 0 )
    *(_DWORD *)(a2 + 16) = v11 | 0x20000;
  v12 = AcquireASLMutex(a1, *(_QWORD *)(a2 + 32), *(unsigned __int16 *)(a2 + 40), a4);
  v6 = v12;
  if ( v12 == 32772 )
  {
    v21 = *(_DWORD *)(a2 + 16);
    if ( (v21 & 0x20000) != 0 )
    {
      *(_DWORD *)(a2 + 16) = v21 & 0xFFFDFFFF;
      v6 = ReleaseGL(a1);
      if ( v6 )
      {
        *(_DWORD *)(a2 + 16) += 3;
        LogError(3222536195LL);
        AcpiDiagTraceAmlError(a1, 3222536195LL);
        PrintDebugMessage(119, v6, 0, 0, 0LL);
        return (unsigned int)-1072431101;
      }
      else
      {
        --*(_DWORD *)(a2 + 16);
      }
    }
    return v6;
  }
  if ( !v12 )
    *(_DWORD *)(a2 + 16) |= 0x80000u;
  ++*(_DWORD *)(a2 + 16);
LABEL_13:
  if ( v6 == 32773
    || (v7 = *(unsigned int *)(*(_QWORD *)(a2 + 32) + 32LL), (_DWORD)v7 != 3)
    || (v6 = PerformMutexDriverCallbacks(2, *(_QWORD *)(a2 + 32), a1, *(_QWORD *)(a1 + 80), *(_WORD *)(a2 + 40)),
        v6 != 32772) )
  {
    ++*(_DWORD *)(a2 + 16);
    goto LABEL_16;
  }
  return v6;
}
