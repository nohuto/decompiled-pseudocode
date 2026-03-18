/*
 * XREFs of ?VmBusSendSignalFenceNtSharedByRef@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x1C0031820
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C008A0B0 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ @ 0x1C0195AA4 (-GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendSignalFenceNtSharedByRef(
        DXGADAPTER *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        int a4,
        unsigned __int64 a5)
{
  DXGGLOBAL *Global; // rax
  struct VMBCHANNEL__ *VmBusChannel; // rax
  struct _MDL *v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  int v17; // [rsp+28h] [rbp-20h]
  unsigned int HostProcess; // [rsp+2Ch] [rbp-1Ch]
  int v19; // [rsp+30h] [rbp-18h]
  int v20; // [rsp+34h] [rbp-14h]
  unsigned __int64 v21; // [rsp+38h] [rbp-10h]

  v16 = 0LL;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v20 = *((_DWORD *)a3 + 7);
  v21 = a5;
  v17 = 33;
  v19 = a4;
  Global = DXGGLOBAL::GetGlobal();
  VmBusChannel = DXGGLOBAL::GetVmBusChannel(Global);
  v10 = VmBusSendSyncMessageStatusReturn(VmBusChannel, (struct DXGKVMB_COMMAND *)&v16, 0x20u, v9);
  v13 = v10;
  if ( v10 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v14 + 24) = v13;
    WdLogEvent5_WdError(v14);
  }
  return (unsigned int)v13;
}
