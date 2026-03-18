/*
 * XREFs of ?VmBusSendNotifyProcessFreeze@@YAXI@Z @ 0x1C0030D20
 * Callers:
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00A4010 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ @ 0x1C0195AA4 (-GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ.c)
 */

void __fastcall VmBusSendNotifyProcessFreeze(int a1)
{
  DXGGLOBAL *Global; // rax
  struct VMBCHANNEL__ *VmBusChannel; // rax
  struct _MDL *v3; // [rsp+28h] [rbp-20h]
  __int64 v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+38h] [rbp-10h]
  int v6; // [rsp+3Ch] [rbp-Ch]

  v4 = 0LL;
  v5 = 47;
  v6 = a1;
  Global = DXGGLOBAL::GetGlobal();
  VmBusChannel = DXGGLOBAL::GetVmBusChannel(Global);
  VmBusSendSyncMessage(VmBusChannel, (struct DXGKVMB_COMMAND *)&v4, 0x10u, 0LL, 0LL, v3);
}
