/*
 * XREFs of ?VmBusSendSetRedirectedFlipFenceValue@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@_K@Z @ 0x1C0031730
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendSetRedirectedFlipFenceValue(
        DXGADAPTER *this,
        struct DXGPROCESS *a2,
        struct DXGSYNCOBJECT *a3,
        __int64 a4)
{
  int v4; // ebx
  unsigned int HostProcess; // eax
  struct VMBCHANNEL__ *v8; // rcx
  struct _MDL *v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  int v17; // [rsp+28h] [rbp-20h]
  unsigned int v18; // [rsp+2Ch] [rbp-1Ch]
  int v19; // [rsp+30h] [rbp-18h]
  __int64 v20; // [rsp+38h] [rbp-10h]

  v4 = *((_DWORD *)a3 + 19);
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v8 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v16 = 0LL;
  v17 = 44;
  v18 = HostProcess;
  v19 = v4;
  v20 = a4;
  v10 = VmBusSendSyncMessageStatusReturn(v8, (struct DXGKVMB_COMMAND *)&v16, 0x20u, v9);
  v13 = v10;
  if ( v10 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v14 + 24) = v13;
    WdLogEvent5_WdError(v14);
  }
  return (unsigned int)v13;
}
