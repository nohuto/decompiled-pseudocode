/*
 * XREFs of ?VmBusSendSetQueuedLimit@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x1C0031664
 * Callers:
 *     DxgkSetQueuedLimit @ 0x1C00946E0 (DxgkSetQueuedLimit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendSetQueuedLimit(
        DXGADAPTER *this,
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
  __int64 v14; // r9
  D3DKMT_HANDLE hDevice; // eax
  __int64 v17; // rax
  struct _MDL *v18; // [rsp+28h] [rbp-21h]
  unsigned int v19; // [rsp+30h] [rbp-19h] BYREF
  __int64 v20; // [rsp+38h] [rbp-11h] BYREF
  int v21; // [rsp+40h] [rbp-9h]
  unsigned int v22; // [rsp+44h] [rbp-5h]
  __int128 v23; // [rsp+48h] [rbp-1h]
  struct _D3DKMT_SETQUEUEDLIMIT v24; // [rsp+58h] [rbp+Fh] BYREF
  unsigned int v25; // [rsp+68h] [rbp+1Fh]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v8 = (__int128)*a4;
  v9 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v20 = 0LL;
  v22 = HostProcess;
  v10 = *((_DWORD *)a3 + 84);
  v23 = v8;
  LODWORD(v23) = v10;
  v21 = 37;
  v19 = 24;
  VmBusSendSyncMessage(v9, (struct DXGKVMB_COMMAND *)&v20, 0x20u, &v24, &v19, v18);
  if ( v19 < 0x14 )
  {
    v17 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v17 + 24) = 4098LL;
    WdLogEvent5_WdWarning(v17);
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
