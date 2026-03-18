/*
 * XREFs of ACPIInternalSetProximityDomain @ 0x1C007DC08
 * Callers:
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0077CF0 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C007BFE0 (ACPIFilterIrpQueryResourceRequirements.c)
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     AMLIIsNamedChildPresent @ 0x1C0043DAC (AMLIIsNamedChildPresent.c)
 */

NTSTATUS __fastcall ACPIInternalSetProximityDomain(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 Data; // [rsp+60h] [rbp+8h] BYREF

  if ( !AMLIIsNamedChildPresent(*(_QWORD **)(a1 + 712), 1297633375) )
    return -1073741772;
  Data = 0LL;
  result = ACPIGet(a1, 0x4D58505Fu, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&Data, 0LL);
  if ( result >= 0 )
    return IoSetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 736),
             &DEVPKEY_Device_Numa_Proximity_Domain,
             0,
             0,
             7u,
             4u,
             &Data);
  return result;
}
