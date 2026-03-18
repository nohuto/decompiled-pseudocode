/*
 * XREFs of ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0097778
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z @ 0x1C00A1870 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A35C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01D5160 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C01DDC6C (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0016B88 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00FA230 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?MapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAJ_K@Z @ 0x1C017B234 (-MapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAJ_K@Z.c)
 *     ?VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1C018263C (-VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONO.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C01C1498 (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
 */

__int64 __fastcall CreateSynchronizationObjectInternal(
        struct DXGDEVICE *a1,
        char a2,
        DXGADAPTER **a3,
        struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a4,
        struct DXGSYNCOBJECT **a5,
        struct DXGDEVICESYNCOBJECT **a6,
        struct DXGADAPTERSYNCOBJECT **a7)
{
  struct DXGDEVICE *v9; // rsi
  __int64 v10; // rax
  struct DXGSYNCOBJECT **v11; // r12
  D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *p_Info; // r15
  UINT EngineAffinity; // r14d
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type; // edx
  PERESOURCE *Global; // rax
  __int64 v16; // rcx
  DXGGLOBAL *v17; // rax
  __int64 v18; // rbx
  struct DXGSYNCOBJECT *v19; // r14
  DXGADAPTER *v20; // rcx
  unsigned int HostProcess; // r12d
  __int64 v22; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  PVOID v28; // rax
  unsigned int v29; // r8d
  int SyncObject; // eax
  __int64 v31; // rcx
  struct DXGDEVICESYNCOBJECT *v32; // rsi
  D3DGPU_VIRTUAL_ADDRESS v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  UINT64 v37; // rax
  unsigned int v39[2]; // [rsp+60h] [rbp-20h] BYREF
  D3DGPU_VIRTUAL_ADDRESS v40; // [rsp+68h] [rbp-18h]
  unsigned __int64 v41; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF
  POBJECT_HANDLE_INFORMATION v43; // [rsp+C8h] [rbp+48h]

  LOBYTE(v43) = a2;
  v9 = a1;
  if ( a1 && !DXGADAPTER::IsCoreResourceSharedOwner(a3[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v10 + 24) = 34LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = a5;
  p_Info = &a4->Info;
  LODWORD(a5) = 0;
  EngineAffinity = 0;
  Object = 0LL;
  *v11 = 0LL;
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
  a1 = (struct DXGDEVICE *)*(unsigned int *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL) + 248LL);
  if ( (_DWORD)a1 == 1 )
    EngineAffinity = 1;
  if ( EngineAffinity >= 1 << (char)a1 )
    EngineAffinity = (1 << (char)a1) - 1;
  if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
    a4->Info.Flags.Value |= 0x17u;
LABEL_14:
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)a1);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v39, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v39);
  v17 = DXGGLOBAL::GetGlobal(v16);
  LODWORD(v18) = DXGGLOBAL::CreateSyncObject(
                   v17,
                   (struct ADAPTER_RENDER *)a3,
                   v9,
                   EngineAffinity,
                   &a4->Info,
                   (bool)v43,
                   0LL,
                   (struct DXGSYNCOBJECT **)&Object,
                   a6,
                   (unsigned int *)((unsigned __int64)&a5 & -(__int64)(v9 != 0LL)),
                   a7);
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v39);
  if ( (int)v18 >= 0 )
  {
    v19 = (struct DXGSYNCOBJECT *)Object;
    a4->hSyncObject = (unsigned int)a5;
    a4->Info.SharedHandle = *((_DWORD *)v19 + 18);
    *v11 = v19;
    v20 = a3[2];
    if ( *((_BYTE *)v20 + 185) )
    {
      if ( v9 )
        HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)v9 + 5));
      else
        HostProcess = 0;
      if ( !HostProcess && v9 )
      {
        v22 = WdLogNewEntry5_WdError(v20);
        v18 = -1073741823LL;
LABEL_31:
        *(_QWORD *)(v22 + 24) = v18;
        WdLogEvent5_WdError(v22);
        return (unsigned int)v18;
      }
      if ( p_Info->Type == D3DDDI_CPU_NOTIFICATION )
      {
        v23 = ObReferenceObjectByHandle(
                a4->Info.CPUNotification.Event,
                0x1F0003u,
                (POBJECT_TYPE)ExEventObjectType,
                1,
                &Object,
                0LL);
        v18 = v23;
        if ( v23 < 0 )
        {
          v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
          *(_QWORD *)(v27 + 24) = v18;
          WdLogEvent5_WdWarning(v27);
          return (unsigned int)v18;
        }
        v28 = Object;
        *((_QWORD *)v19 + 10) = Object;
        a4->Info.Fence.FenceValue = (UINT64)v28;
      }
      if ( v9 )
        v29 = *((_DWORD *)v9 + 84);
      else
        v29 = 0;
      SyncObject = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateSyncObject(
                     (DXGADAPTER *)((char *)a3[2] + 4080),
                     HostProcess,
                     v29,
                     a4,
                     (struct DXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN *)v39);
      v18 = SyncObject;
      if ( SyncObject < 0 )
      {
        v22 = WdLogNewEntry5_WdError(v31);
        *(_QWORD *)(v22 + 32) = 152LL;
        goto LABEL_31;
      }
      if ( (unsigned int)(p_Info->Type - 5) <= 1 )
      {
        v32 = *a6;
        *((_DWORD *)v32 + 11) = v39[0];
        v33 = v40;
        *((_QWORD *)v32 + 6) = v40;
        if ( p_Info->Type == D3DDDI_MONITORED_FENCE )
          a4->Info.MonitoredFence.FenceValueGPUVirtualAddress = v33;
        else
          a4->Info.PeriodicMonitoredFence.FenceValueGPUVirtualAddress = v33;
        v34 = DXGDEVICESYNCOBJECT::MapCpuVaForParavirtualization(v32, v41);
        v18 = v34;
        if ( v34 >= 0 )
        {
          v37 = *((_QWORD *)v32 + 7);
          if ( p_Info->Type == D3DDDI_MONITORED_FENCE )
            a4->Info.PeriodicMonitoredFence.Time = v37;
          else
            a4->Info.MonitoredFence.FenceValueGPUVirtualAddress = v37;
        }
        else
        {
          v36 = WdLogNewEntry5_WdError(v35);
          *(_QWORD *)(v36 + 24) = v18;
          *(_QWORD *)(v36 + 32) = 177LL;
          WdLogEvent5_WdError(v36);
        }
      }
      else if ( v39[0] )
      {
        LODWORD(v18) = DXGSYNCOBJECT::SetHostHandle(v19, (unsigned int)a5, v39[0]);
      }
      if ( (*((_BYTE *)v19 + 172) & 1) != 0 )
        *((_DWORD *)v19 + 19) = v39[1];
    }
  }
  return (unsigned int)v18;
}
