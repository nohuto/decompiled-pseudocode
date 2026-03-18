/*
 * XREFs of NtFlushWriteBuffer @ 0x1406BD414
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NtFlushWriteBuffer(void)
{
  KeFlushWriteBuffer();
  return 0;
}
