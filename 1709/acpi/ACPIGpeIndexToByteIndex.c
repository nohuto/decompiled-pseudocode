/*
 * XREFs of ACPIGpeIndexToByteIndex @ 0x1C0010514
 * Callers:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0010234 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C004FF00 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIVectorDisconnect @ 0x1C0059A90 (ACPIVectorDisconnect.c)
 *     ACPIVectorInstall @ 0x1C0059DC8 (ACPIVectorInstall.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C0010588 (ACPIGpeValidIndex.c)
 */

__int64 __fastcall ACPIGpeIndexToByteIndex(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // r9
  unsigned int v4; // ecx

  if ( !(unsigned __int8)ACPIGpeValidIndex(a1, a2, a3, (unsigned int)a1) )
    KeBugCheckEx(0xA5u, 0x17uLL, v3, 1uLL, 0LL);
  v4 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( (unsigned int)v3 >= v4 )
    return (unsigned int)v3 + *((unsigned __int16 *)AcpiInformation + 43) - v4;
  else
    return (unsigned int)v3;
}
