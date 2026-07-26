/*
 * XREFs of ?ndisFreeMdl@@YAXPEAU_MDL@@@Z @ 0x1C004BFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeMdl(PMDL Mdl)
{
  if ( (Mdl->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
  ExFreePoolWithTag(Mdl, 0);
}
