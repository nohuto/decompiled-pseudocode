/*
 * XREFs of MiReturnPhysicalPoolPages @ 0x140125E80
 * Callers:
 *     MiFreePoolPages @ 0x1400AA840 (MiFreePoolPages.c)
 *     ExFreeLargePool @ 0x1400DCA30 (ExFreeLargePool.c)
 *     MiFindNonPagedPoolPages @ 0x14010E930 (MiFindNonPagedPoolPages.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnNonPagedPoolCharges @ 0x140126068 (MiReturnNonPagedPoolCharges.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall MiReturnPhysicalPoolPages(__int64 a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // r15
  _QWORD *v4; // r13
  __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v8; // al
  char v9; // cl
  _SLIST_HEADER *v10; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v12[5]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v13; // [rsp+90h] [rbp+8h]

  memset(v12, 0, 0x20uLL);
  v2 = 0LL;
  v3 = 0LL;
  v13 = *(_QWORD *)(a1 + 40) >> 58;
  v4 = 0LL;
  do
  {
    v5 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
    {
      v8 = MiLockPageInline(a1);
      v9 = *(_BYTE *)(a1 + 34);
      *(_QWORD *)(a1 + 8) = -8LL;
      *(_BYTE *)(a1 + 34) = v9 & 0xF8 | 6;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v8);
      if ( !v4 )
        v4 = (_QWORD *)a1;
      *(_QWORD *)a1 = v3;
      ++v2;
      v3 = a1;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      MiLockPageAtDpcInline(a1);
      *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(a1 + 32) = 0;
      MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      ++v12[0];
      ++v12[3];
    }
    a1 = v5;
  }
  while ( v5 );
  if ( v2 )
  {
    v10 = &qword_14036C1C8[25 * (unsigned __int16)v13];
    KeAcquireInStackQueuedSpinLock(&v10[19].Alignment, &LockHandle);
    *v4 = v10[19].Region;
    v10[18].Region += v2;
    v10[19].Region = v3;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  return MiReturnNonPagedPoolCharges(v12, 0LL);
}
