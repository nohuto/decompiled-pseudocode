/*
 * XREFs of ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C00F9970
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

void __fastcall DxgkSharedSyncObjectObDeleteProcedure(struct DXGSYNCOBJECT **a1)
{
  PERESOURCE *v2; // rax
  struct DXGGLOBAL *Global; // rax
  int v4; // edx
  struct VMBCHANNEL__ **v5; // rcx
  struct VMBCHANNEL__ *v6; // rcx
  struct _MDL *v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+3Ch] [rbp-1Ch]
  int v11; // [rsp+40h] [rbp-18h]
  int v12; // [rsp+48h] [rbp-10h]

  if ( *((_DWORD *)a1 + 2) )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    v4 = *((_DWORD *)a1 + 2);
    v8 = 0LL;
    v9 = 0;
    v5 = (struct VMBCHANNEL__ **)*((_QWORD *)Global + 142);
    v12 = v4;
    v10 = 1;
    v6 = *v5;
    v11 = 53;
    VmBusSendSyncMessage(v6, (struct DXGKVMB_COMMAND_BASE *)&v8, 0x20u, 0LL, 0LL, v7);
  }
  v2 = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)a1);
  DXGGLOBAL::DestroySyncObject(v2, *a1, 0);
}
