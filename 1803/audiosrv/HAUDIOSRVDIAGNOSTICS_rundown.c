/*
 * XREFs of HAUDIOSRVDIAGNOSTICS_rundown @ 0x180107BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180007CB4 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall HAUDIOSRVDIAGNOSTICS_rundown(__int64 a1)
{
  LPCRITICAL_SECTION v1; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v1 = g_ADGProcess;
  if ( a1 == *(_QWORD *)&g_ADGProcess[2].LockCount )
  {
    lpCriticalSection = g_ADGProcess;
    v4 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( LODWORD(v1[1].DebugInfo)-- == 1 )
      CAudioDGProcess::StartADGTerminationTimer((struct _TP_TIMER **)v1);
    if ( v4 )
      LeaveCriticalSection(lpCriticalSection);
  }
}
