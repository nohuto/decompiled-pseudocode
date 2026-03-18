/*
 * XREFs of EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1407B6098
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x1407B414C (EtwpCovSampContextAddSamples.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EtwpCovSampHashLookupInTable @ 0x1407B5FB8 (EtwpCovSampHashLookupInTable.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x1407B73F0 (EtwpCoverageSamplerAllocateTable.c)
 *     EtwpCoverageSamplerFreeTable @ 0x1407B7634 (EtwpCoverageSamplerFreeTable.c)
 */

__int64 __fastcall EtwpCovSampHashMakeRoomAndAcquireLock(ULONG_PTR BugCheckParameter2, int a2, __int64 **a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *Table; // rsi
  __int64 v8; // r9
  unsigned int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // ebp
  unsigned int v14; // ecx
  __int64 *v15; // r14
  struct _KTHREAD *v16; // rax
  __int64 *v17; // rdi
  unsigned int v18; // edx
  __int64 *v19; // rcx
  __int64 **v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // rax
  _QWORD *v25; // r14
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 **v29; // rcx
  struct _KTHREAD *v30; // rax
  _QWORD *v32; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  Table = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v9 = 0;
  v10 = *(_QWORD *)(BugCheckParameter2 + 1136);
  *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  v11 = *(unsigned int *)(v10 + 20);
  v12 = (unsigned int)(a2 + *(_DWORD *)(v10 + 16));
  if ( (unsigned int)v12 >= (unsigned int)(7 * v11) >> 3 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(BugCheckParameter2 + 40);
      if ( (unsigned int)v11 < v13 )
      {
        v14 = 2 * v11;
        if ( !(_DWORD)v11 )
          v14 = *(_DWORD *)(BugCheckParameter2 + 36);
        while ( (7 * v14) >> 3 < (unsigned int)v12 )
          v14 *= 2;
        if ( v14 >= v13 )
          v14 = *(_DWORD *)(BugCheckParameter2 + 40);
        v13 = v14;
      }
      else if ( *(_DWORD *)(BugCheckParameter2 + 1168) >= *(_DWORD *)(BugCheckParameter2 + 44) )
      {
        goto LABEL_36;
      }
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v11, v12, v8);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( Table )
        EtwpCoverageSamplerFreeTable(Table);
      Table = (__int64 *)EtwpCoverageSamplerAllocateTable(v13);
      v15 = Table;
      if ( !Table )
        goto LABEL_38;
      v16 = KeGetCurrentThread();
      --v16->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v17 = *(__int64 **)(BugCheckParameter2 + 1136);
      *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
      v18 = *((_DWORD *)v17 + 5);
      if ( a2 + *((_DWORD *)v17 + 4) < (7 * v18) >> 3 )
        goto LABEL_36;
      if ( v18 >= v13 )
        break;
      *(_QWORD *)(BugCheckParameter2 + 1136) = Table;
      Table = v17;
      v19 = (__int64 *)*v17;
      if ( *(__int64 **)(*v17 + 8) != v17 || (v20 = (__int64 **)v17[1], *v20 != v17) )
        __fastfail(3u);
      *v20 = v19;
      v19[1] = (__int64)v20;
      v21 = *(_QWORD **)(BugCheckParameter2 + 1160);
      v22 = *(_QWORD **)(BugCheckParameter2 + 1136);
      if ( *v21 != BugCheckParameter2 + 1152 )
        __fastfail(3u);
      *v22 = BugCheckParameter2 + 1152;
      v23 = 0LL;
      v22[1] = v21;
      *v21 = v22;
      *(_QWORD *)(BugCheckParameter2 + 1160) = v22;
      for ( *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1136) + 16LL) = *((_DWORD *)v17 + 4);
            (unsigned int)v23 < *((_DWORD *)v17 + 5);
            v23 = (unsigned int)(v23 + 1) )
      {
        v24 = v17[3];
        v25 = (_QWORD *)(v24 + 8 * v23);
        if ( *v25 )
        {
          EtwpCovSampHashLookupInTable(*(_QWORD *)(BugCheckParameter2 + 1136), (unsigned __int8 *)(v24 + 8 * v23), &v32);
          *v32 = *v25;
          if ( (*((_DWORD *)v17 + 4))-- == 1 )
            break;
        }
      }
      if ( v9 < 0x14 )
      {
        v27 = *(_QWORD *)(BugCheckParameter2 + 1136);
        ++v9;
        v11 = *(unsigned int *)(v27 + 20);
        v12 = (unsigned int)(a2 + *(_DWORD *)(v27 + 16));
        if ( (unsigned int)v12 >= (unsigned int)(7 * v11) >> 3 )
          continue;
      }
      goto LABEL_36;
    }
    v28 = *(_DWORD *)(BugCheckParameter2 + 1168);
    if ( v28 >= *(_DWORD *)(BugCheckParameter2 + 44) )
    {
LABEL_36:
      if ( Table )
        *a3 = Table;
      goto LABEL_38;
    }
    *(_QWORD *)(BugCheckParameter2 + 1136) = Table;
    Table = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1168) = v28 + 1;
    v29 = *(__int64 ***)(BugCheckParameter2 + 1160);
    if ( *v29 != (__int64 *)(BugCheckParameter2 + 1152) )
      __fastfail(3u);
    *v15 = BugCheckParameter2 + 1152;
    v15[1] = (__int64)v29;
    *v29 = v15;
    *(_QWORD *)(BugCheckParameter2 + 1160) = v15;
    if ( *(_DWORD *)(BugCheckParameter2 + 1168) == 2 )
    {
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 1144), 0, 0);
      goto LABEL_36;
    }
  }
LABEL_38:
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) != KeGetCurrentThread() )
  {
    v30 = KeGetCurrentThread();
    --v30->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  }
  return *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1136) + 16LL) < (unsigned int)(7
                                                                                   * *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1136)
                                                                                               + 20LL)) >> 3
       ? ((unsigned int)(7 * *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1136) + 20LL)) >> 3)
       - *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1136) + 16LL)
       : 0;
}
