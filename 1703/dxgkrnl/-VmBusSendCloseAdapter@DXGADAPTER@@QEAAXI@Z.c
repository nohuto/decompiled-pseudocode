/*
 * XREFs of ?VmBusSendCloseAdapter@DXGADAPTER@@QEAAXI@Z @ 0x1C002F040
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C016D848 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

void __fastcall DXGADAPTER::VmBusSendCloseAdapter(DXGADAPTER *this, int a2)
{
  struct VMBCHANNEL__ *v2; // rcx
  struct _MDL *v3; // [rsp+28h] [rbp-30h]
  _QWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp-18h]

  v2 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v4[0] = 0LL;
  v4[1] = 18LL;
  v5 = a2;
  VmBusSendSyncMessage(v2, (struct DXGKVMB_COMMAND *)v4, 0x18u, 0LL, 0LL, v3);
}
