/*
 * XREFs of PoSetSystemWakeDevice @ 0x14023A360
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400B05BC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopUpdateWakeSource @ 0x1402415D8 (PopUpdateWakeSource.c)
 */

void *__fastcall PoSetSystemWakeDevice(__int64 a1)
{
  void *result; // rax
  void *v2; // rbx

  result = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x746C6644u);
  v2 = result;
  if ( result )
  {
    PopUpdateWakeSource(result);
    return (void *)ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  }
  return result;
}
