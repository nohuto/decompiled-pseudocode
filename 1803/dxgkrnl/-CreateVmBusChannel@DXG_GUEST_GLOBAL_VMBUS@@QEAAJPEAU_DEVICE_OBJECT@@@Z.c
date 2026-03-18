/*
 * XREFs of ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C017A738
 * Callers:
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C019E420 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C017A33C (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C017ADD0 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::CreateVmBusChannel(struct VMBCHANNEL__ **this, struct _DEVICE_OBJECT *a2)
{
  struct _DEVICE_OBJECT *v2; // rdi
  struct VMBCHANNEL__ *v4; // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  struct VMBCHANNEL__ *v9; // rcx
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  void (*v14)(struct VMBCHANNEL__ *, unsigned int); // [rsp+38h] [rbp-51h]
  union _LARGE_INTEGER Timeout[2]; // [rsp+50h] [rbp-39h] BYREF
  struct _UNICODE_STRING v16; // [rsp+60h] [rbp-29h] BYREF
  _DWORD v17[2]; // [rsp+70h] [rbp-19h] BYREF
  __int64 (__fastcall *v18)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-11h]
  void (__fastcall *v19)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-9h]
  void (__fastcall *v20)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-1h]
  void (__fastcall *v21)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp+7h]
  void (__fastcall *v22)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp+Fh]
  struct _GUID v23; // [rsp+A0h] [rbp+17h] BYREF
  _OWORD v24[2]; // [rsp+B0h] [rbp+27h] BYREF
  wchar_t v25; // [rsp+D0h] [rbp+47h]

  v2 = g_pDeviceObject;
  v4 = (struct VMBCHANNEL__ *)operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
  this[4] = v4;
  if ( !v4 )
    return 3221225495LL;
  KeInitializeEvent((PRKEVENT)v4, NotificationEvent, 0);
  v25 = aDxgkGlobalgues[16];
  v16.Buffer = (wchar_t *)v24;
  v18 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelOpened;
  *(_DWORD *)&v16.Length = 2228256;
  v19 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelClosed;
  v17[0] = 1;
  v20 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelSuspend;
  v21 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelStarted;
  v22 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelPostStarted;
  v24[0] = *(_OWORD *)L"DXGK_GlobalGuest";
  v17[1] = 48;
  v24[1] = *(_OWORD *)L"balGuest";
  *(_OWORD *)&Timeout[0].LowPart = DxgkPerVmVmBusChanelInstanceId;
  v23 = (struct _GUID)DxgkPerVmVmBusChannelType;
  v6 = CreateClientVmBusChannel(
         (__int64)this,
         v2,
         &v23,
         (struct _GUID *)Timeout,
         &v16,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v17,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_GUEST_GLOBAL_VMBUS::VmBusChannelProcessPacket,
         v14,
         this);
  v8 = v6;
  if ( v6 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v13 + 24) = v8;
    WdLogEvent5_WdError(v13);
  }
  else
  {
    v9 = this[4];
    Timeout[0].QuadPart = -80000000LL;
    v10 = KeWaitForSingleObject(v9, Executive, 0, 0, Timeout);
    v8 = v10;
    if ( v10 )
    {
      v12 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v12 + 24) = v8;
      WdLogEvent5_WdError(v12);
      LODWORD(v8) = -1073741823;
    }
  }
  if ( (int)v8 >= 0 )
  {
    *((_BYTE *)this + 40) = 1;
  }
  else if ( *this )
  {
    DestroyVmBusChannel(*this);
    *this = 0LL;
    *((_BYTE *)this + 40) = 0;
  }
  return (unsigned int)v8;
}
