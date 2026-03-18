/*
 * XREFs of DxgkSetDisplayMode @ 0x1C00E6690
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001CA0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0003A8C (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C0004090 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000757C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007774 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007858 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C000D5E8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000D614 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001441C (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0014764 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00925C8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C0093578 (-IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C0093648 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00ACB60 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00ADE98 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00E85B0 (DxgkStatusChangeNotify.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C017DDD0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpiPollDisplayChildren @ 0x1C01DBF3C (DpiPollDisplayChildren.c)
 *     ?DmmCacheInvalidDisplayModeChangeRequest@@YAJQEAXIW4_DMM_CLIENT_TYPE@@W4_DMM_DISPMODECHANGE_TYPE@@JQEBE@Z @ 0x1C01EB6C0 (-DmmCacheInvalidDisplayModeChangeRequest@@YAJQEAXIW4_DMM_CLIENT_TYPE@@W4_DMM_DISPMODECHANGE_TYPE.c)
 */

__int64 __fastcall DxgkSetDisplayMode(ULONG64 a1, _QWORD *a2, int *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r12
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  ULONG64 v17; // rax
  __int64 v18; // rcx
  struct DXGDEVICE *v19; // rbx
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rcx
  struct DXGALLOCATION *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  struct DXGALLOCATION *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  _QWORD *v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // r12d
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rax
  int v52; // eax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // eax
  _DWORD *v59; // rdx
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rbx
  _QWORD *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  void *v66; // rbx
  __int64 v67; // rcx
  __int64 v68; // rax
  struct DXGALLOCATION *v69; // [rsp+40h] [rbp-1A8h] BYREF
  char v70[8]; // [rsp+48h] [rbp-1A0h] BYREF
  _BYTE v71[16]; // [rsp+50h] [rbp-198h] BYREF
  _BYTE v72[16]; // [rsp+60h] [rbp-188h] BYREF
  _BYTE v73[24]; // [rsp+70h] [rbp-178h] BYREF
  unsigned int v74; // [rsp+88h] [rbp-160h] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v75[4]; // [rsp+90h] [rbp-158h]
  _BYTE v76[12]; // [rsp+A0h] [rbp-148h]
  struct _KTHREAD **v77; // [rsp+B0h] [rbp-138h]
  struct DXGDEVICE *v78; // [rsp+B8h] [rbp-130h] BYREF
  ULONG64 v79; // [rsp+C0h] [rbp-128h]
  _QWORD *v80; // [rsp+C8h] [rbp-120h]
  int *v81; // [rsp+D0h] [rbp-118h]
  _BYTE v82[96]; // [rsp+E0h] [rbp-108h] BYREF
  int v83; // [rsp+140h] [rbp-A8h] BYREF
  __int64 v84; // [rsp+148h] [rbp-A0h]
  _QWORD v85[10]; // [rsp+150h] [rbp-98h] BYREF

  v81 = a3;
  v80 = a2;
  v79 = a1;
  memset(v85, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v85[1]);
  v85[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v85[3]) = 49;
  LOBYTE(v85[6]) = -1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v5, &EventProfilerEnter, v6, 2018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  v77 = Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v12, v11);
    WdLogEvent5_WdError(v9);
LABEL_6:
    v14 = qword_1C005F010;
    v15 = (qword_1C005F010 & 2) == 0;
LABEL_7:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v14, &EventProfilerExit, v13, 2018);
    return (unsigned int)v10;
  }
  v17 = a1;
  if ( a1 >= MmUserProbeAddress )
    v17 = MmUserProbeAddress;
  *(_OWORD *)v75 = *(_OWORD *)v17;
  *(_QWORD *)v76 = *(_QWORD *)(v17 + 16);
  *(_DWORD *)&v76[8] = *(_DWORD *)(v17 + 24);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v70, v75[0], Current, &v78);
  v19 = v78;
  if ( !v78 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    LODWORD(v10) = -1073741811;
    v20[3] = -1073741811LL;
    v20[4] = PsGetCurrentProcess(v22, v21);
    v20[5] = (unsigned int)v75[0];
    WdLogEvent5_WdError(v20);
LABEL_15:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v70);
    v15 = (qword_1C005F010 & 2) == 0;
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72, v78);
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v73, (struct DXGPROCESS *)Current);
  DXGUSERCRIT::Acquire((DXGUSERCRIT *)v73, 1u);
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v71, Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v71);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v82, (__int64)v19, 1, v23, 0);
  LODWORD(v10) = COREDEVICEACCESS::AcquireExclusive((__int64)v82, 2LL);
  if ( (int)v10 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v71);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v73);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v70);
    goto LABEL_6;
  }
  v25 = *((_QWORD *)v19 + 209);
  if ( !v25 )
  {
    v26 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v26 + 24) = v19;
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v71);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v73);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72);
    goto LABEL_15;
  }
  ++*(_DWORD *)(*(_QWORD *)(v25 + 2304) + 240LL);
  v27 = (unsigned int)v75[1];
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v69, v75[1]);
  v29 = v69;
  if ( !v69 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v28);
    LODWORD(v10) = -1073741811;
    v30[3] = -1073741811LL;
    v30[4] = v19;
    v30[5] = v27;
    WdLogEvent5_WdError(v30);
    v31 = 0xFFFFFFFFLL;
LABEL_22:
    DmmCacheInvalidDisplayModeChangeRequest(v25, v31);
LABEL_23:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v69);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v71);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v73);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v70);
    v15 = (qword_1C005F010 & 2) == 0;
    goto LABEL_7;
  }
  v32 = *((_QWORD *)v19 + 2);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v69 + 1) + 16LL) + 16LL) != *(_QWORD *)(v32 + 16) )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v32);
    v33[3] = v19;
    v33[4] = v69;
    LODWORD(v10) = -1073741811;
    v33[5] = -1073741811LL;
    WdLogEvent5_WdError(v33);
    v31 = (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF;
    goto LABEL_22;
  }
  v34 = *((_QWORD *)v69 + 6);
  if ( (*(_DWORD *)(v34 + 4) & 1) == 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v34);
    LODWORD(v10) = -1073741811;
    v35[3] = -1073741811LL;
    v35[4] = v19;
    v35[5] = v27;
    v35[6] = v69;
    v35[7] = (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v35);
    v31 = (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF;
    goto LABEL_22;
  }
  if ( v25 != *((_QWORD *)v19 + 209) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v34);
    *(_QWORD *)(v36 + 24) = 5710LL;
    WdLogEvent5_WdAssertion(v36);
    v29 = v69;
  }
  v37 = v75[2];
  v38 = (unsigned int)(v75[2] - 1);
  if ( (unsigned int)v38 > 2 || (v37 = v75[3], v38 = (unsigned int)(v75[3] - 1), (unsigned int)v38 > 3) )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v38);
    LODWORD(v10) = -1073741811;
    v39[3] = -1073741811LL;
    v39[4] = v19;
    v39[5] = v37;
    WdLogEvent5_WdError(v39);
    v31 = (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF;
    goto LABEL_22;
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(
          *(DXGADAPTER ***)(v25 + 2304),
          v19,
          (*(_DWORD *)(*((_QWORD *)v29 + 6) + 4LL) >> 6) & 0xF) )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v40);
    v10 = -1071775744LL;
LABEL_35:
    v41[3] = v10;
    v41[4] = v19;
    v41[5] = v27;
    v41[6] = v69;
    v42 = (struct DXGALLOCATION *)((*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF);
LABEL_36:
    v41[7] = v42;
    WdLogEvent5_WdDmmEvent(v41);
    DmmCacheInvalidDisplayModeChangeRequest(v25, (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v69);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v71);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v73);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v70);
    v14 = qword_1C005F010;
    v15 = (qword_1C005F010 & 2) == 0;
    goto LABEL_7;
  }
  if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                        *(DXGADAPTER ***)(v25 + 2304),
                        (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF) == 2
     || *((_DWORD *)v19 + 82) == 1)
    && ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(DXGADAPTER ***)(v25 + 2304),
         (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF,
         0) )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v43);
    v10 = -1071774910LL;
    goto LABEL_35;
  }
  if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
          *(DXGADAPTER ***)(v25 + 2304),
          (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF) )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v44);
    LODWORD(v10) = -1071774972;
    v41[3] = -1071774972LL;
    v41[4] = v19;
    v41[5] = (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF;
    v41[6] = v27;
    v42 = v69;
    goto LABEL_36;
  }
  if ( *((struct DXGDEVICE **)v69 + 1) != v19 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdError(v44);
    LODWORD(v10) = -1073741811;
    v45[3] = -1073741811LL;
    v45[4] = v19;
    v45[5] = v27;
    v45[6] = v69;
    v45[7] = *((_QWORD *)v69 + 1);
    WdLogEvent5_WdError(v45);
    DmmCacheInvalidDisplayModeChangeRequest(v25, (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF);
    v46 = 2055LL;
LABEL_45:
    DxgCreateLiveDumpWithWdLogs(
      0x193u,
      v46,
      (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF,
      *((_QWORD *)v69 + 1),
      (unsigned __int64)v19);
    goto LABEL_23;
  }
  v47 = *((_QWORD *)v69 + 6);
  if ( *((_DWORD *)v19 + 82) == 1 )
  {
    v48 = (*(_DWORD *)(v47 + 4) >> 6) & 0xF;
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(DXGADAPTER ***)(v25 + 2304), v48, 0);
    if ( CddPrimaryAllocation != *((struct DXGADAPTERALLOCATION **)v69 + 6)
      && !(unsigned int)DXGDEVICE::IsAllocationInPrimaryAllocationsList(v19, v48, v69) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v50);
      LODWORD(v10) = -1073741811;
      v51[3] = -1073741811LL;
      v51[4] = v19;
      v51[5] = v27;
      v51[6] = v69;
      v51[7] = (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdDmmEvent(v51);
      DmmCacheInvalidDisplayModeChangeRequest(v25, (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF);
      v46 = 2056LL;
      goto LABEL_45;
    }
    v52 = DXGDEVICE::PinPrimaryAllocations(v19, v48);
    v10 = v52;
    if ( v52 < 0 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v47);
      v53[3] = v10;
      v53[4] = v19;
      v53[5] = v27;
      v53[6] = v69;
      v53[7] = v48;
      WdLogEvent5_WdDmmEvent(v53);
    }
    SLODWORD(v37) = v75[3];
LABEL_58:
    v56 = WdLogNewEntry5_WdDmmEvent(v47);
    *(_QWORD *)(v56 + 24) = (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF;
    *(_QWORD *)(v56 + 32) = v25;
    WdLogEvent5_WdDmmEvent(v56);
    if ( (int)v10 >= 0 )
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v57) + 1568) )
        v76[4] |= 1u;
      v58 = DXGDEVICE::SetDisplayMode(
              v19,
              v69,
              v75[2],
              (enum _D3DDDI_ROTATION)v37,
              *(struct _D3DKMT_SETDISPLAYMODE_FLAGS *)&v76[4],
              &v74,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v85);
      LODWORD(v10) = v58;
      if ( v58 == -1071774891 )
      {
        v59 = (_DWORD *)(v79 + 16);
        if ( v79 + 16 >= MmUserProbeAddress )
          v59 = (_DWORD *)MmUserProbeAddress;
        *v59 = v74;
      }
      else if ( v58 >= 0 )
      {
        v60 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(
                *(DXGADAPTER ***)(v25 + 2304),
                (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF);
        v62 = v60;
        if ( v60 < 0 )
        {
          v63 = (_QWORD *)WdLogNewEntry5_WdError(v61);
          v63[3] = v25;
          v63[4] = (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF;
          v63[5] = v62;
          WdLogEvent5_WdError(v63);
        }
        v83 = 7;
        v84 = 0LL;
        if ( (int)DxgkStatusChangeNotify(&v83) < 0 )
        {
          v65 = WdLogNewEntry5_WdAssertion(v64);
          *(_QWORD *)(v65 + 24) = 5913LL;
          WdLogEvent5_WdAssertion(v65);
        }
        *v80 = *(_QWORD *)(v25 + 268);
        *v81 = (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF;
      }
    }
    if ( (_DWORD)v10 == -1071774920 )
    {
      v66 = *(void **)(v25 + 192);
      ObfReferenceObject(v66);
      v68 = WdLogNewEntry5_WdDmmEvent(v67);
      *(_QWORD *)(v68 + 24) = v66;
      WdLogEvent5_WdDmmEvent(v68);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v82);
      DpiPollDisplayChildren(v66, 4LL, v85);
      ObfDereferenceObject(v66);
    }
    goto LABEL_23;
  }
  if ( (*(_DWORD *)(v47 + 4) & 0x10) == 0 )
    goto LABEL_58;
  v54 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v47);
  v54[3] = -1071775482LL;
  v54[4] = v19;
  v54[5] = v27;
  v54[6] = v69;
  v54[7] = (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF;
  WdLogEvent5_WdDmmEvent(v54);
  DmmCacheInvalidDisplayModeChangeRequest(v25, (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v69);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v71);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v73);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v70);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(qword_1C005F010, &EventProfilerExit, v55, 2018);
  return 3223191814LL;
}
