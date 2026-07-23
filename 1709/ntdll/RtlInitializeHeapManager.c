/*
 * XREFs of RtlInitializeHeapManager @ 0x1800EEF80
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x180007560 (RtlQueryResourcePolicy.c)
 *     RtlGetSuiteMask @ 0x180007D20 (RtlGetSuiteMask.c)
 *     RtlInitializeCriticalSectionEx @ 0x180009D10 (RtlInitializeCriticalSectionEx.c)
 *     SbSelectProcedure @ 0x180021390 (SbSelectProcedure.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x18004944C (RtlpHeapGenerateRandomValue64.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F0948 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800FF8E8 (RtlpGetModifiedProcessCookie.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x180102E54 (RtlpHpOptIntoSegmentHeap.c)
 *     RtlpInitializeLowFragHeapManager @ 0x18010635C (RtlpInitializeLowFragHeapManager.c)
 */

__int64 __fastcall RtlInitializeHeapManager(__int64 a1)
{
  struct _PEB *v1; // rdi
  void (*v3)(void); // rax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  char v7; // al
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = NtCurrentPeb();
  if ( (RtlpLowFragHeapGlobalFlags & 0x10) != 0 || (unsigned int)RtlpHpOptIntoSegmentHeap() )
  {
    RtlpHpHeapFeatures |= 1u;
    v3 = (void (*)(void))qword_1801607F0;
    if ( qword_1801607F0
      || (v3 = (void (*)(void))SbSelectProcedure(2880154539LL, 0, (__int64)"kLsE", 1u),
          (qword_1801607F0 = (__int64)v3) != 0) )
    {
      v3();
    }
  }
  v4 = RtlpHpLfhPerfFlags;
  if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
  {
    RtlpHpGCInterval.QuadPart = -10000000LL;
    RtlpHpOverrideGCInterval(a1);
    v4 = RtlpHpLfhPerfFlags;
  }
  RtlpHpLfhPerfFlags = v4 | 0x18;
  if ( (int)RtlQueryResourcePolicy(0, 0, (__int64)&v9, 4LL) >= 0 && v9 > 10 )
  {
    RtlpHpLfhPerfFlags |= 0x60u;
    RtlpHpGCInterval.QuadPart = -10000000LL;
  }
  if ( (RtlpLowFragHeapGlobalFlags & 8) != 0 )
    RtlpHpHeapFeatures &= ~1u;
  RtlpDisableBreakOnFailureCookie = RtlpGetModifiedProcessCookie();
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100000) != 0 )
  {
    v5 = RtlpHeapErrorHandlerThreshold;
    if ( RtlpHeapErrorHandlerThreshold <= 1 )
      v5 = 2;
    v6 = 0;
    RtlpHeapErrorHandlerThreshold = v5;
  }
  else
  {
    v6 = RtlpDisableBreakOnFailureCookie;
  }
  v7 = RtlpDisableHeapLookaside & 1;
  v1->MaximumNumberOfHeaps = 16;
  v1->NumberOfHeaps = 0;
  RtlpDisableBreakOnFailureCookie = v7 != 0 ? v6 : 0;
  v1->ProcessHeaps = (void **)&RtlpProcessHeapsListBuffer;
  RtlInitializeCriticalSectionEx(&RtlpProcessHeapsListLock, 0, 0x10000000u);
  RtlpHeapKey = RtlpHeapGenerateRandomValue64();
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 4u;
    RtlpLargestLfhBlock = 1024LL;
  }
  RtlpInitializeLowFragHeapManager();
  memset(&RtlpHpAllocTrackerBitmap, 0, 0x28uLL);
  SRWLock.0 = 0LL;
  qword_18015D6C0 = -1LL;
  return RtlCSparseBitmapStart();
}
