/*
 * XREFs of ?WeWereNotHungAfterAll@CAudioHealthMonitor@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180060730
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ShouldUpdateCounter@CAudioHealthMonitor@@AEAAHXZ @ 0x180060594 (-ShouldUpdateCounter@CAudioHealthMonitor@@AEAAHXZ.c)
 */

void __fastcall CAudioHealthMonitor::WeWereNotHungAfterAll(CAudioHealthMonitor *this, const struct _TlgProvider_t *a2)
{
  int v3; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v5 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (unsigned int)CAudioHealthMonitor::ShouldUpdateCounter(this) )
  {
    v3 = *((_DWORD *)this + 2);
    if ( v3 )
      *((_DWORD *)this + 2) = v3 - 1;
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
}
