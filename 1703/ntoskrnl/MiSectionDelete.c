/*
 * XREFs of MiSectionDelete @ 0x140512600
 * Callers:
 *     <none>
 * Callees:
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiLogSectionObjectEvent @ 0x1406B5330 (MiLogSectionObjectEvent.c)
 *     MiDereferencePerSessionProtos @ 0x1406BDF80 (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiSectionDelete(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rbp

  v2 = *(_WORD *)(a1 + 58) & 1;
  v4 = MiSectionControlArea(a1);
  if ( *(_QWORD *)(v3 + 24) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
    RtlAvlRemoveNode((unsigned __int64 *)&qword_14036BE08, a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)&BugCheckParameter2);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 3) != 0 )
    ObfDereferenceObject((PVOID)(v5 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 && (*(_BYTE *)(v4 + 56) & 0x20) == 0 && *(_QWORD *)(v4 + 64) )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  if ( (*(_DWORD *)(v4 + 56) & 0x4000000) != 0 )
    MiDereferencePerSessionProtos(v4);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v4 + 64) )
    MiLogSectionObjectEvent(a1, 0LL);
  return MiDereferenceControlAreaBySection(v4, v2);
}
