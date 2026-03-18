/*
 * XREFs of ACPIInterfaceDereferenceDeviceExtension @ 0x1C00A0940
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0011024 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 */

char __fastcall ACPIInterfaceDereferenceDeviceExtension(ULONG_PTR a1)
{
  return ACPIInitDereferenceDeviceExtensionUnlocked(a1);
}
