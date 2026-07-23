/*
 * XREFs of PspUnlockQuotaExpansion @ 0x1400800BC
 * Callers:
 *     PspReturnResourceQuota @ 0x14007FF60 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x14007FFFC (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x1401848E4 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x140284154 (PspExpandLimit.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall PspUnlockQuotaExpansion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rsi
  unsigned __int8 v5; // bl
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v8; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v10; // r14
  unsigned int v11; // r8d
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  _KLOCK_ENTRY *v16; // rdi
  __int64 v17; // rdx
  int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+70h] [rbp+18h]

  v4 = a1 + 16;
  v5 = a2;
  if ( *(_DWORD *)a1 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 16));
    result = v5;
    __writecr8(v5);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 16), a2, a3, a4);
    v18 = 0;
    v8 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
      SessionId = MmGetSessionIdEx(v8->ApcState.Process);
    else
      SessionId = -1;
    --v8->SpecialApcDisable;
    v10 = ++v8->AbAllocationRegionCount;
    v11 = ((char)v8->AbEntrySummary | (char)v8->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v12 = !_BitScanReverse((unsigned int *)&v13, v11);
      v19 = v13;
      if ( v12 )
        break;
      v14 = 1 << v13;
      v15 = v13;
      v16 = &v8->LockEntries[v15];
      v11 &= ~v14;
      if ( (v16->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v16->LockState.0 & 1) == 0
        && (*(_QWORD *)&v16->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
        && v16->LockState.SessionId == SessionId )
      {
        v16->AcquiredByte &= ~1u;
        if ( v16->LockState.0 )
        {
          if ( v16 )
          {
            v16->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v16->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v8->LockEntries[v15].TreeNode);
            v18 = 0;
            v18 = v16->BoostBitmap.AllFields & 0x1FFFF;
            v16->BoostBitmap.AllFields &= 0xFFFE0000;
            v16->ThreadLocalFlags &= ~1u;
            v16->LockState.0 = 0LL;
            v17 = ((char *)v16 - (char *)v8 - 800) / 96;
            if ( v10 == 1 )
              v8->AbEntrySummary |= 1 << v17;
            else
              _InterlockedOr8((volatile signed __int8 *)&v8->AbOrphanedEntrySummary, 1 << v17);
            goto LABEL_19;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v8->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v8, v4, SessionId, 0LL);
LABEL_19:
    --v8->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v8, v4, &v18);
    v12 = v8->SpecialApcDisable++ == -1;
    if ( v12 && ($005F0E83B22994B61E86C72E0CE43C71 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
      KiCheckForKernelApcDelivery();
    return KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  return result;
}
