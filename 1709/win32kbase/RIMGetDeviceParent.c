/*
 * XREFs of RIMGetDeviceParent @ 0x1C000B2A0
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C00087B0 (RIMAllocateHidConfigDesc.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetDeviceObjectPointer @ 0x1C000E444 (RIMGetDeviceObjectPointer.c)
 *     RIMGetPointerDevicePDO @ 0x1C000EC48 (RIMGetPointerDevicePDO.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall RIMGetDeviceParent(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // edx
  void *Data; // rax
  NTSTATUS DevicePropertyData; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  char v11; // r15
  int v13; // edx
  PVOID Object; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  PVOID v16[2]; // [rsp+50h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+80h] [rbp+20h] BYREF
  int v18; // [rsp+84h] [rbp+24h]
  ULONG Type; // [rsp+90h] [rbp+30h] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+98h] [rbp+38h]

  v18 = HIDWORD(a1);
  v3 = 0;
  Object = 0LL;
  v16[0] = 0LL;
  Handle = 0LL;
  Pdo = 0LL;
  RequiredSize = 0;
  v5 = RIMGetDeviceObjectPointer((int)a2 + 208, a2, a3, (unsigned int)&Handle, (__int64)v16, (__int64)&Object);
  if ( v5 < 0 )
  {
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      18,
      51,
      (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
      v5);
    return 0LL;
  }
  else
  {
    ObfReferenceObject(Object);
    if ( (int)RIMGetPointerDevicePDO((PDEVICE_OBJECT)Object) >= 0
      && IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
    {
      Data = (void *)Win32AllocPool(RequiredSize, 1886417746LL);
      *(_QWORD *)(a2 + 328) = Data;
      if ( Data )
      {
        DevicePropertyData = IoGetDevicePropertyData(
                               Pdo,
                               &DEVPKEY_Device_Parent,
                               0,
                               0,
                               RequiredSize,
                               Data,
                               &RequiredSize,
                               &Type);
        v11 = DevicePropertyData;
        if ( DevicePropertyData < 0 )
        {
          Win32FreePool(*(_QWORD *)(a2 + 328), v9, v10);
          *(_QWORD *)(a2 + 328) = 0LL;
          LOBYTE(v13) = 3;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v13,
            18,
            52,
            (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
            v11);
        }
        else
        {
          v3 = 1;
          *(_DWORD *)(a2 + 336) = RequiredSize;
        }
      }
    }
    ObfDereferenceObject(Pdo);
    ZwClose(Handle);
    ObfDereferenceObject(v16[0]);
    ObfDereferenceObject(Object);
    return v3;
  }
}
