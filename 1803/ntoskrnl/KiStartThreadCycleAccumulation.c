/*
 * XREFs of KiStartThreadCycleAccumulation @ 0x140060940
 * Callers:
 *     KiIdleSchedule @ 0x1400605A0 (KiIdleSchedule.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140060670 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140060FE0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400A8540 (KiGroupSchedulingGenerationEnd.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KeUpdateThreadTag @ 0x140143DE0 (KeUpdateThreadTag.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140060A30 (PpmPerfGetCurrentFrequency.c)
 *     KiBeginCounterAccumulation @ 0x14024615C (KiBeginCounterAccumulation.c)
 *     KiSetVpThreadSystemWork @ 0x140248FE0 (KiSetVpThreadSystemWork.c)
 */

__int64 __fastcall KiStartThreadCycleAccumulation(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r11
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned int CurrentFrequency; // edx
  __int64 v9; // r9
  unsigned int v10; // edx
  __int64 v11; // rdx
  __int64 result; // rax
  bool v13; // zf

  v4 = a2;
  v6 = __rdtsc();
  *(_QWORD *)(a1 + 23608) += v6 - *(_QWORD *)(a1 + 23488);
  v7 = *(unsigned __int8 *)(a2 + 2);
  if ( (v7 & 0x20) != 0 )
  {
    CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0LL);
    if ( CurrentFrequency < 0x4B )
      v10 = CurrentFrequency / 0x19;
    else
      v10 = 3;
    v11 = *(unsigned __int8 *)(a1 + 23858) + 2LL * v10;
    *(_QWORD *)(a1 + 8 * v11 + 23616) += v9;
    v7 = *(unsigned __int8 *)(v4 + 2);
  }
  if ( (v7 & 0x40) != 0 )
    KiSetVpThreadSystemWork(a1, 0LL);
  *(_QWORD *)(a1 + 23488) = v6;
  result = *(unsigned __int8 *)(v4 + 2);
  if ( (result & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 23496) = v6;
    result = *(unsigned __int8 *)(v4 + 2);
  }
  if ( (result & 2) != 0 )
    result = KiBeginCounterAccumulation(v4, 0LL);
  v13 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v13 )
  {
    *(_BYTE *)(a1 + 6) = 0;
    if ( !a3 )
    {
      LOBYTE(v7) = 2;
      return HalRequestSoftwareInterrupt(v7);
    }
  }
  return result;
}
