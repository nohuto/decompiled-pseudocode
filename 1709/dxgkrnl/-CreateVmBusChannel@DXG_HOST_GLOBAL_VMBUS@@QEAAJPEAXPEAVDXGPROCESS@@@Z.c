/*
 * XREFs of ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESS@@@Z @ 0x1C018F82C
 * Callers:
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C018E510 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C018F628 (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C018FB28 (-DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::CreateVmBusChannel(
        struct VMBCHANNEL__ **this,
        __int64 a2,
        struct DXGPROCESS *a3)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  struct _UNICODE_STRING v11; // [rsp+50h] [rbp-39h] BYREF
  _DWORD v12[2]; // [rsp+60h] [rbp-29h] BYREF
  __int64 (__fastcall *v13)(struct VMBCHANNEL__ *); // [rsp+68h] [rbp-21h]
  void (__fastcall *v14)(struct VMBCHANNEL__ *); // [rsp+70h] [rbp-19h]
  void (__fastcall *v15)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-11h]
  void (__fastcall *v16)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-9h]
  void (__fastcall *v17)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-1h]
  struct _GUID v18; // [rsp+90h] [rbp+7h] BYREF
  struct _GUID v19; // [rsp+A0h] [rbp+17h] BYREF
  __int128 v20; // [rsp+B0h] [rbp+27h] BYREF
  int v21; // [rsp+C0h] [rbp+37h]

  if ( *this )
    DXG_HOST_GLOBAL_VMBUS::DestroyVmBusChannel((DXG_HOST_GLOBAL_VMBUS *)this);
  v21 = *(_DWORD *)L"t";
  v11.Buffer = (wchar_t *)&v20;
  v13 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelOpened;
  *(_DWORD *)&v11.Length = 1310738;
  v14 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelClosed;
  v12[0] = 1;
  v15 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelSuspend;
  v16 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelStarted;
  v17 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelPostStarted;
  v20 = *(_OWORD *)L"DXGK_Host";
  v12[1] = 48;
  v19 = (struct _GUID)DxgkPerVmVmBusChannelType;
  v18 = (struct _GUID)DxgkPerVmVmBusChanelInstanceId;
  v6 = CreateServerVmBusChannel(
         a2,
         a3,
         0LL,
         &v19,
         &v18,
         &v11,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v12,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_HOST_GLOBAL_VMBUS::VmBusChannelProcessPacket,
         (void (*)(struct VMBCHANNEL__ *, unsigned int))DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessingComplete,
         this);
  v8 = v6;
  if ( v6 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
  }
  else
  {
    *((_BYTE *)this + 8) = 1;
    this[2] = a3;
  }
  return (unsigned int)v8;
}
