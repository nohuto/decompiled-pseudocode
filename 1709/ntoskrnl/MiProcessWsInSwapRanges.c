/*
 * XREFs of MiProcessWsInSwapRanges @ 0x14000405C
 * Callers:
 *     MiProcessWsInSwapSupport @ 0x140003F98 (MiProcessWsInSwapSupport.c)
 * Callees:
 *     MiReleaseOutSwapReservations @ 0x1400040E0 (MiReleaseOutSwapReservations.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmPrefetchVirtualMemory @ 0x140444728 (MmPrefetchVirtualMemory.c)
 */

__int64 __fastcall MiProcessWsInSwapRanges(_QWORD *a1, __int64 a2, char a3)
{
  int v6; // esi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax

  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  result = MmPrefetchVirtualMemory((HANDLE)-(__int64)(*a1 < 0xFFFF800000000000uLL));
  if ( v6 )
    result = KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  if ( (a3 & 1) == 0 )
    return MiReleaseOutSwapReservations(a1, a2);
  return result;
}
