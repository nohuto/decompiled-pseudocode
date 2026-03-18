/*
 * XREFs of ?CreateVmBusChannel@GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C002711C
 * Callers:
 *     ?GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ @ 0x1C0195AA4 (-GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C0026200 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C002A128 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 */

__int64 __fastcall GUEST_GLOBAL_VMBUS::CreateVmBusChannel(struct VMBCHANNEL__ **this, struct _DEVICE_OBJECT *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  void (*v9)(struct VMBCHANNEL__ *, unsigned int); // [rsp+38h] [rbp-51h]
  struct _UNICODE_STRING v10; // [rsp+50h] [rbp-39h] BYREF
  _DWORD v11[2]; // [rsp+60h] [rbp-29h] BYREF
  __int64 (__fastcall *v12)(struct VMBCHANNEL__ *); // [rsp+68h] [rbp-21h]
  void (__fastcall *v13)(struct VMBCHANNEL__ *); // [rsp+70h] [rbp-19h]
  void (__fastcall *v14)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-11h]
  void (__fastcall *v15)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-9h]
  void (__fastcall *v16)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-1h]
  struct _GUID v17; // [rsp+90h] [rbp+7h] BYREF
  struct _GUID v18; // [rsp+A0h] [rbp+17h] BYREF
  _OWORD v19[2]; // [rsp+B0h] [rbp+27h] BYREF
  wchar_t v20; // [rsp+D0h] [rbp+47h]

  v20 = aDxgkGlobalgues[16];
  v10.Buffer = (wchar_t *)v19;
  v12 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelOpened;
  v13 = GUEST_GLOBAL_VMBUS::VmBusChannelSuspend;
  v14 = GUEST_GLOBAL_VMBUS::VmBusChannelSuspend;
  v15 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v16 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v19[0] = *(_OWORD *)L"DXGK_GlobalGuest";
  *(_DWORD *)&v10.Length = 2228256;
  v19[1] = *(_OWORD *)L"balGuest";
  v11[0] = 1;
  v11[1] = 48;
  v17 = (struct _GUID)DxgkPerVmVmBusChanelInstanceId;
  v18 = (struct _GUID)DxgkPerVmVmBusChannelType;
  v3 = CreateClientVmBusChannel(
         (__int64)this,
         (struct _DEVICE_OBJECT *)g_pDeviceObject,
         &v18,
         &v17,
         &v10,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v11,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend,
         v9,
         this);
  v6 = v3;
  if ( v3 >= 0 )
  {
    *((_BYTE *)this + 8) = 1;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
    if ( *this )
    {
      DestroyVmBusChannel(*this);
      *this = 0LL;
      *((_BYTE *)this + 8) = 0;
    }
  }
  return (unsigned int)v6;
}
