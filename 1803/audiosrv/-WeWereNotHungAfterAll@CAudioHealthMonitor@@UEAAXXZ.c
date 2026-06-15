/*
 * XREFs of ?WeWereNotHungAfterAll@CAudioHealthMonitor@@UEAAXXZ @ 0x18009C740
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ShouldUpdateCounter@CAudioHealthMonitor@@AEAAHXZ @ 0x18009C5A4 (-ShouldUpdateCounter@CAudioHealthMonitor@@AEAAHXZ.c)
 */

void __fastcall CAudioHealthMonitor::WeWereNotHungAfterAll(CAudioHealthMonitor *this)
{
  int v2; // eax
  int v3; // ecx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v5 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (unsigned int)CAudioHealthMonitor::ShouldUpdateCounter(this) )
  {
    v2 = *((_DWORD *)this + 2);
    v3 = v2 ? v2 - 1 : -1;
    if ( v2 )
      *((_DWORD *)this + 2) = v3;
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
}
