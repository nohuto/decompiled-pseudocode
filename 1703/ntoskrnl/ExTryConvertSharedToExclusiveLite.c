/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x14025C168
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1406679E8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 ExTryConvertSharedToExclusiveLite()
{
  if ( (byte_1403F939A & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)&CmpRegistryLock, 0LL, 0LL);
  return ExpTryConvertSharedToExclusiveLite(&CmpRegistryLock);
}
