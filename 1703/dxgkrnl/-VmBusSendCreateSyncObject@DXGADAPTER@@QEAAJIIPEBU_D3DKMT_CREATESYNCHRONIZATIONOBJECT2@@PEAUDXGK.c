/*
 * XREFs of ?VmBusSendCreateSyncObject@DXGADAPTER@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1C002F8A8
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00881D8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendCreateSyncObject(
        DXGADAPTER *this,
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  __int128 v17; // xmm1
  __int64 v18; // rax
  struct _MDL *v19; // [rsp+28h] [rbp-69h]
  unsigned int v20[4]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v21; // [rsp+40h] [rbp-51h] BYREF
  int v22; // [rsp+48h] [rbp-49h]
  int v23; // [rsp+4Ch] [rbp-45h]
  __int128 v24; // [rsp+50h] [rbp-41h]
  __int128 v25; // [rsp+60h] [rbp-31h]
  __int128 v26; // [rsp+70h] [rbp-21h]
  __int128 v27; // [rsp+80h] [rbp-11h]
  __int128 v28; // [rsp+90h] [rbp-1h]
  __int128 v29; // [rsp+A0h] [rbp+Fh]
  _OWORD v30[2]; // [rsp+B0h] [rbp+1Fh] BYREF

  v5 = *(_OWORD *)&a4->hDevice;
  v6 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v7 = *(_OWORD *)&a4->Info.SynchronizationMutex.InitialState;
  v21 = 0LL;
  v24 = v5;
  v8 = *(_OWORD *)&a4->Info.Reserved.Reserved[2];
  v23 = a2;
  v25 = v7;
  v9 = *(_OWORD *)&a4->Info.Reserved.Reserved[4];
  LODWORD(v24) = a3;
  v26 = v8;
  v10 = *(_OWORD *)&a4->Info.Reserved.Reserved[6];
  v22 = 10;
  v27 = v9;
  v11 = *(_OWORD *)&a4->Info.SharedHandle;
  v20[0] = 32;
  v28 = v10;
  v29 = v11;
  VmBusSendSyncMessage(v6, (struct DXGKVMB_COMMAND *)&v21, 0x70u, v30, v20, v19);
  if ( v20[0] >= 0x20 && LODWORD(v30[0]) )
  {
    result = 0LL;
    v17 = v30[1];
    *(_OWORD *)a5 = v30[0];
    *((_OWORD *)a5 + 1) = v17;
  }
  else
  {
    v18 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v18 + 24) = -1073741823LL;
    WdLogEvent5_WdAssertion(v18);
    return 3221225473LL;
  }
  return result;
}
