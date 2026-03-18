/*
 * XREFs of KiStartThreadCycleAccumulation @ 0x14008D5D0
 * Callers:
 *     KeUpdateThreadTag @ 0x14000B720 (KeUpdateThreadTag.c)
 *     KiSwapThread @ 0x14006E1D0 (KiSwapThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14008AEE4 (KiGroupSchedulingGenerationEnd.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     KiIdleSchedule @ 0x14008CB50 (KiIdleSchedule.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14008D510 (KiUpdateTotalCyclesCurrentThread.c)
 *     NtYieldExecution @ 0x14008D810 (NtYieldExecution.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140003620 (PpmPerfGetCurrentFrequency.c)
 *     KiBeginCounterAccumulation @ 0x14020852C (KiBeginCounterAccumulation.c)
 */

__int64 __fastcall KiStartThreadCycleAccumulation(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // r10
  bool v8; // zf
  unsigned int CurrentFrequency; // edx
  __int64 v10; // r11
  unsigned int v11; // edx
  __int64 v12; // rdx

  v4 = a2;
  v5 = a1;
  result = __rdtsc();
  v7 = result;
  *(_QWORD *)(a1 + 23608) += result - *(_QWORD *)(a1 + 23488);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
  {
    CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0);
    if ( CurrentFrequency < 0x4B )
      v11 = CurrentFrequency / 0x19;
    else
      v11 = 3;
    result = *(unsigned __int8 *)(v5 + 23858);
    v12 = result + 2LL * v11;
    a1 = v10 + *(_QWORD *)(v5 + 8 * v12 + 23616);
    *(_QWORD *)(v5 + 8 * v12 + 23616) = a1;
  }
  *(_QWORD *)(v5 + 23488) = v7;
  if ( (*(_BYTE *)(v4 + 2) & 0x10) != 0 )
  {
    result = *(unsigned __int8 *)(v4 + 124);
    *(_QWORD *)(v5 + 23496) = v7;
  }
  if ( (*(_BYTE *)(v4 + 2) & 2) != 0 )
    result = KiBeginCounterAccumulation(v4, 0LL);
  v8 = *(_BYTE *)(v5 + 6) == 0;
  *(_BYTE *)(v5 + 32) = 0;
  if ( !v8 )
  {
    *(_BYTE *)(v5 + 6) = 0;
    if ( !a3 )
    {
      LOBYTE(a1) = 2;
      return HalRequestSoftwareInterrupt(a1);
    }
  }
  return result;
}
