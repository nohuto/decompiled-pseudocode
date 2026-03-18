/*
 * XREFs of ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IIIPEAI2@Z @ 0x1C0197208
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C009554C (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00958D4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int HostProcess; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned int v16; // ebx
  unsigned int *v17; // rdi
  struct VMBCHANNEL__ *v18; // rcx
  unsigned int *v19; // rcx
  int v20; // ebx
  signed __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  struct _MDL *v24; // [rsp+28h] [rbp-38h]
  __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-28h]
  int v27; // [rsp+3Ch] [rbp-24h]
  int v28; // [rsp+40h] [rbp-20h]
  int v29; // [rsp+48h] [rbp-18h]
  int v30; // [rsp+4Ch] [rbp-14h]
  unsigned int v31; // [rsp+50h] [rbp-10h]
  unsigned int v32; // [rsp+54h] [rbp-Ch]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v13 = a5;
  v25 = 0LL;
  v27 = 0;
  v26 = HostProcess;
  v29 = *((_DWORD *)a3 + 84);
  v32 = a6;
  v28 = 32;
  v30 = a4;
  v31 = a5;
  if ( a5 >= 0x8000 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v14 + 24) = 4903LL;
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
  v16 = (4 * a5 + 15) & 0xFFFFFFF8;
  v17 = (unsigned int *)operator new(v16, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v17 )
    return 3221225495LL;
  v18 = *this;
  a5 = (4 * v13 + 15) & 0xFFFFFFF8;
  VmBusSendSyncMessage(v18, (struct DXGKVMB_COMMAND_BASE *)&v25, 0x28u, v17, &a5, v24);
  if ( a5 < v16 )
  {
    v20 = -1073741823;
  }
  else
  {
    v20 = v17[1];
    if ( v20 < 0 )
    {
LABEL_13:
      v23 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v23 + 24) = 4938LL;
      WdLogEvent5_WdError(v23);
      goto LABEL_14;
    }
    v19 = (unsigned int *)*v17;
    *a7 = (unsigned int)v19;
    if ( (_DWORD)v13 )
    {
      v19 = a8;
      v21 = (char *)v17 - (char *)a8;
      v22 = v13;
      do
      {
        *v19 = *(unsigned int *)((char *)v19 + v21 + 8);
        ++v19;
        --v22;
      }
      while ( v22 );
    }
  }
  if ( v20 < 0 )
    goto LABEL_13;
LABEL_14:
  ExFreePoolWithTag(v17, 0);
  return (unsigned int)v20;
}
