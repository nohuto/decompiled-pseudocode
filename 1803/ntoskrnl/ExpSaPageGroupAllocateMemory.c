/*
 * XREFs of ExpSaPageGroupAllocateMemory @ 0x14015AA34
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14015A954 (ExpSaAllocatorAllocate.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400D8720 (RtlFindClearBitsAndSetEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSaPageGroupAllocateMemory(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rsi
  ULONG_PTR v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  unsigned __int64 ClearBitsAndSet; // rax
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 SessionId; // rdx
  unsigned __int8 v14; // r14
  unsigned int v15; // r8d
  bool v16; // zf
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  _KLOCK_ENTRY *v20; // rbx
  __int64 v21; // rdx
  int v23; // [rsp+68h] [rbp+10h] BYREF
  __int64 v24; // [rsp+70h] [rbp+18h]

  v3 = a2;
  if ( *(_DWORD *)(a1 + 36) < a2 )
    return -1LL;
  v4 = a1 + 24;
  v5 = KeAbPreAcquire(a1 + 24, 0LL, 0);
  v9 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v5, v4);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( *(_DWORD *)(a1 + 36) < (unsigned int)v3
    || (ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)(a1 + 48), v3, *(unsigned int *)(a1 + 44)),
        ClearBitsAndSet == -1LL) )
  {
    v11 = -1LL;
  }
  else
  {
    v24 = 0LL;
    *(_DWORD *)(a1 + 36) -= v3;
    *(_DWORD *)(a1 + 44) = v3 + ClearBitsAndSet;
    LODWORD(v24) = 16 * (ClearBitsAndSet & 0x1FF | ((*(_DWORD *)(a1 + 32) & 0x3FFFF) << 9));
    v11 = v24;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4, v6, v7, v8);
  v23 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v14 = ++CurrentThread->AbAllocationRegionCount;
  v15 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v16 = !_BitScanReverse((unsigned int *)&v17, v15);
    if ( v16 )
      break;
    v18 = 1 << v17;
    v19 = v17;
    v20 = &CurrentThread->LockEntries[v19];
    v15 &= ~v18;
    if ( (v20->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v20->LockState.0 & 1) == 0
      && (*(_QWORD *)&v20->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && v20->LockState.SessionId == (_DWORD)SessionId )
    {
      v20->AcquiredByte &= ~1u;
      if ( v20->LockState.0 )
      {
        if ( v20 )
        {
          v20->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v20->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v19].TreeNode, SessionId);
          v23 = 0;
          v23 = v20->BoostBitmap.AllFields & 0x1FFFF;
          v20->BoostBitmap.AllFields &= 0xFFFE0000;
          v20->ThreadLocalFlags &= ~1u;
          v20->LockState.0 = 0LL;
          v21 = ((char *)v20 - (char *)CurrentThread - 800) / 96;
          if ( v14 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v21;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v21);
          goto LABEL_25;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v4, (unsigned int)SessionId, 0LL);
LABEL_25:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v4, (__int64)&v23);
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v11;
}
