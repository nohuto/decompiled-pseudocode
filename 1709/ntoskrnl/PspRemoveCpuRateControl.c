/*
 * XREFs of PspRemoveCpuRateControl @ 0x14050A35C
 * Callers:
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeRemoveSchedulingGroup @ 0x1400D1654 (KeRemoveSchedulingGroup.c)
 *     PspFreeRateControl @ 0x14050A25C (PspFreeRateControl.c)
 */

void __fastcall PspRemoveCpuRateControl(__int64 a1)
{
  void *v2; // rcx

  *(_DWORD *)(*(_QWORD *)(a1 + 1008) + 44LL) = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1304), 0xFFFFFFDF);
  KeRemoveSchedulingGroup((unsigned __int16 *)(*(_QWORD *)(a1 + 1008) + 128LL));
  PspFreeRateControl(*(char ***)(a1 + 1008), 2u);
  *(_QWORD *)(a1 + 1008) = 0LL;
  if ( PsCpuFairShareEnabled && *(_QWORD *)(a1 + 1080) == a1 )
  {
    v2 = *(void **)(a1 + 1112);
    if ( v2 )
    {
      ObfDereferenceObjectWithTag(v2, 0x624A7350u);
      *(_QWORD *)(a1 + 1112) = 0LL;
    }
  }
}
