/*
 * XREFs of ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C007A948
 * Callers:
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00A2270 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0111244 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01CE448 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C01D5AC0 (-InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C00032B8 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C008BE80 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?MapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAJ_K@Z @ 0x1C018FF08 (-MapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAJ_K@Z.c)
 *     ?VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1C0195E5C (-VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONO.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C01C0208 (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
 */

__int64 __fastcall CreateSynchronizationObjectInternal(
        struct DXGDEVICE *a1,
        bool a2,
        DXGADAPTER **a3,
        struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a4,
        struct DXGSYNCOBJECT **a5,
        struct DXGDEVICESYNCOBJECT **a6,
        struct DXGADAPTERSYNCOBJECT **a7)
{
  struct DXGDEVICE *v10; // rsi
  __int64 v11; // rax
  D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *p_Info; // r15
  unsigned int v13; // r14d
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type; // edx
  UINT EngineAffinity; // r8d
  struct DXGGLOBAL *Global; // rax
  __int64 v17; // rcx
  DXGGLOBAL *v18; // rax
  __int64 v19; // rbx
  DXGSYNCOBJECT *v20; // r14
  struct DXGSYNCOBJECT **v21; // rax
  unsigned int v22; // r12d
  unsigned int HostProcess; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  int SyncObject; // eax
  __int64 v27; // rcx
  struct DXGDEVICESYNCOBJECT *v28; // rsi
  D3DGPU_VIRTUAL_ADDRESS v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  UINT64 v33; // rax
  unsigned int v35[2]; // [rsp+60h] [rbp-20h] BYREF
  D3DGPU_VIRTUAL_ADDRESS v36; // [rsp+68h] [rbp-18h]
  unsigned __int64 v37; // [rsp+70h] [rbp-10h]
  unsigned int v38; // [rsp+C0h] [rbp+40h] BYREF
  DXGSYNCOBJECT *v39; // [rsp+D8h] [rbp+58h] BYREF

  v10 = a1;
  if ( a1 && !DXGADAPTER::IsCoreResourceSharedOwner(a3[2]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v11 + 24) = 34LL;
    WdLogEvent5_WdAssertion(v11);
  }
  p_Info = &a4->Info;
  v38 = 0;
  v13 = 0;
  v39 = 0LL;
  *a5 = 0LL;
  Type = a4->Info.Type;
  if ( Type == D3DDDI_MONITORED_FENCE )
  {
    EngineAffinity = a4->Info.MonitoredFence.EngineAffinity;
  }
  else
  {
    if ( Type != D3DDDI_PERIODIC_MONITORED_FENCE )
      goto LABEL_14;
    EngineAffinity = a4->Info.PeriodicMonitoredFence.EngineAffinity;
  }
  a1 = (struct DXGDEVICE *)*(unsigned int *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 248LL);
  if ( (_DWORD)a1 == 1 )
    EngineAffinity = 1;
  v13 = (1 << (char)a1) - 1;
  if ( EngineAffinity < 1 << (char)a1 )
    v13 = EngineAffinity;
  if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
    a4->Info.Flags.Value |= 0x17u;
LABEL_14:
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v35, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v35);
  v18 = DXGGLOBAL::GetGlobal(v17);
  LODWORD(v19) = DXGGLOBAL::CreateSyncObject(
                   v18,
                   (struct ADAPTER_RENDER *)a3,
                   v10,
                   v13,
                   &a4->Info,
                   a2,
                   0LL,
                   &v39,
                   a6,
                   (unsigned int *)((unsigned __int64)&v38 & -(__int64)(v10 != 0LL)),
                   a7);
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v35);
  if ( (int)v19 >= 0 )
  {
    v20 = v39;
    v21 = a5;
    v22 = v38;
    a4->hSyncObject = v38;
    a4->Info.SharedHandle = *((_DWORD *)v20 + 18);
    *v21 = v20;
    if ( *((_BYTE *)a3[2] + 185) )
    {
      if ( v10 )
      {
        HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)v10 + 5));
        if ( !HostProcess )
        {
          v25 = WdLogNewEntry5_WdError(v24);
          v19 = -1073741823LL;
LABEL_21:
          *(_QWORD *)(v25 + 24) = v19;
          WdLogEvent5_WdError(v25);
          return (unsigned int)v19;
        }
        SyncObject = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateSyncObject(
                       (DXGADAPTER *)((char *)a3[2] + 3888),
                       HostProcess,
                       *((_DWORD *)v10 + 84),
                       a4,
                       (struct DXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN *)v35);
        v19 = SyncObject;
        if ( SyncObject < 0 )
        {
          v25 = WdLogNewEntry5_WdError(v27);
          *(_QWORD *)(v25 + 32) = 120LL;
          goto LABEL_21;
        }
        if ( (unsigned int)(p_Info->Type - 5) <= 1 )
        {
          v28 = *a6;
          *((_DWORD *)v28 + 11) = v35[0];
          v29 = v36;
          *((_QWORD *)v28 + 6) = v36;
          if ( p_Info->Type == D3DDDI_MONITORED_FENCE )
            a4->Info.MonitoredFence.FenceValueGPUVirtualAddress = v29;
          else
            a4->Info.PeriodicMonitoredFence.FenceValueGPUVirtualAddress = v29;
          v30 = DXGDEVICESYNCOBJECT::MapCpuVaForParavirtualization(v28, v37);
          v19 = v30;
          if ( v30 >= 0 )
          {
            v33 = *((_QWORD *)v28 + 7);
            if ( p_Info->Type == D3DDDI_MONITORED_FENCE )
              a4->Info.PeriodicMonitoredFence.Time = v33;
            else
              a4->Info.MonitoredFence.FenceValueGPUVirtualAddress = v33;
          }
          else
          {
            v32 = WdLogNewEntry5_WdError(v31);
            *(_QWORD *)(v32 + 24) = v19;
            *(_QWORD *)(v32 + 32) = 145LL;
            WdLogEvent5_WdError(v32);
          }
        }
        else
        {
          LODWORD(v19) = DXGSYNCOBJECT::SetHostHandle(v20, v22, v35[0]);
        }
        if ( (*((_BYTE *)v20 + 164) & 1) != 0 )
          *((_DWORD *)v20 + 19) = v35[1];
      }
    }
  }
  return (unsigned int)v19;
}
