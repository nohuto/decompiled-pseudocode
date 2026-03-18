/*
 * XREFs of FsRtlpOplockCleanup @ 0x140024868
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140085CC0 (FsRtlCheckOplockEx.c)
 * Callees:
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14000EFA8 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x140023F70 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400246D8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x140024C74 (FsRtlpOplockDequeueRH.c)
 *     IoGetOplockFullFoExt @ 0x140024CBC (IoGetOplockFullFoExt.c)
 *     FsRtlpClearOwner @ 0x140024CE4 (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140108B78 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpModifyThreadPriorities @ 0x140127258 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1401E842C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpOplockCleanup(__int64 a1, __int64 a2)
{
  char v3; // r15
  char v4; // r14
  __int64 v5; // rdx
  char v6; // r10
  __int64 OplockFullFoExt; // r13
  _QWORD *v8; // rsi
  int v9; // r12d
  __int64 v10; // rbx
  char v11; // si
  __int64 v12; // rsi
  __int64 v13; // rbx
  _QWORD *v14; // rcx
  _QWORD **v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *i; // rbx
  _QWORD **v20; // rcx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rax
  _QWORD *j; // rbx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  char v28; // [rsp+40h] [rbp-48h]

  v3 = 0;
  v4 = 0;
  v28 = 0;
  if ( *(_DWORD *)(a1 + 144) == 1 )
    goto LABEL_63;
  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a2 + 48));
  if ( (*(_DWORD *)(a1 + 144) & 0x1000000) != 0 )
  {
    for ( i = *(_QWORD **)(a1 + 104); i != (_QWORD *)(a1 + 104); i = (_QWORD *)*i )
    {
      if ( *(_QWORD *)(v5 + 48) == i[2] )
      {
        while ( 1 )
        {
          v20 = (_QWORD **)(a1 + 88);
          if ( *v20 == v20 )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(*v20);
        }
        v21 = *(_QWORD **)i[1];
        v22 = *v21;
        v23 = (_QWORD *)v21[1];
        if ( *(_QWORD **)(*v21 + 8LL) != v21 || (_QWORD *)*v23 != v21 )
          __fastfail(3u);
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
        ObfDereferenceObjectWithTag((PVOID)i[2], 0x746C6644u);
        ExFreePoolWithTag(i, 0);
        v5 = a2;
        v6 = 1;
        break;
      }
    }
    *(_DWORD *)(a1 + 144) &= ~0x1000000u;
    v4 = 0;
    if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
      v4 = v6;
    v28 = v4;
  }
  v8 = (_QWORD *)(a1 + 40);
  v9 = 534;
  if ( (_QWORD *)*v8 != v8 )
  {
    for ( j = (_QWORD *)*v8; j != v8; j = (_QWORD *)*j )
    {
      v25 = j[2];
      if ( *(_QWORD *)(v5 + 48) == *(_QWORD *)(v25 + 48) )
      {
        j = (_QWORD *)j[1];
        v26 = *(_DWORD *)(v25 + 24);
        if ( v26 == 590400 )
          v3 = v6;
        v27 = 534LL;
        if ( v26 != 590400 )
          v27 = 0LL;
        FsRtlpRemoveAndCompleteReadOnlyIrp(*j, v27, 0LL);
        if ( v3 )
          break;
        v5 = a2;
        v6 = 1;
      }
    }
    FsRtlpComputeShareableOplockState(a1);
    v6 = 1;
  }
  if ( OplockFullFoExt )
  {
    v10 = *(_QWORD *)(OplockFullFoExt + 40);
    if ( v10 )
    {
      v11 = 0;
      if ( (*(_DWORD *)(v10 + 48) & 0xF00000) != 0 )
      {
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40));
        FsRtlpModifyThreadPriorities(a1, v10, 0LL);
        FsRtlpClearOwner(a1, v10);
        if ( *(_QWORD *)(a1 + 72) == a1 + 72 )
          *(_BYTE *)(a1 + 32) = 0;
        ObfDereferenceObjectWithTag(*(PVOID *)(v10 + 24), 0x746C6644u);
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 || !*(_QWORD *)(v10 + 56) )
        {
          FsRtlpRemoveAndBreakRHIrp((_QWORD *)v10, a1, v6, 534, 0, 0, 0, 0);
          goto LABEL_9;
        }
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40));
        v17 = *v16;
        v18 = (_QWORD *)v16[1];
        if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v18 != v16 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        if ( *(_QWORD *)(a1 + 120) == a1 + 120 )
          *(_DWORD *)(a1 + 144) &= 0xFFFCFFFF;
        if ( *(_QWORD *)(v10 + 40) )
          FsRtlpClearOwner(a1, v10);
      }
      ExFreePoolWithTag((PVOID)v10, 0);
      v11 = 1;
LABEL_9:
      FsRtlpComputeShareableOplockState(a1);
      if ( v11 )
        FsRtlpReleaseIrpsWaitingForRH(a1);
    }
  }
  if ( *(_QWORD *)(a2 + 48) == *(_QWORD *)(a1 + 8) )
  {
    if ( (*(_DWORD *)(a1 + 144) & 0x1F00F80) == 0 )
    {
      v12 = *(_QWORD *)a1;
      v13 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
      *(_BYTE *)(v12 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v12 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v12 + 69));
      if ( *(_DWORD *)(v13 + 24) == 590400 )
      {
        v14 = *(_QWORD **)(v12 + 24);
        *v14 = 0LL;
        v14[1] = 0LL;
        v14[2] = 0LL;
        *(_DWORD *)v14 = 1572865;
        *(_QWORD *)((char *)v14 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
        *(_QWORD *)(v12 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v12 + 56) = 8LL;
        v9 = 0;
      }
      *(_DWORD *)(*(_QWORD *)a1 + 48LL) = v9;
      IofCompleteRequest(*(PIRP *)a1, 1);
      v4 = v28;
    }
    if ( (*(_DWORD *)(a1 + 144) & 0x80u) == 0 )
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
      v15 = (_QWORD **)(a1 + 88);
      if ( *v15 == v15 )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(*v15);
    }
  }
LABEL_63:
  if ( v4 )
    *(_DWORD *)(a1 + 144) |= 0x1000000u;
}
