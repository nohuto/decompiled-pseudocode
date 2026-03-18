/*
 * XREFs of ?VmBusSendCreateNtSharedObject@@YAIPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@@Z @ 0x1C002F684
 * Callers:
 *     DxgkShareObjects @ 0x1C009D2D0 (DxgkShareObjects.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ @ 0x1C0195AA4 (-GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall VmBusSendCreateNtSharedObject(struct DXGPROCESS *a1, struct DXGSYNCOBJECT *a2)
{
  unsigned int v3; // edi
  DXGGLOBAL *Global; // rax
  struct VMBCHANNEL__ *VmBusChannel; // rax
  struct _MDL *v7; // [rsp+28h] [rbp-40h]
  unsigned int v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h] BYREF
  int v10; // [rsp+40h] [rbp-28h]
  unsigned int HostProcess; // [rsp+44h] [rbp-24h]
  int v12; // [rsp+48h] [rbp-20h]
  unsigned int v13; // [rsp+50h] [rbp-18h] BYREF

  HostProcess = DXGPROCESS::GetHostProcess(a1);
  v3 = 0;
  v12 = *((_DWORD *)a2 + 19);
  v9 = 0LL;
  v10 = 42;
  v8 = 8;
  Global = DXGGLOBAL::GetGlobal();
  VmBusChannel = DXGGLOBAL::GetVmBusChannel(Global);
  VmBusSendSyncMessage(VmBusChannel, (struct DXGKVMB_COMMAND *)&v9, 0x18u, &v13, &v8, v7);
  if ( v8 >= 4 )
    return v13;
  return v3;
}
