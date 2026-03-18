/*
 * XREFs of MiFlowThroughInsertNode @ 0x1400D2638
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x140057A28 (MiFinishMdlForMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 */

_QWORD *__fastcall MiFlowThroughInsertNode(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v2; // bx
  _QWORD *result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r8
  unsigned int PagingFileOffset; // eax
  __int64 v9; // rbx
  unsigned __int64 v10; // r8
  _QWORD *v11; // rdx
  unsigned __int64 v12; // r9
  char v13; // al
  _QWORD *v14; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = a2[2];
  v2 = v16;
  if ( (v16 & 0x400) != 0 )
  {
    *(_QWORD *)(a1 + 328) = 0LL;
    goto LABEL_3;
  }
  PagingFileOffset = MiGetPagingFileOffset(&v16);
  v9 = *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8 * ((a2[5] >> 40) & 0x3FFLL)) + 8LL * (v2 >> 12) + 6880);
  *(_QWORD *)(a1 + 328) = v9;
  *(_QWORD *)(a1 + 336) = PagingFileOffset;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 232), &LockHandle);
  v11 = *(_QWORD **)(v9 + 248);
  v12 = a1 + 344;
  v13 = 0;
  if ( !v11 )
    goto LABEL_9;
  v10 = *(_QWORD *)(a1 + 336);
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
  v6 = *a2 - 32LL;
  v7 = *(_QWORD **)(v6 + 24);
  if ( *v7 != v6 + 16 )
    __fastfail(3u);
  *result = v6 + 16;
  *(_QWORD *)(a1 + 24) = v7;
  *v7 = result;
  *(_QWORD *)(v6 + 24) = result;
  *(_QWORD *)(a1 + 320) = v6;
  return result;
}
