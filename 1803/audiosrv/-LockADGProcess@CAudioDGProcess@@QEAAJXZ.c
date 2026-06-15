/*
 * XREFs of ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x1800977A0
 * Callers:
 *     s_adGetDeviceGraphWnfStateName @ 0x180107C30 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180007B78 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18002B280 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::LockADGProcess(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rbx
  unsigned int DebugInfo; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  v1 = g_ADGProcess;
  lpCriticalSection = g_ADGProcess;
  v5 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  DebugInfo = ++LODWORD(v1[1].DebugInfo);
  if ( DebugInfo == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer(v1);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v1);
    DebugInfo = (unsigned int)v1[1].DebugInfo;
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  return DebugInfo;
}
