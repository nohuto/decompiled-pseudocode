/*
 * XREFs of PopAllocatePages @ 0x14040DF10
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x14040D080 (PopBuildMemoryImageHeader.c)
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     PopGenerateMdl @ 0x14013F1A8 (PopGenerateMdl.c)
 */

PVOID __fastcall PopAllocatePages(__int64 a1)
{
  PVOID v1; // rbx
  struct _MDL *Mdl; // rax
  ULONG_PTR v3; // rcx

  PopNumberOfPagesForHibernateProcess += a1;
  v1 = 0LL;
  Mdl = PopGenerateMdl(a1);
  if ( !Mdl || (v1 = MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 1u, 0x40000020u)) == 0LL )
  {
    v3 = qword_14034B1C0;
    goto LABEL_6;
  }
  v3 = qword_14034B1C0;
  if ( *(int *)(qword_14034B1C0 + 188) < 0 )
LABEL_6:
    *(_DWORD *)(v3 + 188) = -1073741670;
  return v1;
}
