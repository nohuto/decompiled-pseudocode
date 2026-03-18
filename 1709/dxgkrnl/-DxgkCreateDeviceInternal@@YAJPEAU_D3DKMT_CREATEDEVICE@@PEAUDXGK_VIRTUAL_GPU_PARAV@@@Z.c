/*
 * XREFs of ?DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00B5930
 * Callers:
 *     DxgkCreateDevice @ 0x1C00B5D80 (DxgkCreateDevice.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0191DA0 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0028464 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00830DC (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0084D8C (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkCreateDeviceInternal(
        struct _D3DKMT_CREATEDEVICE *a1,
        struct DXGK_VIRTUAL_GPU_PARAV *a2,
        __int64 a3)
{
  bool v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // r13
  struct DXGADAPTER *v10; // rdx
  struct _D3DKMT_CREATEDEVICE *v11; // rax
  struct DXGADAPTER **v12; // r9
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGADAPTER *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r12
  DXGADAPTER *v20; // rbx
  struct DXGADAPTER *v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rbx
  struct DXGADAPTER *v24; // r12
  unsigned int v25; // eax
  D3DKMT_HANDLE v26; // r8d
  _DWORD *p_hDevice; // rdx
  __int64 v28; // r15
  char *v29; // rcx
  __int64 v30; // r8
  DXGADAPTER *v31; // rcx
  bool v32; // zf
  int PairingAdapters; // eax
  unsigned int *AdapterType; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  struct _KEVENT *v41; // rbx
  __int64 v42; // rcx
  KSPIN_LOCK *Global; // rax
  struct DXGADAPTER *v44; // [rsp+40h] [rbp-128h] BYREF
  struct DXGADAPTER *v45; // [rsp+48h] [rbp-120h]
  struct DXGADAPTER *v46; // [rsp+50h] [rbp-118h] BYREF
  struct DXGADAPTER *v47; // [rsp+58h] [rbp-110h] BYREF
  __int64 v48; // [rsp+60h] [rbp-108h]
  DXGADAPTER *v49; // [rsp+68h] [rbp-100h] BYREF
  unsigned __int64 v50; // [rsp+78h] [rbp-F0h] BYREF
  char *v51; // [rsp+80h] [rbp-E8h]
  __int64 v52[2]; // [rsp+88h] [rbp-E0h] BYREF
  struct DXGPROCESS *v53; // [rsp+98h] [rbp-D0h]
  unsigned int v54[4]; // [rsp+A0h] [rbp-C8h]
  __int128 v55; // [rsp+B0h] [rbp-B8h]
  __int128 v56; // [rsp+C0h] [rbp-A8h]
  __int128 v57; // [rsp+D0h] [rbp-98h]
  unsigned __int64 v58; // [rsp+E0h] [rbp-88h] BYREF
  _BYTE v59[120]; // [rsp+F0h] [rbp-78h] BYREF
  bool v61; // [rsp+180h] [rbp+18h]
  int v62; // [rsp+188h] [rbp+20h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2009);
  v5 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v61 = v5;
  Current = DXGPROCESS::GetCurrent(v7, v6);
  v53 = Current;
  if ( Current )
  {
    if ( a2 )
      v10 = (struct DXGADAPTER *)*((_QWORD *)a2 + 2);
    else
      v10 = 0LL;
    v47 = v10;
    if ( v5 )
    {
      v11 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v11 = (struct _D3DKMT_CREATEDEVICE *)MmUserProbeAddress;
      *(_OWORD *)v54 = *(_OWORD *)&v11->hAdapter;
      v55 = *(_OWORD *)&v11->pCommandBuffer;
      v56 = *(_OWORD *)&v11->pAllocationList;
      v57 = *(_OWORD *)&v11->pPatchLocationList;
    }
    else
    {
      *(_OWORD *)v54 = *(_OWORD *)&a1->hAdapter;
      v55 = *(_OWORD *)&a1->pCommandBuffer;
      v56 = *(_OWORD *)&a1->pAllocationList;
      v57 = *(_OWORD *)&a1->pPatchLocationList;
    }
    v12 = &v47;
    if ( v10 )
      v12 = 0LL;
    v13 = v54[0];
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v49, v54[0], (struct _KTHREAD **)Current, v12);
    v17 = v47;
    if ( v47 )
    {
      if ( (int)DxgkpGetPairingAdapters(v47, 0, &v44, &v50, &v46, &v58) >= 0
        || (v46 = 0LL,
            PairingAdapters = DxgkpGetPairingAdapters(v17, 0, &v44, &v50, 0LL, 0LL),
            v23 = PairingAdapters,
            PairingAdapters >= 0) )
      {
        if ( !v44 || !*((_QWORD *)v44 + 289) )
        {
          v39 = WdLogNewEntry5_WdAssertion(v18);
          *(_QWORD *)(v39 + 24) = 1906LL;
          WdLogEvent5_WdAssertion(v39);
        }
        if ( v46 && !*((_QWORD *)v46 + 288) )
        {
          v40 = WdLogNewEntry5_WdAssertion(v18);
          *(_QWORD *)(v40 + 24) = 1908LL;
          WdLogEvent5_WdAssertion(v40);
        }
        v51 = (char *)Current + 160;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)Current + 160, 0LL);
        *((_QWORD *)Current + 21) = KeGetCurrentThread();
        v45 = v44;
        v48 = *((_QWORD *)v44 + 289);
        v52[1] = v48;
        v19 = v48 + 24;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v19, 0LL);
        *(_QWORD *)(v19 + 8) = KeGetCurrentThread();
        v20 = v46;
        v21 = v44;
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v59, v44, v46);
        DXGADAPTER::ReleaseReferenceNoTracking(v21);
        if ( v20 )
          DXGADAPTER::ReleaseReferenceNoTracking(v20);
        LODWORD(v23) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v59);
        if ( (int)v23 < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
          *(_QWORD *)(v19 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v19, 0LL);
          KeLeaveCriticalRegion();
          v29 = v51;
        }
        else
        {
          if ( !*((_BYTE *)v21 + 185) && *((_BYTE *)DXGGLOBAL::GetGlobal(v22) + 537) )
          {
            AdapterType = DXGADAPTER::GetAdapterType(v21, &v62);
            v24 = v45;
            if ( (*AdapterType & 0x10) != 0 )
            {
              v41 = (struct _KEVENT *)_guard_dispatch_icall_fptr();
              Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v42);
              DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v41);
              *((_BYTE *)v21 + 182) = 1;
            }
          }
          else
          {
            v24 = v45;
          }
          if ( v21 == v46 )
            v25 = (v54[2] >> 1) & 1;
          else
            LOBYTE(v25) = 0;
          LODWORD(v23) = ADAPTER_RENDER::CreateDevice(
                           *((DXGADAPTER ***)v24 + 289),
                           v52,
                           v54[2],
                           (v54[2] & 1) == 0,
                           v46,
                           v25,
                           (v54[2] & 4) != 0,
                           (__int64)a2);
          if ( (int)v23 < 0 )
          {
            v28 = v48;
          }
          else
          {
            v26 = *(_DWORD *)(v52[0] + 332);
            if ( v61 )
            {
              p_hDevice = &a1->hDevice;
              if ( (unsigned __int64)&a1->hDevice >= MmUserProbeAddress )
                p_hDevice = (_DWORD *)MmUserProbeAddress;
              *p_hDevice = v26;
            }
            else
            {
              a1->hDevice = v26;
            }
            v28 = v48;
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
          *(_QWORD *)(v28 + 32) = 0LL;
          ExReleasePushLockExclusiveEx(v28 + 24, 0LL);
          KeLeaveCriticalRegion();
          v29 = (char *)v53 + 160;
        }
        *((_QWORD *)v29 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v29, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v38 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v38 + 24) = v13;
        *(_QWORD *)(v38 + 32) = v23;
        WdLogEvent5_WdError(v38);
      }
    }
    else
    {
      v37 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v37 + 24) = v13;
      LODWORD(v23) = -1073741811;
      *(_QWORD *)(v37 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v37);
    }
    v31 = v49;
    if ( v49 )
      DXGADAPTER::ReleaseReferenceNoTracking(v49);
    v32 = (qword_1C005F010 & 2) == 0;
  }
  else
  {
    v36 = WdLogNewEntry5_WdError(v8);
    LODWORD(v23) = -1073741811;
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    v31 = (DXGADAPTER *)qword_1C005F010;
    v32 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v31, &EventProfilerExit, v30, 2009);
  return (unsigned int)v23;
}
