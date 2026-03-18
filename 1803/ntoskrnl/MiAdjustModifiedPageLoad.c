/*
 * XREFs of MiAdjustModifiedPageLoad @ 0x140080BEC
 * Callers:
 *     MiWorkingSetManager @ 0x1400807C8 (MiWorkingSetManager.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     MiStoreUpdateMemoryConditions @ 0x140081410 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14008158C (MiUseLowIoPriorityForModifiedPages.c)
 *     MiWakeModifiedPageWriter @ 0x140081C4C (MiWakeModifiedPageWriter.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUpdateReserveClusterInfo @ 0x14017DEF0 (MiUpdateReserveClusterInfo.c)
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
  __int64 *v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  signed __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // r11
  char v23; // al
  signed __int32 v24[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 7040);
  v4 = *(_QWORD *)(a1 + 7536);
  v6 = *(_QWORD *)(a1 + 2240);
  v7 = 0x4000LL;
  if ( v3 >> 5 > 0x4000 )
    v7 = v3 >> 5;
  v10 = v3 >> 4;
  if ( v10 >= v7 )
    v10 = v7;
  v11 = *(_QWORD *)(a1 + 2176) + v6;
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
    if ( !(unsigned int)MiUseLowIoPriorityForModifiedPages(a1) )
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
  v19 = *(_QWORD *)(a1 + 800);
  v20 = v18 <= v4 ? v18 - v4 + v19 : v4 + v19 - v18;
  v21 = v20 + v4;
  *(_QWORD *)(a1 + 800) = v20 + v4;
  if ( v20 > (__int64)(v20 + v4) )
    goto LABEL_33;
  v22 = v10 >> 1;
  result = 0x7FFFFFFFFFFFFFFFLL;
  if ( v22 < 0x369D0369D0369DLL )
    result = 600 * v22;
  if ( v21 >= result )
    goto LABEL_33;
LABEL_7:
  *(_QWORD *)(a1 + 816) = a2;
  if ( (a3 & 7) == 0 )
  {
    v14 = 0;
    if ( (*(_BYTE *)(a1 + 860) & 1) != 0 )
    {
      _InterlockedOr(v24, 0);
      if ( a2 > 0x4000 || (unsigned __int64)(KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 848)) >= 0x47868C00 )
      {
        v14 = 1;
        *(_WORD *)(a1 + 860) &= ~1u;
      }
    }
    result = *(unsigned int *)(a1 + 6872);
    if ( (_DWORD)result )
    {
      v15 = (__int64 *)(a1 + 6880);
      v16 = (unsigned int)result;
      do
      {
        v17 = *v15;
        if ( (*(_BYTE *)(*v15 + 204) & 0x40) == 0 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 232), &LockHandle);
          if ( *(_DWORD *)(v17 + 132) != *(_DWORD *)(v17 + 128) )
            *(_DWORD *)(v17 + 124) = dword_14044B180;
          *(_DWORD *)(v17 + 136) = 4 * dword_14044B180;
          if ( v14 )
          {
            v23 = *(_BYTE *)(v17 + 207);
            if ( (v23 & 1) != 0 )
              *(_BYTE *)(v17 + 207) = v23 & 0xFE;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          result = LockHandle.OldIrql;
          __writecr8(LockHandle.OldIrql);
        }
        ++v15;
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
