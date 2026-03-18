/*
 * XREFs of MiTryUnlinkNodeLargePage @ 0x140003CC0
 * Callers:
 *     MiLargeFreePageToMdl @ 0x140002D74 (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x140003C2C (MiDemoteLargeFreePage.c)
 *     MiMoveLargeFreePage @ 0x14026C11C (MiMoveLargeFreePage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400E7480 (MiUnlinkNodeLargePageHelper.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiPageToNode @ 0x140122B50 (MiPageToNode.c)
 */

__int64 __fastcall MiTryUnlinkNodeLargePage(unsigned __int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r12
  __int64 v6; // rdi
  __int64 v7; // r14
  unsigned int v8; // ebp
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r13
  unsigned int v12; // edi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v16; // rcx
  __int64 *v17; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int8 v21; // [rsp+A8h] [rbp+20h]

  v3 = a2;
  v6 = (unsigned int)MiPageToNode(a1, 0LL);
  v7 = 48 * a1 - 0x58000000000LL;
  v8 = 3;
  v9 = MiLargePageContainingFrames[v3];
  v10 = (*(_QWORD *)(v7 + 40) >> 36) & 3LL;
  v21 = MiLockPageInline(v7);
  v11 = *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL)) + 16LL) + 1984 * v6;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v11 + 1928);
  KxAcquireQueuedSpinLock(&LockHandle, v11 + 1928);
  v12 = *(_BYTE *)(v7 + 34) & 7;
  if ( (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFLL) == v9 && v12 <= 1 )
  {
    v13 = *(_QWORD **)(v7 + 8);
    if ( (__int64)v13 < 0 )
    {
      v14 = *(_QWORD *)v7;
      if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || *v13 != v7 )
        __fastfail(3u);
      *v13 = v14;
      *(_QWORD *)(v14 + 8) = v13;
      if ( MiUnlinkNodeLargePageHelper(v11, v7, a2, v10, a3) )
      {
        v8 = *(_BYTE *)(v7 + 34) & 7;
        goto LABEL_8;
      }
      _mm_lfence();
      v16 = *(_QWORD *)(v11
                      + 8 * ((unsigned int)v10 + 34 * v3 + 4 * (v12 + (unsigned __int64)(a1 < 0x100000 ? 2 : 0)))
                      + 144)
          + 24 * (a1 / MiLargePageSizes[v3] % (unsigned int)dword_1403CB6E8[v3]);
      v17 = *(__int64 **)(v16 + 8);
      if ( *v17 != v16 )
        __fastfail(3u);
      *(_QWORD *)v7 = v16;
      *(_QWORD *)(v7 + 8) = v17;
      *v17 = v7;
      *(_QWORD *)(v16 + 8) = v7;
    }
    v8 = 5;
  }
LABEL_8:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v21);
  return v8;
}
