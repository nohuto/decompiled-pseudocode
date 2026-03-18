/*
 * XREFs of RIMHidGetCaps @ 0x1C000E2DC
 * Callers:
 *     RIMCreateHidDesc @ 0x1C000DB5C (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMHidGetCaps(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // rax
  int v9; // edx
  __int64 (__fastcall **v10)(__int64, __int64); // rdi
  PIRP v11; // rax
  IRP *v12; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG_PTR v14; // rax
  NTSTATUS Status; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  GUID *v19; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  v8 = (_DWORD *)Win32AllocPoolNonPaged(40LL, 1886417746LL);
  v10 = (__int64 (__fastcall **)(__int64, __int64))v8;
  if ( v8 )
  {
    *v8 = 65576;
    if ( !*(_QWORD *)(a1 + 544) )
    {
      v19 = (GUID *)Win32AllocPoolNonPaged(16LL, 1886417746LL);
      *(_QWORD *)(a1 + 544) = v19;
      if ( !v19 )
        goto LABEL_13;
      *v19 = GUID_HID_INTERFACE_HIDPARSE;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11 = IoBuildSynchronousFsdRequest(0x1Bu, a2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v12 = v11;
    if ( v11 )
    {
      CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
      v11->RequestorMode = 0;
      v11->IoStatus.Status = -1073741637;
      CurrentStackLocation[-1].MinorFunction = 8;
      v14 = *(_QWORD *)(a1 + 544);
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = v14;
      CurrentStackLocation[-1].Parameters.Create.Options = 65576;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v10;
      Status = IofCallDriver(a2, v12);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x12u,
          0x22u,
          (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
          a2);
      else
        Status = v10[4](a3, a4);
      goto LABEL_8;
    }
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      3,
      18,
      33,
      (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids);
LABEL_13:
    Status = -1073741670;
LABEL_8:
    Win32FreePool(v10, v16, v17);
    return (unsigned int)Status;
  }
  LOBYTE(v9) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v9,
    18,
    32,
    (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids);
  return 3221225626LL;
}
