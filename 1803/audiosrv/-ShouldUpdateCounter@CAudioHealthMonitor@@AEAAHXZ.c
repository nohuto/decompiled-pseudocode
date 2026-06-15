/*
 * XREFs of ?ShouldUpdateCounter@CAudioHealthMonitor@@AEAAHXZ @ 0x18009C5A4
 * Callers:
 *     ?LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z @ 0x18009C090 (-LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z.c)
 *     ?WeWereNotHungAfterAll@CAudioHealthMonitor@@UEAAXXZ @ 0x18009C740 (-WeWereNotHungAfterAll@CAudioHealthMonitor@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioHealthMonitor::ShouldUpdateCounter(CAudioHealthMonitor *this)
{
  BOOL v2; // eax
  unsigned int v3; // edx

  v2 = IsDebuggerPresent();
  v3 = 0;
  if ( v2 )
    return 0LL;
  LOBYTE(v3) = *((_DWORD *)this + 16) == 0;
  return v3;
}
