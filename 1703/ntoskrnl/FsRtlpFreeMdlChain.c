/*
 * XREFs of FsRtlpFreeMdlChain @ 0x140685D14
 * Callers:
 *     FsRtlQueryKernelEaFile @ 0x1404418D0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404427D0 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x140454DC0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryInformationFile @ 0x140685B40 (FsRtlQueryInformationFile.c)
 * Callees:
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
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
