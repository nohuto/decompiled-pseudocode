/*
 * XREFs of ?VmBusSendSignalFenceNtShared@@YAJI_K@Z @ 0x1C00317B8
 * Callers:
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KI@Z @ 0x1C008B578 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KI@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ @ 0x1C0195AA4 (-GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ.c)
 */

__int64 __fastcall VmBusSendSignalFenceNtShared(int a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax
  struct VMBCHANNEL__ *VmBusChannel; // rax
  struct _MDL *v4; // r9
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+38h] [rbp-10h]

  v11[0] = 0LL;
  v11[1] = 32LL;
  v12 = a1;
  v13 = a2;
  Global = DXGGLOBAL::GetGlobal();
  VmBusChannel = DXGGLOBAL::GetVmBusChannel(Global);
  v5 = VmBusSendSyncMessageStatusReturn(VmBusChannel, (struct DXGKVMB_COMMAND *)v11, 0x20u, v4);
  v8 = v5;
  if ( v5 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
  }
  return (unsigned int)v8;
}
