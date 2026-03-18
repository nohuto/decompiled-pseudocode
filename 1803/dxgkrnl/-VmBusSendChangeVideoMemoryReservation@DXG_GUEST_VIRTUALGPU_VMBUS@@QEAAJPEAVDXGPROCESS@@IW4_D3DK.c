/*
 * XREFs of ?VmBusSendChangeVideoMemoryReservation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C0181A5C
 * Callers:
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C0158BDC (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0185834 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendChangeVideoMemoryReservation(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        int a3,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a4,
        unsigned __int64 a5)
{
  int v6; // eax
  struct VMBCHANNEL__ *v9; // rcx
  struct _MDL *v10; // r9
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+28h] [rbp-40h]
  int v18; // [rsp+2Ch] [rbp-3Ch]
  int v19; // [rsp+30h] [rbp-38h]
  _QWORD v20[4]; // [rsp+38h] [rbp-30h] BYREF

  v16 = 0LL;
  v6 = *((_DWORD *)a2 + 98);
  v18 = 0;
  v17 = v6;
  v19 = 50;
  memset(v20, 0, sizeof(v20));
  v9 = *this;
  v20[2] = a5;
  HIDWORD(v20[1]) = a4;
  LODWORD(v20[3]) = a3;
  v11 = VmBusSendSyncMessageStatusReturn(v9, (struct DXGKVMB_COMMAND_BASE *)&v16, 0x38u, v10);
  v13 = v11;
  if ( v11 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = v13;
    WdLogEvent5_WdError(v14);
  }
  return (unsigned int)v13;
}
