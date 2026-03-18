/*
 * XREFs of NtSetTimerResolution @ 0x140561E44
 * Callers:
 *     <none>
 * Callees:
 *     ExpInsertTimerResolutionEntry @ 0x14003C5BC (ExpInsertTimerResolutionEntry.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExpUpdateTimerResolution @ 0x14012CCDC (ExpUpdateTimerResolution.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PoDiagCaptureUsermodeStack @ 0x14045EBA0 (PoDiagCaptureUsermodeStack.c)
 *     PoTraceSystemTimerResolution @ 0x140561FFC (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x140563098 (ExAcquireTimeRefreshLock.c)
 */

NTSTATUS __stdcall NtSetTimerResolution(ULONG RequestedResolution, BOOLEAN SetOrUnset, PULONG ActualResolution)
{
  ULONG v5; // r14d
  __int64 v6; // r8
  _KPROCESS *Process; // rbx
  NTSTATUS v8; // edi
  bool v9; // r15
  ULONG updated; // esi
  signed __int32 DirectoryTableBase_high; // eax
  signed __int32 v12; // ett
  unsigned int v13; // edx
  char v14; // cl
  signed __int32 v16; // ett
  __int16 v17; // si
  PVOID *v18; // rsi
  void *v19; // rcx

  v5 = RequestedResolution;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ActualResolution < 0x7FFFFFFF0000LL )
      v6 = (__int64)ActualResolution;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = 0;
  v9 = 1;
  LOBYTE(RequestedResolution) = 1;
  ExAcquireTimeRefreshLock(RequestedResolution);
  updated = KeTimeIncrement;
  _m_prefetchw((char *)&Process[1].DirectoryTableBase + 4);
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( SetOrUnset )
  {
    do
    {
      v16 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high | 0x80001000,
                                  DirectoryTableBase_high);
    }
    while ( v16 != DirectoryTableBase_high );
    v17 = DirectoryTableBase_high;
    if ( DirectoryTableBase_high >= 0 )
      ExpInsertTimerResolutionEntry((__int64)Process);
    if ( (v17 & 0x1000) != 0 )
      v9 = v5 <= LODWORD(Process[2].Affinity.Bitmap[16]);
    else
      ++ExpTimerResolutionCount;
    if ( !Process[2].Affinity.Bitmap[15] || v5 < HIDWORD(Process[2].Affinity.Bitmap[16]) )
    {
      v18 = PoDiagCaptureUsermodeStack();
      if ( v18 )
      {
        v19 = (void *)Process[2].Affinity.Bitmap[15];
        if ( v19 )
          ExFreePoolWithTag(v19, 0x50455654u);
        Process[2].Affinity.Bitmap[15] = (unsigned __int64)v18;
        HIDWORD(Process[2].Affinity.Bitmap[16]) = v5;
      }
    }
    LODWORD(Process[2].Affinity.Bitmap[16]) = v5;
    PoTraceSystemTimerResolution(0LL, Process);
    v13 = v5;
    v14 = v9;
  }
  else
  {
    do
    {
      v12 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high & 0xFFFFEFFF,
                                  DirectoryTableBase_high);
    }
    while ( v12 != DirectoryTableBase_high );
    if ( (DirectoryTableBase_high & 0x1000) == 0 )
    {
      v8 = -1073741243;
      goto LABEL_10;
    }
    --ExpTimerResolutionCount;
    LODWORD(Process[2].Affinity.Bitmap[16]) = 0;
    PoTraceSystemTimerResolution(0LL, Process);
    v13 = 0;
    v14 = 0;
  }
  updated = ExpUpdateTimerResolution(v14, v13, 0LL);
LABEL_10:
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  *ActualResolution = updated;
  return v8;
}
