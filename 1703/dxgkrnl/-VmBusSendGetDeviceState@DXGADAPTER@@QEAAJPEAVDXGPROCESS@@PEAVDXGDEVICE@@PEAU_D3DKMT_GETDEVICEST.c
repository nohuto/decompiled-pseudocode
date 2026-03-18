/*
 * XREFs of ?VmBusSendGetDeviceState@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C0030460
 * Callers:
 *     DxgkGetDeviceState @ 0x1C008F710 (DxgkGetDeviceState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendGetDeviceState(
        DXGADAPTER *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_GETDEVICESTATE *a4)
{
  unsigned int HostProcess; // eax
  __int128 v8; // xmm0
  struct VMBCHANNEL__ *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v17; // xmm1
  __int64 result; // rax
  __int128 v19; // xmm0
  __int64 v20; // rax
  struct _MDL *v21; // [rsp+28h] [rbp-81h]
  unsigned int v22[4]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v23; // [rsp+40h] [rbp-69h] BYREF
  int v24; // [rsp+48h] [rbp-61h]
  unsigned int v25; // [rsp+4Ch] [rbp-5Dh]
  __int128 v26; // [rsp+50h] [rbp-59h]
  __int128 v27; // [rsp+60h] [rbp-49h]
  __int128 v28; // [rsp+70h] [rbp-39h]
  __int64 v29; // [rsp+80h] [rbp-29h]
  _OWORD v30[3]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v31; // [rsp+C0h] [rbp+17h]
  int v32; // [rsp+C8h] [rbp+1Fh]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v8 = *(_OWORD *)&a4->hDevice;
  v9 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v10 = *(_OWORD *)(&a4->PresentQueueState + 1);
  v23 = 0LL;
  v26 = v8;
  v11 = *(_OWORD *)(&a4->PresentQueueState + 3);
  v25 = HostProcess;
  v12 = *((_DWORD *)a3 + 84);
  v27 = v10;
  *(_QWORD *)&v10 = *((_QWORD *)&a4->PresentQueueState + 5);
  LODWORD(v26) = v12;
  v28 = v11;
  v24 = 34;
  v29 = v10;
  v22[0] = 64;
  VmBusSendSyncMessage(v9, (struct DXGKVMB_COMMAND *)&v23, 0x48u, v30, v22, v21);
  if ( v22[0] < 0x40 )
  {
    result = 3221225473LL;
    v32 = -1073741823;
  }
  else
  {
    v17 = v30[1];
    result = (unsigned int)v32;
    *(_OWORD *)&a4->hDevice = v30[0];
    v19 = v30[2];
    *(_OWORD *)(&a4->PresentQueueState + 1) = v17;
    *(_QWORD *)&v17 = v31;
    *(_OWORD *)(&a4->PresentQueueState + 3) = v19;
    *((_QWORD *)&a4->PresentQueueState + 5) = v17;
  }
  if ( (int)result < 0 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v20 + 24) = v32;
    WdLogEvent5_WdAssertion(v20);
    result = 0LL;
    a4->PresentState.VidPnSourceId = 4;
  }
  return result;
}
