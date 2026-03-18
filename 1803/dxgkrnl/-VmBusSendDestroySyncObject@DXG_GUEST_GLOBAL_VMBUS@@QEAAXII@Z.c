/*
 * XREFs of ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0182CB8
 * Callers:
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00BD4FC (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C00F962C (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(struct VMBCHANNEL__ **this, int a2, int a3)
{
  struct VMBCHANNEL__ *v3; // rcx
  struct _MDL *v4; // [rsp+28h] [rbp-30h]
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+48h] [rbp-10h]

  v5 = 0LL;
  v3 = *this;
  v6 = a2;
  v9 = a3;
  v7 = 1;
  v8 = 54;
  VmBusSendSyncMessage(v3, (struct DXGKVMB_COMMAND_BASE *)&v5, 0x20u, 0LL, 0LL, v4);
}
