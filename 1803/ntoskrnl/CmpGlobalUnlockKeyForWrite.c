/*
 * XREFs of CmpGlobalUnlockKeyForWrite @ 0x1406F6E44
 * Callers:
 *     CmpFreeSiloKeyLockEntry @ 0x1406F6E04 (CmpFreeSiloKeyLockEntry.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 */

void __fastcall CmpGlobalUnlockKeyForWrite(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  signed __int64 v4; // rax
  signed __int64 i; // rdx
  signed __int64 v6; // rtt
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  _m_prefetchw(a2 + 2);
  v4 = a2[2];
  for ( i = v4 - 1; i > 0; i = v4 - 1 )
  {
    v6 = v4;
    v4 = _InterlockedCompareExchange64(a2 + 2, i, v4);
    if ( v6 == v4 )
      return;
  }
  if ( i )
    __fastfail(0xEu);
  CmpLockKcbExclusive(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
  v10 = _InterlockedDecrement64(a2 + 2);
  if ( v10 > 0 )
  {
    ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL, v8, v9);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    CmpUnlockKcb(BugCheckParameter2, v11, v12, v13);
  }
  else
  {
    if ( v10 )
      __fastfail(0xEu);
    v14 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v15 = (_QWORD *)a2[1], (_QWORD *)*v15 != a2) )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL, v8, v9);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    *(_WORD *)(BugCheckParameter2 + 4) &= ~0x80u;
    CmpUnlockKcb(BugCheckParameter2, v16, v17, v18);
    CmpDereferenceKeyControlBlock(a2[3]);
    CmpFreeTransientPoolWithTag(a2, 0x33374D43u);
  }
}
