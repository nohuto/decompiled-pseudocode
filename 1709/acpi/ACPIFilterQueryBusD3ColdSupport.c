/*
 * XREFs of ACPIFilterQueryBusD3ColdSupport @ 0x1C0095ACC
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0010900 (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C008C110 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIFilterQueryBusD3ColdSupport(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rbx
  struct _DEVICE_OBJECT *v2; // rcx
  __int64 result; // rax
  __int16 v4; // [rsp+20h] [rbp-49h] BYREF
  GUID *v5; // [rsp+28h] [rbp-41h]
  int v6; // [rsp+30h] [rbp-39h]
  _QWORD *v7; // [rsp+38h] [rbp-31h]
  __int64 v8; // [rsp+40h] [rbp-29h]
  _QWORD v9[10]; // [rsp+70h] [rbp+7h] BYREF
  char v10; // [rsp+D8h] [rbp+6Fh] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  memset(v9, 0, 0x48uLL);
  v2 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 728);
  v8 = 0LL;
  v5 = &GUID_D3COLD_SUPPORT_INTERFACE;
  v4 = 2075;
  v7 = v9;
  v6 = 65608;
  result = ACPIInternalSendSynchronousIrp(v2, (__int64)&v4, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v9[7] && ((int (__fastcall *)(_QWORD, char *))v9[7])(v9[1], &v10) >= 0 && v10 )
      *(_QWORD *)(DeviceExtension + 952) |= 0x800uLL;
    result = v9[3];
    if ( v9[3] )
      return ((__int64 (__fastcall *)(_QWORD))v9[3])(v9[1]);
  }
  return result;
}
