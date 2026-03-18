/*
 * XREFs of ACPIGpeIndexToByteIndex @ 0x1C001F28C
 * Callers:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C001EF58 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002B850 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIVectorDisconnect @ 0x1C0058F70 (ACPIVectorDisconnect.c)
 *     ACPIVectorInstall @ 0x1C00591C4 (ACPIVectorInstall.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C00202D8 (ACPIGpeValidIndex.c)
 */

__int64 __fastcall ACPIGpeIndexToByteIndex(__int64 a1)
{
  ULONG_PTR v1; // r9
  unsigned int v2; // ecx

  if ( !(unsigned __int8)ACPIGpeValidIndex(a1) )
    KeBugCheckEx(0xA5u, 0x17uLL, v1, 1uLL, 0LL);
  v2 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( (unsigned int)v1 >= v2 )
    return (unsigned int)v1 + *((unsigned __int16 *)AcpiInformation + 43) - v2;
  else
    return (unsigned int)v1;
}
