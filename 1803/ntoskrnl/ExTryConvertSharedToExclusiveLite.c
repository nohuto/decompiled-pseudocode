/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x1402BA0B8
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1406F5730 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x1402BA2F0 (ExpTryConvertSharedToExclusiveLite.c)
 */

__int64 ExTryConvertSharedToExclusiveLite()
{
  if ( (*((_BYTE *)&CmpRegistryLock + 26) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)&CmpRegistryLock, 0LL, 0LL);
  return ExpTryConvertSharedToExclusiveLite(&CmpRegistryLock);
}
