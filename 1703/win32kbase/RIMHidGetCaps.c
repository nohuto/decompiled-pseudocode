/*
 * XREFs of RIMHidGetCaps @ 0x1C00544D4
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0054FD4 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMHidGetCaps(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // rax
  int v9; // edx
  __int64 v10; // rdi
  PIRP v11; // rax
  IRP *v12; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG_PTR v14; // rax
  int v15; // edx
  NTSTATUS Status; // ebx
  GUID *v18; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  v8 = (_DWORD *)Win32AllocPoolNonPaged(40LL, 1886417746LL);
  v10 = (__int64)v8;
  if ( v8 )
  {
    *v8 = 65576;
    if ( !*(_QWORD *)(a1 + 544) )
    {
      v18 = (GUID *)Win32AllocPoolNonPaged(16LL, 1886417746LL);
      *(_QWORD *)(a1 + 544) = v18;
      if ( !v18 )
        goto LABEL_13;
      *v18 = GUID_HID_INTERFACE_HIDPARSE;
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
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = v10;
      Status = IofCallDriver(a2, v12);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        LOBYTE(v15) = 3;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          18,
          34,
          (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
          (char)a2);
      }
      else
      {
        Status = (*(__int64 (__fastcall **)(__int64, __int64))(v10 + 32))(a3, a4);
      }
      goto LABEL_8;
    }
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      3,
      18,
      33,
      (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids);
LABEL_13:
    Status = -1073741670;
LABEL_8:
    Win32FreePool(v10);
    return (unsigned int)Status;
  }
  LOBYTE(v9) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v9,
    18,
    32,
    (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids);
  return 3221225626LL;
}
