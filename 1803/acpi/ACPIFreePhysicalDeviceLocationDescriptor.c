/*
 * XREFs of ACPIFreePhysicalDeviceLocationDescriptor @ 0x1C008B350
 * Callers:
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C0071008 (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C008B638 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIFreePhysicalDeviceLocationDescriptor(char *P)
{
  if ( *((_QWORD *)P + 16) )
    RtlFreeUnicodeString((PUNICODE_STRING)(P + 120));
  ExFreePoolWithTag(P, 0);
}
