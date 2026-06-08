/*
 * XREFs of GetCoordinationType @ 0x1C000A56C
 * Callers:
 *     Display_xSD @ 0x1C0002958 (Display_xSD.c)
 *     Display_CSD @ 0x1C0009CEC (Display_CSD.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetCoordinationType(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return "MS Software All";
  v2 = v1 - 251;
  if ( !v2 )
    return "ACPI Software All";
  v3 = v2 - 1;
  if ( !v3 )
    return "ACPI Software Any";
  if ( v3 == 1 )
    return "ACPI Hardware All";
  return "Unknown Coordination Type";
}
