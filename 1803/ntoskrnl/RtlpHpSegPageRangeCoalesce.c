/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x140298508
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x140298D34 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpHpSegFreeRangeRemove @ 0x140297FE0 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegLockAcquire @ 0x14029829C (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegPageRangeDecommit @ 0x140298A98 (RtlpHpSegPageRangeDecommit.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCoalesce(__int64 a1, __int64 a2, char a3, _QWORD *a4, KIRQL *a5)
{
  KIRQL *v5; // r13
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rsi
  char v15; // cl
  char v16; // cl
  __int64 v17; // rcx
  __int64 v18; // rcx
  KIRQL v19; // di
  volatile signed __int64 *v20; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // r8d
  unsigned __int8 v23; // r15
  __int64 v24; // rdx
  bool v25; // zf
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _KLOCK_ENTRY *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v33; // [rsp+88h] [rbp+20h] BYREF

  v33 = (int)a4;
  v5 = a5;
  while ( 1 )
  {
    v9 = 0LL;
    v10 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
    v11 = (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28));
    v12 = (unsigned __int16)~(*(_DWORD *)(a2 + 28) >> 8);
    if ( (unsigned int)(v10 + v11) < 0x100 )
    {
      v9 = a2 + 32LL * (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28));
      if ( (*(_BYTE *)(v9 + 24) & 1) != 0 )
        v9 = 0LL;
    }
    if ( (unsigned int)v10 > *(unsigned __int8 *)(a1 + 10) )
    {
      v13 = a2 - 32;
      if ( (*(_BYTE *)(a2 - 32 + 24) & 2) == 0 )
        v13 += -32LL * *(unsigned __int8 *)(v13 + 31);
      v14 = 0LL;
      if ( (*(_BYTE *)(v13 + 24) & 1) == 0 )
        v14 = v13;
      if ( v14 )
      {
        RtlpHpSegFreeRangeRemove(a1, v14);
        *(_BYTE *)(v14 + 31) += *(_BYTE *)(a2 + 31);
        v12 = (unsigned __int16)~(*(_DWORD *)(v14 + 28) >> 8) + (unsigned int)v12;
        v15 = 2;
        *(_DWORD *)(v14 + 28) ^= (*(_DWORD *)(v14 + 28) ^ (~(_DWORD)v12 << 8)) & 0xFFFF00;
        if ( *(_BYTE *)(a2 + 31) > 1u )
          v15 = 3;
        *(_BYTE *)(a2 + 24) &= ~v15;
        a2 = v14;
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(v14 + 31) - 1) + v14 + 31) = *(_BYTE *)(v14 + 31) - 1;
      }
    }
    *(_BYTE *)(a2 + 24) |= 0x11u;
    if ( v9 )
    {
      RtlpHpSegFreeRangeRemove(a1, v9);
      v16 = *(_BYTE *)(a2 + 31);
      if ( v16 != 1 )
      {
        *(_BYTE *)(a2 + 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1) + 24) &= ~1u;
        v16 = *(_BYTE *)(a2 + 31);
      }
      *(_BYTE *)(a2 + 31) = v16 + *(_BYTE *)(v9 + 31);
      v12 = (unsigned __int16)~(*(_DWORD *)(v9 + 28) >> 8) + (unsigned int)v12;
      *(_DWORD *)(a2 + 28) ^= (*(_DWORD *)(a2 + 28) ^ (~(_DWORD)v12 << 8)) & 0xFFFF00;
      *(_BYTE *)(v9 + 24) &= ~2u;
      v10 = (unsigned int)*(unsigned __int8 *)(a2 + 31) - 1;
      v17 = 32 * v10;
      *(_BYTE *)(v17 + a2 + 24) |= 1u;
      *(_BYTE *)(v17 + a2 + 31) = v10;
    }
    if ( !(_DWORD)v12 )
      break;
    if ( (*(_BYTE *)(a1 + 13) & 1) == 0 )
    {
      a4 = *(_QWORD **)(a1 + 72);
      v11 = a4[1] >> *(_BYTE *)(a1 + 11);
      if ( v11 <= 8 )
        v11 = 8LL;
      v10 = a4[1] >> *(_BYTE *)(a1 + 12);
      v18 = a4[2];
      if ( v10 <= 8 )
        v10 = 8LL;
      if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
        v18 += a4[3];
      if ( v18 + v12 <= v11 && v18 + v12 <= v10 )
        break;
    }
    v19 = *v5;
    if ( (a3 & 1) == 0 )
    {
      v20 = (volatile signed __int64 *)(a1 + 24);
      if ( (*(_DWORD *)(a1 + 96) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 24));
        __writecr8(v19);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24), v10, v11, (__int64)a4);
        v33 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 24) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v23 = ++CurrentThread->AbAllocationRegionCount;
        LODWORD(v24) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v25 = !_BitScanReverse((unsigned int *)&v26, v24);
          if ( v25 )
            break;
          v27 = 1 << v26;
          v28 = v26;
          v29 = &CurrentThread->LockEntries[v28];
          v24 = ~v27 & (unsigned int)v24;
          if ( (v29->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v29->LockState.0 & 1) == 0
            && (*(_QWORD *)&v29->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v20 & 0x7FFFFFFFFFFFFFFCLL)
            && v29->LockState.SessionId == SessionId )
          {
            v29->AcquiredByte &= ~1u;
            if ( v29->LockState.0 )
            {
              if ( v29 )
              {
                v29->CrossThreadReleasableAndBusyByte |= 2u;
                if ( (__int64)v29->LockState.LockState < 0 )
                  KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v28].TreeNode, v24);
                v33 = 0;
                v33 = v29->BoostBitmap.AllFields & 0x1FFFF;
                v29->BoostBitmap.AllFields &= 0xFFFE0000;
                v29->ThreadLocalFlags &= ~1u;
                v29->LockState.0 = 0LL;
                v30 = ((char *)v29 - (char *)CurrentThread - 800) / 96;
                if ( v23 == 1 )
                  CurrentThread->AbEntrySummary |= 1 << v30;
                else
                  _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v30);
                goto LABEL_50;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 24, SessionId, 0LL);
LABEL_50:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a1 + 24, (__int64)&v33);
        v25 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v25
          && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KeLeaveCriticalRegion();
      }
    }
    RtlpHpSegPageRangeDecommit(a1, a2, 0LL, *(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 9));
    *v5 = RtlpHpSegLockAcquire(a1, a3);
    *(_BYTE *)(a2 + 24) &= ~0x10u;
  }
  v31 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v31 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xEEu;
  return a2;
}
