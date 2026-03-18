/*
 * XREFs of ?VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@@Z @ 0x1C002DDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C002DC2C (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendPropagatePresentHistoryToken(
        struct VMBCHANNEL__ *a1,
        struct DXGPRESENTHISTORYTOKENQUEUE *a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3,
        struct _MDL *a4)
{
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h]
  int v6; // [rsp+2Ch] [rbp-2Ch]
  int v7; // [rsp+30h] [rbp-28h]
  struct DXGPRESENTHISTORYTOKENQUEUE *v8; // [rsp+38h] [rbp-20h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v9; // [rsp+40h] [rbp-18h]
  struct _MDL *v10; // [rsp+48h] [rbp-10h]

  v4 = 0LL;
  v5 = 0;
  v9 = a3;
  v8 = a2;
  v6 = 2;
  v7 = 1;
  v10 = a4;
  VmBusSendAsyncMessage(a1, (struct DXGKVMB_COMMAND_BASE *)&v4, 48LL, a4);
}
