/*
 * XREFs of ACPIInitDeleteChildDeviceList @ 0x1C00282F4
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C00144B0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C00245D0 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0024910 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x1C0023590 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C002367C (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C00236D0 (ACPIExtListTestElement.c)
 *     ACPIInitResetDeviceExtension @ 0x1C0028D74 (ACPIInitResetDeviceExtension.c)
 */

char __fastcall ACPIInitDeleteChildDeviceList(__int64 a1)
{
  char *i; // rax
  ULONG_PTR v2; // rbx
  char result; // al
  _QWORD v4[6]; // [rsp+20h] [rbp-48h] BYREF
  int v5; // [rsp+50h] [rbp-18h]

  v4[1] = 0LL;
  v4[0] = a1 + 752;
  v4[5] = 768LL;
  v4[2] = &AcpiDeviceTreeLock;
  v5 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v4); ; i = ACPIExtListEnumNext((__int64)v4) )
  {
    v2 = (ULONG_PTR)i;
    result = ACPIExtListTestElement((__int64)v4, 1);
    if ( !result )
      break;
    ACPIInitResetDeviceExtension(v2);
  }
  return result;
}
