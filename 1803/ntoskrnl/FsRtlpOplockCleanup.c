/*
 * XREFs of FsRtlpOplockCleanup @ 0x140067180
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140066340 (FsRtlCheckOplockEx.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1400653C4 (FsRtlpClearOwner.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140065408 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x14006758C (FsRtlpOplockDequeueRH.c)
 *     IoGetOplockFullFoExt @ 0x1400675D4 (IoGetOplockFullFoExt.c)
 *     FsRtlpComputeShareableOplockState @ 0x140067F00 (FsRtlpComputeShareableOplockState.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400B7088 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400C8AF4 (FsRtlpModifyThreadPriorities.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14015F014 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140225B9C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpOplockCleanup(__int64 a1, __int64 a2)
{
  char v3; // r15
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // r10
  __int64 OplockFullFoExt; // r13
  _QWORD *v10; // rbx
  int v11; // r12d
  __int64 v12; // rbx
  char v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rbx
  _QWORD *v23; // rcx
  void *v24; // rcx
  _QWORD *v25; // r8
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *i; // rbx
  void *v29; // rcx
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  char v35; // [rsp+40h] [rbp-48h]

  v3 = 0;
  v4 = 0;
  v35 = 0;
  if ( *(_DWORD *)(a1 + 144) == 1 )
    goto LABEL_60;
  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a2 + 48));
  if ( (*(_DWORD *)(a1 + 144) & 0x1000000) != 0 )
  {
    for ( i = *(_QWORD **)(a1 + 104); i != (_QWORD *)(a1 + 104); i = (_QWORD *)*i )
    {
      if ( *(_QWORD *)(v5 + 48) == i[2] )
      {
        while ( 1 )
        {
          v29 = *(void **)(a1 + 88);
          if ( v29 == (void *)(a1 + 88) )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(v29);
        }
        v30 = *(_QWORD **)i[1];
        v31 = *v30;
        v32 = (_QWORD *)v30[1];
        if ( *(_QWORD **)(*v30 + 8LL) != v30 || (_QWORD *)*v32 != v30 )
          __fastfail(3u);
        *v32 = v31;
        *(_QWORD *)(v31 + 8) = v32;
        ObfDereferenceObjectWithTag((PVOID)i[2], 0x746C6644u);
        ExFreePoolWithTag(i, 0);
        v5 = a2;
        v8 = 1;
        break;
      }
    }
    *(_DWORD *)(a1 + 144) &= ~0x1000000u;
    v4 = 0;
    if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
      v4 = v8;
    v35 = v4;
  }
  v10 = *(_QWORD **)(a1 + 40);
  v11 = 534;
  if ( v10 != (_QWORD *)(a1 + 40) )
  {
    while ( v10 != (_QWORD *)(a1 + 40) )
    {
      v33 = v10[2];
      if ( *(_QWORD *)(v5 + 48) == *(_QWORD *)(v33 + 48) )
      {
        v10 = (_QWORD *)v10[1];
        if ( *(_DWORD *)(v33 + 24) == 590400 )
          v3 = v8;
        v34 = 534LL;
        if ( *(_DWORD *)(v33 + 24) != 590400 )
          v34 = 0LL;
        FsRtlpRemoveAndCompleteReadOnlyIrp(*v10, v34, 0LL, v7);
        if ( v3 )
          break;
        v5 = a2;
        v8 = 1;
      }
      v10 = (_QWORD *)*v10;
    }
    FsRtlpComputeShareableOplockState(a1, v5, v6, v7);
    v8 = 1;
  }
  if ( OplockFullFoExt )
  {
    v12 = *(_QWORD *)(OplockFullFoExt + 40);
    if ( v12 )
    {
      v13 = 0;
      if ( (*(_DWORD *)(v12 + 48) & 0xF00000) != 0 )
      {
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40));
        FsRtlpModifyThreadPriorities(a1, v12, 0LL);
        FsRtlpClearOwner(a1, v12);
        if ( *(_QWORD *)(a1 + 72) == a1 + 72 )
          *(_BYTE *)(a1 + 32) = 0;
        ObfDereferenceObjectWithTag(*(PVOID *)(v12 + 24), 0x746C6644u);
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 || !*(_QWORD *)(v12 + 56) )
        {
          FsRtlpRemoveAndBreakRHIrp(v12, a1, v8, 534, 0, 0, 0, 0);
          goto LABEL_9;
        }
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40));
        v26 = *v25;
        v27 = (_QWORD *)v25[1];
        if ( *(_QWORD **)(*v25 + 8LL) != v25 || (_QWORD *)*v27 != v25 )
          __fastfail(3u);
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        if ( *(_QWORD *)(a1 + 120) == a1 + 120 )
          *(_DWORD *)(a1 + 144) &= 0xFFFCFFFF;
        if ( *(_QWORD *)(v12 + 40) )
          FsRtlpClearOwner(a1, v12);
      }
      ExFreePoolWithTag((PVOID)v12, 0);
      v13 = 1;
LABEL_9:
      FsRtlpComputeShareableOplockState(a1, v14, v15, v16);
      if ( v13 )
        FsRtlpReleaseIrpsWaitingForRH(a1, v17, v18, v19);
    }
  }
  if ( *(_QWORD *)(a2 + 48) == *(_QWORD *)(a1 + 8) )
  {
    v20 = *(_DWORD *)(a1 + 144);
    if ( (v20 & 0x1F00F80) == 0 )
    {
      v21 = *(_QWORD *)a1;
      v22 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
      *(_BYTE *)(v21 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v21 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v21 + 69));
      if ( *(_DWORD *)(v22 + 24) == 590400 )
      {
        v23 = *(_QWORD **)(v21 + 24);
        *v23 = 0LL;
        v23[1] = 0LL;
        v23[2] = 0LL;
        *(_DWORD *)v23 = 1572865;
        *(_QWORD *)((char *)v23 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
        *(_QWORD *)(v21 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v21 + 56) = 8LL;
        v11 = 0;
      }
      *(_DWORD *)(*(_QWORD *)a1 + 48LL) = v11;
      IofCompleteRequest(*(PIRP *)a1, 1);
      v20 = *(_DWORD *)(a1 + 144);
      v4 = v35;
    }
    if ( (v20 & 0x80u) == 0 )
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0LL;
    if ( *(_QWORD *)(a1 + 24) )
    {
      FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
    }
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    while ( 1 )
    {
      v24 = *(void **)(a1 + 88);
      if ( v24 == (void *)(a1 + 88) )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(v24);
    }
  }
LABEL_60:
  if ( v4 )
    *(_DWORD *)(a1 + 144) |= 0x1000000u;
}
