/*
 * XREFs of ?VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C0184A28
 * Callers:
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C00FA8F8 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0185834 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendSignalFence(
        struct VMBCHANNEL__ **a1,
        int a2,
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
  int v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+3Ch] [rbp-1Ch]
  __int64 v16; // [rsp+40h] [rbp-18h]

  v4 = *a1;
  v10 = 0LL;
  v11 = 0;
  v14 = a2;
  v16 = a3;
  v12 = 1;
  v13 = 57;
  v15 = (int)a4;
  v5 = VmBusSendSyncMessageStatusReturn(v4, (struct DXGKVMB_COMMAND_BASE *)&v10, 0x28u, a4);
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdError(v8);
  }
  return (unsigned int)v7;
}
