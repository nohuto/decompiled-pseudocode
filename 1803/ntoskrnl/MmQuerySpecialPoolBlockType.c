/*
 * XREFs of MmQuerySpecialPoolBlockType @ 0x14025D000
 * Callers:
 *     MiIdentifyPfn @ 0x1401056D0 (MiIdentifyPfn.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 * Callees:
 *     MiVaIsSessionSpecialPool @ 0x1400CA560 (MiVaIsSessionSpecialPool.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MmQuerySpecialPoolBlockType(unsigned __int64 a1)
{
  __int64 v1; // rdx

  if ( (unsigned int)MiGetSystemRegionType(a1) == 13 )
    return 0LL;
  else
    return (unsigned int)MiVaIsSessionSpecialPool(v1) != 0 ? 33 : 1;
}
