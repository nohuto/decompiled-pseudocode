/*
 * XREFs of MiProcessWsInSwapRanges @ 0x14007F54C
 * Callers:
 *     MiProcessWsInSwapSupport @ 0x14007F488 (MiProcessWsInSwapSupport.c)
 * Callees:
 *     MiReleaseOutSwapReservations @ 0x14007F5D4 (MiReleaseOutSwapReservations.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmPrefetchVirtualMemory @ 0x14052C778 (MmPrefetchVirtualMemory.c)
 */

__int64 __fastcall MiProcessWsInSwapRanges(_QWORD *a1, __int64 a2, unsigned int a3)
{
  char v3; // bl
  int v6; // edi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax

  v3 = a3;
  v6 = (a3 >> 1) & 1;
  if ( v6 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  result = MmPrefetchVirtualMemory((HANDLE)-(__int64)(*a1 < 0xFFFF800000000000uLL));
  if ( v6 )
    result = KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  if ( (v3 & 1) == 0 )
    return MiReleaseOutSwapReservations(a1, a2);
  return result;
}
