/*
 * XREFs of ?VmBusSendDestroyDevice@DXGADAPTER@@QEAAXII@Z @ 0x1C002FEB4
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C0EFC (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

void __fastcall DXGADAPTER::VmBusSendDestroyDevice(DXGADAPTER *this, int a2, int a3)
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
  v6 = 1;
  VmBusSendSyncMessage(v3, (struct DXGKVMB_COMMAND *)&v5, 0x18u, 0LL, 0LL, v4);
}
