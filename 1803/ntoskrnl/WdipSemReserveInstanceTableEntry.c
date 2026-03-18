/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x14060C7D8
 * Callers:
 *     WdipSemEnableScenario @ 0x14060D740 (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     WdipSemBuildScenarioInstance @ 0x14060C8AC (WdipSemBuildScenarioInstance.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x14060D68C (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1407A1440 (WdipSemLogInflightLimitExceededInformation.c)
 */

_QWORD *__fastcall WdipSemReserveInstanceTableEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403A2DD8, 0LL);
  if ( a1 && a2 )
  {
    if ( (unsigned int)dword_1403A2DD0 >= 0x80 )
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(unsigned __int16 *)(a1 + 16), a2);
    }
    else if ( !WdipSemQueryEnabledInstanceTable(a2) )
    {
      v3 = (_QWORD *)WdipSemBuildScenarioInstance(a1, a2);
      if ( v3 )
      {
        v8 = (_QWORD *)qword_1403A2DC8;
        if ( *(__int64 **)qword_1403A2DC8 != &WdipSemEnabledInstanceTable )
          __fastfail(3u);
        *v3 = &WdipSemEnabledInstanceTable;
        v3[1] = v8;
        *v8 = v3;
        ++dword_1403A2DD0;
        qword_1403A2DC8 = (__int64)v3;
      }
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_1403A2DD8, 0LL, v6, v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
