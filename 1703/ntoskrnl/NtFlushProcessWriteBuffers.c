/*
 * XREFs of NtFlushProcessWriteBuffers @ 0x14012042C
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x140120444 (KeFlushProcessWriteBuffers.c)
 */

NTSTATUS NtFlushProcessWriteBuffers(void)
{
  KeFlushProcessWriteBuffers(0LL);
  return 0;
}
