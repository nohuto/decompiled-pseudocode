/*
 * XREFs of PoSetVirtualProcessorType @ 0x14022D2FC
 * Callers:
 *     KiCheckAndApplyVirtualLittle @ 0x14000B920 (KiCheckAndApplyVirtualLittle.c)
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 * Callees:
 *     PpmPerfArbitratorApplyProcessorState @ 0x140146DA0 (PpmPerfArbitratorApplyProcessorState.c)
 */

char __fastcall PoSetVirtualProcessorType(__int64 a1, char a2)
{
  __int64 v2; // r8
  char v3; // bl
  unsigned __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 24312);
  v3 = 1;
  if ( a2 != *(_BYTE *)(v2 + 48) )
  {
    v4 = __rdtsc();
    if ( a2 && v4 - *(_QWORD *)(v2 + 56) < *(_QWORD *)(v2 + 64) )
    {
      return 0;
    }
    else
    {
      *(_QWORD *)(v2 + 56) = v4;
      *(_BYTE *)(v2 + 48) = a2;
      PpmPerfArbitratorApplyProcessorState(a1, 1u, 0);
    }
  }
  return v3;
}
