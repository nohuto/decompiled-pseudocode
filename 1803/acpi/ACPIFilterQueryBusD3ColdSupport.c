/*
 * XREFs of ACPIFilterQueryBusD3ColdSupport @ 0x1C007C884
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0018468 (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C007DA98 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIFilterQueryBusD3ColdSupport(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rbx
  __int64 result; // rax
  _QWORD v3[9]; // [rsp+70h] [rbp+7h] BYREF
  char v4; // [rsp+D8h] [rbp+6Fh] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  memset(v3, 0, sizeof(v3));
  result = ACPIInternalSendSynchronousIrp(*(PDEVICE_OBJECT *)(DeviceExtension + 728));
  if ( (int)result >= 0 )
  {
    if ( v3[7] && ((int (__fastcall *)(_QWORD, char *))v3[7])(v3[1], &v4) >= 0 && v4 )
      *(_QWORD *)(DeviceExtension + 952) |= 0x800uLL;
    result = v3[3];
    if ( v3[3] )
      return ((__int64 (__fastcall *)(_QWORD))v3[3])(v3[1]);
  }
  return result;
}
