/*
 * XREFs of ExReleaseCacheAwarePushLockSharedEx @ 0x140103C50
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     KiAbThreadClearAcquiredLockEntry @ 0x140104440 (KiAbThreadClearAcquiredLockEntry.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseCacheAwarePushLockSharedEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  __int64 result; // rax
  ULONG_PTR v5; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // r8
  BOOL v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rdi
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  int v17; // [rsp+68h] [rbp+10h] BYREF

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL);
  if ( result != 17 )
    result = ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
  if ( (v2 & 2) == 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 16);
    CurrentThread = KeGetCurrentThread();
    v17 = 0;
    if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v8 = ++CurrentThread->AbAllocationRegionCount == 1;
    v9 = KiAbThreadClearAcquiredLockEntry(CurrentThread, v5, SessionId);
    v12 = v9;
    if ( v9 )
    {
      *(_BYTE *)(v9 + 32) |= 2u;
      if ( *(__int64 *)(v9 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v9, v10);
      v13 = *(_DWORD *)(v12 + 88) & 0x1FFFF;
      v14 = *(_DWORD *)(v12 + 88) & 0xFFFE0000;
      *(_BYTE *)(v12 + 25) &= ~1u;
      v17 = v13;
      *(_DWORD *)(v12 + 88) = v14;
      *(_QWORD *)(v12 + 32) = 0LL;
      v15 = (v12 - (__int64)CurrentThread - 800) / 96;
      if ( v8 )
        CurrentThread->AbEntrySummary |= 1 << v15;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v15);
    }
    else if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    {
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5, v11, 0LL);
    }
    --CurrentThread->AbAllocationRegionCount;
    result = KiAbThreadRemoveBoosts(CurrentThread, v5, &v17);
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      return KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
