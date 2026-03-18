/*
 * XREFs of ?DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C00F6E18
 * Callers:
 *     ?VmBusCreateDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002C3B0 (-VmBusCreateDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateDevice @ 0x1C00F6B50 (DxgkCreateDevice.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0038458 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C00CFB00 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00D3750 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkCreateDeviceInternal(struct _D3DKMT_CREATEDEVICE *a1, struct DXGK_VIRTUAL_GPU *a2, __int64 a3)
{
  bool v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // r13
  struct DXGADAPTER *v10; // rdx
  struct _D3DKMT_CREATEDEVICE *v11; // rax
  struct DXGADAPTER **v12; // r9
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGADAPTER *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r12
  DXGADAPTER *v24; // rbx
  struct DXGADAPTER *v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  struct DXGADAPTER *v31; // r12
  int v32; // eax
  D3DKMT_HANDLE v33; // r8d
  _DWORD *p_hDevice; // rdx
  __int64 v35; // r15
  char *v36; // rcx
  __int64 v37; // r8
  DXGADAPTER *v38; // rcx
  bool v39; // zf
  unsigned int *AdapterType; // rax
  int PairingAdapters; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  struct _KEVENT *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  KSPIN_LOCK *Global; // rax
  struct DXGADAPTER *v54; // [rsp+40h] [rbp-128h] BYREF
  struct DXGADAPTER *v55; // [rsp+48h] [rbp-120h]
  struct DXGADAPTER *v56; // [rsp+50h] [rbp-118h] BYREF
  struct DXGADAPTER *v57; // [rsp+58h] [rbp-110h] BYREF
  __int64 v58; // [rsp+60h] [rbp-108h]
  DXGADAPTER *v59; // [rsp+68h] [rbp-100h] BYREF
  unsigned __int64 v60; // [rsp+78h] [rbp-F0h] BYREF
  char *v61; // [rsp+80h] [rbp-E8h]
  __int64 v62[2]; // [rsp+88h] [rbp-E0h] BYREF
  struct DXGPROCESS *v63; // [rsp+98h] [rbp-D0h]
  unsigned int v64[4]; // [rsp+A0h] [rbp-C8h]
  __int128 v65; // [rsp+B0h] [rbp-B8h]
  __int128 v66; // [rsp+C0h] [rbp-A8h]
  __int128 v67; // [rsp+D0h] [rbp-98h]
  unsigned __int64 v68; // [rsp+E0h] [rbp-88h] BYREF
  _BYTE v69[120]; // [rsp+F0h] [rbp-78h] BYREF
  bool v71; // [rsp+180h] [rbp+18h]
  int v72; // [rsp+188h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2009);
  v5 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v71 = v5;
  Current = DXGPROCESS::GetCurrent(v6);
  v63 = Current;
  if ( Current )
  {
    if ( a2 )
      v10 = (struct DXGADAPTER *)*((_QWORD *)a2 + 1);
    else
      v10 = 0LL;
    v57 = v10;
    if ( v5 )
    {
      v11 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v11 = (struct _D3DKMT_CREATEDEVICE *)MmUserProbeAddress;
      *(_OWORD *)v64 = *(_OWORD *)&v11->hAdapter;
      v65 = *(_OWORD *)&v11->pCommandBuffer;
      v66 = *(_OWORD *)&v11->pAllocationList;
      v67 = *(_OWORD *)&v11->pPatchLocationList;
    }
    else
    {
      *(_OWORD *)v64 = *(_OWORD *)&a1->hAdapter;
      v65 = *(_OWORD *)&a1->pCommandBuffer;
      v66 = *(_OWORD *)&a1->pAllocationList;
      v67 = *(_OWORD *)&a1->pPatchLocationList;
    }
    v12 = &v57;
    if ( v10 )
      v12 = 0LL;
    v13 = v64[0];
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v59, v64[0], (struct _KTHREAD **)Current, v12);
    v18 = v57;
    if ( v57 )
    {
      if ( (int)DxgkpGetPairingAdapters(v57, 0, &v54, &v60, &v56, &v68) >= 0
        || (v56 = 0LL,
            PairingAdapters = DxgkpGetPairingAdapters(v18, 0, &v54, &v60, 0LL, 0LL),
            v28 = PairingAdapters,
            PairingAdapters >= 0) )
      {
        if ( !v54 || !*((_QWORD *)v54 + 286) )
        {
          v46 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
          *(_QWORD *)(v46 + 24) = 1904LL;
          WdLogEvent5_WdAssertion(v46);
        }
        if ( v56 && !*((_QWORD *)v56 + 285) )
        {
          v47 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
          *(_QWORD *)(v47 + 24) = 1906LL;
          WdLogEvent5_WdAssertion(v47);
        }
        v61 = (char *)Current + 136;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)Current + 136, 0LL);
        *((_QWORD *)Current + 18) = KeGetCurrentThread();
        v55 = v54;
        v58 = *((_QWORD *)v54 + 286);
        v62[1] = v58;
        v23 = v58 + 24;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v23, 0LL);
        *(_QWORD *)(v23 + 8) = KeGetCurrentThread();
        v24 = v56;
        v25 = v54;
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v69, v54, v56);
        DXGADAPTER::ReleaseReference(v25);
        if ( v24 )
          DXGADAPTER::ReleaseReference(v24);
        LODWORD(v28) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v69);
        if ( (int)v28 < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69);
          *(_QWORD *)(v23 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v23, 0LL);
          KeLeaveCriticalRegion();
          v36 = v61;
        }
        else
        {
          if ( !*((_BYTE *)v25 + 186) && *((_BYTE *)DXGGLOBAL::GetGlobal(v27, v26, v29, v30) + 537) )
          {
            AdapterType = DXGADAPTER::GetAdapterType(v25, &v72);
            v31 = v55;
            if ( (*AdapterType & 0x10) != 0 )
            {
              v48 = (struct _KEVENT *)_guard_dispatch_icall_fptr();
              Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v50, v49, v51, v52);
              DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v48);
              *((_BYTE *)v25 + 183) = 1;
            }
          }
          else
          {
            v31 = v55;
          }
          if ( v25 == v56 )
            v32 = (LOBYTE(v64[2]) >> 1) & 1;
          else
            LOBYTE(v32) = 0;
          LODWORD(v28) = ADAPTER_RENDER::CreateDevice(
                           *((_QWORD *)v31 + 286),
                           v62,
                           v64[2],
                           (v64[2] & 1) == 0,
                           v56,
                           v32,
                           (v64[2] & 4) != 0,
                           (__int64)a2);
          if ( (int)v28 < 0 )
          {
            v35 = v58;
          }
          else
          {
            v33 = *(_DWORD *)(v62[0] + 332);
            if ( v71 )
            {
              p_hDevice = &a1->hDevice;
              if ( (unsigned __int64)&a1->hDevice >= MmUserProbeAddress )
                p_hDevice = (_DWORD *)MmUserProbeAddress;
              *p_hDevice = v33;
            }
            else
            {
              a1->hDevice = v33;
            }
            v35 = v58;
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69);
          *(_QWORD *)(v35 + 32) = 0LL;
          ExReleasePushLockExclusiveEx(v35 + 24, 0LL);
          KeLeaveCriticalRegion();
          v36 = (char *)v63 + 136;
        }
        *((_QWORD *)v36 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v36, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v45 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v45 + 24) = v13;
        *(_QWORD *)(v45 + 32) = v28;
        WdLogEvent5_WdError(v45);
      }
    }
    else
    {
      v44 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      *(_QWORD *)(v44 + 24) = v13;
      LODWORD(v28) = -1073741811;
      *(_QWORD *)(v44 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v44);
    }
    v38 = v59;
    if ( v59 )
      DXGADAPTER::ReleaseReference(v59);
    v39 = (qword_1C006E790 & 2) == 0;
  }
  else
  {
    v43 = WdLogNewEntry5_WdError(v8, v7);
    LODWORD(v28) = -1073741811;
    *(_QWORD *)(v43 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v43);
    v38 = (DXGADAPTER *)qword_1C006E790;
    v39 = (qword_1C006E790 & 2) == 0;
  }
  if ( !v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v38, &EventProfilerExit, v37, 2009);
  return (unsigned int)v28;
}
