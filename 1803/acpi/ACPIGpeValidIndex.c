/*
 * XREFs of ACPIGpeValidIndex @ 0x1C0027DE4
 * Callers:
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000DC90 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C0027A9C (ACPIGpeIndexToByteIndex.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0027AF4 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C0027B54 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIVectorConnect @ 0x1C003F860 (ACPIVectorConnect.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIGpeValidIndex(unsigned int a1)
{
  bool result; // al
  unsigned int v2; // r8d

  result = 1;
  if ( a1 >= 8 * (unsigned int)*((unsigned __int16 *)AcpiInformation + 43) )
  {
    v2 = *((unsigned __int16 *)AcpiInformation + 50);
    if ( a1 < v2 || a1 >= v2 + 8 * *((unsigned __int16 *)AcpiInformation + 49) )
      return 0;
  }
  return result;
}
