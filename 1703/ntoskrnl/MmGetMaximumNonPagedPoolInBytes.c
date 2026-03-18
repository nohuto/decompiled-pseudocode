/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x14003C784
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x140550960 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x1407170BC (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_14036D090 << 12;
}
