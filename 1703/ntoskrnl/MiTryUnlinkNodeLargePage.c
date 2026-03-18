/*
 * XREFs of MiTryUnlinkNodeLargePage @ 0x140128BFC
 * Callers:
 *     MiLargeFreePageToMdl @ 0x140074CE4 (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x140128B94 (MiDemoteLargeFreePage.c)
 *     MiMoveLargeFreePage @ 0x1402244C0 (MiMoveLargeFreePage.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x1400C58B0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1401294A0 (MiUnlinkNodeLargePageHelper.c)
 */

__int64 __fastcall MiTryUnlinkNodeLargePage(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r15
  unsigned __int8 v8; // bp
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  int v12; // ebx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  v4 = (unsigned int)MiPageToNode(a1, 0LL);
  v5 = 48 * a1 - 0x58000000000LL;
  v6 = MiLargePageContainingFrames[v2];
  v7 = (*(_QWORD *)(v5 + 40) >> 36) & 3LL;
  v8 = MiLockPageInline(v5);
  v9 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v5 + 40) >> 40) & 0x3FFLL)) + 48LL) + 2184 * v4;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 2176);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v9 + 2176));
  if ( (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) == v6
    && (*(_BYTE *)(v5 + 34) & 7u) <= 1
    && (v10 = *(_QWORD **)(v5 + 8), (__int64)v10 < 0) )
  {
    v11 = *(_QWORD *)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v10 != v5 )
      __fastfail(3u);
    *v10 = v11;
    *(_QWORD *)(v11 + 8) = v10;
    v12 = MiUnlinkNodeLargePageHelper(v9, v5, (unsigned int)v2, (unsigned int)v7);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = *(_BYTE *)(v5 + 34) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v12 )
    {
      MiInsertLargePageInFreeOrZeroList(v5, v2, 1);
      result = 5LL;
    }
    __writecr8(v8);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v8);
    return 5LL;
  }
  return result;
}
