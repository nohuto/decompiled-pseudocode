/*
 * XREFs of MiAdjustModifiedPageLoad @ 0x1400F04F8
 * Callers:
 *     MiWorkingSetManager @ 0x1400F0224 (MiWorkingSetManager.c)
 * Callees:
 *     MiStoreUpdateMemoryConditions @ 0x14000851C (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140008688 (MiUseLowIoPriorityForModifiedPages.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUpdateReserveClusterInfo @ 0x14014FBD0 (MiUpdateReserveClusterInfo.c)
 *     MiWakeModifiedPageWriter @ 0x140227290 (MiWakeModifiedPageWriter.c)
 */

__int64 __fastcall MiAdjustModifiedPageLoad(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // r10
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 result; // rax
  int v14; // ebp
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  signed __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // r11
  char v22; // al
  signed __int32 v23[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 5952);
  v4 = *(_QWORD *)(a1 + 6448);
  v6 = *(_QWORD *)(a1 + 2176);
  v7 = 0x4000LL;
  if ( v3 >> 5 > 0x4000 )
    v7 = v3 >> 5;
  v10 = v3 >> 4;
  if ( v10 >= v7 )
    v10 = v7;
  v11 = *(_QWORD *)(a1 + 2112) + v6;
  v12 = 0LL;
  if ( v11 > 0x4E20 )
  {
    result = 0xCCCCCCCCCCCCCCCDuLL * v11;
    if ( v4 < v11 / 0xA )
      goto LABEL_7;
  }
  if ( v4 >= v10 )
  {
    v12 = v10 >> 1;
LABEL_33:
    if ( !MiUseLowIoPriorityForModifiedPages(a1) )
      v12 = -1LL;
    result = MiWakeModifiedPageWriter(a1, v12);
    *(_QWORD *)(a1 + 800) = 0LL;
    *(_QWORD *)(a1 + 808) = 0LL;
    goto LABEL_7;
  }
  result = *(_QWORD *)(a1 + 808) >> 4;
  v18 = 15 * result + (v4 >> 4);
  *(_QWORD *)(a1 + 808) = v18;
  if ( 15 * result > v18 )
    goto LABEL_33;
  if ( v4 < 0x320 )
  {
    *(_QWORD *)(a1 + 800) = 0LL;
    goto LABEL_7;
  }
  *(_QWORD *)(a1 + 800) += v18 <= v4 ? v18 - v4 : v4 - v18;
  v19 = *(_QWORD *)(a1 + 800);
  v20 = v19 + v4;
  *(_QWORD *)(a1 + 800) = v19 + v4;
  if ( v19 > (__int64)(v19 + v4) )
    goto LABEL_33;
  v21 = v10 >> 1;
  result = 0x7FFFFFFFFFFFFFFFLL;
  if ( v21 < 0x369D0369D0369DLL )
    result = 600 * v21;
  if ( v20 >= result )
    goto LABEL_33;
LABEL_7:
  *(_QWORD *)(a1 + 816) = a2;
  if ( (a3 & 7) == 0 )
  {
    v14 = 0;
    if ( (*(_BYTE *)(a1 + 860) & 1) != 0 )
    {
      _InterlockedOr(v23, 0);
      if ( a2 > 0x4000 || (unsigned __int64)(KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 848)) >= 0x47868C00 )
      {
        v14 = 1;
        *(_WORD *)(a1 + 860) &= ~1u;
      }
    }
    result = *(unsigned int *)(a1 + 5784);
    if ( (_DWORD)result )
    {
      v15 = a1 + 5792;
      v16 = (unsigned int)result;
      do
      {
        v17 = *(_QWORD *)v15;
        if ( (*(_BYTE *)(*(_QWORD *)v15 + 204LL) & 0x40) == 0 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 232), &LockHandle);
          if ( *(_DWORD *)(v17 + 132) != *(_DWORD *)(v17 + 128) )
            *(_DWORD *)(v17 + 124) = dword_140400120;
          *(_DWORD *)(v17 + 136) = 4 * dword_140400120;
          if ( v14 )
          {
            v22 = *(_BYTE *)(v17 + 207);
            if ( (v22 & 1) != 0 )
              *(_BYTE *)(v17 + 207) = v22 & 0xFE;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          result = LockHandle.OldIrql;
          __writecr8(LockHandle.OldIrql);
        }
        v15 += 8LL;
        --v16;
      }
      while ( v16 );
    }
    if ( v14 )
      result = MiUpdateReserveClusterInfo(a1, 0LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 1144) )
    return MiStoreUpdateMemoryConditions(a1);
  return result;
}
