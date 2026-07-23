/*
 * XREFs of ExReleasePushLockExclusiveEx @ 0x140084790
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char __fastcall ExReleasePushLockExclusiveEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  $B476B70DB57F76B110DA5B9238C3E934 *v4; // rax
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR SessionId; // r9
  BOOL v7; // r14d
  unsigned int v8; // edx
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  _KLOCK_ENTRY *v13; // rbx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  int v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+70h] [rbp+18h]

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  LOBYTE(v4) = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6;
  if ( (_BYTE)v4 == 2 )
    LOBYTE(v4) = ExfTryToWakePushLock(BugCheckParameter2);
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v18 = 0;
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v7 = ++CurrentThread->AbAllocationRegionCount == 1;
    v8 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v9 = !_BitScanReverse((unsigned int *)&v10, v8);
    v19 = v10;
    if ( v9 )
      goto LABEL_24;
    while ( 1 )
    {
      v11 = 1 << v10;
      v12 = v10;
      v13 = &CurrentThread->LockEntries[v12];
      v8 &= ~v11;
      if ( (v13->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v13->LockState.0 & 1) == 0
        && (*(_QWORD *)&v13->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && v13->LockState.SessionId == (_DWORD)SessionId )
      {
        v13->AcquiredByte &= ~1u;
        if ( v13->LockState.0 )
          break;
      }
      v9 = !_BitScanReverse((unsigned int *)&v10, v8);
      v19 = v10;
      if ( v9 )
        goto LABEL_24;
    }
    if ( !v13 )
    {
LABEL_24:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    }
    else
    {
      v13->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v13->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v12].TreeNode);
      v14 = v13->BoostBitmap.AllFields & 0x1FFFF;
      v15 = v13->BoostBitmap.AllFields & 0xFFFE0000;
      v13->ThreadLocalFlags &= ~1u;
      v18 = v14;
      v13->BoostBitmap.AllFields = v15;
      v13->LockState.0 = 0LL;
      v16 = ((char *)v13 - (char *)CurrentThread - 800) / 96;
      if ( v7 )
        CurrentThread->AbEntrySummary |= 1 << v16;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v16);
    }
    --CurrentThread->AbAllocationRegionCount;
    LOBYTE(v4) = KiAbThreadRemoveBoosts(CurrentThread, BugCheckParameter2, &v18);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 )
    {
      v4 = &CurrentThread->152;
      if ( ($B476B70DB57F76B110DA5B9238C3E934 *)v4->ApcState.ApcListHead[0].Flink != v4 )
        LOBYTE(v4) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v4;
}
