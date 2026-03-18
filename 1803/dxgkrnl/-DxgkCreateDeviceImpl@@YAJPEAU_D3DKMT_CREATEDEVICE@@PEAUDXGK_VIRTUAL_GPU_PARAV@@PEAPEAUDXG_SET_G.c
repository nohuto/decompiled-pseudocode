/*
 * XREFs of ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00A8B9C
 * Callers:
 *     DxgkCreateDevice @ 0x1C00AAB70 (DxgkCreateDevice.c)
 *     DxgkCreateDeviceInternal @ 0x1C00DEF80 (DxgkCreateDeviceInternal.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017D9D0 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0032ED8 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00A5C30 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F51FC (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 */

__int64 __fastcall DxgkCreateDeviceImpl(
        struct _D3DKMT_CREATEDEVICE *a1,
        struct DXGK_VIRTUAL_GPU_PARAV *a2,
        struct DXG_SET_GUEST_DATA **a3,
        char a4)
{
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r13
  struct DXGADAPTER *v9; // rdx
  struct _D3DKMT_CREATEDEVICE *v10; // rax
  struct DXGADAPTER **v11; // r9
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGADAPTER *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r12
  DXGADAPTER *v19; // rbx
  struct DXGADAPTER *v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rbx
  _DWORD *v23; // rax
  struct DXGADAPTER *v24; // r12
  unsigned int v25; // eax
  _DWORD *p_hDevice; // rdx
  __int64 v27; // r15
  char *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  int PairingAdapters; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  struct _KEVENT *v38; // rbx
  __int64 v39; // rcx
  KSPIN_LOCK *Global; // rax
  int v41; // [rsp+50h] [rbp-148h] BYREF
  __int64 v42; // [rsp+58h] [rbp-140h]
  struct DXGADAPTER *v43; // [rsp+60h] [rbp-138h] BYREF
  struct DXGADAPTER *v44; // [rsp+68h] [rbp-130h] BYREF
  struct DXGADAPTER *v45; // [rsp+70h] [rbp-128h] BYREF
  struct DXGADAPTER *v46; // [rsp+78h] [rbp-120h]
  __int64 v47; // [rsp+80h] [rbp-118h]
  DXGADAPTER *v48; // [rsp+88h] [rbp-110h] BYREF
  unsigned __int64 v49; // [rsp+A0h] [rbp-F8h] BYREF
  char *v50; // [rsp+A8h] [rbp-F0h]
  __int64 v51[2]; // [rsp+B0h] [rbp-E8h] BYREF
  struct DXGPROCESS *v52; // [rsp+C0h] [rbp-D8h]
  unsigned int v53[4]; // [rsp+D0h] [rbp-C8h]
  __int128 v54; // [rsp+E0h] [rbp-B8h]
  __int128 v55; // [rsp+F0h] [rbp-A8h]
  __int128 v56; // [rsp+100h] [rbp-98h]
  unsigned __int64 v57; // [rsp+110h] [rbp-88h] BYREF
  _BYTE v58[120]; // [rsp+120h] [rbp-78h] BYREF

  v42 = 0LL;
  v41 = 2009;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2009);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 2009);
  Current = DXGPROCESS::GetCurrent();
  v52 = Current;
  if ( Current )
  {
    if ( a2 )
      v9 = (struct DXGADAPTER *)*((_QWORD *)a2 + 2);
    else
      v9 = 0LL;
    v45 = v9;
    if ( a4 )
    {
      v10 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v10 = (struct _D3DKMT_CREATEDEVICE *)MmUserProbeAddress;
      *(_OWORD *)v53 = *(_OWORD *)&v10->hAdapter;
      v54 = *(_OWORD *)&v10->pCommandBuffer;
      v55 = *(_OWORD *)&v10->pAllocationList;
      v56 = *(_OWORD *)&v10->pPatchLocationList;
    }
    else
    {
      *(_OWORD *)v53 = *(_OWORD *)&a1->hAdapter;
      v54 = *(_OWORD *)&a1->pCommandBuffer;
      v55 = *(_OWORD *)&a1->pAllocationList;
      v56 = *(_OWORD *)&a1->pPatchLocationList;
    }
    v11 = &v45;
    if ( v9 )
      v11 = 0LL;
    v12 = v53[0];
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v48, v53[0], (struct _KTHREAD **)Current, v11);
    v16 = v45;
    if ( v45 )
    {
      if ( (int)DxgkpGetPairingAdapters(v45, 0, &v43, &v49, &v44, &v57) >= 0
        || (v44 = 0LL,
            PairingAdapters = DxgkpGetPairingAdapters(v16, 0, &v43, &v49, 0LL, 0LL),
            v22 = PairingAdapters,
            PairingAdapters >= 0) )
      {
        if ( !v43 || !*((_QWORD *)v43 + 308) )
        {
          v36 = WdLogNewEntry5_WdAssertion(v17);
          *(_QWORD *)(v36 + 24) = 1968LL;
          WdLogEvent5_WdAssertion(v36);
        }
        if ( v44 && !*((_QWORD *)v44 + 307) )
        {
          v37 = WdLogNewEntry5_WdAssertion(v17);
          *(_QWORD *)(v37 + 24) = 1970LL;
          WdLogEvent5_WdAssertion(v37);
        }
        v50 = (char *)Current + 168;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)Current + 168, 0LL);
        *((_QWORD *)Current + 22) = KeGetCurrentThread();
        v46 = v43;
        v47 = *((_QWORD *)v43 + 308);
        v51[1] = v47;
        v18 = v47 + 24;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v18, 0LL);
        *(_QWORD *)(v18 + 8) = KeGetCurrentThread();
        v19 = v44;
        v20 = v43;
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v58, v43, v44);
        DXGADAPTER::ReleaseReferenceNoTracking(v20);
        if ( v19 )
          DXGADAPTER::ReleaseReferenceNoTracking(v19);
        LODWORD(v22) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v58);
        if ( (int)v22 < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
          *(_QWORD *)(v18 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v18, 0LL);
          KeLeaveCriticalRegion();
          v28 = v50;
        }
        else
        {
          if ( !*((_BYTE *)v20 + 185)
            && *((_BYTE *)DXGGLOBAL::GetGlobal(v21) + 545)
            && (LODWORD(v23) = DXGADAPTER::GetAdapterType(v20), (*v23 & 0x10) != 0) )
          {
            v24 = v46;
            v38 = (struct _KEVENT *)_guard_dispatch_icall_fptr();
            Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v39);
            DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v38);
            *((_BYTE *)v20 + 182) = 1;
          }
          else
          {
            v24 = v46;
          }
          if ( v20 == v44 )
            v25 = (v53[2] >> 1) & 1;
          else
            LOBYTE(v25) = 0;
          LODWORD(v22) = ADAPTER_RENDER::CreateDevice(
                           *((DXGADAPTER ***)v24 + 308),
                           v51,
                           v53[2],
                           (v53[2] & 1) == 0,
                           v44,
                           v25,
                           (v53[2] & 4) != 0,
                           (__int64)a2,
                           (__int64)a3);
          if ( (int)v22 < 0 )
          {
            v27 = v47;
          }
          else
          {
            p_hDevice = &a1->hDevice;
            if ( a4 && (unsigned __int64)p_hDevice >= MmUserProbeAddress )
              p_hDevice = (_DWORD *)MmUserProbeAddress;
            *p_hDevice = *(_DWORD *)(v51[0] + 332);
            v27 = v47;
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
          *(_QWORD *)(v27 + 32) = 0LL;
          ExReleasePushLockExclusiveEx(v27 + 24, 0LL);
          KeLeaveCriticalRegion();
          v28 = (char *)v52 + 168;
        }
        *((_QWORD *)v28 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v28, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v35 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v35 + 24) = v12;
        *(_QWORD *)(v35 + 32) = v22;
        WdLogEvent5_WdError(v35);
      }
    }
    else
    {
      v34 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v34 + 24) = v12;
      LODWORD(v22) = -1073741811;
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v34);
    }
    if ( v48 )
      DXGADAPTER::ReleaseReferenceNoTracking(v48);
  }
  else
  {
    v33 = WdLogNewEntry5_WdError(v7);
    LODWORD(v22) = -1073741811;
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v33);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v41);
  return (unsigned int)v22;
}
