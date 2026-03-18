/*
 * XREFs of MiTryUnlinkNodeLargePage @ 0x140126570
 * Callers:
 *     MiLargeFreePageToMdl @ 0x14012630C (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x1401264DC (MiDemoteLargeFreePage.c)
 *     MiMoveLargeFreePage @ 0x14023312C (MiMoveLargeFreePage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400C68C0 (MiUnlinkNodeLargePageHelper.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiGetLargePageListHead @ 0x14010FDF0 (MiGetLargePageListHead.c)
 */

__int64 __fastcall MiTryUnlinkNodeLargePage(unsigned __int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r12
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdi
  unsigned int v8; // ebp
  __int64 v9; // r14
  _QWORD *v10; // r15
  unsigned int v11; // ebx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 LargePageListHead; // rax
  __int64 *v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int8 v18; // [rsp+98h] [rbp+10h]

  v3 = a2;
  v5 = (unsigned int)MiPageToNode(a1, 0LL);
  v6 = 48 * a1 - 0x58000000000LL;
  v7 = MiLargePageContainingFrames[v3];
  v8 = 3;
  v9 = (*(_QWORD *)(v6 + 40) >> 36) & 3LL;
  v18 = MiLockPageInline(v6);
  v10 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v6 + 40) >> 40) & 0x3FFLL)) + 16LL)
                 + 8256 * v5);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v10 + 1025;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v10 + 1025);
  v11 = *(_BYTE *)(v6 + 34) & 7;
  if ( (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL) == v7 && v11 <= 1 )
  {
    v12 = *(_QWORD **)(v6 + 8);
    if ( (__int64)v12 < 0 )
    {
      v13 = *(_QWORD *)v6;
      if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || *v12 != v6 )
        __fastfail(3u);
      *v12 = v13;
      *(_QWORD *)(v13 + 8) = v12;
      if ( MiUnlinkNodeLargePageHelper(v10, 48 * a1 - 0x58000000000LL, v3, v9, a3) )
      {
        v8 = *(_BYTE *)(v6 + 34) & 7;
        goto LABEL_8;
      }
      LargePageListHead = MiGetLargePageListHead(a1, (__int64)v10, v3, v9, v11);
      v16 = *(__int64 **)(LargePageListHead + 8);
      if ( *v16 != LargePageListHead )
        __fastfail(3u);
      *(_QWORD *)v6 = LargePageListHead;
      *(_QWORD *)(v6 + 8) = v16;
      *v16 = v6;
      *(_QWORD *)(LargePageListHead + 8) = v6;
    }
    v8 = 5;
  }
LABEL_8:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v18);
  return v8;
}
