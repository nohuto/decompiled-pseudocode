/*
 * XREFs of MiReturnPhysicalPoolPages @ 0x1400C0230
 * Callers:
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     MiFreePoolPages @ 0x140032824 (MiFreePoolPages.c)
 *     MiFindNonPagedPoolPages @ 0x140089100 (MiFindNonPagedPoolPages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnNonPagedPoolCharges @ 0x1400C01C4 (MiReturnNonPagedPoolCharges.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall MiReturnPhysicalPoolPages(unsigned __int64 a1)
{
  unsigned __int64 v2; // r12
  unsigned __int64 *v3; // r13
  __int64 v4; // r14
  unsigned __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v7; // al
  char v8; // cl
  _SLIST_HEADER *v9; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v11[12]; // [rsp+38h] [rbp-60h] BYREF
  int v12; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+10h]

  memset(v11, 0, 0x20uLL);
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v13 = *(_QWORD *)(a1 + 40) >> 58;
  do
  {
    v5 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
    {
      v7 = MiLockPageInline(a1);
      v8 = *(_BYTE *)(a1 + 34);
      *(_QWORD *)(a1 + 8) = -8LL;
      *(_BYTE *)(a1 + 34) = v8 & 0xF8 | 6;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v7);
      if ( !v3 )
        v3 = (unsigned __int64 *)a1;
      *(_QWORD *)a1 = v2;
      ++v4;
      v2 = a1;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v12);
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
      *(_WORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
      MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x58000000000LL) / 48, 2);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      ++v11[0];
      ++v11[3];
    }
    a1 = v5;
  }
  while ( v5 );
  if ( v4 )
  {
    v9 = &qword_140388510[25 * (unsigned __int16)v13];
    KeAcquireInStackQueuedSpinLock(&v9[19].Alignment, &LockHandle);
    *v3 = v9[19].Region;
    v9[18].Region += v4;
    v9[19].Region = v2;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  MiReturnNonPagedPoolCharges(v11, 0);
}
