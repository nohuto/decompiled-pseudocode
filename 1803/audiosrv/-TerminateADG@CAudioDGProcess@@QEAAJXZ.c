/*
 * XREFs of ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x180107B40
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x18009E830 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180007B78 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180007DC4 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::TerminateADG(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v2; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  v1 = g_ADGProcess;
  lpCriticalSection = g_ADGProcess;
  v5 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CAudioDGProcess::CancelADGTerminationTimer(v1);
  v2 = CAudioDGProcess::DoTerminateADG((CAudioDGProcess *)v1);
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
