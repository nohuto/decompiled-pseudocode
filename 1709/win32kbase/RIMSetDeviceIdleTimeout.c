/*
 * XREFs of RIMSetDeviceIdleTimeout @ 0x1C000AF0C
 * Callers:
 *     RIMCreateDev @ 0x1C000D350 (RIMCreateDev.c)
 * Callees:
 *     RIMGetDeviceObjectPointer @ 0x1C000E444 (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall RIMSetDeviceIdleTimeout(int a1, int a2, int a3)
{
  NTSTATUS Status; // ebx
  _DWORD *v4; // rax
  int v5; // edx
  struct _FILE_OBJECT *v6; // rbp
  void *v7; // rsi
  PIRP v8; // rax
  struct _DEVICE_OBJECT *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+8h] BYREF
  PVOID v16; // [rsp+B0h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+20h] BYREF

  Status = RIMGetDeviceObjectPointer(a1 + 208, a2, a3, (unsigned int)&Handle, (__int64)&v16, (__int64)&Object);
  if ( Status >= 0 )
  {
    ObfReferenceObject(Object);
    v4 = (_DWORD *)Win32AllocPoolNonPaged(4LL, 1886417746LL);
    v6 = (struct _FILE_OBJECT *)v16;
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
          62,
          (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids);
        Status = -1073741668;
      }
      Win32FreePool(v7, v10, v11);
    }
    if ( Status < 0 )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        18,
        63,
        (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids);
    }
    ObfDereferenceObject(v6);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
  }
  return (unsigned int)Status;
}
