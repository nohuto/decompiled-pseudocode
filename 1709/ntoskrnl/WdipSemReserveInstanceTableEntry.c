/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x14073F128
 * Callers:
 *     WdipSemEnableScenario @ 0x1405AB884 (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x1405AB858 (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemBuildScenarioInstance @ 0x14073EE70 (WdipSemBuildScenarioInstance.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x14073EF6C (WdipSemLogInflightLimitExceededInformation.c)
 */

PSLIST_ENTRY __fastcall WdipSemReserveInstanceTableEntry(__int64 a1, _SLIST_ENTRY *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PSLIST_ENTRY v3; // rbx
  PSLIST_ENTRY *v6; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403613D8, 0LL);
  if ( a1 && a2 )
  {
    if ( (unsigned int)dword_1403613D0 < 0x80 )
    {
      if ( !WdipSemQueryEnabledInstanceTable(a2) )
      {
        v3 = WdipSemBuildScenarioInstance((_SLIST_ENTRY *)a1, a2);
        if ( v3 )
        {
          v6 = (PSLIST_ENTRY *)qword_1403613C8;
          if ( *(__int64 **)qword_1403613C8 != &WdipSemEnabledInstanceTable )
            __fastfail(3u);
          v3->Next = (_SLIST_ENTRY *)&WdipSemEnabledInstanceTable;
          *((_QWORD *)&v3->Next + 1) = v6;
          *v6 = v3;
          ++dword_1403613D0;
          qword_1403613C8 = (__int64)v3;
        }
      }
    }
    else
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(_WORD *)(a1 + 16), (__int64)a2);
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_1403613D8, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
