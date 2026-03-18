/*
 * XREFs of KsepShimDbUnmapFromMemory @ 0x14045336C
 * Callers:
 *     KseShimDatabaseClose @ 0x1404B5110 (KseShimDatabaseClose.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     SdbReleaseDatabase @ 0x1404533F0 (SdbReleaseDatabase.c)
 *     MmUnmapViewInSystemSpace @ 0x140497530 (MmUnmapViewInSystemSpace.c)
 */

int KsepShimDbUnmapFromMemory()
{
  int result; // eax

  if ( KsepShimDbHandle )
    result = SdbReleaseDatabase(KsepShimDbHandle);
  if ( KsepShimDbAddress )
  {
    result = MmUnmapViewInSystemSpace(KsepShimDbAddress);
    KsepShimDbAddress = 0LL;
  }
  if ( KsepShimDbSectionPointer )
  {
    result = ObfDereferenceObject(KsepShimDbSectionPointer);
    KsepShimDbSectionPointer = 0LL;
  }
  if ( KsepShimDbSectionHandle )
  {
    result = ZwClose(KsepShimDbSectionHandle);
    KsepShimDbSectionHandle = 0LL;
  }
  if ( KsepShimDbFileHandle )
  {
    result = ZwClose(KsepShimDbFileHandle);
    KsepShimDbFileHandle = 0LL;
  }
  return result;
}
