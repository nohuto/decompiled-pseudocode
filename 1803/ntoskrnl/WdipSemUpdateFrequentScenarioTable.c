/*
 * XREFs of WdipSemUpdateFrequentScenarioTable @ 0x1407A15FC
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x1407A1440 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     WdipSemFastAllocate @ 0x14060CBAC (WdipSemFastAllocate.c)
 */

__int64 __fastcall WdipSemUpdateFrequentScenarioTable(_SLIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // ebx
  _QWORD *v4; // r8
  __int64 v5; // r9
  PSLIST_ENTRY v6; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403A2DA8, 0LL);
  if ( a1 )
  {
    if ( (unsigned int)dword_1403A2DA0 < 0x80 )
    {
      v6 = WdipSemFastAllocate(5, 0x18u);
      if ( v6 )
      {
        v4 = WdipSemFrequentScenarioTable;
        *v6 = *a1;
        v6[1].Next = a1[1].Next;
        WdipSemFrequentScenarioTable[dword_1403A2DA0++] = v6;
      }
      else
      {
        v2 = -1073741670;
      }
    }
    else
    {
      v2 = -1073741823;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_1403A2DA8, 0LL, (__int64)v4, v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
