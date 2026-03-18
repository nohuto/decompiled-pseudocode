/*
 * XREFs of ACPIInternalIsPci @ 0x1C008B9E0
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0007DFC (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetFlags @ 0x1C0002104 (ACPIInternalSetFlags.c)
 *     IsPciDevice @ 0x1C001F814 (IsPciDevice.c)
 *     IsNsobjPciBus @ 0x1C0090500 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIInternalIsPci(ULONG_PTR BugCheckParameter3)
{
  __int64 DeviceExtension; // rsi
  void *v3; // rbx
  __int64 v5; // rax
  int v6; // r9d
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-10h]
  char v9; // [rsp+68h] [rbp+10h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v3 = (void *)(DeviceExtension + 8);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x102000000LL) != 0 )
    return 0LL;
  v5 = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( (unsigned __int8)IsNsobjPciBus(*(_QWORD *)(v5 + 712)) == 1 )
  {
    ACPIInternalSetFlags(v3, 0x2000000uLL);
    return 0LL;
  }
  v8 = -1073741275;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = IsPciDevice(
         *(volatile signed __int32 **)(DeviceExtension + 712),
         (__int64)AmlisuppCompletePassive,
         (__int64)&Event,
         &v9);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v8;
  }
  if ( v6 >= 0 && v9 == 1 )
    ACPIInternalSetFlags(v3, 0x100000000uLL);
  return (unsigned int)v6;
}
