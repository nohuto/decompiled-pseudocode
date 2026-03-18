/*
 * XREFs of MmQuerySpecialPoolBlockType @ 0x140221358
 * Callers:
 *     MiIdentifyPfn @ 0x140001280 (MiIdentifyPfn.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 * Callees:
 *     MiVaIsSessionSpecialPool @ 0x140066694 (MiVaIsSessionSpecialPool.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MmQuerySpecialPoolBlockType(unsigned __int64 a1)
{
  __int64 v1; // rdx

  if ( (unsigned int)MiGetSystemRegionType(a1) == 13 )
    return 0LL;
  else
    return (unsigned int)MiVaIsSessionSpecialPool(v1) != 0 ? 33 : 1;
}
