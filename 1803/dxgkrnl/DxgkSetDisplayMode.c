/*
 * XREFs of DxgkSetDisplayMode @ 0x1C0194F30
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0001938 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0009A64 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000AC00 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014A60 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0014AF8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001569C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0019B40 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C001A370 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001A400 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A57C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001A718 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C001A72C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkStatusChangeNotify @ 0x1C00D7140 (DxgkStatusChangeNotify.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E2018 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C010D8B4 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01648B0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C018AEEC (-IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C018B600 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01930B4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     DpiPollDisplayChildren @ 0x1C01EFC94 (DpiPollDisplayChildren.c)
 *     ?DmmCacheInvalidDisplayModeChangeRequest@@YAJQEAXIW4_DMM_CLIENT_TYPE@@W4_DMM_DISPMODECHANGE_TYPE@@JQEBE@Z @ 0x1C0211EE8 (-DmmCacheInvalidDisplayModeChangeRequest@@YAJQEAXIW4_DMM_CLIENT_TYPE@@W4_DMM_DISPMODECHANGE_TYPE.c)
 */

__int64 __fastcall DxgkSetDisplayMode(ULONG64 a1, _QWORD *a2, int *a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct _KTHREAD **Current; // r15
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // zf
  ULONG64 v18; // rax
  __int64 v19; // rcx
  struct DXGDEVICE *v20; // rbx
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rcx
  struct DXGALLOCATION *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // r13
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  struct DXGALLOCATION *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // r15d
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  int v56; // eax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rcx
  int v63; // eax
  _DWORD *v64; // rdx
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rbx
  _QWORD *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  void *v73; // rbx
  __int64 v74; // rcx
  __int64 v75; // rax
  struct DXGALLOCATION *v76; // [rsp+40h] [rbp-1B8h] BYREF
  int v77; // [rsp+48h] [rbp-1B0h] BYREF
  __int64 v78; // [rsp+50h] [rbp-1A8h]
  char v79[8]; // [rsp+58h] [rbp-1A0h] BYREF
  _BYTE v80[16]; // [rsp+60h] [rbp-198h] BYREF
  _BYTE v81[16]; // [rsp+70h] [rbp-188h] BYREF
  _BYTE v82[24]; // [rsp+80h] [rbp-178h] BYREF
  unsigned int v83; // [rsp+98h] [rbp-160h] BYREF
  unsigned int v84[4]; // [rsp+A0h] [rbp-158h]
  _BYTE v85[12]; // [rsp+B0h] [rbp-148h]
  struct _KTHREAD **v86; // [rsp+C0h] [rbp-138h]
  struct DXGDEVICE *v87; // [rsp+C8h] [rbp-130h] BYREF
  ULONG64 v88; // [rsp+D0h] [rbp-128h]
  _QWORD *v89; // [rsp+D8h] [rbp-120h]
  int *v90; // [rsp+E0h] [rbp-118h]
  _BYTE v91[96]; // [rsp+F0h] [rbp-108h] BYREF
  int v92; // [rsp+150h] [rbp-A8h] BYREF
  __int64 v93; // [rsp+158h] [rbp-A0h]
  _QWORD v94[10]; // [rsp+160h] [rbp-98h] BYREF

  v90 = a3;
  v89 = a2;
  v88 = a1;
  memset(v94, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v94[1]);
  v94[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v94[3]) = 49;
  LOBYTE(v94[6]) = -1;
  v78 = 0LL;
  v77 = 2018;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v4, &EventProfilerEnter, v5, 2018);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v77, 2018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7, v6);
  v86 = Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    LODWORD(v11) = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    *(_QWORD *)(v10 + 32) = PsGetCurrentProcess(v13, v12);
    WdLogEvent5_WdError(v10);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77);
    v16 = (qword_1C0079010 & 2) == 0;
LABEL_7:
    if ( !v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v14, &EventProfilerExit, v15, v77);
    return (unsigned int)v11;
  }
  v18 = a1;
  if ( a1 >= MmUserProbeAddress )
    v18 = MmUserProbeAddress;
  *(_OWORD *)v84 = *(_OWORD *)v18;
  *(_QWORD *)v85 = *(_QWORD *)(v18 + 16);
  *(_DWORD *)&v85[8] = *(_DWORD *)(v18 + 24);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v79, v84[0], Current, &v87);
  v20 = v87;
  if ( !v87 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    LODWORD(v11) = -1073741811;
    v21[3] = -1073741811LL;
    v21[4] = PsGetCurrentProcess(v23, v22);
    v21[5] = v84[0];
    WdLogEvent5_WdError(v21);
LABEL_15:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v79);
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v81, v87);
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v82, (struct DXGPROCESS *)Current);
  DXGUSERCRIT::Acquire((DXGUSERCRIT *)v82, 1u);
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v80, Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v80);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v91, (__int64)v20, 1, v24, 0);
  LODWORD(v11) = COREDEVICEACCESS::AcquireExclusive((__int64)v91);
  if ( (int)v11 < 0 )
  {
LABEL_17:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v80);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v82);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v81);
    goto LABEL_15;
  }
  v26 = *((_QWORD *)v20 + 211);
  if ( !v26 )
  {
    v27 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v27 + 24) = v20;
    LODWORD(v11) = -1073741811;
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    goto LABEL_17;
  }
  ++*(_DWORD *)(*(_QWORD *)(v26 + 2456) + 240LL);
  v28 = v84[1];
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v76, v84[1]);
  v30 = v76;
  if ( !v76 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v29);
    LODWORD(v11) = -1073741811;
    v31[3] = -1073741811LL;
    v31[4] = v20;
    v31[5] = v28;
    WdLogEvent5_WdError(v31);
    v32 = 0xFFFFFFFFLL;
LABEL_22:
    DmmCacheInvalidDisplayModeChangeRequest(v26, v32);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v76);
    goto LABEL_17;
  }
  v33 = *((_QWORD *)v20 + 2);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 1) + 16LL) + 16LL) != *(_QWORD *)(v33 + 16) )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v33);
    v34[3] = v20;
    v34[4] = v76;
    LODWORD(v11) = -1073741811;
    v34[5] = -1073741811LL;
    WdLogEvent5_WdError(v34);
    v32 = (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF;
    goto LABEL_22;
  }
  v35 = *((_QWORD *)v76 + 6);
  if ( (*(_DWORD *)(v35 + 4) & 1) == 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v35);
    LODWORD(v11) = -1073741811;
    v36[3] = -1073741811LL;
    v36[4] = v20;
    v36[5] = v28;
    v36[6] = v76;
    v36[7] = (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v36);
    v32 = (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF;
    goto LABEL_22;
  }
  if ( v26 != *((_QWORD *)v20 + 211) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v35);
    *(_QWORD *)(v37 + 24) = 5628LL;
    WdLogEvent5_WdAssertion(v37);
    v30 = v76;
  }
  v38 = (int)v84[2];
  v39 = v84[2] - 1;
  if ( (unsigned int)v39 > 2 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v39);
    LODWORD(v11) = -1073741811;
    v40[3] = -1073741811LL;
    v40[4] = v20;
    v40[5] = v38;
    WdLogEvent5_WdError(v40);
    v32 = (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF;
    goto LABEL_22;
  }
  v41 = (int)v84[3];
  v42 = v84[3] - 1;
  if ( (unsigned int)v42 > 3 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v42);
    LODWORD(v11) = -1073741811;
    v43[3] = -1073741811LL;
    v43[4] = v20;
    v43[5] = v41;
    WdLogEvent5_WdError(v43);
LABEL_33:
    DmmCacheInvalidDisplayModeChangeRequest(v26, (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF);
LABEL_34:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v76);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v80);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v82);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v81);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v79);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77);
    v16 = (qword_1C0079010 & 2) == 0;
    goto LABEL_7;
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(
          *(DXGADAPTER ***)(v26 + 2456),
          v20,
          (*(_DWORD *)(*((_QWORD *)v30 + 6) + 4LL) >> 6) & 0xF) )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v44);
    v11 = -1071775744LL;
LABEL_37:
    v45[3] = v11;
    v45[4] = v20;
    v45[5] = v28;
    v45[6] = v76;
    v46 = (struct DXGALLOCATION *)((*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF);
LABEL_38:
    v45[7] = v46;
    WdLogEvent5_WdDmmEvent(v45);
    goto LABEL_33;
  }
  if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                        *(DXGADAPTER ***)(v26 + 2456),
                        (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF) == 2
     || *((_DWORD *)v20 + 82) == 1)
    && ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(DXGADAPTER ***)(v26 + 2456),
         (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF,
         0) )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v47);
    v11 = -1071774910LL;
    goto LABEL_37;
  }
  if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
          *(DXGADAPTER ***)(v26 + 2456),
          (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF) )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v48);
    LODWORD(v11) = -1071774972;
    v45[3] = -1071774972LL;
    v45[4] = v20;
    v45[5] = (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF;
    v45[6] = v28;
    v46 = v76;
    goto LABEL_38;
  }
  if ( *((struct DXGDEVICE **)v76 + 1) != v20 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v48);
    LODWORD(v11) = -1073741811;
    v49[3] = -1073741811LL;
    v49[4] = v20;
    v49[5] = v28;
    v49[6] = v76;
    v49[7] = *((_QWORD *)v76 + 1);
    WdLogEvent5_WdError(v49);
    DmmCacheInvalidDisplayModeChangeRequest(v26, (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF);
    v50 = 2055LL;
LABEL_47:
    DxgCreateLiveDumpWithWdLogs(
      0x193u,
      v50,
      (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF,
      *((_QWORD *)v76 + 1),
      (unsigned __int64)v20);
    goto LABEL_34;
  }
  v51 = *((_QWORD *)v76 + 6);
  if ( *((_DWORD *)v20 + 82) == 1 )
  {
    v52 = (*(_DWORD *)(v51 + 4) >> 6) & 0xF;
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(DXGADAPTER ***)(v26 + 2456), v52, 0);
    if ( CddPrimaryAllocation != *((struct DXGADAPTERALLOCATION **)v76 + 6)
      && !(unsigned int)DXGDEVICE::IsAllocationInPrimaryAllocationsList(v20, v52, v76) )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v54);
      LODWORD(v11) = -1073741811;
      v55[3] = -1073741811LL;
      v55[4] = v20;
      v55[5] = v28;
      v55[6] = v76;
      v55[7] = (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdDmmEvent(v55);
      DmmCacheInvalidDisplayModeChangeRequest(v26, (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF);
      v50 = 2056LL;
      goto LABEL_47;
    }
    v56 = DXGDEVICE::PinPrimaryAllocations(v20, v52);
    v11 = v56;
    if ( v56 < 0 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v51);
      v57[3] = v11;
      v57[4] = v20;
      v57[5] = v28;
      v57[6] = v76;
      v57[7] = v52;
      WdLogEvent5_WdDmmEvent(v57);
    }
    LODWORD(v38) = v84[2];
LABEL_60:
    v61 = WdLogNewEntry5_WdDmmEvent(v51);
    *(_QWORD *)(v61 + 24) = (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF;
    *(_QWORD *)(v61 + 32) = v26;
    WdLogEvent5_WdDmmEvent(v61);
    if ( (int)v11 >= 0 )
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v62) + 1696) )
        v85[4] |= 1u;
      v63 = DXGDEVICE::SetDisplayMode(
              v20,
              v76,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)v38,
              (enum _D3DDDI_ROTATION)v41,
              *(struct _D3DKMT_SETDISPLAYMODE_FLAGS *)&v85[4],
              &v83,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v94);
      LODWORD(v11) = v63;
      if ( v63 == -1071774891 )
      {
        v64 = (_DWORD *)(v88 + 16);
        if ( v88 + 16 >= MmUserProbeAddress )
          v64 = (_DWORD *)MmUserProbeAddress;
        *v64 = v83;
      }
      else if ( v63 >= 0 )
      {
        v65 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(
                *(DXGADAPTER ***)(v26 + 2456),
                (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF);
        v69 = v65;
        if ( v65 < 0 )
        {
          v70 = (_QWORD *)WdLogNewEntry5_WdError(v67);
          v70[3] = v26;
          v70[4] = (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF;
          v70[5] = v69;
          WdLogEvent5_WdError(v70);
        }
        v92 = 7;
        v93 = 0LL;
        if ( (int)DxgkStatusChangeNotify(&v92, v66, v68) < 0 )
        {
          v72 = WdLogNewEntry5_WdAssertion(v71);
          *(_QWORD *)(v72 + 24) = 5831LL;
          WdLogEvent5_WdAssertion(v72);
        }
        *v89 = *(_QWORD *)(v26 + 268);
        *v90 = (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF;
      }
    }
    if ( (_DWORD)v11 == -1071774920 )
    {
      v73 = *(void **)(v26 + 192);
      ObfReferenceObject(v73);
      v75 = WdLogNewEntry5_WdDmmEvent(v74);
      *(_QWORD *)(v75 + 24) = v73;
      WdLogEvent5_WdDmmEvent(v75);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v91);
      DpiPollDisplayChildren(v73, 4LL, v94);
      ObfDereferenceObject(v73);
    }
    goto LABEL_34;
  }
  if ( (*(_DWORD *)(v51 + 4) & 0x10) == 0 )
    goto LABEL_60;
  v58 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v51);
  v58[3] = -1071775482LL;
  v58[4] = v20;
  v58[5] = v28;
  v58[6] = v76;
  v58[7] = (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF;
  WdLogEvent5_WdDmmEvent(v58);
  DmmCacheInvalidDisplayModeChangeRequest(v26, (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v76);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v80);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v82);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v81);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v79);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v59, &EventProfilerExit, v60, v77);
  return 3223191814LL;
}
