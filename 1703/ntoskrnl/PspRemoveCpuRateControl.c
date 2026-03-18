/*
 * XREFs of PspRemoveCpuRateControl @ 0x140437174
 * Callers:
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 * Callees:
 *     KeRemoveSchedulingGroup @ 0x14001C884 (KeRemoveSchedulingGroup.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PspFreeRateControl @ 0x1404371D4 (PspFreeRateControl.c)
 */

LONG_PTR __fastcall PspRemoveCpuRateControl(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  *(_DWORD *)(*(_QWORD *)(a1 + 1008) + 44LL) = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1304), 0xFFFFFFDF);
  KeRemoveSchedulingGroup((unsigned __int16 *)(*(_QWORD *)(a1 + 1008) + 128LL));
  result = PspFreeRateControl(*(_QWORD *)(a1 + 1008), 2LL);
  *(_QWORD *)(a1 + 1008) = 0LL;
  if ( PsCpuFairShareEnabled )
  {
    result = *(_QWORD *)(a1 + 1080);
    if ( result == a1 )
    {
      v3 = *(void **)(a1 + 1112);
      if ( v3 )
      {
        result = ObfDereferenceObject(v3);
        *(_QWORD *)(a1 + 1112) = 0LL;
      }
    }
  }
  return result;
}
