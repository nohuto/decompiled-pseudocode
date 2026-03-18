/*
 * XREFs of ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C0026FC0
 * Callers:
 *     ?SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C002AD2C (-SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C0026380 (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C002A150 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel(
        struct VMBCHANNEL__ **this,
        __int64 a2,
        struct DXGK_VIRTUAL_GPU *a3)
{
  __int64 v6; // rax
  struct _DEVICE_OBJECT *v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  struct _GUID v14; // [rsp+50h] [rbp-49h] BYREF
  struct _UNICODE_STRING v15; // [rsp+60h] [rbp-39h] BYREF
  _DWORD v16[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 (__fastcall *v17)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-21h]
  void (__fastcall *v18)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-19h]
  void (__fastcall *v19)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-11h]
  void (__fastcall *v20)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-9h]
  void (__fastcall *v21)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-1h]
  struct _GUID v22; // [rsp+A0h] [rbp+7h] BYREF
  _OWORD v23[2]; // [rsp+B0h] [rbp+17h] BYREF

  if ( *this )
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXG_GUEST_VIRTUALGPU_VMBUS *)this);
  v15.Buffer = (wchar_t *)v23;
  *(_DWORD *)&v15.Length = 2097182;
  *(_QWORD *)v14.Data4 = 0LL;
  *(_QWORD *)&v14.Data1 = *(_QWORD *)((char *)a3 + 20);
  v17 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelOpened;
  v18 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v19 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v20 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v21 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v6 = *((_QWORD *)a3 + 1);
  v23[0] = *(_OWORD *)L"DXGK_VirtualGpu";
  v16[0] = 1;
  v23[1] = *(_OWORD *)L"tualGpu";
  v16[1] = 48;
  v7 = *(struct _DEVICE_OBJECT **)(v6 + 192);
  v22 = (struct _GUID)DxgkPerVirtualGpuVmBusChannelType;
  v8 = CreateServerVmBusChannel(
         a2,
         a3,
         v7,
         &v22,
         &v14,
         &v15,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v16,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket,
         (void (*)(struct VMBCHANNEL__ *, unsigned int))DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend,
         this);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  else
  {
    *((_BYTE *)this + 8) = 1;
  }
  return (unsigned int)v11;
}
