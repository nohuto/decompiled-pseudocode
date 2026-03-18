/*
 * XREFs of ?VmBusSendFlushDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGDEVICE@@W4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0183024
 * Callers:
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00F263C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0185834 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushDevice(struct VMBCHANNEL__ **a1, __int64 a2, int a3)
{
  struct VMBCHANNEL__ *v3; // rcx
  struct _MDL *v4; // r9
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+38h] [rbp-10h]
  int v12; // [rsp+3Ch] [rbp-Ch]

  v3 = *a1;
  v4 = (struct _MDL *)*(unsigned int *)(*(_QWORD *)(a2 + 40) + 392LL);
  v7 = 0LL;
  v5 = *(_DWORD *)(a2 + 336);
  v8 = (int)v4;
  v9 = 0;
  v10 = 42;
  v11 = v5;
  v12 = a3;
  return VmBusSendSyncMessageStatusReturn(v3, (struct DXGKVMB_COMMAND_BASE *)&v7, 0x20u, v4);
}
