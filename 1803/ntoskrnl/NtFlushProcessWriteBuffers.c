/*
 * XREFs of NtFlushProcessWriteBuffers @ 0x1400A3F10
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1400A3F28 (KeFlushProcessWriteBuffers.c)
 */

NTSTATUS NtFlushProcessWriteBuffers(void)
{
  KeFlushProcessWriteBuffers(0LL);
  return 0;
}
