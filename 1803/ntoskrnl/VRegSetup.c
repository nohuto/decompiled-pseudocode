/*
 * XREFs of VRegSetup @ 0x140621500
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpQueryRegistryValues @ 0x140502B1C (RtlpQueryRegistryValues.c)
 *     IoCreateDevice @ 0x140541590 (IoCreateDevice.c)
 *     ObSetSecurityObjectByPointer @ 0x14055CCB0 (ObSetSecurityObjectByPointer.c)
 *     TraceLoggingRegisterEx @ 0x140613338 (TraceLoggingRegisterEx.c)
 *     VrpInitializeLoadedDifferencingHives @ 0x1406211BC (VrpInitializeLoadedDifferencingHives.c)
 *     PspStorageAllocSlot @ 0x1406217F8 (PspStorageAllocSlot.c)
 *     ObCreateObjectTypeEx @ 0x14062189C (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall VRegSetup(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 result; // rax
  __int128 v7; // [rsp+40h] [rbp-59h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v10[15]; // [rsp+70h] [rbp-29h] BYREF

  *(_QWORD *)&v7 = 0x2000000020000LL;
  *((_QWORD *)&v7 + 1) = 0xF000000020000LL;
  TraceLoggingRegisterEx(&stru_1403970D0, 0LL, 0LL);
  RtlpQueryRegistryValues(
    2147483650LL,
    L"Session Manager\\Configuration Manager",
    (__int64)&VrpRegistryValuesTable,
    0LL);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\VRegDriver");
  v2 = IoCreateDevice(DriverObject, 0, &DestinationString, 0x22u, 0x100u, 0, &VrpDeviceObject);
  if ( v2 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v2, 1uLL, 0LL);
  VrpActiveSilosLock = 0LL;
  VrpDriverObject = (__int64)DriverObject;
  v3 = ObSetSecurityObjectByPointer((__int64)VrpDeviceObject, 12, (__int64)&VrpHardCodedSdBlob);
  if ( v3 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v3, 2uLL, 0LL);
  VrpDeviceObject->Flags &= ~0x80u;
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)VrpRegistryUnload;
  DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)&VrpRegistryDispatch;
  DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)&VrpRegistryDispatch;
  DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)&VrpIoctlDeviceDispatch;
  RtlInitUnicodeString(&UnicodeString, L"VRegConfigurationContext");
  memset(v10, 0, sizeof(v10));
  BYTE2(v10[0]) |= 4u;
  v10[9] = VrpJobContextDelete;
  LOWORD(v10[0]) = 120;
  LODWORD(v10[1]) = 256;
  HIDWORD(v10[4]) = 1;
  *(_OWORD *)((char *)&v10[1] + 4) = v7;
  LODWORD(v10[5]) = 96;
  HIDWORD(v10[3]) = 983040;
  v4 = ObCreateObjectTypeEx(&UnicodeString, (__int64)&VrpJobContextType);
  if ( v4 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v4, 4uLL, 0LL);
  v5 = VrpInitializeLoadedDifferencingHives();
  if ( v5 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v5, 5uLL, 0LL);
  result = PspStorageAllocSlot(&VrpSiloContextSlot);
  if ( (int)result < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, (int)result, 6uLL, 0LL);
  return result;
}
