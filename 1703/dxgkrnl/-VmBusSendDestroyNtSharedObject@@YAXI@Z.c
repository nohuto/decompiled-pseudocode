/*
 * XREFs of ?VmBusSendDestroyNtSharedObject@@YAXI@Z @ 0x1C002FEF8
 * Callers:
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C008B780 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ @ 0x1C0195AA4 (-GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ.c)
 */

void __fastcall VmBusSendDestroyNtSharedObject(int a1)
{
  DXGGLOBAL *Global; // rax
  struct VMBCHANNEL__ *VmBusChannel; // rax
  struct _MDL *v3; // [rsp+28h] [rbp-30h]
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]
  int v7; // [rsp+40h] [rbp-18h]

  v4 = 0LL;
  v6 = 0;
  v5 = 43;
  v7 = a1;
  Global = DXGGLOBAL::GetGlobal();
  VmBusChannel = DXGGLOBAL::GetVmBusChannel(Global);
  VmBusSendSyncMessage(VmBusChannel, (struct DXGKVMB_COMMAND *)&v4, 0x18u, 0LL, 0LL, v3);
}
