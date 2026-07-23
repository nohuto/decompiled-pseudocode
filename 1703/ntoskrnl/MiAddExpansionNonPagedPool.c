/*
 * XREFs of MiAddExpansionNonPagedPool @ 0x140160910
 * Callers:
 *     MiFreeInitializationCode @ 0x1404B1698 (MiFreeInitializationCode.c)
 *     MxConsumeLargePageSlush @ 0x1407F6284 (MxConsumeLargePageSlush.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 */

void __fastcall MiAddExpansionNonPagedPool(__int64 a1, __int64 a2)
{
  __int64 DemandZeroPte; // rbx
  __int64 v3; // r8
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  _QWORD *v8; // r14
  __int64 v9; // rbp
  unsigned int v10; // edi
  _SLIST_HEADER *v11; // rdi
  unsigned __int8 v12; // r13
  unsigned __int64 v13; // rcx
  char v14; // al
  _SLIST_HEADER *v15; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  if ( a2 )
  {
    DemandZeroPte = MiMakeDemandZeroPte(4LL);
    v4 = 48 * v3 - 0x58000000000LL;
    v6 = 0LL;
    v7 = v4 + 48 * v5;
    v8 = 0LL;
    v9 = 0LL;
    v10 = -1;
    do
    {
      if ( (_WORD)v10 != ((*(_QWORD *)(v4 + 40) >> 58) & 0x3F) )
      {
        if ( v9 )
        {
          v11 = &qword_14036C1C8[25 * v10];
          KeAcquireInStackQueuedSpinLock(&v11[19].Alignment, &LockHandle);
          *v8 = v11[19].Region;
          v11[18].Region += v9;
          v11[19].Region = v6;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
          v9 = 0LL;
          v6 = 0LL;
          v8 = 0LL;
        }
        v10 = *(_QWORD *)(v4 + 40) >> 58;
      }
      v12 = MiLockPageInline(v4);
      *(_QWORD *)(v4 + 40) &= ~0x200000000000000uLL;
      *(_BYTE *)(v4 + 34) &= 0xC7u;
      *(_BYTE *)(v4 + 35) &= ~0x20u;
      v13 = *(_QWORD *)(v4 + 24) & 0xC000000000000001uLL;
      *(_WORD *)(v4 + 32) = 1;
      *(_QWORD *)(v4 + 16) = DemandZeroPte;
      *(_QWORD *)(v4 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
      *(_QWORD *)(v4 + 24) = v13 | 1;
      *(_BYTE *)(v4 + 35) |= 0x10u;
      *(_QWORD *)(v4 + 40) &= 0xFFFFFFF000000000uLL;
      if ( (*(_BYTE *)(v4 + 34) & 0xC0) != 0x40 )
        MiChangePageAttribute(v4, 1u, 3u);
      v14 = *(_BYTE *)(v4 + 34) & 0xFE;
      *(_QWORD *)(v4 + 8) = -8LL;
      *(_BYTE *)(v4 + 34) = v14 | 6;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v12);
      *(_QWORD *)v4 = v6;
      v6 = v4;
      if ( !v8 )
        v8 = (_QWORD *)v4;
      ++v9;
      v4 += 48LL;
    }
    while ( v4 < v7 );
    v15 = &qword_14036C1C8[25 * v10];
    KeAcquireInStackQueuedSpinLock(&v15[19].Alignment, &LockHandle);
    *v8 = v15[19].Region;
    v15[18].Region += v9;
    v15[19].Region = v6;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
}
