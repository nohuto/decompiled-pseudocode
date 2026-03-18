/*
 * XREFs of ACPIInternalQueryExtendedAddress @ 0x1C0007054
 * Callers:
 *     ACPIMatchHardwareAddress @ 0x1C008DC9C (ACPIMatchHardwareAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C008DE08 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIInternalQueryExtendedAddress(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  int v4; // ebx
  char v6; // [rsp+28h] [rbp-19h] BYREF
  __int16 v7; // [rsp+2Ah] [rbp-17h]
  __int64 v8; // [rsp+30h] [rbp-11h]
  void (__fastcall *v9)(__int64); // [rsp+40h] [rbp-1h]
  void (__fastcall *v10)(__int64, __int64); // [rsp+48h] [rbp+7h]
  _QWORD v11[9]; // [rsp+50h] [rbp+Fh] BYREF

  memset(v11, 0, sizeof(v11));
  v11[4] = 0LL;
  v11[1] = &GUID_PNP_EXTENDED_ADDRESS_INTERFACE;
  LOWORD(v11[0]) = 2075;
  v11[3] = &v6;
  LODWORD(v11[2]) = 65576;
  v4 = ACPIInternalSendSynchronousIrp(DeviceObject);
  if ( v4 >= 0 )
  {
    if ( v10 )
    {
      if ( v7 == 1 )
      {
        v10(v8, a2);
        if ( v9 )
          v9(v8);
      }
    }
  }
  return (unsigned int)v4;
}
