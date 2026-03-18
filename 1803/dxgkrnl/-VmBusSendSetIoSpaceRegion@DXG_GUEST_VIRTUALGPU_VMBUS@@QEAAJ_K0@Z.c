/*
 * XREFs of ?VmBusSendSetIoSpaceRegion@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJ_K0@Z @ 0x1C018486C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0185834 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetIoSpaceRegion(
        struct VMBCHANNEL__ **this,
        __int64 a2,
        __int64 a3,
        struct _MDL *a4)
{
  struct VMBCHANNEL__ *v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+2Ch] [rbp-2Ch]
  int v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v4 = *this;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v14 = a2;
  v15 = a3;
  v13 = 45;
  v5 = VmBusSendSyncMessageStatusReturn(v4, (struct DXGKVMB_COMMAND_BASE *)&v10, 0x28u, a4);
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdAssertion(v8);
  }
  return (unsigned int)v7;
}
