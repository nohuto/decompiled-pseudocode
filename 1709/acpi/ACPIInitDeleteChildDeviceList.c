/*
 * XREFs of ACPIInitDeleteChildDeviceList @ 0x1C000123C
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C0001010 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C00455E0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C004E100 (ACPIFilterFastIoDetachCallback.c)
 * Callees:
 *     ACPIExtListTestElement @ 0x1C001083C (ACPIExtListTestElement.c)
 *     ACPIExtListStartEnum @ 0x1C00108A0 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C001E750 (ACPIExtListEnumNext.c)
 *     ACPIInitResetDeviceExtension @ 0x1C004F564 (ACPIInitResetDeviceExtension.c)
 */

__int64 __fastcall ACPIInitDeleteChildDeviceList(__int64 a1)
{
  __int64 i; // rax
  __int64 v2; // rdx
  ULONG_PTR v3; // rbx
  __int64 result; // rax
  _QWORD v5[6]; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+50h] [rbp-18h]

  v5[1] = 0LL;
  v5[0] = a1 + 752;
  v5[5] = 768LL;
  v5[2] = &AcpiDeviceTreeLock;
  v6 = 1;
  for ( i = ACPIExtListStartEnum(v5); ; i = ACPIExtListEnumNext(v5) )
  {
    LOBYTE(v2) = 1;
    v3 = i;
    result = ACPIExtListTestElement(v5, v2);
    if ( !(_BYTE)result )
      break;
    ACPIInitResetDeviceExtension(v3);
  }
  return result;
}
