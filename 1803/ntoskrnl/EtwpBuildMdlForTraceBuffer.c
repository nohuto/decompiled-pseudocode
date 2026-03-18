/*
 * XREFs of EtwpBuildMdlForTraceBuffer @ 0x1407B96CC
 * Callers:
 *     EtwpPreserveLogger @ 0x1407B99CC (EtwpPreserveLogger.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x1400948D0 (MmBuildMdlForNonPagedPool.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 */

__int64 __fastcall EtwpBuildMdlForTraceBuffer(_DWORD *a1, struct _MDL **a2)
{
  unsigned int v3; // ebx
  struct _MDL *Mdl; // rax
  struct _MDL *v5; // rdi

  v3 = 0;
  Mdl = IoAllocateMdl(a1, *a1, 0, 0, 0LL);
  v5 = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    *a2 = v5;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
