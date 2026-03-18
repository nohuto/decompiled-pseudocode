/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x14002FB90
 * Callers:
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14002E460 (MiInsertAndUnlockStandbyPages.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiUpdateAvailableEvents @ 0x1401700A4 (MiUpdateAvailableEvents.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbp
  char v7; // r8
  __int64 v8; // r14
  volatile __int64 *v9; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v12; // r12
  int v13; // eax
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  struct _KEVENT *v19; // rbx
  unsigned __int64 v20; // rsi
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // r11
  __int64 v24; // rdx
  unsigned __int64 v25; // r10
  __int64 v26; // r8
  char v27; // al
  unsigned int v28; // r8d
  __int64 v29; // rdx
  _QWORD *v30; // r9
  unsigned __int64 v31; // r8
  __int64 v32; // rcx
  unsigned __int64 v33; // r8
  __int64 v34; // r8
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  signed __int32 v37[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v39; // [rsp+38h] [rbp-40h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = *(_QWORD *)(a2 + 40);
  v5 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 3);
  if ( (v4 & 0x10000000000000LL) != 0 )
    return MiPfnReferenceCountIsZero(a2, v6);
  if ( !a1 )
    return MiPfnReferenceCountIsZero(a2, v6);
  v7 = *(_BYTE *)(a2 + 35);
  if ( (v7 & 0x10) != 0 )
    return MiPfnReferenceCountIsZero(a2, v6);
  if ( (v7 & 0x40) != 0 )
    return MiPfnReferenceCountIsZero(a2, v6);
  v8 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v4 >> 40) & 0x3FF));
  if ( *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)) != v8 || (v7 & 7u) >= 5 )
    return MiPfnReferenceCountIsZero(a2, v6);
  v9 = (volatile __int64 *)(v8 + 2600);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 2600);
  LockHandle.LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  v12 = (a1 + 0x58000000000LL) / 48;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v13 = SchedulerAssist[5];
      SchedulerAssist[5] = v13 + 1;
      if ( v13 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v9);
  }
  else
  {
    v14 = _InterlockedExchange64(v9, (__int64)&LockHandle);
    if ( v14 )
      KxWaitForLockOwnerShip(&LockHandle);
  }
  if ( (*(_BYTE *)(a1 + 35) & 8) == 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return MiPfnReferenceCountIsZero(a2, v6);
  }
  *(_BYTE *)(a2 + 35) |= 8u;
  v16 = 4288LL;
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) == 0 )
    v16 = 4992LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v16 + v8));
  v17 = _InterlockedIncrement64((volatile signed __int64 *)(v8 + 7040));
  if ( v17 <= 0x420 )
  {
    switch ( v17 )
    {
      case 0xA0uLL:
        v18 = 4904LL;
LABEL_30:
        v39.LockQueue.Next = 0LL;
        v39.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 4864);
        v19 = (struct _KEVENT *)(v8 + v18);
        KxAcquireQueuedSpinLock(&v39, v8 + 4864);
        KeSetEvent(v19, 0, 0);
        ++v19[1].Header.LockNV;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v39);
        break;
      case 0x420uLL:
        v18 = 4936LL;
        goto LABEL_30;
      case 0x22uLL:
        v18 = 4872LL;
        goto LABEL_30;
    }
  }
  v20 = v17 - 1;
  if ( v20 == *(_QWORD *)(v8 + 6120) || v20 == *(_QWORD *)(v8 + 6128) )
    MiUpdateAvailableEvents(v8, v14);
  _InterlockedOr(v37, 0);
  v21 = *(_BYTE *)(a2 + 34);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  *(_BYTE *)(a2 + 34) = v21 & 0xF8 | 2;
  v22 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(a1 + 16);
  v23 = 0xFFFFFFFFFLL;
  v24 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  v25 = 0xFFFFFFF000000000uLL;
  *(_QWORD *)a2 ^= (v12 ^ *(_QWORD *)a2) & 0xFFFFFFFFFLL;
  v26 = v6 & 0xFFFFFFFFFLL;
  *(_QWORD *)(a2 + 24) = v24 | *(_QWORD *)(a2 + 24) & 0xFFFFFFF000000000uLL;
  if ( v22 == v12 )
    *(_QWORD *)(a1 + 16) = MiMakeTransitionPte(v6, 4LL);
  else
    *(_QWORD *)(48 * v24 - 0x58000000000LL) = v26 | *(_QWORD *)(48 * v24 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
  *(_QWORD *)(a1 + 40) = v26 | v25 & *(_QWORD *)(a1 + 40);
  v27 = *(_BYTE *)(a2 + 35);
  if ( (v27 & 8) != 0 )
    v28 = 5;
  else
    v28 = v27 & 7;
  v29 = *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL)) + 16LL)
      + 1984LL * (*(_QWORD *)(a2 + 40) >> 58);
  v30 = (_QWORD *)(v29 + 24 * (v28 + 8 * ((*(_QWORD *)(a2 + 40) >> 36) & 3LL)));
  ++v30[107];
  v31 = v30[109];
  if ( v31 == v23 )
  {
    v30[108] = v6;
  }
  else
  {
    v29 = 48 * v31 - 0x58000000000LL;
    v32 = v23 & (*(_QWORD *)v29 ^ (v6 << 28));
    *(_BYTE *)(v29 + 39) = v6;
    *(_QWORD *)v29 = (v6 << 28) ^ v32;
  }
  *(_QWORD *)a2 |= v25;
  *(_WORD *)(a2 + 36) = v31;
  v33 = *(_QWORD *)(a2 + 24) ^ (v31 >> 16 << 36);
  *(_BYTE *)(a2 + 39) = -1;
  v34 = v33 & 0xFFFFF000000000LL;
  *(_QWORD *)(a2 + 24) ^= v34;
  v30[109] = v6;
  ++*(_QWORD *)(v8 + 2568);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&LockHandle);
    result = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                 0LL,
                 (signed __int64)&LockHandle);
      if ( (struct _KLOCK_QUEUE_HANDLE *)result == &LockHandle )
        goto LABEL_49;
      result = KxWaitForLockChainValid(&LockHandle, v29, v34, v30);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
    goto LABEL_49;
  }
  result = KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr, v34, v30);
LABEL_49:
  v35 = KeGetCurrentPrcb();
  v36 = v35->SchedulerAssist;
  if ( v36 )
  {
    if ( v35->NestingLevel <= 1u )
    {
      result = (unsigned int)(v36[5] - 1);
      v36[5] = result;
      if ( !(_DWORD)result )
      {
        result = *((unsigned __int8 *)v36 + 25);
        if ( !(_BYTE)result && !*((_BYTE *)v36 + 27) )
          return KiPerformUnboostKick(v35);
      }
    }
  }
  return result;
}
