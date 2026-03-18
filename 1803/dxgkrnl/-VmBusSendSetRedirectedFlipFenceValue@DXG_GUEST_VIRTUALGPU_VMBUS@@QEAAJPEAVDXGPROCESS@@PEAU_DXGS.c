/*
 * XREFs of ?VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGSHAREDSYNCOBJECT@@_K@Z @ 0x1C01849A0
 * Callers:
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00DFA9C (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0185834 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetRedirectedFlipFenceValue(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct _DXGSHAREDSYNCOBJECT *a3,
        __int64 a4)
{
  int v4; // ebx
  unsigned int HostProcess; // eax
  struct VMBCHANNEL__ *v8; // rcx
  struct _MDL *v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+2Ch] [rbp-2Ch]
  int v18; // [rsp+30h] [rbp-28h]
  int v19; // [rsp+38h] [rbp-20h]
  __int64 v20; // [rsp+40h] [rbp-18h]

  v4 = *((_DWORD *)a3 + 2);
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v8 = *this;
  v15 = 0LL;
  v17 = 0;
  v16 = HostProcess;
  v18 = 35;
  v19 = v4;
  v20 = a4;
  v10 = VmBusSendSyncMessageStatusReturn(v8, (struct DXGKVMB_COMMAND_BASE *)&v15, 0x28u, v9);
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v12;
}
