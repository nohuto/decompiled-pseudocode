/*
 * XREFs of ?VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x1C0184A8C
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00DFE10 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0185834 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalFenceNtSharedByRef(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        int a4,
        unsigned __int64 a5)
{
  unsigned int HostProcess; // eax
  struct VMBCHANNEL__ *v9; // rcx
  struct _MDL *v10; // r9
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-30h]
  int v18; // [rsp+2Ch] [rbp-2Ch]
  int v19; // [rsp+30h] [rbp-28h]
  int v20; // [rsp+38h] [rbp-20h]
  int v21; // [rsp+3Ch] [rbp-1Ch]
  unsigned __int64 v22; // [rsp+40h] [rbp-18h]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v9 = *this;
  v16 = 0LL;
  v18 = 0;
  v17 = HostProcess;
  v21 = *((_DWORD *)a3 + 7);
  v22 = a5;
  v19 = 27;
  v20 = a4;
  v11 = VmBusSendSyncMessageStatusReturn(v9, (struct DXGKVMB_COMMAND_BASE *)&v16, 0x28u, v10);
  v13 = v11;
  if ( v11 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = v13;
    WdLogEvent5_WdError(v14);
  }
  return (unsigned int)v13;
}
