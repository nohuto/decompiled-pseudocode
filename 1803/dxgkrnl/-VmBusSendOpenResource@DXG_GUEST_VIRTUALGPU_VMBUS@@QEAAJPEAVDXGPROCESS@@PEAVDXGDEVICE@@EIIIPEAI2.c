/*
 * XREFs of ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1C0183C18
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00E9838 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00E9BB8 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int *a8,
        unsigned int *a9)
{
  unsigned int HostProcess; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned int v17; // esi
  unsigned int *v18; // rdi
  struct VMBCHANNEL__ *v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  unsigned int *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  struct _MDL *v26; // [rsp+28h] [rbp-38h]
  __int64 v27; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-28h]
  int v29; // [rsp+3Ch] [rbp-24h]
  int v30; // [rsp+40h] [rbp-20h]
  int v31; // [rsp+48h] [rbp-18h]
  char v32; // [rsp+4Ch] [rbp-14h]
  unsigned int v33; // [rsp+50h] [rbp-10h]
  unsigned int v34; // [rsp+54h] [rbp-Ch]
  unsigned int v35; // [rsp+58h] [rbp-8h]
  unsigned int v36; // [rsp+98h] [rbp+38h] BYREF

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v14 = a6;
  v27 = 0LL;
  v29 = 0;
  v28 = HostProcess;
  v31 = *((_DWORD *)a3 + 84);
  v33 = a5;
  v35 = a7;
  v30 = 32;
  v32 = a4;
  v34 = a6;
  if ( a6 < 0x8000 )
  {
    v17 = (4 * a6 + 15) & 0xFFFFFFF8;
    v18 = (unsigned int *)operator new(v17, 0x4B677844u, 1, (POOL_TYPE)512);
    if ( v18 )
    {
      v19 = *this;
      v36 = (4 * v14 + 15) & 0xFFFFFFF8;
      v21 = VmBusSendSyncMessage(v19, (struct DXGKVMB_COMMAND_BASE *)&v27, 0x30u, v18, &v36, v26);
      if ( v21 < 0 || (v21 = -1073741823, v36 < v17) || (v21 = v18[1], v21 < 0) )
      {
        v25 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v25 + 24) = v21;
        WdLogEvent5_WdError(v25);
      }
      else
      {
        *a8 = *v18;
        if ( (_DWORD)v14 )
        {
          v22 = a9;
          v23 = v14;
          v24 = (char *)(v18 + 2) - (char *)a9;
          do
          {
            *v22 = *(unsigned int *)((char *)v22 + v24);
            ++v22;
            --v23;
          }
          while ( v23 );
        }
      }
      operator delete[](v18);
      return (unsigned int)v21;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v15 + 24) = 5625LL;
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
}
