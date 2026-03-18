/*
 * XREFs of MiAdjustModifiedPageLoad @ 0x1400840D0
 * Callers:
 *     MiWorkingSetManager @ 0x140083BF0 (MiWorkingSetManager.c)
 * Callees:
 *     MiStoreUpdateMemoryConditions @ 0x140029F68 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14002A0CC (MiUseLowIoPriorityForModifiedPages.c)
 *     MiWakeModifiedPageWriter @ 0x14003BB18 (MiWakeModifiedPageWriter.c)
 *     MiUpdateReserveClusterInfo @ 0x14003C70C (MiUpdateReserveClusterInfo.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

int __fastcall MiAdjustModifiedPageLoad(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // r10
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // ebp
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  signed __int64 v19; // rax
  unsigned __int64 v20; // r11
  char v21; // al
  signed __int32 v23[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 5760);
  v4 = *(_QWORD *)(a1 + 6256);
  v6 = *(_QWORD *)(a1 + 2048);
  v7 = 0x4000LL;
  if ( v3 >> 5 > 0x4000 )
    v7 = v3 >> 5;
  v10 = v3 >> 4;
  if ( v10 >= v7 )
    v10 = v7;
  v11 = *(_QWORD *)(a1 + 1984) + v6;
  v12 = 0LL;
  if ( v11 > 0x4E20 )
  {
    LODWORD(v13) = -858993459 * v11;
    if ( v4 < v11 / 0xA )
      goto LABEL_7;
  }
  if ( v4 >= v10 )
  {
    v12 = v10 >> 1;
LABEL_34:
    if ( !MiUseLowIoPriorityForModifiedPages(a1) )
      v12 = -1LL;
    LODWORD(v13) = MiWakeModifiedPageWriter(a1, v12);
    *(_QWORD *)(a1 + 848) = 0LL;
    *(_QWORD *)(a1 + 856) = 0LL;
    goto LABEL_7;
  }
  v13 = *(_QWORD *)(a1 + 856) >> 4;
  v11 = 15 * v13;
  v18 = 15 * v13 + (v4 >> 4);
  *(_QWORD *)(a1 + 856) = v18;
  if ( 15 * v13 > v18 )
    goto LABEL_34;
  if ( v4 < 0x320 )
  {
    *(_QWORD *)(a1 + 848) = 0LL;
    goto LABEL_7;
  }
  *(_QWORD *)(a1 + 848) += v18 <= v4 ? v18 - v4 : v4 - v18;
  v19 = *(_QWORD *)(a1 + 848);
  v11 = v19 + v4;
  *(_QWORD *)(a1 + 848) = v19 + v4;
  if ( v19 > (__int64)(v19 + v4) )
    goto LABEL_34;
  v20 = v10 >> 1;
  v13 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v20 < 0x369D0369D0369DLL )
    v13 = 600 * v20;
  if ( (__int64)v11 >= v13 )
    goto LABEL_34;
LABEL_7:
  *(_QWORD *)(a1 + 864) = a2;
  if ( (a3 & 7) == 0 )
  {
    v14 = 0;
    if ( (*(_BYTE *)(a1 + 908) & 1) != 0 )
    {
      _InterlockedOr(v23, 0);
      if ( a2 > 0x4000
        || (LOBYTE(v11) = 1, (unsigned __int64)(KiQueryUnbiasedInterruptTime(v11) - *(_QWORD *)(a1 + 896)) >= 0x47868C00) )
      {
        v14 = 1;
        *(_WORD *)(a1 + 908) &= ~1u;
      }
    }
    LODWORD(v13) = *(_DWORD *)(a1 + 5592);
    if ( (_DWORD)v13 )
    {
      v15 = a1 + 5600;
      v16 = (unsigned int)v13;
      do
      {
        v17 = *(_QWORD *)v15;
        if ( (*(_BYTE *)(*(_QWORD *)v15 + 204LL) & 0x40) == 0 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 232), &LockHandle);
          if ( *(_DWORD *)(v17 + 132) != *(_DWORD *)(v17 + 128) )
            *(_DWORD *)(v17 + 124) = dword_1403E3124;
          *(_DWORD *)(v17 + 136) = 4 * dword_1403E3124;
          if ( v14 )
          {
            v21 = *(_BYTE *)(v17 + 207);
            if ( (v21 & 1) != 0 )
              *(_BYTE *)(v17 + 207) = v21 & 0xFE;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          LODWORD(v13) = LockHandle.OldIrql;
          __writecr8(LockHandle.OldIrql);
        }
        v15 += 8LL;
        --v16;
      }
      while ( v16 );
    }
    if ( v14 )
      LODWORD(v13) = MiUpdateReserveClusterInfo(a1, 0LL, 0);
  }
  if ( *(_DWORD *)(a1 + 1192) )
    LODWORD(v13) = MiStoreUpdateMemoryConditions(a1);
  return v13;
}
