/*
 * XREFs of RIMSendLatencyMgtDeviceRequest @ 0x1C000D190
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0018980 (RIMDeviceClassNotify.c)
 *     RIMSendLatencyMgtRequest @ 0x1C00A3920 (RIMSendLatencyMgtRequest.c)
 *     RIMDoOnPowerNotification @ 0x1C00A3B70 (RIMDoOnPowerNotification.c)
 * Callees:
 *     RIMGetDeviceObjectPointer @ 0x1C000E444 (RIMGetDeviceObjectPointer.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C001266C (rimHidP_GetSpecificButtonCaps.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     rimHidP_SetUsages @ 0x1C0107C38 (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMSendLatencyMgtDeviceRequest(int a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  int v6; // edx
  int v7; // r8d
  int v8; // edx
  NTSTATUS Status; // ebx
  __int64 v10; // r12
  size_t v11; // rsi
  int SpecificButtonCaps; // eax
  struct _FILE_OBJECT *v13; // r15
  _BYTE *v15; // rax
  _BYTE *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  PIRP v19; // rax
  struct _DEVICE_OBJECT *v20; // rcx
  __int16 v21[2]; // [rsp+50h] [rbp-89h] BYREF
  __int16 v22; // [rsp+54h] [rbp-85h] BYREF
  PVOID Object; // [rsp+58h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-71h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-69h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-59h] BYREF
  _BYTE v28[80]; // [rsp+A0h] [rbp-39h] BYREF

  v21[0] = 1;
  v4 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    57,
    (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids);
  Status = RIMGetDeviceObjectPointer(a1 + 208, v6, v7, (unsigned int)&Handle, (__int64)&Object, (__int64)&DeviceObject);
  if ( Status >= 0 )
  {
    v10 = *(_QWORD *)(v4 + 16);
    v11 = *(unsigned __int16 *)(v4 + 48);
    SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(2, 13, 0, 96, (__int64)v28, (__int64)v21, v10);
    v13 = (struct _FILE_OBJECT *)Object;
    Status = SpecificButtonCaps;
    if ( SpecificButtonCaps >= 0 )
    {
      v15 = (_BYTE *)Win32AllocPoolNonPaged(v11, 1768321874LL);
      v16 = v15;
      if ( v15 )
      {
        memset(v15, 0, v11);
        *v16 = v28[2];
        if ( a3 )
        {
          v22 = 96;
          LODWORD(Object) = 1;
          Status = rimHidP_SetUsages(2, 13, 0, (unsigned int)&v22, (__int64)&Object, v10, (__int64)v16, v11);
        }
        if ( Status >= 0 )
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v19 = IoBuildDeviceIoControlRequest(0xB0191u, DeviceObject, v16, v11, 0LL, 0, 0, &Event, &IoStatusBlock);
          if ( v19 )
          {
            v20 = DeviceObject;
            v19->Tail.Overlay.CurrentStackLocation[-1].FileObject = v13;
            Status = IofCallDriver(v20, v19);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
          }
          else
          {
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              3,
              18,
              58,
              (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids);
            Status = -1073741668;
          }
        }
        Win32FreePool(v16, v17, v18);
      }
      else
      {
        Status = -1073741670;
      }
    }
    ObfDereferenceObject(v13);
    ZwClose(Handle);
  }
  LOBYTE(v8) = 2;
  WPP_RECORDER_SF_d(
    WPP_GLOBAL_Control->DeviceExtension,
    v8,
    17,
    59,
    (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
    Status);
  return (unsigned int)Status;
}
