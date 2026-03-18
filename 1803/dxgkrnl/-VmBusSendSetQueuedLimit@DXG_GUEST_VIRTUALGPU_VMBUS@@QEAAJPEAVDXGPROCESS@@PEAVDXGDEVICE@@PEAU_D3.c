/*
 * XREFs of ?VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x1C01848CC
 * Callers:
 *     DxgkSetQueuedLimit @ 0x1C00A0B50 (DxgkSetQueuedLimit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
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
  int v13; // ebx
  __int64 v14; // r8
  D3DKMT_HANDLE hDevice; // eax
  __int64 v16; // rax
  struct _MDL *v18; // [rsp+28h] [rbp-21h]
  unsigned int v19; // [rsp+30h] [rbp-19h] BYREF
  __int64 v20; // [rsp+38h] [rbp-11h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-9h]
  int v22; // [rsp+44h] [rbp-5h]
  int v23; // [rsp+48h] [rbp-1h]
  __int128 v24; // [rsp+50h] [rbp+7h]
  struct _D3DKMT_SETQUEUEDLIMIT v25; // [rsp+60h] [rbp+17h] BYREF
  int v26; // [rsp+70h] [rbp+27h]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v8 = (__int128)*a4;
  v9 = *this;
  v20 = 0LL;
  v22 = 0;
  v21 = HostProcess;
  v10 = *((_DWORD *)a3 + 84);
  v24 = v8;
  LODWORD(v24) = v10;
  v23 = 31;
  v19 = 24;
  v13 = VmBusSendSyncMessage(v9, (struct DXGKVMB_COMMAND_BASE *)&v20, 0x28u, &v25, &v19, v18);
  if ( v13 < 0
    || (v13 = -1073741823, v19 < 0x14)
    || (hDevice = a4->hDevice, v13 = v26, *a4 = v25, a4->hDevice = hDevice, v13 < 0) )
  {
    v16 = WdLogNewEntry5_WdWarning(v12, v11, v14);
    *(_QWORD *)(v16 + 24) = v13;
    WdLogEvent5_WdWarning(v16);
  }
  return (unsigned int)v13;
}
