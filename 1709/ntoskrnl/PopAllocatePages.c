/*
 * XREFs of PopAllocatePages @ 0x140432360
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x140432438 (PopBuildMemoryImageHeader.c)
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     PopGenerateMdl @ 0x140241BCC (PopGenerateMdl.c)
 */

PVOID __fastcall PopAllocatePages(__int64 a1)
{
  PVOID v1; // rbx
  struct _MDL *Mdl; // rax

  PopNumberOfPagesForHibernateProcess += a1;
  v1 = 0LL;
  Mdl = PopGenerateMdl(a1);
  if ( !Mdl
    || (v1 = MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 1u, 0x40000020u)) == 0LL
    || *(int *)(BugCheckParameter4 + 188) < 0 )
  {
    *(_DWORD *)(BugCheckParameter4 + 188) = -1073741670;
  }
  return v1;
}
