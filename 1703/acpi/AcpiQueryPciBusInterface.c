/*
 * XREFs of AcpiQueryPciBusInterface @ 0x1C008C15C
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0007DFC (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C008DE08 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall AcpiQueryPciBusInterface(ULONG_PTR BugCheckParameter3)
{
  __int64 DeviceExtension; // rbx
  PVOID PoolWithTag; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r14
  int v5; // esi
  __int64 v7; // rcx
  __int32 v8; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C8h]
  GUID *v10; // [rsp+48h] [rbp-C0h]
  __int64 v11; // [rsp+50h] [rbp-B8h]
  PVOID v12; // [rsp+58h] [rbp-B0h]
  __int32 *v13; // [rsp+60h] [rbp-A8h]
  _BYTE v14[256]; // [rsp+88h] [rbp-80h] BYREF

  memset(v14, 0, sizeof(v14));
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( *(_QWORD *)(DeviceExtension + 80) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x46706341u);
  if ( PoolWithTag )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(DeviceExtension + 736));
    if ( AttachedDeviceReference )
    {
      LOWORD(v9) = 2075;
      v10 = &GUID_BUS_INTERFACE_STANDARD;
      LODWORD(v11) = 65600;
      v13 = &v8;
      v12 = PoolWithTag;
      v5 = ACPIInternalSendSynchronousIrp(AttachedDeviceReference);
      ObfDereferenceObject(AttachedDeviceReference);
      if ( v5 >= 0 )
      {
        *(_QWORD *)(DeviceExtension + 80) = PoolWithTag;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(DeviceExtension + 88), 0, 0) & 0x100) == 0 )
        {
          _InterlockedExchange((volatile __int32 *)(DeviceExtension + 100), v8);
          _InterlockedOr((volatile signed __int32 *)(DeviceExtension + 88), 0x100u);
        }
        if ( (*((unsigned int (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, int))PoolWithTag + 7))(
               *((_QWORD *)PoolWithTag + 1),
               0LL,
               v14,
               0LL,
               26) == 26
          && (v14[14] & 0x7F) == 1
          && v14[25] )
        {
          v7 = v14[25] | v8 & 0xFFFF00u;
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(DeviceExtension + 88), 0, 0) & 0x200) == 0 )
          {
            _InterlockedExchange((volatile __int32 *)(DeviceExtension + 104), v7);
            _InterlockedOr((volatile signed __int32 *)(DeviceExtension + 88), 0x200u);
          }
          (*(void (__fastcall **)(__int64))(PmHalDispatchTable + 72))(v7);
        }
        return (unsigned int)v5;
      }
    }
    else
    {
      v5 = -1073741823;
    }
    ExFreePoolWithTag(PoolWithTag, 0x46706341u);
    return (unsigned int)v5;
  }
  return 3221225626LL;
}
