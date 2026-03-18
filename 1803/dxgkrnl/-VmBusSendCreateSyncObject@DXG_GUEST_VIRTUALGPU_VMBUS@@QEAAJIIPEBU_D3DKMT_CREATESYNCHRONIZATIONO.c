/*
 * XREFs of ?VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1C018263C
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0097778 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateSyncObject(
        struct VMBCHANNEL__ **this,
        int a2,
        int a3,
        const struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a4,
        struct DXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN *a5)
{
  __int128 v5; // xmm0
  struct VMBCHANNEL__ *v6; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rcx
  bool v14; // zf
  __int64 result; // rax
  __int128 v16; // xmm1
  __int64 v17; // rax
  struct _MDL *v18; // [rsp+28h] [rbp-79h]
  unsigned int v19[4]; // [rsp+30h] [rbp-71h] BYREF
  __int64 v20; // [rsp+40h] [rbp-61h] BYREF
  int v21; // [rsp+48h] [rbp-59h]
  int v22; // [rsp+4Ch] [rbp-55h]
  int v23; // [rsp+50h] [rbp-51h]
  __int128 v24; // [rsp+58h] [rbp-49h]
  __int128 v25; // [rsp+68h] [rbp-39h]
  __int128 v26; // [rsp+78h] [rbp-29h]
  __int128 v27; // [rsp+88h] [rbp-19h]
  __int128 v28; // [rsp+98h] [rbp-9h]
  __int128 v29; // [rsp+A8h] [rbp+7h]
  _OWORD v30[2]; // [rsp+C0h] [rbp+1Fh] BYREF

  v5 = *(_OWORD *)&a4->hDevice;
  v6 = *this;
  v8 = *(_OWORD *)&a4->Info.SynchronizationMutex.InitialState;
  v20 = 0LL;
  v22 = 0;
  v24 = v5;
  v21 = a2;
  v9 = *(_OWORD *)&a4->Info.Reserved.Reserved[2];
  LODWORD(v24) = a3;
  v25 = v8;
  v23 = 8;
  v10 = *(_OWORD *)&a4->Info.Reserved.Reserved[4];
  v19[0] = 32;
  v26 = v9;
  v11 = *(_OWORD *)&a4->Info.Reserved.Reserved[6];
  v27 = v10;
  v12 = *(_OWORD *)&a4->Info.SharedHandle;
  v28 = v11;
  v29 = v12;
  if ( VmBusSendSyncMessage(v6, (struct DXGKVMB_COMMAND_BASE *)&v20, 0x78u, v30, v19, v18) < 0
    || v19[0] < 0x20
    || (!a3 ? (v14 = DWORD1(v30[0]) == 0) : (v14 = LODWORD(v30[0]) == 0), v14) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v17 + 24) = -1073741823LL;
    WdLogEvent5_WdAssertion(v17);
    return 3221225473LL;
  }
  else
  {
    result = 0LL;
    v16 = v30[1];
    *(_OWORD *)a5 = v30[0];
    *((_OWORD *)a5 + 1) = v16;
  }
  return result;
}
