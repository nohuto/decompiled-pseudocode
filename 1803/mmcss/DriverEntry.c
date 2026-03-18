/*
 * XREFs of DriverEntry @ 0x1C000C320
 * Callers:
 *     GsDriverEntry @ 0x1C000C010 (GsDriverEntry.c)
 * Callees:
 *     CsTerminate @ 0x1C0009FA4 (CsTerminate.c)
 *     CsInitialize @ 0x1C000C194 (CsInitialize.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx

  result = CsInitialize(DriverObject);
  v3 = result;
  if ( result < 0 )
  {
    CsTerminate();
    return v3;
  }
  return result;
}
