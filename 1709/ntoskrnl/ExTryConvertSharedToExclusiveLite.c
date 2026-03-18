/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x140285A88
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1406924F8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x140285CC0 (ExpTryConvertSharedToExclusiveLite.c)
 */

__int64 ExTryConvertSharedToExclusiveLite()
{
  if ( (*((_BYTE *)&CmpRegistryLock + 26) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)&CmpRegistryLock, 0LL, 0LL);
  return ExpTryConvertSharedToExclusiveLite(&CmpRegistryLock);
}
