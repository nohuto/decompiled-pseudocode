/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x14057CBD0
 * Callers:
 *     WdipSemEnableScenario @ 0x140584544 (WdipSemEnableScenario.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140467734 (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemBuildScenarioInstance @ 0x14057CCA4 (WdipSemBuildScenarioInstance.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1407059F8 (WdipSemLogInflightLimitExceededInformation.c)
 */

_QWORD *__fastcall WdipSemReserveInstanceTableEntry(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbx
  _QWORD *v6; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140345B58, 0LL);
  if ( a1 && a2 )
  {
    if ( (unsigned int)dword_140345B50 >= 0x80 )
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(unsigned __int16 *)(a1 + 16), a2);
    }
    else if ( !WdipSemQueryEnabledInstanceTable(a2) )
    {
      v3 = (_QWORD *)WdipSemBuildScenarioInstance(a1, a2);
      if ( v3 )
      {
        v6 = (_QWORD *)qword_140345B48;
        if ( *(__int64 **)qword_140345B48 != &WdipSemEnabledInstanceTable )
          __fastfail(3u);
        *v3 = &WdipSemEnabledInstanceTable;
        v3[1] = v6;
        *v6 = v3;
        ++dword_140345B50;
        qword_140345B48 = (__int64)v3;
      }
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140345B58, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
