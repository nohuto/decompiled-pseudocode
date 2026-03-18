/*
 * XREFs of UsbhSyncSendCommandToDevice @ 0x1C0006AC0
 * Callers:
 *     UsbhDisableDeviceForWake @ 0x1C0006A14 (UsbhDisableDeviceForWake.c)
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C003F398 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x1C003FA04 (UsbhGetMsOsFeatureDescriptor.c)
 *     UsbhSendMsOs20AltEnumCommand @ 0x1C003FEA4 (UsbhSendMsOs20AltEnumCommand.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C0047BC0 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhEnableDeviceForWake @ 0x1C00552FC (UsbhEnableDeviceForWake.c)
 *     UsbhGetBosDescriptor @ 0x1C00553A8 (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x1C0055518 (UsbhGetDeviceDescriptor.c)
 *     UsbhGetQualifierDescriptorFromDevice @ 0x1C00555F8 (UsbhGetQualifierDescriptorFromDevice.c)
 *     UsbhGetStringFromDevice @ 0x1C0055678 (UsbhGetStringFromDevice.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0017678 (UsbhDerefPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0024E70 (UsbhRefPdoDeviceHandle.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0025AA4 (UsbhFdoCheckUpstreamConnectionState.c)
 *     memset @ 0x1C00289C0 (memset.c)
 */

__int64 UsbhSyncSendCommandToDevice(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, _WORD *a5, ...)
{
  int *v5; // rdi
  __int64 v8; // rsi
  __int64 v9; // r13
  unsigned int Status; // ebx
  int *PoolWithTag; // rax
  __int64 v12; // rax
  struct _DEVICE_OBJECT *v13; // rbx
  PIRP v14; // rdx
  int v15; // eax
  bool v16; // zf
  NTSTATUS v17; // eax
  __int64 v18; // r10
  int v19; // r9d
  int v20; // r10d
  __int64 v22; // [rsp+50h] [rbp-30h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-18h] BYREF
  __int64 v27; // [rsp+E8h] [rbp+68h] BYREF
  va_list va; // [rsp+E8h] [rbp+68h]
  int *v29; // [rsp+F0h] [rbp+70h]
  va_list va1; // [rsp+F8h] [rbp+78h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v27 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, int *);
  v5 = 0LL;
  LODWORD(v27) = 0;
  memset(&Event, 0, sizeof(Event));
  v8 = 0LL;
  v9 = FdoExt(a1);
  v22 = PdoExt(a2);
  Status = UsbhFdoCheckUpstreamConnectionState(a1, (__int64 *)va);
  if ( (Status & 0xC0000000) == 0xC0000000 )
    goto LABEL_20;
  if ( !a5 )
  {
    Status = -1073741811;
    goto LABEL_20;
  }
  PoolWithTag = (int *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x88uLL, 0x42554855u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_23:
    v20 = -1073737728;
    Status = -1073741670;
    goto LABEL_12;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  v12 = UsbhRefPdoDeviceHandle(a1, a2, v5, 1145983859LL);
  v13 = *(struct _DEVICE_OBJECT **)(v9 + 1216);
  v8 = v12;
  if ( !v12 || !v13 )
  {
    Status = -1073741810;
LABEL_20:
    v20 = -1073713152;
    goto LABEL_12;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v14 = IoBuildDeviceIoControlRequest(0x220003u, v13, 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( !v14 )
    goto LABEL_23;
  *((_QWORD *)v5 + 1) = *(_QWORD *)(v22 + 1152);
  v5[8] = 10;
  v15 = v5[8];
  *v5 = 3276936;
  v16 = *a3 >= 0;
  v5[14] = 2000;
  if ( !v16 )
    v15 = 11;
  *((_QWORD *)v5 + 6) = 0LL;
  v5[8] = v15;
  v5[9] = (unsigned __int16)*a5;
  *((_QWORD *)v5 + 5) = a4;
  *((_QWORD *)v5 + 16) = *(_QWORD *)a3;
  v14->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v5;
  v17 = IofCallDriver(v13, v14);
  Status = v17;
  if ( v17 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  else
  {
    IoStatusBlock.Status = v17;
  }
  v18 = v5[1];
  v19 = *((unsigned __int16 *)v5 + 18);
  *a5 = v19;
  Log(a1, 256, 1396925558, v19, v18);
LABEL_12:
  if ( v29 )
    *v29 = v20;
  if ( v8 )
    UsbhDerefPdoDeviceHandle(a1, v8, v5, 1145983859LL);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return Status;
}
