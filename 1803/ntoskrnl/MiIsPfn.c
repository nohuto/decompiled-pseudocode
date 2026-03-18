/*
 * XREFs of MiIsPfn @ 0x140106380
 * Callers:
 *     MiConvertHiberPhasePte @ 0x140475650 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x140485520 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140485710 (MiMarkNonPagedHiberPhasePte.c)
 *     PfpPfnPrioRequest @ 0x1405B0D80 (PfpPfnPrioRequest.c)
 *     MiMapLockedPagesInUserSpace @ 0x1405BA250 (MiMapLockedPagesInUserSpace.c)
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 *     MiMapViewOfPhysicalSection @ 0x140646C40 (MiMapViewOfPhysicalSection.c)
 *     MmIsExtentDangling @ 0x14074E798 (MmIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x14075693C (MmRelocatePfnList.c)
 *     MmAreMdlPagesLocked @ 0x140812AA4 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x140812BD4 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140812CD4 (MmCheckMapIoSpace.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfn(unsigned __int64 a1)
{
  if ( a1 > qword_1403CB780 )
    return 0LL;
  if ( MmPhysicalMemoryBlock )
    return (*(_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0;
  return 1LL;
}
