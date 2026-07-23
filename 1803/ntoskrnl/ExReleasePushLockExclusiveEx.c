/*
 * XREFs of ExReleasePushLockExclusiveEx @ 0x140103DE0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

char __fastcall ExReleasePushLockExclusiveEx(
        ULONG_PTR BugCheckParameter2,
        __int64 BugCheckParameter1,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  $005F0E83B22994B61E86C72E0CE43C71 *v6; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // r8d
  BOOL v9; // r14d
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _KLOCK_ENTRY *v15; // rbx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  int v20; // [rsp+68h] [rbp+10h] BYREF
  int v21; // [rsp+70h] [rbp+18h]

  v4 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  LOBYTE(v6) = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6;
  if ( (_BYTE)v6 == 2 )
    LOBYTE(v6) = ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, BugCheckParameter1, a3, a4);
  if ( (v4 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v20 = 0;
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v9 = ++CurrentThread->AbAllocationRegionCount == 1;
    LODWORD(v10) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v11 = !_BitScanReverse((unsigned int *)&v12, v10);
    v21 = v12;
    if ( v11 )
      goto LABEL_24;
    while ( 1 )
    {
      v13 = 1 << v12;
      v14 = v12;
      v15 = &CurrentThread->LockEntries[v14];
      v10 = ~v13 & (unsigned int)v10;
      if ( (v15->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v15->LockState.0 & 1) == 0
        && (*(_QWORD *)&v15->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && v15->LockState.SessionId == SessionId )
      {
        v15->AcquiredByte &= ~1u;
        if ( v15->LockState.0 )
          break;
      }
      v11 = !_BitScanReverse((unsigned int *)&v12, v10);
      v21 = v12;
      if ( v11 )
        goto LABEL_24;
    }
    if ( !v15 )
    {
LABEL_24:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    }
    else
    {
      v15->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v15->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v14].TreeNode, v10);
      v16 = v15->BoostBitmap.AllFields & 0x1FFFF;
      v17 = v15->BoostBitmap.AllFields & 0xFFFE0000;
      v15->ThreadLocalFlags &= ~1u;
      v20 = v16;
      v15->BoostBitmap.AllFields = v17;
      v15->LockState.0 = 0LL;
      v18 = ((char *)v15 - (char *)CurrentThread - 800) / 96;
      if ( v9 )
        CurrentThread->AbEntrySummary |= 1 << v18;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v18);
    }
    --CurrentThread->AbAllocationRegionCount;
    LOBYTE(v6) = KiAbThreadRemoveBoosts(CurrentThread, BugCheckParameter2, &v20);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 )
    {
      v6 = &CurrentThread->152;
      if ( ($005F0E83B22994B61E86C72E0CE43C71 *)v6->ApcState.ApcListHead[0].Flink != v6 )
        LOBYTE(v6) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v6;
}
