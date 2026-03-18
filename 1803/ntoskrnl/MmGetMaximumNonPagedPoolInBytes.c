/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x1400D3938
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x1405899EC (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x1407BD2F4 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_1403CC5D0 << 12;
}
