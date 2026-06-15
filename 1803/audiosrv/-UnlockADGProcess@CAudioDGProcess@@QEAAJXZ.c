/*
 * XREFs of ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180097734
 * Callers:
 *     s_adGetDeviceGraphWnfStateName @ 0x180107C30 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180007CB4 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::UnlockADGProcess(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rbx
  bool v2; // zf
  unsigned int DebugInfo; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  v1 = g_ADGProcess;
  lpCriticalSection = g_ADGProcess;
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = LODWORD(v1[1].DebugInfo)-- == 1;
  DebugInfo = (unsigned int)v1[1].DebugInfo;
  if ( v2 )
  {
    CAudioDGProcess::StartADGTerminationTimer((struct _TP_TIMER **)v1);
    DebugInfo = (unsigned int)v1[1].DebugInfo;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return DebugInfo;
}
