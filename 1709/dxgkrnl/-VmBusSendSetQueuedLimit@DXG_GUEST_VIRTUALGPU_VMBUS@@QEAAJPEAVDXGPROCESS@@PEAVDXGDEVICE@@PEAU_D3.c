/*
 * XREFs of ?VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x1C0197C6C
 * Callers:
 *     DxgkSetQueuedLimit @ 0x1C00EDE20 (DxgkSetQueuedLimit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetQueuedLimit(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_SETQUEUEDLIMIT *a4)
{
  unsigned int HostProcess; // eax
  __int128 v8; // xmm0
  struct VMBCHANNEL__ *v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  D3DKMT_HANDLE hDevice; // eax
  __int64 v16; // rax
  struct _MDL *v17; // [rsp+28h] [rbp-21h]
  unsigned int v18; // [rsp+30h] [rbp-19h] BYREF
  __int64 v19; // [rsp+38h] [rbp-11h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-9h]
  int v21; // [rsp+44h] [rbp-5h]
  int v22; // [rsp+48h] [rbp-1h]
  __int128 v23; // [rsp+50h] [rbp+7h]
  struct _D3DKMT_SETQUEUEDLIMIT v24; // [rsp+60h] [rbp+17h] BYREF
  unsigned int v25; // [rsp+70h] [rbp+27h]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v8 = (__int128)*a4;
  v9 = *this;
  v19 = 0LL;
  v21 = 0;
  v20 = HostProcess;
  v10 = *((_DWORD *)a3 + 84);
  v23 = v8;
  LODWORD(v23) = v10;
  v22 = 31;
  v18 = 24;
  VmBusSendSyncMessage(v9, (struct DXGKVMB_COMMAND_BASE *)&v19, 0x28u, &v24, &v18, v17);
  if ( v18 < 0x14 )
  {
    v16 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v16 + 24) = 5778LL;
    WdLogEvent5_WdWarning(v16);
    return 3221225473LL;
  }
  else
  {
    hDevice = a4->hDevice;
    *a4 = v24;
    a4->hDevice = hDevice;
    return v25;
  }
}
