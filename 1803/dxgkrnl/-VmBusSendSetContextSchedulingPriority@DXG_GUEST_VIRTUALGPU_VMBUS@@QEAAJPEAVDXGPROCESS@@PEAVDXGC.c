/*
 * XREFs of ?VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY@@@Z @ 0x1C01847FC
 * Callers:
 *     DxgkSetContextSchedulingPriority @ 0x1C010E060 (DxgkSetContextSchedulingPriority.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0185834 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        const struct _D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *a4)
{
  unsigned int HostProcess; // eax
  struct VMBCHANNEL__ *v8; // rcx
  struct _MDL *v9; // r9
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+2Ch] [rbp-1Ch]
  int v14; // [rsp+30h] [rbp-18h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v11 = 0LL;
  v13 = 0;
  v8 = *this;
  v12 = HostProcess;
  v15 = (__int64)*a4;
  LODWORD(v15) = *((_DWORD *)a3 + 7);
  v14 = 33;
  return VmBusSendSyncMessageStatusReturn(v8, (struct DXGKVMB_COMMAND_BASE *)&v11, 0x20u, v9);
}
