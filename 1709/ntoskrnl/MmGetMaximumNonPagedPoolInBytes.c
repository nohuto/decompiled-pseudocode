/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x1400B4814
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x1404F0098 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x140756828 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_140389350 << 12;
}
