/*
 * XREFs of ?VmBusSendOpenResource@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IIIPEAI2@Z @ 0x1C0030DB0
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00FDB80 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0100160 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 * Callees:
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendOpenResource(
        DXGADAPTER *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int HostProcess; // eax
  __int64 v12; // rsi
  unsigned int v13; // ebx
  unsigned int v14; // edx
  unsigned int *v15; // rdi
  struct VMBCHANNEL__ *v17; // rcx
  signed __int64 v18; // rdx
  unsigned int *v19; // rcx
  int v20; // ebx
  __int64 v21; // r8
  __int64 v22; // rax
  struct _MDL *v23; // [rsp+28h] [rbp-30h]
  __int64 v24; // [rsp+30h] [rbp-28h] BYREF
  int v25; // [rsp+38h] [rbp-20h]
  unsigned int v26; // [rsp+3Ch] [rbp-1Ch]
  int v27; // [rsp+40h] [rbp-18h]
  int v28; // [rsp+44h] [rbp-14h]
  unsigned int v29; // [rsp+48h] [rbp-10h]
  unsigned int v30; // [rsp+4Ch] [rbp-Ch]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v12 = a5;
  v24 = 0LL;
  v26 = HostProcess;
  v27 = *((_DWORD *)a3 + 84);
  v13 = (4 * a5 + 15) & 0xFFFFFFF8;
  v25 = 38;
  v28 = a4;
  v29 = a5;
  v30 = a6;
  v15 = (unsigned int *)operator new(v13, v14, 1, (enum _POOL_TYPE)512);
  if ( !v15 )
    return 3221225495LL;
  v17 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  a5 = v13;
  VmBusSendSyncMessage(v17, (struct DXGKVMB_COMMAND *)&v24, 0x20u, v15, &a5, v23);
  if ( a5 < v13 )
  {
    v20 = -1073741823;
  }
  else
  {
    v20 = v15[1];
    if ( v20 < 0 )
    {
LABEL_11:
      v22 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v22 + 24) = 3318LL;
      WdLogEvent5_WdError(v22);
      goto LABEL_12;
    }
    v19 = (unsigned int *)*v15;
    *a7 = (unsigned int)v19;
    if ( (_DWORD)v12 )
    {
      v19 = a8;
      v18 = (char *)v15 - (char *)a8;
      v21 = v12;
      do
      {
        *v19 = *(unsigned int *)((char *)v19 + v18 + 8);
        ++v19;
        --v21;
      }
      while ( v21 );
    }
  }
  if ( v20 < 0 )
    goto LABEL_11;
LABEL_12:
  operator delete[](v15);
  return (unsigned int)v20;
}
