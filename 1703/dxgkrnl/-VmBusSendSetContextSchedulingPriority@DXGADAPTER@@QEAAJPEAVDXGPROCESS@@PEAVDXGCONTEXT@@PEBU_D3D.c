/*
 * XREFs of ?VmBusSendSetContextSchedulingPriority@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY@@@Z @ 0x1C00315F4
 * Callers:
 *     DxgkSetContextSchedulingPriority @ 0x1C00A4F10 (DxgkSetContextSchedulingPriority.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendSetContextSchedulingPriority(
        DXGADAPTER *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        const struct _D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *a4)
{
  unsigned int HostProcess; // eax
  struct VMBCHANNEL__ *v8; // rcx
  struct _MDL *v9; // r9
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  unsigned int v13; // [rsp+2Ch] [rbp-1Ch]
  __int64 v14; // [rsp+30h] [rbp-18h]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v11 = 0LL;
  v8 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v13 = HostProcess;
  v14 = (__int64)*a4;
  LODWORD(v14) = *((_DWORD *)a3 + 7);
  v12 = 39;
  return VmBusSendSyncMessageStatusReturn(v8, (struct DXGKVMB_COMMAND *)&v11, 0x18u, v9);
}
