/*
 * XREFs of NtFlushProcessWriteBuffers @ 0x1400D3010
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1400D3028 (KeFlushProcessWriteBuffers.c)
 */

__int64 NtFlushProcessWriteBuffers()
{
  KeFlushProcessWriteBuffers(0LL);
  return 0LL;
}
