/*
 * XREFs of ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00881D8
 * Callers:
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00FC810 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C010A22C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4C30 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C01BD40C (-InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0006F78 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006FB8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0007000 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?MapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAJ_K@Z @ 0x1C002A5EC (-MapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAJ_K@Z.c)
 *     ?VmBusSendCreateSyncObject@DXGADAPTER@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1C002F8A8 (-VmBusSendCreateSyncObject@DXGADAPTER@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAUDXGK.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00D7AB0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  struct DXGSYNCOBJECT **v15; // r12
  D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *p_Info; // r15
  UINT EngineAffinity; // esi
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type; // edx
  int v19; // ecx
  struct DXGGLOBAL *Global; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  DXGGLOBAL *v23; // rax
  __int64 v24; // rbx
  struct DXGSYNCOBJECT *v25; // rsi
  int HostProcess; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  int SyncObject; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct DXGDEVICESYNCOBJECT *v33; // rsi
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  UINT64 v37; // rax
  int v39; // [rsp+60h] [rbp-20h] BYREF
  D3DGPU_VIRTUAL_ADDRESS v40; // [rsp+68h] [rbp-18h]
  unsigned __int64 v41; // [rsp+70h] [rbp-10h]
  struct DXGSYNCOBJECT *v42; // [rsp+C0h] [rbp+40h] BYREF
  bool v43; // [rsp+C8h] [rbp+48h]

  v43 = a2;
  if ( a1 && !DXGADAPTER::IsCoreResourceSharedOwner(a3[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = 34LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = a5;
  p_Info = &a4->Info;
  LODWORD(a5) = 0;
  v42 = 0LL;
  EngineAffinity = 0;
  *v15 = 0LL;
  Type = a4->Info.Type;
  if ( (unsigned int)(Type - 5) <= 1 )
  {
    if ( Type == D3DDDI_MONITORED_FENCE )
      EngineAffinity = a4->Info.MonitoredFence.EngineAffinity;
    else
      EngineAffinity = a4->Info.PeriodicMonitoredFence.EngineAffinity;
    v19 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 248LL);
    if ( v19 == 1 )
      EngineAffinity = 1;
    if ( EngineAffinity >= 1 << v19 )
      EngineAffinity = (1 << v19) - 1;
  }
  if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
    a4->Info.Flags.Value |= 0x17u;
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v39, Global, v21, v22);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v39);
  v23 = DXGGLOBAL::GetGlobal();
  LODWORD(v24) = DXGGLOBAL::CreateSyncObject(
                   v23,
                   (struct ADAPTER_RENDER *)a3,
                   a1,
                   EngineAffinity,
                   &a4->Info,
                   v43,
                   0LL,
                   &v42,
                   a6,
                   (unsigned int *)((unsigned __int64)&a5 & -(__int64)(a1 != 0LL)),
                   a7);
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v39);
  if ( (int)v24 >= 0 )
  {
    v25 = v42;
    a4->hSyncObject = (unsigned int)a5;
    a4->Info.SharedHandle = *((_DWORD *)v25 + 18);
    *v15 = v25;
    if ( *((_BYTE *)a3[2] + 186) )
    {
      if ( a1 )
      {
        HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)a1 + 5));
        if ( !HostProcess )
        {
          v29 = WdLogNewEntry5_WdError(v28, v27);
          v24 = -1073741823LL;
LABEL_27:
          *(_QWORD *)(v29 + 24) = v24;
          WdLogEvent5_WdError(v29);
          return (unsigned int)v24;
        }
        SyncObject = DXGADAPTER::VmBusSendCreateSyncObject(
                       a3[2],
                       HostProcess,
                       *((_DWORD *)a1 + 84),
                       a4,
                       (struct DXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN *)&v39);
        v24 = SyncObject;
        if ( SyncObject < 0 )
        {
          v29 = WdLogNewEntry5_WdError(v32, v31);
          *(_QWORD *)(v29 + 32) = 121LL;
          goto LABEL_27;
        }
        *((_DWORD *)v25 + 19) = v39;
        if ( (unsigned int)(p_Info->Type - 5) <= 1 )
        {
          v33 = *a6;
          if ( p_Info->Type == D3DDDI_MONITORED_FENCE )
            a4->Info.MonitoredFence.FenceValueGPUVirtualAddress = v40;
          else
            a4->Info.PeriodicMonitoredFence.FenceValueGPUVirtualAddress = v40;
          v34 = DXGDEVICESYNCOBJECT::MapCpuVaForParavirtualization(v33, v41);
          v24 = v34;
          if ( v34 < 0 )
          {
            v29 = WdLogNewEntry5_WdError(v36, v35);
            *(_QWORD *)(v29 + 32) = 145LL;
            goto LABEL_27;
          }
          v37 = *((_QWORD *)v33 + 7);
          if ( p_Info->Type == D3DDDI_MONITORED_FENCE )
            a4->Info.PeriodicMonitoredFence.Time = v37;
          else
            a4->Info.MonitoredFence.FenceValueGPUVirtualAddress = v37;
        }
      }
    }
  }
  return (unsigned int)v24;
}
