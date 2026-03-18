/*
 * XREFs of ?VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x1C0197178
 * Callers:
 *     DxgkMarkDeviceAsError @ 0x1C007DD60 (DxgkMarkDeviceAsError.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0198BC8 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMarkDeviceAsError(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        const struct _D3DKMT_MARKDEVICEASERROR *a4)
{
  unsigned int HostProcess; // eax
  struct VMBCHANNEL__ *v8; // rcx
  struct _MDL *v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+2Ch] [rbp-1Ch]
  int v18; // [rsp+30h] [rbp-18h]
  __int64 v19; // [rsp+38h] [rbp-10h]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v8 = *this;
  v15 = 0LL;
  v17 = 0;
  v16 = HostProcess;
  v19 = (__int64)*a4;
  LODWORD(v19) = *((_DWORD *)a3 + 84);
  v18 = 29;
  v10 = VmBusSendSyncMessageStatusReturn(v8, (struct DXGKVMB_COMMAND_BASE *)&v15, 0x20u, v9);
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v12;
}
