/*
 * XREFs of CmpGlobalUnlockKeyForWrite @ 0x140693C54
 * Callers:
 *     CmpFreeSiloKeyLockEntry @ 0x140693C14 (CmpFreeSiloKeyLockEntry.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 */

void __fastcall CmpGlobalUnlockKeyForWrite(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdx

  _m_prefetchw(a2 + 2);
  v4 = a2[2];
  while ( v4 - 1 > 0 )
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange64(a2 + 2, v4 - 1, v4);
    if ( v5 == v4 )
      return;
  }
  if ( v4 != 1 )
    __fastfail(0xEu);
  CmpLockKcbExclusive(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
  v7 = _InterlockedDecrement64(a2 + 2);
  if ( v7 > 0 )
  {
    ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    CmpUnlockKcb(BugCheckParameter2);
  }
  else
  {
    if ( v7 )
      __fastfail(0xEu);
    v8 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v9 = (_QWORD *)a2[1], (_QWORD *)*v9 != a2) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    *(_WORD *)(BugCheckParameter2 + 4) &= ~0x80u;
    CmpUnlockKcb(BugCheckParameter2);
    CmpDereferenceKeyControlBlock(a2[3]);
    CmpFreeTransientPoolWithTag(a2, 0x33374D43u);
  }
}
