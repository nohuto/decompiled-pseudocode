/*
 * XREFs of ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x1C017AB0C
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAX@Z @ 0x1C01B71A0 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C017A4E0 (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C017AE24 (-DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::CreateVmBusChannel(
        struct VMBCHANNEL__ **this,
        __int64 a2,
        struct DXGPROCESSVMWP *a3)
{
  struct DXGGLOBAL *Global; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  struct _UNICODE_STRING v12; // [rsp+60h] [rbp-39h] BYREF
  _DWORD v13[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 (__fastcall *v14)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-21h]
  void (__fastcall *v15)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-19h]
  void (__fastcall *v16)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-11h]
  void (__fastcall *v17)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-9h]
  void (__fastcall *v18)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-1h]
  struct _GUID v19; // [rsp+A0h] [rbp+7h] BYREF
  struct _GUID v20; // [rsp+B0h] [rbp+17h] BYREF
  __int128 v21; // [rsp+C0h] [rbp+27h] BYREF
  int v22; // [rsp+D0h] [rbp+37h]

  if ( *this )
    DXG_HOST_GLOBAL_VMBUS::DestroyVmBusChannel((DXG_HOST_GLOBAL_VMBUS *)this);
  v22 = *(_DWORD *)L"t";
  v12.Buffer = (wchar_t *)&v21;
  v14 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelOpened;
  v15 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelClosed;
  v16 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelSuspend;
  v21 = *(_OWORD *)L"DXGK_Host";
  v17 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelStarted;
  v18 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelPostStarted;
  *(_DWORD *)&v12.Length = 1310738;
  v13[0] = 1;
  v13[1] = 48;
  v19 = (struct _GUID)DxgkPerVmVmBusChanelInstanceId;
  v20 = (struct _GUID)DxgkPerVmVmBusChannelType;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v7 = CreateServerVmBusChannel(
         a2,
         a3,
         0LL,
         &v20,
         &v19,
         &v12,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v13,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_HOST_GLOBAL_VMBUS::VmBusChannelProcessPacket,
         (void (*)(struct VMBCHANNEL__ *, unsigned int))DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket,
         *((_QWORD *)Global + 158) >> 20,
         this);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdError(v10);
  }
  else
  {
    *((_BYTE *)this + 40) = 1;
    this[8] = a3;
  }
  return (unsigned int)v9;
}
