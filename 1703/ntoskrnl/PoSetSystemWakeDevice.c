/*
 * XREFs of PoSetSystemWakeDevice @ 0x140227580
 * Callers:
 *     <none>
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140071FE0 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PopUpdateWakeSource @ 0x14022DD1C (PopUpdateWakeSource.c)
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
