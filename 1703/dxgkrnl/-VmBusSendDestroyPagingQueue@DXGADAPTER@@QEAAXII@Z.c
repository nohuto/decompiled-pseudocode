/*
 * XREFs of ?VmBusSendDestroyPagingQueue@DXGADAPTER@@QEAAXII@Z @ 0x1C002FF44
 * Callers:
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C00FEA04 (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 * Callees:
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

void __fastcall DXGADAPTER::VmBusSendDestroyPagingQueue(DXGADAPTER *this, int a2, int a3)
{
  struct VMBCHANNEL__ *v3; // rcx
  struct _MDL *v4; // [rsp+28h] [rbp-30h]
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]
  int v8; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  v3 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v7 = a2;
  v8 = a3;
  v6 = 13;
  VmBusSendSyncMessage(v3, (struct DXGKVMB_COMMAND *)&v5, 0x18u, 0LL, 0LL, v4);
}
