/*
 * XREFs of VrpInitializeLoadedDifferencingHives @ 0x1405C7C00
 * Callers:
 *     VRegSetup @ 0x1405C7A40 (VRegSetup.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 VrpInitializeLoadedDifferencingHives()
{
  unsigned int v0; // ebx
  char *PoolWithTag; // rax

  v0 = 0;
  gLoadedDiffHivesLock = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x67655256u);
  if ( PoolWithTag )
  {
    gLoadedDiffHives = 0;
    qword_140386AA8 = (__int64)PoolWithTag;
    dword_140386AA4 = 1024;
    if ( (PoolWithTag + 256 >= PoolWithTag ? 0x20 : 0) != 0 )
      memset64(PoolWithTag, (unsigned __int64)&gLoadedDiffHives + 1, PoolWithTag + 256 >= PoolWithTag ? 0x20 : 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v0;
}
