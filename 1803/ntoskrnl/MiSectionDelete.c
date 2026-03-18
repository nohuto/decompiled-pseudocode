/*
 * XREFs of MiSectionDelete @ 0x140593740
 * Callers:
 *     <none>
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiDereferenceControlAreaBySection @ 0x1400E50D0 (MiDereferenceControlAreaBySection.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiLogSectionObjectEvent @ 0x14074C284 (MiLogSectionObjectEvent.c)
 *     MiDereferencePerSessionProtos @ 0x140754C70 (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiSectionDelete(__int64 a1)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // edx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v2 = *(_WORD *)(a1 + 58) & 1;
  v3 = MiSectionControlArea(a1);
  if ( *(_QWORD *)(v4 + 24) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CB290, 0LL);
    RtlAvlRemoveNode((unsigned __int64 *)&qword_1403CB288, a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB290, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB290, v9, v10, v11);
    KeAbPostRelease((ULONG_PTR)&qword_1403CB290);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 3) != 0 )
    ObfDereferenceObject((PVOID)(v5 & 0xFFFFFFFFFFFFFFFCuLL));
  v6 = *(_DWORD *)(v3 + 56);
  if ( (v6 & 0x20) == 0 && (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 && *(_QWORD *)(v3 + 64) )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 92), 0xFFFFFFFF);
    v6 = *(_DWORD *)(v3 + 56);
  }
  if ( (v6 & 0x4000000) != 0 )
    MiDereferencePerSessionProtos(v3);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) != 0 && !*(_QWORD *)(v3 + 64) )
    MiLogSectionObjectEvent(a1, 0LL);
  return MiDereferenceControlAreaBySection(v3, v2);
}
