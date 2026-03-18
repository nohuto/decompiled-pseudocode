/*
 * XREFs of ParseAcquire @ 0x1C00156F0
 * Callers:
 *     <none>
 * Callees:
 *     HeapInsertFreeList @ 0x1C00162F0 (HeapInsertFreeList.c)
 *     AcquireASLMutex @ 0x1C0016400 (AcquireASLMutex.c)
 *     IsCompatableDSDTRevision @ 0x1C0017174 (IsCompatableDSDTRevision.c)
 *     AcquireGL @ 0x1C0017420 (AcquireGL.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     PerformMutexDriverCallbacks @ 0x1C00234C8 (PerformMutexDriverCallbacks.c)
 *     ReleaseASLMutex @ 0x1C0029494 (ReleaseASLMutex.c)
 *     ReleaseGL @ 0x1C005DDF0 (ReleaseGL.c)
 */

__int64 __fastcall ParseAcquire(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  int v24; // r14d

  v6 = a3;
  v7 = *(unsigned int *)(a2 + 16);
  if ( (v7 & 0xF) == 3 )
  {
    v8 = 3;
  }
  else
  {
    v8 = 5;
    if ( !(_DWORD)a3 )
      v8 = v7 & 0xF;
  }
  if ( !v8 )
  {
    a4 = *(_QWORD *)(a2 + 56);
    v9 = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 16) = v7 + 1;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 32), 0, 0) == 2
      && (int)PerformMutexDriverCallbacks(4, v9, a1, a4, 0) >= 0 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 32), 3, 2);
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
  v15 = v8 - 1;
  if ( !v15 )
    goto LABEL_6;
  v16 = v15 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 != 1 )
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
            *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = (-(__int64)((unsigned __int8)IsCompatableDSDTRevision() != 0) & 0xFFFFFFFF00000000uLL)
                                                     + 0xFFFFFFFF;
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
          }
        }
        ++*(_DWORD *)(a2 + 16);
LABEL_20:
        v12 = *(_QWORD *)(a1 + 416);
        v13 = v12 - 16;
        *(_QWORD *)(a1 + 416) = *(_QWORD *)(v12 + 8);
        *(_DWORD *)(v12 - 16) = 0;
        NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        HeapInsertFreeList(*(_QWORD *)(v13 + 8), v13);
        KeReleaseSpinLock(&gmutHeap, NewIrql);
        return v6;
      }
LABEL_16:
      if ( v6 )
      {
        v21 = *(_DWORD *)(a2 + 16);
        if ( (v21 & 0x80000) != 0 )
        {
          v22 = *(_QWORD *)(a2 + 32);
          *(_DWORD *)(a2 + 16) = v21 & 0xFFF7FFFF;
          ReleaseASLMutex(a1, v22, 0LL);
        }
        v23 = *(_DWORD *)(a2 + 16);
        if ( (v23 & 0x20000) != 0 )
        {
          *(_DWORD *)(a2 + 16) = v23 & 0xFFFDFFFF;
          v24 = ReleaseGL(a1);
          if ( v24 )
          {
            LogError(3222536195LL);
            AcpiDiagTraceAmlError(a1, 3222536195LL);
            PrintDebugMessage(172, v24, 0, 0, 0LL);
            v6 = -1072431101;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) == 3 )
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
  v10 = *(_DWORD *)(a2 + 16);
  if ( (v10 & 0x10000) != 0 )
    *(_DWORD *)(a2 + 16) = v10 | 0x20000;
  v11 = AcquireASLMutex(a1, *(_QWORD *)(a2 + 32), *(unsigned __int16 *)(a2 + 40), a4);
  v6 = v11;
  if ( v11 == 32772 )
  {
    v20 = *(_DWORD *)(a2 + 16);
    if ( (v20 & 0x20000) != 0 )
    {
      *(_DWORD *)(a2 + 16) = v20 & 0xFFFDFFFF;
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
  if ( !v11 )
    *(_DWORD *)(a2 + 16) |= 0x80000u;
  ++*(_DWORD *)(a2 + 16);
LABEL_13:
  if ( v6 == 32773
    || *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) != 3
    || (v6 = PerformMutexDriverCallbacks(2, *(_QWORD *)(a2 + 32), a1, *(_QWORD *)(a1 + 80), *(_WORD *)(a2 + 40)),
        v6 != 32772) )
  {
    ++*(_DWORD *)(a2 + 16);
    goto LABEL_16;
  }
  return v6;
}
