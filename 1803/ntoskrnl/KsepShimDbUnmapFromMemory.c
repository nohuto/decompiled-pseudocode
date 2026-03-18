/*
 * XREFs of KsepShimDbUnmapFromMemory @ 0x1405FFE1C
 * Callers:
 *     KseShimDatabaseClose @ 0x1405FC764 (KseShimDatabaseClose.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     MmUnmapViewInSystemSpace @ 0x1404BB5B0 (MmUnmapViewInSystemSpace.c)
 *     SdbReleaseDatabase @ 0x1405FFCB8 (SdbReleaseDatabase.c)
 */

void KsepShimDbUnmapFromMemory()
{
  if ( KsepShimDbHandle )
    SdbReleaseDatabase(KsepShimDbHandle);
  if ( KsepShimDbAddress )
  {
    MmUnmapViewInSystemSpace(KsepShimDbAddress);
    KsepShimDbAddress = 0LL;
  }
  if ( KsepShimDbSectionPointer )
  {
    ObfDereferenceObject(KsepShimDbSectionPointer);
    KsepShimDbSectionPointer = 0LL;
  }
  if ( KsepShimDbSectionHandle )
  {
    ZwClose(KsepShimDbSectionHandle);
    KsepShimDbSectionHandle = 0LL;
  }
  if ( KsepShimDbFileHandle )
  {
    ZwClose(KsepShimDbFileHandle);
    KsepShimDbFileHandle = 0LL;
  }
}
