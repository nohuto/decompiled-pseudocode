/*
 * XREFs of ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0182C70
 * Callers:
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00ACEA0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C00DD6F0 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyNtSharedObject(struct VMBCHANNEL__ **this, int a2)
{
  struct VMBCHANNEL__ *v2; // rcx
  struct _MDL *v3; // [rsp+28h] [rbp-30h]
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]
  int v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+48h] [rbp-10h]

  v2 = *this;
  v8 = a2;
  v4 = 0LL;
  v5 = 0;
  v6 = 1;
  v7 = 56;
  VmBusSendSyncMessage(v2, (struct DXGKVMB_COMMAND_BASE *)&v4, 0x20u, 0LL, 0LL, v3);
}
