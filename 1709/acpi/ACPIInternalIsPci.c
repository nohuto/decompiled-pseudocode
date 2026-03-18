/*
 * XREFs of ACPIInternalIsPci @ 0x1C0096F54
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0010900 (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0001AD8 (ACPIInternalSetFlags.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     IsPciDevice @ 0x1C000F3DC (IsPciDevice.c)
 *     IsNsobjPciBus @ 0x1C008CD04 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIInternalIsPci(ULONG_PTR BugCheckParameter3)
{
  __int64 DeviceExtension; // rsi
  void *v3; // rbx
  __int64 v4; // rax
  int v5; // r9d
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-10h]
  char v9; // [rsp+68h] [rbp+10h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v3 = (void *)(DeviceExtension + 8);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x102000000LL) != 0 )
    return 0LL;
  v4 = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( IsNsobjPciBus(*(volatile signed __int32 **)(v4 + 712)) == 1 )
  {
    ACPIInternalSetFlags(v3, 0x2000000uLL);
    return 0LL;
  }
  v8 = -1073741275;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v5 = IsPciDevice(
         *(volatile signed __int32 **)(DeviceExtension + 712),
         (__int64)AmlisuppCompletePassive,
         (__int64)&Event,
         &v9);
  if ( v5 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v5 = v8;
  }
  if ( v5 >= 0 && v9 == 1 )
    ACPIInternalSetFlags(v3, 0x100000000uLL);
  return (unsigned int)v5;
}
