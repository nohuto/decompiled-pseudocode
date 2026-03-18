/*
 * XREFs of FsRtlpFreeMdlChain @ 0x1406B1134
 * Callers:
 *     FsRtlSetKernelEaFile @ 0x14056B890 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14056C170 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x14056C480 (FsRtlQueryKernelEaFile.c)
 *     FsRtlQueryInformationFile @ 0x1406B0F60 (FsRtlQueryInformationFile.c)
 * Callees:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 */

void __fastcall FsRtlpFreeMdlChain(PMDL Mdl)
{
  PMDL v1; // rbx
  struct _MDL *Next; // rdi

  if ( Mdl )
  {
    v1 = Mdl;
    do
    {
      Next = v1->Next;
      if ( (v1->MdlFlags & 2) != 0 )
        MmUnlockPages(v1);
      IoFreeMdl(v1);
      v1 = Next;
    }
    while ( Next );
  }
}
