/*
 * XREFs of ACPIGpeIndexToGpeRegister @ 0x1C0027AF4
 * Callers:
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C001B754 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C00276F8 (ACPIGpeBuildWakeMasks.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C0027B54 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIVectorClear @ 0x1C003F810 (ACPIVectorClear.c)
 *     ACPIVectorDisable @ 0x1C003FA20 (ACPIVectorDisable.c)
 *     ACPIVectorEnable @ 0x1C003FC10 (ACPIVectorEnable.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C00417F8 (ACPIWakeRemoveDevicesAndUpdate.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C0027DE4 (ACPIGpeValidIndex.c)
 */

__int64 __fastcall ACPIGpeIndexToGpeRegister(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // ecx

  if ( !(unsigned __int8)ACPIGpeValidIndex(a1) )
    KeBugCheckEx(0xA5u, 0x17uLL, v1, 0LL, 0LL);
  v2 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( v1 >= v2 )
    return ((v1 - v2) >> 3) + *((unsigned __int16 *)AcpiInformation + 43);
  else
    return v1 >> 3;
}
