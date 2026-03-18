/*
 * XREFs of HvlpMarkHvlPagesForHibernation @ 0x1401EEAD8
 * Callers:
 *     HvlMarkHiberPhase @ 0x1401EE5BC (HvlMarkHiberPhase.c)
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 */

void HvlpMarkHvlPagesForHibernation()
{
  ULONG v0; // ebx
  ULONG ActiveProcessorCount; // edi
  __int64 Prcb; // rax

  PoSetHiberRange(0LL, 0x10000u, HvlLpReadMultipleMsr, 0LL, 0x636C7648u);
  PoSetHiberRange(0LL, 0x10000u, &HvlpFlags, 0LL, 0x646C7648u);
  v0 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    do
    {
      Prcb = KeGetPrcb(v0);
      PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(Prcb + 24704), 0x6000uLL, 0x646C7648u);
      ++v0;
    }
    while ( v0 < ActiveProcessorCount );
  }
}
