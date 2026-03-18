/*
 * XREFs of KiGetHeteroCpuPolicyThread @ 0x14001AF38
 * Callers:
 *     KiFindReadyThread @ 0x14001ADF4 (KiFindReadyThread.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1400427D0 (KiCheckPreferredHeteroProcessor.c)
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 *     KiHeteroChooseTargetProcessor @ 0x140203FB8 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     KiCheckImportantThread @ 0x140203E00 (KiCheckImportantThread.c)
 */

__int64 __fastcall KiGetHeteroCpuPolicyThread(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  char v4; // al
  unsigned int v5; // edx

  if ( KeHeteroSystem == 1 )
    return 0;
  v2 = *(unsigned __int8 *)(a1 + 125);
  if ( v2 < 5 )
    return v2;
  if ( KeHeteroSystem != 2 )
    return KiConvertDynamicHeteroPolicy(a1, a2, a2);
  v4 = KiCheckImportantThread();
  v5 = KiDefaultDynamicHeteroCpuPolicy;
  if ( v4 )
    return (unsigned int)KiDynamicHeteroCpuPolicyImportant;
  return v5;
}
