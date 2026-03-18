/*
 * XREFs of ?VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGSYNCOBJECT@@@Z @ 0x1C019886C
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C00CD300 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0198BC8 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitPresentHistoryToken(
        struct VMBCHANNEL__ **a1,
        DXGPROCESS *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int HostProcess; // eax
  struct _MDL *v12; // r9
  int v13; // edx
  int v14; // eax
  struct VMBCHANNEL__ *v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-50h]
  int v19; // [rsp+2Ch] [rbp-4Ch]
  int v20; // [rsp+30h] [rbp-48h]
  int v21; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-38h]
  __int64 v23; // [rsp+48h] [rbp-30h]
  __int64 v24; // [rsp+50h] [rbp-28h]
  __int64 v25; // [rsp+58h] [rbp-20h]
  int v26; // [rsp+60h] [rbp-18h]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v13 = 0;
  v18 = HostProcess;
  v17 = 0LL;
  v19 = 0;
  v20 = 34;
  if ( a3 )
    v14 = *(_DWORD *)(a3 + 28);
  else
    v14 = 0;
  v21 = v14;
  v24 = a7;
  v23 = a6;
  v22 = a5;
  v25 = a4;
  if ( a8 )
    v13 = *(_DWORD *)(a8 + 76);
  v15 = *a1;
  v26 = v13;
  return VmBusSendSyncMessageStatusReturn(v15, (struct DXGKVMB_COMMAND_BASE *)&v17, 0x48u, v12);
}
