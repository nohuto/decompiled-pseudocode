/*
 * XREFs of VRegSetup @ 0x14059F830
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IoCreateDevice @ 0x1404A1F50 (IoCreateDevice.c)
 *     ObSetSecurityObjectByPointer @ 0x1404F5CF0 (ObSetSecurityObjectByPointer.c)
 *     TraceLoggingRegisterEx @ 0x14058919C (TraceLoggingRegisterEx.c)
 *     ObCreateObjectTypeEx @ 0x14059EB6C (ObCreateObjectTypeEx.c)
 *     PspStorageAllocSlot @ 0x14059F4C8 (PspStorageAllocSlot.c)
 *     VrpInitializeLoadedDifferencingHives @ 0x14059F9D0 (VrpInitializeLoadedDifferencingHives.c)
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
  __int128 v10[8]; // [rsp+70h] [rbp-29h] BYREF

  *(_QWORD *)&v7 = 0x2000000020000LL;
  *((_QWORD *)&v7 + 1) = 0xF000000020000LL;
  TraceLoggingRegisterEx(&stru_14033C400, 0LL, 0LL);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\VRegDriver");
  v2 = IoCreateDevice(DriverObject, 0, &DestinationString, 0x22u, 0x100u, 0, &gDeviceObject);
  if ( v2 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v2, 1uLL, 0LL);
  gActiveSilosLock = 0LL;
  gDriverObject = (__int64)DriverObject;
  v3 = ObSetSecurityObjectByPointer((__int64)gDeviceObject, 12, (__int64)&gHardCodedSdBlob);
  if ( v3 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v3, 2uLL, 0LL);
  gDeviceObject->Flags &= ~0x80u;
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)RegistryUnload;
  DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)&RegistryDispatch;
  DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)&RegistryDispatch;
  DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)&IoctlDeviceDispatch;
  RtlInitUnicodeString(&UnicodeString, L"VRegConfigurationContext");
  memset(v10, 0, 0x78uLL);
  BYTE2(v10[0]) |= 4u;
  *((_QWORD *)&v10[4] + 1) = VrpJobContextDelete;
  LOWORD(v10[0]) = 120;
  DWORD2(v10[0]) = 256;
  *(_QWORD *)((char *)&v10[2] + 4) = 0x6000000001LL;
  *(__int128 *)((char *)v10 + 12) = v7;
  HIDWORD(v10[1]) = 983040;
  v4 = ObCreateObjectTypeEx(&UnicodeString, v10, 0LL, 0LL, &VrpJobContextType);
  if ( v4 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v4, 4uLL, 0LL);
  v5 = VrpInitializeLoadedDifferencingHives();
  if ( v5 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v5, 5uLL, 0LL);
  result = PspStorageAllocSlot((ULONG *)&gVregSiloContextSlot);
  if ( (int)result < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, (int)result, 6uLL, 0LL);
  return result;
}
