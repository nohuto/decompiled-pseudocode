/*
 * XREFs of CmpGlobalUnlockKeyForWrite @ 0x140668EDC
 * Callers:
 *     CmpFreeSiloKeyLockEntry @ 0x140668EA0 (CmpFreeSiloKeyLockEntry.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 */

void __fastcall CmpGlobalUnlockKeyForWrite(_WORD *P, _QWORD *a2)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdx
  PVOID *v9; // rax

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
  CmpLockKcbExclusive((__int64)P);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
  v7 = _InterlockedDecrement64(a2 + 2);
  if ( v7 > 0 )
  {
    ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    CmpUnlockKcb((__int64)P);
  }
  else
  {
    if ( v7 )
      __fastfail(0xEu);
    v8 = (_QWORD *)*a2;
    v9 = (PVOID *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || *v9 != a2 )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = v9;
    ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    P[2] &= ~0x80u;
    CmpUnlockKcb((__int64)P);
    CmpDereferenceKeyControlBlock(a2[3]);
    CmpFreeTransientPoolWithTag(a2, 0x33374D43u);
  }
}
