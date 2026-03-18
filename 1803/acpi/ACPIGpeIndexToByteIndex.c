/*
 * XREFs of ACPIGpeIndexToByteIndex @ 0x1C0027A9C
 * Callers:
 *     ACPIInterruptDispatchEventDpc @ 0x1C002A900 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIVectorDisconnect @ 0x1C003FAF0 (ACPIVectorDisconnect.c)
 *     ACPIVectorInstall @ 0x1C003FE28 (ACPIVectorInstall.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C00417F8 (ACPIWakeRemoveDevicesAndUpdate.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C0027DE4 (ACPIGpeValidIndex.c)
 */

__int64 __fastcall ACPIGpeIndexToByteIndex(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // ecx

  if ( !(unsigned __int8)ACPIGpeValidIndex(a1) )
    KeBugCheckEx(0xA5u, 0x17uLL, v1, 1uLL, 0LL);
  v2 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( v1 >= v2 )
    return v1 + *((unsigned __int16 *)AcpiInformation + 43) - v2;
  else
    return v1;
}
