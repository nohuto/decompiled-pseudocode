/*
 * XREFs of ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C01968F8
 * Callers:
 *     DxgkGetDeviceState @ 0x1C00B3B20 (DxgkGetDeviceState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_GETDEVICESTATE *a4)
{
  unsigned int HostProcess; // eax
  __int128 v8; // xmm0
  struct VMBCHANNEL__ *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int128 v13; // xmm1
  __int64 result; // rax
  __int128 v15; // xmm0
  __int64 v16; // rax
  struct _MDL *v17; // [rsp+28h] [rbp-81h]
  unsigned int v18[4]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v19; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-61h]
  int v21; // [rsp+4Ch] [rbp-5Dh]
  int v22; // [rsp+50h] [rbp-59h]
  __int128 v23; // [rsp+58h] [rbp-51h]
  __int128 v24; // [rsp+68h] [rbp-41h]
  __int128 v25; // [rsp+78h] [rbp-31h]
  __int64 v26; // [rsp+88h] [rbp-21h]
  _OWORD v27[3]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v28; // [rsp+C0h] [rbp+17h]
  int v29; // [rsp+C8h] [rbp+1Fh]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v8 = *(_OWORD *)&a4->hDevice;
  v9 = *this;
  v10 = *(_OWORD *)(&a4->PresentQueueState + 1);
  v19 = 0LL;
  v21 = 0;
  v23 = v8;
  v20 = HostProcess;
  v11 = *(_OWORD *)(&a4->PresentQueueState + 3);
  LODWORD(v23) = *((_DWORD *)a3 + 84);
  v24 = v10;
  v22 = 28;
  *(_QWORD *)&v10 = *((_QWORD *)&a4->PresentQueueState + 5);
  v25 = v11;
  v18[0] = 64;
  v26 = v10;
  VmBusSendSyncMessage(v9, (struct DXGKVMB_COMMAND_BASE *)&v19, 0x50u, v27, v18, v17);
  if ( v18[0] < 0x40 )
  {
    result = 3221225473LL;
    v29 = -1073741823;
  }
  else
  {
    v13 = v27[1];
    result = (unsigned int)v29;
    *(_OWORD *)&a4->hDevice = v27[0];
    v15 = v27[2];
    *(_OWORD *)(&a4->PresentQueueState + 1) = v13;
    *(_QWORD *)&v13 = v28;
    *(_OWORD *)(&a4->PresentQueueState + 3) = v15;
    *((_QWORD *)&a4->PresentQueueState + 5) = v13;
  }
  if ( (int)result < 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v16 + 24) = v29;
    WdLogEvent5_WdAssertion(v16);
    result = 0LL;
    a4->PresentState.VidPnSourceId = 4;
  }
  return result;
}
