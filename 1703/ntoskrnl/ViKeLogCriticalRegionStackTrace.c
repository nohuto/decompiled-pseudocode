/*
 * XREFs of ViKeLogCriticalRegionStackTrace @ 0x14025155C
 * Callers:
 *     VerifierKeEnterCriticalRegion @ 0x1407770A0 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x1407772C0 (VerifierKeLeaveCriticalRegion.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14006E1E0 (RtlCaptureStackBackTrace.c)
 */

void ViKeLogCriticalRegionStackTrace()
{
  unsigned __int64 v0; // rbx
  USHORT v1; // ax

  if ( VfKeCriticalRegionTraces )
  {
    v0 = VfKeCriticalRegionTraces
       + ((unsigned __int64)((VfKeCriticalRegionTracesLength - 1) & (unsigned int)_InterlockedIncrement(&VfKeCriticalRegionTracesIndex)) << 6);
    *(_QWORD *)v0 = KeGetCurrentThread();
    v1 = RtlCaptureStackBackTrace(0, 7u, (PVOID *)(v0 + 8), 0LL);
    if ( v1 < 7u )
      *(_QWORD *)(v0 + 8LL * v1 + 8) = 0LL;
  }
}
