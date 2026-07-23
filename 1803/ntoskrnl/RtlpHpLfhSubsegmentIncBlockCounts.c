/*
 * XREFs of RtlpHpLfhSubsegmentIncBlockCounts @ 0x14029C8C8
 * Callers:
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x14029B504 (RtlpHpLfhSubsegmentCommitBlock.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400AC764 (RtlpHpAcquireLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentIncBlockCounts(
        __int64 a1,
        __int64 a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int a6,
        unsigned __int8 *a7)
{
  __int64 v7; // r9
  char v8; // cl
  int v9; // esi
  __int64 v10; // r11
  __int64 v11; // r15
  _WORD *v12; // rdi
  unsigned int SessionId; // r14d
  unsigned int v14; // ebp
  __int64 v15; // rbx
  unsigned __int8 v16; // r12
  int v17; // r13d
  __int64 v18; // r8
  KIRQL v19; // al
  bool v20; // zf
  unsigned __int16 v21; // ax
  unsigned int v22; // eax
  unsigned __int64 v23; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v25; // r15
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  _KLOCK_ENTRY *v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned __int64 i; // [rsp+30h] [rbp-58h]
  int v35; // [rsp+98h] [rbp+10h] BYREF
  int v36; // [rsp+A0h] [rbp+18h]
  _DWORD *v37; // [rsp+A8h] [rbp+20h]

  v37 = a4;
  v7 = a1;
  v8 = *(_BYTE *)(a1 + 44);
  v9 = 0;
  v10 = (unsigned int)a2 >> v8;
  v11 = 2 * v10;
  v12 = (_WORD *)(2 * v10 + v7 + *(unsigned __int16 *)(v7 + 46));
  _m_prefetchw(v12);
  SessionId = -1;
  v14 = -1;
  LODWORD(v15) = 0;
  v16 = -1;
  v17 = 0;
  v18 = (__int64)&v12[((unsigned int)(a2 + a3 - 1) >> v8) - (unsigned int)v10 + 1];
  for ( i = v18; (unsigned __int64)v12 < i; v11 += 2LL )
  {
    while ( 1 )
    {
      a2 = (unsigned __int16)*v12;
      while ( (__int16)a2 > 0 )
      {
        v21 = _InterlockedCompareExchange16(v12, a2 + 1, a2);
        v20 = (_WORD)a2 == v21;
        a2 = v21;
        if ( v20 )
          goto LABEL_14;
      }
      if ( v9 )
        break;
      v9 = 1;
      v19 = RtlpHpAcquireLockExclusive((volatile LONG *)(v7 + 24), a6);
      v7 = a1;
      v16 = v19;
    }
    if ( (_WORD)a2 == 0xFFFF )
    {
      v15 = v11 >> 1;
      v22 = v11 >> 1;
      if ( v14 != -1 )
        v22 = v14;
      v14 = v22;
    }
    else
    {
      ++v17;
    }
    LOWORD(a2) = a2 + 1;
    *v12 = a2;
LABEL_14:
    ++v12;
  }
  if ( a5 )
    *a5 = v17;
  if ( v14 != -1 )
  {
    v9 = 0;
    *v37 = v15 - v14 + 1;
    *a7 = v16;
  }
  if ( v9 )
  {
    v23 = v7 + 24;
    if ( a6 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 24));
      __writecr8(v16);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 24), a2, v18, v7);
      v35 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v23) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      --CurrentThread->SpecialApcDisable;
      v25 = ++CurrentThread->AbAllocationRegionCount;
      LODWORD(v26) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v20 = !_BitScanReverse((unsigned int *)&v30, v26);
        v36 = v30;
        if ( v20 )
          goto LABEL_32;
        v27 = 1 << v30;
        v28 = v30;
        v29 = &CurrentThread->LockEntries[v28];
        v26 = ~v27 & (unsigned int)v26;
        if ( (v29->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v29->LockState.0 & 1) == 0
          && (*(_QWORD *)&v29->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v23 & 0x7FFFFFFFFFFFFFFCLL)
          && v29->LockState.SessionId == SessionId )
        {
          v29->AcquiredByte &= ~1u;
          if ( v29->LockState.0 )
            break;
        }
      }
      if ( !v29 )
      {
LABEL_32:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v23, SessionId, 0LL);
        goto LABEL_39;
      }
      v29->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v29->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v28].TreeNode, v26);
      v35 = 0;
      v35 = v29->BoostBitmap.AllFields & 0x1FFFF;
      v29->BoostBitmap.AllFields &= 0xFFFE0000;
      v29->ThreadLocalFlags &= ~1u;
      v29->LockState.0 = 0LL;
      v31 = ((char *)v29 - (char *)CurrentThread - 800) / 96;
      if ( v25 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v31;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v31);
LABEL_39:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v23, (__int64)&v35);
      v20 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v20
        && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      KeLeaveCriticalRegion();
    }
  }
  return v14;
}
