/*
 * XREFs of ?VmBusSendAdapterStop@DXGADAPTER@@QEAAXXZ @ 0x1C002EB18
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C016D848 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

void __fastcall DXGADAPTER::VmBusSendAdapterStop(DXGADAPTER *this)
{
  struct VMBCHANNEL__ *v1; // rcx
  struct _MDL *v2; // [rsp+28h] [rbp-20h]
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v3[1] = 36LL;
  v3[0] = 0LL;
  VmBusSendSyncMessage(v1, (struct DXGKVMB_COMMAND *)v3, 0x10u, 0LL, 0LL, v2);
}
