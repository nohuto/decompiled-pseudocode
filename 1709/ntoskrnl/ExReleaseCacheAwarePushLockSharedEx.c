/*
 * XREFs of ExReleaseCacheAwarePushLockSharedEx @ 0x140084600
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KiAbThreadClearAcquiredLockEntry @ 0x140084DE0 (KiAbThreadClearAcquiredLockEntry.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
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
  unsigned int v10; // r8d
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  int v16; // [rsp+68h] [rbp+10h] BYREF

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL);
  if ( result != 17 )
    result = ExfReleasePushLockShared(BugCheckParameter2);
  if ( (v2 & 2) == 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 16);
    CurrentThread = KeGetCurrentThread();
    v16 = 0;
    if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v8 = ++CurrentThread->AbAllocationRegionCount == 1;
    v9 = KiAbThreadClearAcquiredLockEntry(CurrentThread, v5, SessionId);
    v11 = v9;
    if ( v9 )
    {
      *(_BYTE *)(v9 + 32) |= 2u;
      if ( *(__int64 *)(v9 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v9);
      v12 = *(_DWORD *)(v11 + 88) & 0x1FFFF;
      v13 = *(_DWORD *)(v11 + 88) & 0xFFFE0000;
      *(_BYTE *)(v11 + 25) &= ~1u;
      v16 = v12;
      *(_DWORD *)(v11 + 88) = v13;
      *(_QWORD *)(v11 + 32) = 0LL;
      v14 = (v11 - (__int64)CurrentThread - 800) / 96;
      if ( v8 )
        CurrentThread->AbEntrySummary |= 1 << v14;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v14);
    }
    else if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    {
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5, v10, 0LL);
    }
    --CurrentThread->AbAllocationRegionCount;
    result = KiAbThreadRemoveBoosts(CurrentThread, v5, &v16);
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      return KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
