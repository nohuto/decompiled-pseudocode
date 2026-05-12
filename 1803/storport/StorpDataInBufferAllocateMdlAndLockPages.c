/*
 * XREFs of StorpDataInBufferAllocateMdlAndLockPages @ 0x1C003E538
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C0009E80 (RaidUnitClaimIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpDataInBufferAllocateMdlAndLockPages(struct _MDL **a1, ULONG a2, void *a3, KPROCESSOR_MODE a4)
{
  struct _MDL *Mdl; // rax

  Mdl = IoAllocateMdl(a3, a2, 0, 0, 0LL);
  *a1 = Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MmProbeAndLockPages(Mdl, a4, IoWriteAccess);
  return 0LL;
}
