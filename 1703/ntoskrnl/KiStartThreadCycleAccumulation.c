/*
 * XREFs of KiStartThreadCycleAccumulation @ 0x140043CC0
 * Callers:
 *     KiCompleteDirectSwitchThread @ 0x140041A60 (KiCompleteDirectSwitchThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140041AE4 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400428E0 (KiGroupSchedulingGenerationEnd.c)
 *     KiIdleSchedule @ 0x140042E90 (KiIdleSchedule.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140044420 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PspRevertContainerImpersonation @ 0x140044790 (PspRevertContainerImpersonation.c)
 *     KiSwapThread @ 0x1400EB0F0 (KiSwapThread.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     KeUpdateThreadTag @ 0x1401307B0 (KeUpdateThreadTag.c)
 * Callees:
 *     PoGetFrequencyBucket @ 0x140167AAC (PoGetFrequencyBucket.c)
 *     KiBeginCounterAccumulation @ 0x140201F5C (KiBeginCounterAccumulation.c)
 */

__int64 __fastcall KiStartThreadCycleAccumulation(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r10
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // r11
  __int64 v8; // rdi
  bool v9; // zf
  __int64 FrequencyBucket; // rcx
  __int64 v11; // rdx

  v4 = a2;
  v5 = a1;
  result = __rdtsc();
  v7 = result;
  v8 = result - *(_QWORD *)(a1 + 23488);
  *(_QWORD *)(a1 + 23672) += v8;
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
  {
    FrequencyBucket = (unsigned int)PoGetFrequencyBucket();
    result = *(unsigned __int8 *)(v5 + 23986);
    v11 = result + 2 * FrequencyBucket;
    a1 = v8 + *(_QWORD *)(v5 + 8 * v11 + 23680);
    *(_QWORD *)(v5 + 8 * v11 + 23680) = a1;
  }
  *(_QWORD *)(v5 + 23488) = v7;
  if ( (*(_BYTE *)(v4 + 2) & 0x10) != 0 )
  {
    result = *(unsigned __int8 *)(v4 + 124);
    *(_QWORD *)(v5 + 23496) = v7;
  }
  if ( (*(_BYTE *)(v4 + 2) & 2) != 0 )
    result = KiBeginCounterAccumulation(v4, 0LL);
  v9 = *(_BYTE *)(v5 + 6) == 0;
  *(_BYTE *)(v5 + 32) = 0;
  if ( !v9 )
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
