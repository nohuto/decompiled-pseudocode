/*
 * XREFs of ?VmBusSendFlushAdapter@DXGADAPTER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@I@Z @ 0x1C00302DC
 * Callers:
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendFlushAdapter(__int64 a1, int a2, int a3)
{
  struct VMBCHANNEL__ *v4; // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]
  int v9; // [rsp+38h] [rbp-10h]

  v6[1] = 55LL;
  v4 = 0LL;
  v8 = a2;
  v6[0] = 0LL;
  v9 = a3;
  v7 = *(_DWORD *)(a1 + 3888);
  if ( *(_BYTE *)(a1 + 3880) )
    v4 = *(struct VMBCHANNEL__ **)(a1 + 3872);
  return VmBusSendSyncMessageStatusReturn(v4, (struct DXGKVMB_COMMAND *)v6, 0x20u, (struct _MDL *)a1);
}
