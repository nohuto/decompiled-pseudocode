/*
 * XREFs of NtFlushWriteBuffer @ 0x1406EA1F8
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
