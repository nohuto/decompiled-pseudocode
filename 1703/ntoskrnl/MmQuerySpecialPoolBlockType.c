/*
 * XREFs of MmQuerySpecialPoolBlockType @ 0x140217A8C
 * Callers:
 *     MiIdentifyPfn @ 0x1400DBC70 (MiIdentifyPfn.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 * Callees:
 *     MiVaIsSessionSpecialPool @ 0x1400A6B34 (MiVaIsSessionSpecialPool.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MmQuerySpecialPoolBlockType(unsigned __int64 a1)
{
  __int64 v1; // rdx

  if ( (unsigned int)MiGetSystemRegionType(a1) == 13 )
    return 0LL;
  else
    return (unsigned int)MiVaIsSessionSpecialPool(v1) != 0 ? 33 : 1;
}
