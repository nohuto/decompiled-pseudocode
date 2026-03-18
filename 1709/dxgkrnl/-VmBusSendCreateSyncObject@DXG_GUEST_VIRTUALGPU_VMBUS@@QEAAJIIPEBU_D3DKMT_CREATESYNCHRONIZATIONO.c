/*
 * XREFs of ?VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1C0195E5C
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C007A948 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
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
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rcx
  __int64 result; // rax
  __int128 v14; // xmm1
  __int64 v15; // rax
  struct _MDL *v16; // [rsp+28h] [rbp-79h]
  unsigned int v17[4]; // [rsp+30h] [rbp-71h] BYREF
  __int64 v18; // [rsp+40h] [rbp-61h] BYREF
  int v19; // [rsp+48h] [rbp-59h]
  int v20; // [rsp+4Ch] [rbp-55h]
  int v21; // [rsp+50h] [rbp-51h]
  __int128 v22; // [rsp+58h] [rbp-49h]
  __int128 v23; // [rsp+68h] [rbp-39h]
  __int128 v24; // [rsp+78h] [rbp-29h]
  __int128 v25; // [rsp+88h] [rbp-19h]
  __int128 v26; // [rsp+98h] [rbp-9h]
  __int128 v27; // [rsp+A8h] [rbp+7h]
  _OWORD v28[2]; // [rsp+C0h] [rbp+1Fh] BYREF

  v5 = *(_OWORD *)&a4->hDevice;
  v6 = *this;
  v7 = *(_OWORD *)&a4->Info.SynchronizationMutex.InitialState;
  v18 = 0LL;
  v20 = 0;
  v22 = v5;
  v19 = a2;
  v8 = *(_OWORD *)&a4->Info.Reserved.Reserved[2];
  LODWORD(v22) = a3;
  v23 = v7;
  v21 = 8;
  v9 = *(_OWORD *)&a4->Info.Reserved.Reserved[4];
  v17[0] = 32;
  v24 = v8;
  v10 = *(_OWORD *)&a4->Info.Reserved.Reserved[6];
  v25 = v9;
  v11 = *(_OWORD *)&a4->Info.SharedHandle;
  v26 = v10;
  v27 = v11;
  VmBusSendSyncMessage(v6, (struct DXGKVMB_COMMAND_BASE *)&v18, 0x78u, v28, v17, v16);
  if ( v17[0] >= 0x20 && LODWORD(v28[0]) )
  {
    result = 0LL;
    v14 = v28[1];
    *(_OWORD *)a5 = v28[0];
    *((_OWORD *)a5 + 1) = v14;
  }
  else
  {
    v15 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v15 + 24) = -1073741823LL;
    WdLogEvent5_WdAssertion(v15);
    return 3221225473LL;
  }
  return result;
}
