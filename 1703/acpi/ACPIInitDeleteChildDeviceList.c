/*
 * XREFs of ACPIInitDeleteChildDeviceList @ 0x1C004F634
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0045F80 (ACPIBusIrpRemoveDevice.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C004E480 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C004E610 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     ACPIExtListTestElement @ 0x1C00133B8 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C0013970 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C0016AB4 (ACPIExtListStartEnum.c)
 *     ACPIInitResetDeviceExtension @ 0x1C004FC10 (ACPIInitResetDeviceExtension.c)
 */

char __fastcall ACPIInitDeleteChildDeviceList(__int64 a1)
{
  __int64 i; // rax
  __int64 v2; // rbx
  char result; // al
  _QWORD v4[6]; // [rsp+20h] [rbp-48h] BYREF
  int v5; // [rsp+50h] [rbp-18h]

  v4[1] = 0LL;
  v4[0] = a1 + 752;
  v4[5] = 768LL;
  v4[2] = &AcpiDeviceTreeLock;
  v5 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v4); ; i = (__int64)ACPIExtListEnumNext((__int64)v4) )
  {
    v2 = i;
    result = ACPIExtListTestElement((__int64)v4, 1);
    if ( !result )
      break;
    ACPIInitResetDeviceExtension(v2);
  }
  return result;
}
