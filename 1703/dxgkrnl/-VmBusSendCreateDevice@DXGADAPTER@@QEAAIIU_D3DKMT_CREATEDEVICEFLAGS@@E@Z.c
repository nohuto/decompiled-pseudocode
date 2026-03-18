/*
 * XREFs of ?VmBusSendCreateDevice@DXGADAPTER@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@E@Z @ 0x1C002F5F8
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00C89B8 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendCreateDevice(
        DXGADAPTER *this,
        int a2,
        struct _D3DKMT_CREATEDEVICEFLAGS a3,
        char a4)
{
  unsigned int v4; // ebx
  struct VMBCHANNEL__ *v6; // rcx
  struct _MDL *v7; // [rsp+28h] [rbp-40h]
  unsigned int v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h] BYREF
  int v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+44h] [rbp-24h]
  struct _D3DKMT_CREATEDEVICEFLAGS v12; // [rsp+48h] [rbp-20h]
  char v13; // [rsp+4Ch] [rbp-1Ch]
  unsigned int v14; // [rsp+50h] [rbp-18h] BYREF

  v4 = 0;
  if ( g_VgpuDisableCreateDevice )
    return 0LL;
  v6 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v11 = a2;
  v12 = a3;
  v13 = a4;
  v9 = 0LL;
  v10 = 0;
  v8 = 8;
  if ( VmBusSendSyncMessage(v6, (struct DXGKVMB_COMMAND *)&v9, 0x18u, &v14, &v8, v7) >= 0 )
    return v14;
  return v4;
}
