/*
 * XREFs of AcpiKsrPreparePersistentContext @ 0x1C00A34C8
 * Callers:
 *     AcpiKsrCallback @ 0x1C00A3480 (AcpiKsrCallback.c)
 * Callees:
 *     <none>
 */

__int64 AcpiKsrPreparePersistentContext()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( (_DWORD)AcpiKsrContext != 1481917259 )
  {
    qword_1C0078B98 = 0LL;
    AcpiKsrContext = 0x15854434BLL;
    qword_1C0078B98 = *((_BYTE *)AcpiInformation + 84) & 1;
  }
  return KsrPersistMetadata(&GUID_ACPI_KSR_CONTEXT, &AcpiKsrContext, 16LL, &v1);
}
