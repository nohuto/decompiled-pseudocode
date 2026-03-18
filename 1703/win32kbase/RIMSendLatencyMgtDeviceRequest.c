/*
 * XREFs of RIMSendLatencyMgtDeviceRequest @ 0x1C00582E8
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C0054C24 (RIMAllocateHidDesc.c)
 *     RIMSendLatencyMgtRequest @ 0x1C009A9C0 (RIMSendLatencyMgtRequest.c)
 *     RIMDoOnPowerNotification @ 0x1C009AC10 (RIMDoOnPowerNotification.c)
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0009EC4 (rimHidP_GetSpecificButtonCaps.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0055740 (RIMGetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     rimHidP_SetUsages @ 0x1C0106F4C (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMSendLatencyMgtDeviceRequest(struct _UNICODE_STRING *a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  int Status; // ebx
  struct _HIDP_PREPARSED_DATA *v9; // r12
  size_t v10; // rsi
  int SpecificButtonCaps; // eax
  struct _FILE_OBJECT *v12; // r15
  UCHAR *v14; // rax
  UCHAR *v15; // rdi
  PIRP v16; // rax
  struct _DEVICE_OBJECT *v17; // rcx
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-B1h]
  unsigned __int16 v19[2]; // [rsp+50h] [rbp-89h] BYREF
  __int16 v20; // [rsp+54h] [rbp-85h] BYREF
  PVOID Object; // [rsp+58h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-71h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-69h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-59h] BYREF
  struct _HIDP_BUTTON_CAPS v26; // [rsp+A0h] [rbp-39h] BYREF

  v19[0] = 1;
  v4 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    58,
    (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids);
  Status = RIMGetDeviceObjectPointer(a1 + 13, v6, v7, &Handle, &Object, &DeviceObject);
  if ( Status >= 0 )
  {
    v9 = *(struct _HIDP_PREPARSED_DATA **)(v4 + 16);
    v10 = *(unsigned __int16 *)(v4 + 48);
    SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(HidP_Feature, 0xDu, 0, 0x60u, &v26, v19, v9);
    v12 = (struct _FILE_OBJECT *)Object;
    Status = SpecificButtonCaps;
    if ( SpecificButtonCaps >= 0 )
    {
      v14 = (UCHAR *)Win32AllocPoolNonPaged(v10, 0x69667352u);
      v15 = v14;
      if ( v14 )
      {
        memset(v14, 0, v10);
        *v15 = v26.ReportID;
        if ( a3 )
        {
          v20 = 96;
          LODWORD(Object) = 1;
          Status = rimHidP_SetUsages(2, 13, 0, (unsigned int)&v20, (__int64)&Object, (__int64)v9, (__int64)v15, v10);
        }
        if ( Status >= 0 )
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v16 = IoBuildDeviceIoControlRequest(0xB0191u, DeviceObject, v15, v10, 0LL, 0, 0, &Event, &IoStatusBlock);
          if ( v16 )
          {
            v17 = DeviceObject;
            v16->Tail.Overlay.CurrentStackLocation[-1].FileObject = v12;
            Status = IofCallDriver(v17, v16);
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
              59,
              (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids);
            Status = -1073741668;
          }
        }
        Win32FreePool((__int64)v15);
      }
      else
      {
        Status = -1073741670;
      }
    }
    ObfDereferenceObject(v12);
    ZwClose(Handle);
  }
  OutputBufferLength[0] = Status;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x3Cu,
    (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
    *(_QWORD *)OutputBufferLength);
  return (unsigned int)Status;
}
