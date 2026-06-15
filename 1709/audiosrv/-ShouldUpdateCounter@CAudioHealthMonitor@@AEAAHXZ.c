/*
 * XREFs of ?ShouldUpdateCounter@CAudioHealthMonitor@@AEAAHXZ @ 0x180060594
 * Callers:
 *     ?LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBGPEBU_TlgProvider_t@@@Z @ 0x180060240 (-LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBGPEBU_TlgProvider_t@@@Z.c)
 *     ?WeWereNotHungAfterAll@CAudioHealthMonitor@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180060730 (-WeWereNotHungAfterAll@CAudioHealthMonitor@@UEAAXPEBU_TlgProvider_t@@@Z.c)
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
