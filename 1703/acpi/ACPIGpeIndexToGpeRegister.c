/*
 * XREFs of ACPIGpeIndexToGpeRegister @ 0x1C002029C
 * Callers:
 *     ACPIVectorDisable @ 0x1C0001CC0 (ACPIVectorDisable.c)
 *     ACPIVectorEnable @ 0x1C0001D80 (ACPIVectorEnable.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C0013820 (ACPIGpeBuildWakeMasks.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C001EF58 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C00200DC (ACPIGpeInstallRemoveIndex.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C0049408 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 *     ACPIVectorClear @ 0x1C0058D60 (ACPIVectorClear.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C00202D8 (ACPIGpeValidIndex.c)
 */

__int64 __fastcall ACPIGpeIndexToGpeRegister(__int64 a1)
{
  ULONG_PTR v1; // r9
  unsigned int v2; // ecx

  if ( !(unsigned __int8)ACPIGpeValidIndex(a1) )
    KeBugCheckEx(0xA5u, 0x17uLL, v1, 0LL, 0LL);
  v2 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( (unsigned int)v1 >= v2 )
    return (((unsigned int)v1 - v2) >> 3) + *((unsigned __int16 *)AcpiInformation + 43);
  else
    return (unsigned int)v1 >> 3;
}
