/*
 * XREFs of PipCslCreateCallback @ 0x140897E30
 * Callers:
 *     PiCslInitialize @ 0x1408DFDAC (PiCslInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ExCreateCallback @ 0x140557360 (ExCreateCallback.c)
 */

NTSTATUS PipCslCreateCallback()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Callback\\IoExternalDmaUnblock");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ExCreateCallback((PCALLBACK_OBJECT *)&PipCslCallbackObject, &ObjectAttributes, 1u, 1u);
}
