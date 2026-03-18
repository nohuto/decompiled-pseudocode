/*
 * XREFs of ?VmBusSendFreeGpuVirtualAddress@DXGADAPTER@@QEAAJII_K0@Z @ 0x1C00303F4
 * Callers:
 *     DxgkFreeGpuVirtualAddress @ 0x1C00A48A0 (DxgkFreeGpuVirtualAddress.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendFreeGpuVirtualAddress(
        DXGADAPTER *this,
        int a2,
        int a3,
        struct _MDL *a4,
        unsigned __int64 a5)
{
  struct VMBCHANNEL__ *v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h]
  int v9; // [rsp+2Ch] [rbp-2Ch]
  int v10; // [rsp+30h] [rbp-28h]
  struct _MDL *v11; // [rsp+38h] [rbp-20h]
  unsigned __int64 v12; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  v5 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v9 = a2;
  v8 = 19;
  v10 = a3;
  v11 = a4;
  v12 = a5;
  return VmBusSendSyncMessageStatusReturn(v5, (struct DXGKVMB_COMMAND *)&v7, 0x28u, a4);
}
