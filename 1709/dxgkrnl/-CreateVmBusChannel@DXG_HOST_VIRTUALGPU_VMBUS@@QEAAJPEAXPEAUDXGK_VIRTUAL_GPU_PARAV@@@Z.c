/*
 * XREFs of ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C018F978
 * Callers:
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C018E510 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C018F628 (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?DestroyVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C018FB94 (-DestroyVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel(
        struct VMBCHANNEL__ **this,
        __int64 a2,
        struct DXGK_VIRTUAL_GPU_PARAV *a3)
{
  __int64 v6; // rax
  struct _DEVICE_OBJECT *v7; // r8
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  struct _GUID v13; // [rsp+50h] [rbp-49h] BYREF
  struct _UNICODE_STRING v14; // [rsp+60h] [rbp-39h] BYREF
  _DWORD v15[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 (__fastcall *v16)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-21h]
  void (__fastcall *v17)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-19h]
  void (__fastcall *v18)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-11h]
  void (__fastcall *v19)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-9h]
  void (__fastcall *v20)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-1h]
  struct _GUID v21; // [rsp+A0h] [rbp+7h] BYREF
  _OWORD v22[2]; // [rsp+B0h] [rbp+17h] BYREF

  if ( *this )
    DXG_HOST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXG_HOST_VIRTUALGPU_VMBUS *)this);
  v14.Buffer = (wchar_t *)v22;
  *(_DWORD *)&v14.Length = 2097182;
  *(_QWORD *)v13.Data4 = 0LL;
  *(_QWORD *)&v13.Data1 = *(_QWORD *)((char *)a3 + 28);
  v16 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelOpened;
  v17 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelClosed;
  v18 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v19 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelStarted;
  v20 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelPostStarted;
  v6 = *((_QWORD *)a3 + 2);
  v22[0] = *(_OWORD *)L"DXGK_VirtualGpu";
  v15[0] = 1;
  v22[1] = *(_OWORD *)L"tualGpu";
  v15[1] = 48;
  v7 = *(struct _DEVICE_OBJECT **)(v6 + 192);
  v21 = (struct _GUID)DxgkPerVirtualGpuVmBusChannelType;
  v8 = CreateServerVmBusChannel(
         a2,
         a3,
         v7,
         &v21,
         &v13,
         &v14,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v15,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket,
         (void (*)(struct VMBCHANNEL__ *, unsigned int))DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessingComplete,
         this);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdError(v11);
  }
  else
  {
    *((_BYTE *)this + 8) = 1;
  }
  return (unsigned int)v10;
}
