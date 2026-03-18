/*
 * XREFs of RIMSetDeviceIdleTimeout @ 0x1C008DA68
 * Callers:
 *     RIMCreateDev @ 0x1C005428C (RIMCreateDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0055740 (RIMGetDeviceObjectPointer.c)
 */

__int64 __fastcall RIMSetDeviceIdleTimeout(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  int Status; // ebx
  _DWORD *v4; // rax
  int v5; // edx
  struct _FILE_OBJECT *v6; // rbp
  void *v7; // rsi
  PIRP v8; // rax
  struct _DEVICE_OBJECT *v9; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+8h] BYREF
  PVOID v14; // [rsp+B0h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+20h] BYREF

  Status = RIMGetDeviceObjectPointer(a1 + 13, a2, a3, &Handle, &v14, (PDEVICE_OBJECT *)&Object);
  if ( Status >= 0 )
  {
    ObfReferenceObject(Object);
    v4 = (_DWORD *)Win32AllocPoolNonPaged(4LL, 0x70707352u);
    v6 = (struct _FILE_OBJECT *)v14;
    v7 = v4;
    if ( v4 )
    {
      *v4 = 30000;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v8 = IoBuildDeviceIoControlRequest(0xB01B0u, (PDEVICE_OBJECT)Object, v7, 4u, 0LL, 0, 0, &Event, &IoStatusBlock);
      if ( v8 )
      {
        v9 = (struct _DEVICE_OBJECT *)Object;
        v8->Tail.Overlay.CurrentStackLocation[-1].FileObject = v6;
        Status = IofCallDriver(v9, v8);
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
          63,
          (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids);
        Status = -1073741668;
      }
      Win32FreePool((__int64)v7);
    }
    if ( Status < 0 )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        18,
        64,
        (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids);
    }
    ObfDereferenceObject(v6);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
  }
  return (unsigned int)Status;
}
