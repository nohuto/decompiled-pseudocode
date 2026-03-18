/*
 * XREFs of ?VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z @ 0x1C019688C
 * Callers:
 *     DxgkFreeGpuVirtualAddress @ 0x1C00F6EE0 (DxgkFreeGpuVirtualAddress.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0198BC8 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFreeGpuVirtualAddress(
        struct VMBCHANNEL__ **this,
        int a2,
        int a3,
        struct _MDL *a4,
        unsigned __int64 a5)
{
  struct VMBCHANNEL__ *v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+28h] [rbp-40h]
  int v9; // [rsp+2Ch] [rbp-3Ch]
  int v10; // [rsp+30h] [rbp-38h]
  int v11; // [rsp+38h] [rbp-30h]
  struct _MDL *v12; // [rsp+40h] [rbp-28h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v7 = 0LL;
  v9 = 0;
  v5 = *this;
  v8 = a2;
  v10 = 16;
  v11 = a3;
  v12 = a4;
  v13 = a5;
  return VmBusSendSyncMessageStatusReturn(v5, (struct DXGKVMB_COMMAND_BASE *)&v7, 0x30u, a4);
}
