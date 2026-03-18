/*
 * XREFs of ?VmBusSendSubmitPresentHistoryToken@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@@Z @ 0x1C0032180
 * Callers:
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00BDE10 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendSubmitPresentHistoryToken(
        __int64 a1,
        DXGPROCESS *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int HostProcess; // eax
  struct VMBCHANNEL__ *v11; // rcx
  struct _MDL *v12; // r9
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  int v15; // [rsp+28h] [rbp-40h]
  unsigned int v16; // [rsp+2Ch] [rbp-3Ch]
  int v17; // [rsp+30h] [rbp-38h]
  __int64 v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+40h] [rbp-28h]
  __int64 v20; // [rsp+48h] [rbp-20h]
  __int64 v21; // [rsp+50h] [rbp-18h]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v14 = 0LL;
  v11 = *(struct VMBCHANNEL__ **)(a1 + 3872);
  v16 = HostProcess;
  v17 = *(_DWORD *)(a3 + 28);
  v20 = a7;
  v19 = a6;
  v18 = a5;
  v15 = 40;
  v21 = a4;
  return VmBusSendSyncMessageStatusReturn(v11, (struct DXGKVMB_COMMAND *)&v14, 0x38u, v12);
}
