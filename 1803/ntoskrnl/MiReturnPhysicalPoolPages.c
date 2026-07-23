/*
 * XREFs of MiReturnPhysicalPoolPages @ 0x14017039C
 * Callers:
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MiGetPoolPages @ 0x1400F0860 (MiGetPoolPages.c)
 *     MiAddExpansionNonPagedPool @ 0x14017021C (MiAddExpansionNonPagedPool.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiReturnPoolCharges @ 0x140134F8C (MiReturnPoolCharges.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

void __fastcall MiReturnPhysicalPoolPages(__int64 a1, int a2)
{
  unsigned __int64 v3; // r13
  _QWORD *v4; // r15
  int v5; // r14d
  __int64 v6; // rsi
  __int64 v7; // r12
  unsigned __int64 v8; // rcx
  volatile signed __int64 *v9; // rdi
  char v10; // al
  _SLIST_HEADER *v11; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v13[12]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v16; // [rsp+A8h] [rbp+10h]

  memset(v13, 0, 0x20uLL);
  v3 = 0LL;
  v14 = *(_QWORD *)(a1 + 40) >> 58;
  v4 = 0LL;
  v5 = a2;
  v6 = 0LL;
  do
  {
    v7 = *(_QWORD *)a1;
    v16 = MiLockPageInline(a1);
    if ( !v5 )
    {
      v8 = *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
      *(_WORD *)(a1 + 32) = 1;
      *(_QWORD *)(a1 + 24) = v8 | 1;
    }
    v9 = (volatile signed __int64 *)(a1 + 24);
    if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
    {
      ++v6;
      v10 = *(_BYTE *)(a1 + 34) & 0xFD;
      *(_QWORD *)a1 = v3;
      *(_QWORD *)(a1 + 8) = -8LL;
      *(_BYTE *)(a1 + 34) = v10 | 5;
      v3 = a1;
      *v9 &= 0xC000000000000000uLL;
      *(_WORD *)(a1 + 32) = 0;
      if ( v4 )
        a1 = (__int64)v4;
      v4 = (_QWORD *)a1;
    }
    else
    {
      *v9 &= 0xC000000000000000uLL;
      *(_WORD *)(a1 + 32) = 0;
      MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
      ++v13[0];
      ++v13[3];
    }
    _InterlockedAnd64(v9, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v16);
    a1 = v7;
  }
  while ( v7 );
  if ( v6 )
  {
    v11 = &qword_1403CB6A8[25 * (unsigned __int16)v14];
    KeAcquireInStackQueuedSpinLock(&v11[19].Alignment, &LockHandle);
    *v4 = v11[19].Region;
    v11[18].Region += v6;
    v11[19].Region = v3;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  MiReturnPoolCharges(v13, 0LL);
}
