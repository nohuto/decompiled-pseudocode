/*
 * XREFs of MiSectionDelete @ 0x1404D11B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MiDereferenceControlAreaBySection @ 0x1400A2854 (MiDereferenceControlAreaBySection.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiLogSectionObjectEvent @ 0x1406E1498 (MiLogSectionObjectEvent.c)
 *     MiDereferencePerSessionProtos @ 0x1406EB3BC (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiSectionDelete(__int64 a1)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rdx

  v2 = *(_WORD *)(a1 + 58) & 1;
  v3 = MiSectionControlArea(a1);
  if ( *(_QWORD *)(v4 + 24) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388110, 0LL);
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140388108, a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388110);
    KeAbPostRelease((ULONG_PTR)&qword_140388110);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 3) != 0 )
    ObfDereferenceObject((PVOID)(v5 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 && (*(_BYTE *)(v3 + 56) & 0x20) == 0 && *(_QWORD *)(v3 + 64) )
    _InterlockedAdd((volatile signed __int32 *)(v3 + 92), 0xFFFFFFFF);
  if ( (*(_DWORD *)(v3 + 56) & 0x4000000) != 0 )
  {
    v8 = (*(_DWORD *)(a1 + 60) >> 12) & 0x7FFFF;
    if ( (_DWORD)v8 == 0x7FFFF )
      v8 = 0xFFFFFFFFLL;
    MiDereferencePerSessionProtos(v3, v8);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v3 + 64) )
    MiLogSectionObjectEvent(a1, 0LL);
  return MiDereferenceControlAreaBySection(v3, v2);
}
