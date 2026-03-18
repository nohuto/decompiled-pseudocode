/*
 * XREFs of FsRtlpOplockCleanup @ 0x1400507C0
 * Callers:
 *     FsRtlCheckOplockEx @ 0x1400FE350 (FsRtlCheckOplockEx.c)
 * Callees:
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140019240 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140019A38 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpClearOwner @ 0x140019BCC (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x140019D84 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140031310 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x14004FB70 (FsRtlpOplockDequeueRH.c)
 *     IoGetOplockFullFoExt @ 0x140050ED4 (IoGetOplockFullFoExt.c)
 *     FsRtlpComputeShareableOplockState @ 0x140052820 (FsRtlpComputeShareableOplockState.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140136A3C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpOplockCleanup(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r15
  char v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // r11
  __int64 OplockFullFoExt; // r13
  _QWORD *v11; // rsi
  int v12; // r12d
  __int64 v13; // rbx
  char v14; // si
  __int64 v15; // rsi
  __int64 v16; // rbx
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  _QWORD *j; // rbx
  __int64 v20; // rcx
  int v21; // edx
  _QWORD *v22; // r10
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *i; // rbx
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rax
  char v30; // [rsp+40h] [rbp-48h]

  v4 = 0;
  v5 = 0;
  v30 = 0;
  if ( *(_DWORD *)(a1 + 144) == 1 )
    goto LABEL_62;
  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a2 + 48), a2, a3, a2);
  if ( (*(_DWORD *)(a1 + 144) & 0x1000000) != 0 )
  {
    for ( i = *(_QWORD **)(a1 + 104); i != (_QWORD *)(a1 + 104); i = (_QWORD *)*i )
    {
      if ( *(_QWORD *)(v8 + 48) == i[2] )
      {
        while ( 1 )
        {
          v26 = (_QWORD *)(a1 + 88);
          if ( (_QWORD *)*v26 == v26 )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(*v26);
        }
        v27 = *(_QWORD **)i[1];
        v28 = *v27;
        v29 = (_QWORD *)v27[1];
        if ( *(_QWORD **)(*v27 + 8LL) != v27 || (_QWORD *)*v29 != v27 )
          __fastfail(3u);
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        ObfDereferenceObjectWithTag((PVOID)i[2], 0x746C6644u);
        ExFreePoolWithTag(i, 0);
        v8 = a2;
        v9 = 1;
        break;
      }
    }
    *(_DWORD *)(a1 + 144) &= ~0x1000000u;
    v5 = 0;
    if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
      v5 = v9;
    v30 = v5;
  }
  v11 = (_QWORD *)(a1 + 40);
  v12 = 534;
  if ( (_QWORD *)*v11 != v11 )
  {
    for ( j = (_QWORD *)*v11; j != v11; j = (_QWORD *)*j )
    {
      v20 = j[2];
      if ( *(_QWORD *)(v8 + 48) == *(_QWORD *)(v20 + 48) )
      {
        j = (_QWORD *)j[1];
        if ( *(_DWORD *)(v20 + 24) == 590400 )
          v4 = v9;
        v21 = 534;
        if ( *(_DWORD *)(v20 + 24) != 590400 )
          v21 = 0;
        FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*j, v21, 0);
        if ( v4 )
          break;
        v8 = a2;
        v9 = 1;
      }
    }
    FsRtlpComputeShareableOplockState(a1);
    v9 = 1;
  }
  if ( OplockFullFoExt )
  {
    v13 = *(_QWORD *)(OplockFullFoExt + 40);
    if ( v13 )
    {
      v14 = 0;
      if ( (*(_DWORD *)(v13 + 48) & 0xF00000) != 0 )
      {
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40), v6, v7);
        FsRtlpModifyThreadPriorities(a1, v13, 0LL);
        FsRtlpClearOwner(a1, v13);
        if ( *(_QWORD *)(a1 + 72) == a1 + 72 )
          *(_BYTE *)(a1 + 32) = 0;
        ObfDereferenceObjectWithTag(*(PVOID *)(v13 + 24), 0x746C6644u);
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 || !*(_QWORD *)(v13 + 56) )
        {
          FsRtlpRemoveAndBreakRHIrp((PVOID)v13, a1, v9, 534, 0, 0, 0, 0);
          goto LABEL_11;
        }
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40), v6, v7);
        v23 = *v22;
        v24 = (_QWORD *)v22[1];
        if ( *(_QWORD **)(*v22 + 8LL) != v22 || (_QWORD *)*v24 != v22 )
          __fastfail(3u);
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        if ( *(_QWORD *)(a1 + 120) == a1 + 120 )
          *(_DWORD *)(a1 + 144) &= 0xFFFCFFFF;
        if ( *(_QWORD *)(v13 + 40) )
          FsRtlpClearOwner(a1, v13);
      }
      ExFreePoolWithTag((PVOID)v13, 0);
      v14 = 1;
LABEL_11:
      FsRtlpComputeShareableOplockState(a1);
      if ( v14 )
        FsRtlpReleaseIrpsWaitingForRH(a1);
    }
  }
  if ( *(_QWORD *)(a2 + 48) == *(_QWORD *)(a1 + 8) )
  {
    if ( (*(_DWORD *)(a1 + 144) & 0x1F00F80) == 0 )
    {
      v15 = *(_QWORD *)a1;
      v16 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
      *(_BYTE *)(v15 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v15 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v15 + 69));
      if ( *(_DWORD *)(v16 + 24) == 590400 )
      {
        v17 = *(_QWORD **)(v15 + 24);
        *v17 = 0LL;
        v17[1] = 0LL;
        v17[2] = 0LL;
        *(_DWORD *)v17 = 1572865;
        *(_QWORD *)((char *)v17 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
        *(_QWORD *)(v15 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v15 + 56) = 8LL;
        v12 = 0;
      }
      *(_DWORD *)(*(_QWORD *)a1 + 48LL) = v12;
      IofCompleteRequest(*(PIRP *)a1, 1);
      v5 = v30;
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
      v18 = (_QWORD *)(a1 + 88);
      if ( (_QWORD *)*v18 == v18 )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(*v18);
    }
  }
LABEL_62:
  if ( v5 )
    *(_DWORD *)(a1 + 144) |= 0x1000000u;
}
