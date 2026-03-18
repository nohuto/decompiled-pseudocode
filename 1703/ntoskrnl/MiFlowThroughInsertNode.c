/*
 * XREFs of MiFlowThroughInsertNode @ 0x14003B434
 * Callers:
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x140107260 (MiFinishMdlForMappedFileFault.c)
 * Callees:
 *     MiGetPagingFileOffset @ 0x14007720C (MiGetPagingFileOffset.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

_QWORD *__fastcall MiFlowThroughInsertNode(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r8
  unsigned int PagingFileOffset; // eax
  unsigned __int16 v8; // r9
  __int64 v9; // rbx
  unsigned __int64 v10; // r8
  _QWORD *v11; // rdx
  unsigned __int64 v12; // r9
  char v13; // al
  _QWORD *v14; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = a2[2];
  if ( (v16 & 0x400) != 0 )
  {
    *(_QWORD *)(a1 + 320) = 0LL;
    goto LABEL_3;
  }
  PagingFileOffset = MiGetPagingFileOffset(&v16);
  v9 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8 * ((a2[5] >> 40) & 0x3FFLL)) + 8LL * (v8 >> 12) + 5600);
  *(_QWORD *)(a1 + 320) = v9;
  *(_QWORD *)(a1 + 328) = PagingFileOffset;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 232), &LockHandle);
  v11 = *(_QWORD **)(v9 + 248);
  v12 = a1 + 336;
  v13 = 0;
  if ( !v11 )
    goto LABEL_9;
  v10 = *(_QWORD *)(a1 + 328);
  while ( __PAIR128__(v10, v12) <= __PAIR128__(*(v11 - 1), (unsigned __int64)v11) )
  {
    v14 = (_QWORD *)*v11;
    if ( !*v11 )
      goto LABEL_9;
LABEL_12:
    v11 = v14;
  }
  v14 = (_QWORD *)v11[1];
  if ( v14 )
    goto LABEL_12;
  v13 = 1;
LABEL_9:
  LOBYTE(v10) = v13;
  RtlAvlInsertNodeEx(v9 + 248, v11, v10, v12);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
LABEL_3:
  *(_BYTE *)(a1 + 189) |= 8u;
  result = (_QWORD *)(a1 + 16);
  v5 = *a2 - 32LL;
  v6 = *(_QWORD **)(v5 + 24);
  if ( *v6 != v5 + 16 )
    __fastfail(3u);
  *result = v5 + 16;
  *(_QWORD *)(a1 + 24) = v6;
  *v6 = result;
  *(_QWORD *)(v5 + 24) = result;
  *(_QWORD *)(a1 + 312) = v5;
  return result;
}
