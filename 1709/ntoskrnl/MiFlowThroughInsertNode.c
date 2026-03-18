/*
 * XREFs of MiFlowThroughInsertNode @ 0x1401303B8
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x14002AE10 (MiFinishMdlForMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 */

_QWORD *__fastcall MiFlowThroughInsertNode(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r8
  unsigned int PagingFileOffset; // eax
  unsigned __int16 v8; // r9
  __int64 v9; // rbx
  _QWORD *v10; // rdx
  unsigned __int64 v11; // r9
  bool v12; // al
  _QWORD *v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = a2[2];
  if ( (v15 & 0x400) != 0 )
  {
    *(_QWORD *)(a1 + 320) = 0LL;
    goto LABEL_3;
  }
  PagingFileOffset = MiGetPagingFileOffset(&v15);
  v9 = *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8 * ((a2[5] >> 40) & 0x3FFLL)) + 8LL * (v8 >> 12) + 5792);
  *(_QWORD *)(a1 + 320) = v9;
  *(_QWORD *)(a1 + 328) = PagingFileOffset;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 232), &LockHandle);
  v10 = *(_QWORD **)(v9 + 248);
  v11 = a1 + 336;
  v12 = 0;
  if ( !v10 )
    goto LABEL_8;
  while ( __PAIR128__(*(_QWORD *)(a1 + 328), v11) <= __PAIR128__(*(v10 - 1), (unsigned __int64)v10) )
  {
    v13 = (_QWORD *)*v10;
    if ( !*v10 )
      goto LABEL_8;
LABEL_11:
    v10 = v13;
  }
  v13 = (_QWORD *)v10[1];
  if ( v13 )
    goto LABEL_11;
  v12 = 1;
LABEL_8:
  RtlAvlInsertNodeEx((unsigned __int64 *)(v9 + 248), (unsigned __int64)v10, v12, v11);
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
