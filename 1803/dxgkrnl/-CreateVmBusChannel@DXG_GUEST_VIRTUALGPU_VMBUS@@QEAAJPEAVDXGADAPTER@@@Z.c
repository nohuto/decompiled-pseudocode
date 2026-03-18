/*
 * XREFs of ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C017A908
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     DpReadDeviceSpace @ 0x1C0038D50 (DpReadDeviceSpace.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C017A33C (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C017ADF8 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::CreateVmBusChannel(struct VMBCHANNEL__ **this, struct DXGADAPTER *a2)
{
  struct VMBCHANNEL__ *v4; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct _DEVICE_OBJECT *v10; // rdx
  int v11; // eax
  struct VMBCHANNEL__ *v12; // rcx
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  void (*v17)(struct VMBCHANNEL__ *, unsigned int); // [rsp+38h] [rbp-71h]
  union _LARGE_INTEGER Timeout[2]; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v19; // [rsp+60h] [rbp-49h] BYREF
  _DWORD v20[2]; // [rsp+70h] [rbp-39h] BYREF
  __int64 (__fastcall *v21)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-31h]
  void (__fastcall *v22)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-29h]
  void (__fastcall *v23)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-21h]
  void (__fastcall *v24)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-19h]
  void (__fastcall *v25)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-11h]
  struct _GUID v26; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v27; // [rsp+B0h] [rbp+7h] BYREF
  _OWORD v28[2]; // [rsp+C0h] [rbp+17h] BYREF
  int v29; // [rsp+E0h] [rbp+37h]

  v4 = (struct VMBCHANNEL__ *)operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
  this[4] = v4;
  if ( !v4 )
    return 3221225495LL;
  KeInitializeEvent((PRKEVENT)v4, NotificationEvent, 0);
  this[6] = a2;
  v6 = *((_QWORD *)a2 + 24);
  v29 = *(_DWORD *)L"t";
  v19.Buffer = (wchar_t *)v28;
  v21 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelOpened;
  v22 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed;
  v23 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v24 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelStarted;
  v25 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelPostStarted;
  v27 = 0uLL;
  v28[0] = *(_OWORD *)L"DXGK_AdapterGuest";
  *(_DWORD *)&v19.Length = 2359330;
  v28[1] = *(_OWORD *)L"pterGuest";
  v20[0] = 1;
  v20[1] = 48;
  v7 = DpReadDeviceSpace(v6, 0LL, &v27, 0xC0u, 0x10u, (ULONG *)Timeout);
  v9 = v7;
  if ( v7 >= 0
    && Timeout[0].LowPart == 16
    && (v10 = (struct _DEVICE_OBJECT *)*((_QWORD *)a2 + 24),
        *(_OWORD *)&Timeout[0].LowPart = v27,
        v26 = (struct _GUID)DxgkPerVirtualGpuVmBusChannelType,
        v11 = CreateClientVmBusChannel(
                (__int64)a2,
                v10,
                &v26,
                (struct _GUID *)Timeout,
                &v19,
                (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v20,
                (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket,
                v17,
                this),
        v9 = v11,
        v11 >= 0) )
  {
    v12 = this[4];
    Timeout[0].QuadPart = -80000000LL;
    v13 = KeWaitForSingleObject(v12, Executive, 0, 0, Timeout);
    v9 = v13;
    if ( v13 )
    {
      v15 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v15 + 24) = v9;
      WdLogEvent5_WdError(v15);
      LODWORD(v9) = -1073741823;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v16 + 24) = v9;
    WdLogEvent5_WdError(v16);
  }
  if ( (int)v9 >= 0 )
    *((_BYTE *)this + 40) = 1;
  else
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXG_GUEST_VIRTUALGPU_VMBUS *)this);
  return (unsigned int)v9;
}
