/*
 * XREFs of ?VmBusSendMarkDeviceAsError@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x1C0030C90
 * Callers:
 *     DxgkMarkDeviceAsError @ 0x1C008B7C0 (DxgkMarkDeviceAsError.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendMarkDeviceAsError(
        DXGADAPTER *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        const struct _D3DKMT_MARKDEVICEASERROR *a4)
{
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
  __int64 v19; // [rsp+30h] [rbp-18h]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v8 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v16 = 0LL;
  v18 = HostProcess;
  v19 = (__int64)*a4;
  LODWORD(v19) = *((_DWORD *)a3 + 84);
  v17 = 35;
  v10 = VmBusSendSyncMessageStatusReturn(v8, (struct DXGKVMB_COMMAND *)&v16, 0x18u, v9);
  v13 = v10;
  if ( v10 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v14 + 24) = v13;
    WdLogEvent5_WdError(v14);
  }
  return (unsigned int)v13;
}
