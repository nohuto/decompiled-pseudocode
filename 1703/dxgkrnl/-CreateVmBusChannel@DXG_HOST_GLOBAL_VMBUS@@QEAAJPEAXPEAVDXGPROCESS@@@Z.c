/*
 * XREFs of ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESS@@@Z @ 0x1C0026E74
 * Callers:
 *     ?SetVmwpProcess@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C01A22EC (-SetVmwpProcess@DXGPROCESS@@QEAAJPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C0026380 (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C002A150 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::CreateVmBusChannel(
        struct VMBCHANNEL__ **this,
        __int64 a2,
        struct DXGPROCESS *a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  struct _UNICODE_STRING v12; // [rsp+50h] [rbp-39h] BYREF
  _DWORD v13[2]; // [rsp+60h] [rbp-29h] BYREF
  __int64 (__fastcall *v14)(struct VMBCHANNEL__ *); // [rsp+68h] [rbp-21h]
  void (__fastcall *v15)(struct VMBCHANNEL__ *); // [rsp+70h] [rbp-19h]
  void (__fastcall *v16)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-11h]
  void (__fastcall *v17)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-9h]
  void (__fastcall *v18)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-1h]
  struct _GUID v19; // [rsp+90h] [rbp+7h] BYREF
  struct _GUID v20; // [rsp+A0h] [rbp+17h] BYREF
  __int128 v21; // [rsp+B0h] [rbp+27h] BYREF
  int v22; // [rsp+C0h] [rbp+37h]

  if ( *this )
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXG_GUEST_VIRTUALGPU_VMBUS *)this);
  v22 = *(_DWORD *)L"t";
  v12.Buffer = (wchar_t *)&v21;
  v14 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelOpened;
  *(_DWORD *)&v12.Length = 1310738;
  v15 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelClosed;
  v13[0] = 1;
  v16 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v17 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v18 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v21 = *(_OWORD *)L"DXGK_Host";
  v13[1] = 48;
  v20 = (struct _GUID)DxgkPerVmVmBusChannelType;
  v19 = (struct _GUID)DxgkPerVmVmBusChanelInstanceId;
  v6 = CreateServerVmBusChannel(
         a2,
         a3,
         0LL,
         &v20,
         &v19,
         &v12,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v13,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_HOST_GLOBAL_VMBUS::VmBusChannelProcessPacket,
         (void (*)(struct VMBCHANNEL__ *, unsigned int))DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend,
         this);
  v9 = v6;
  if ( v6 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdError(v10);
  }
  else
  {
    *((_BYTE *)this + 8) = 1;
    this[2] = a3;
  }
  return (unsigned int)v9;
}
