/*
 * XREFs of ?VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@E@Z @ 0x1C0195B74
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C009C23C (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateDevice(
        struct VMBCHANNEL__ **this,
        int a2,
        struct _D3DKMT_CREATEDEVICEFLAGS a3,
        char a4)
{
  unsigned int v4; // ebx
  struct VMBCHANNEL__ *v6; // rcx
  struct _MDL *v7; // [rsp+28h] [rbp-48h]
  unsigned int v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  int v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+44h] [rbp-2Ch]
  struct _D3DKMT_CREATEDEVICEFLAGS v12; // [rsp+50h] [rbp-20h]
  char v13; // [rsp+54h] [rbp-1Ch]
  unsigned int v14; // [rsp+58h] [rbp-18h] BYREF

  v4 = 0;
  if ( g_VgpuDisableCreateDevice )
    return 0LL;
  v6 = *this;
  v10 = a2;
  v12 = a3;
  v13 = a4;
  v9 = 0LL;
  v11 = 0LL;
  v8 = 8;
  if ( VmBusSendSyncMessage(v6, (struct DXGKVMB_COMMAND_BASE *)&v9, 0x20u, &v14, &v8, v7) >= 0 )
    return v14;
  return v4;
}
