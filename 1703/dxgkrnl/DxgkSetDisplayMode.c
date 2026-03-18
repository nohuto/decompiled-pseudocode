/*
 * XREFs of DxgkSetDisplayMode @ 0x1C0096EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0001BD8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0001C04 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00053F0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0005AB8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000B47C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000B5B4 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B6D4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000D728 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0013688 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00139F0 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkStatusChangeNotify @ 0x1C0098C20 (DxgkStatusChangeNotify.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BF7F0 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C00C06F0 (-IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C00C07C0 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E7474 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00E87E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C017A3F8 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpiPollDisplayChildren @ 0x1C01C2850 (DpiPollDisplayChildren.c)
 *     DmmCacheInvalidDisplayModeChangeRequest @ 0x1C01D49FC (DmmCacheInvalidDisplayModeChangeRequest.c)
 */

__int64 __fastcall DxgkSetDisplayMode(ULONG64 a1, _QWORD *a2, int *a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r12
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  ULONG64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGDEVICE *v18; // rbx
  _QWORD *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r9
  struct DXGALLOCATION *v31; // rax
  _QWORD *v32; // rax
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdx
  _QWORD *v38; // rax
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rcx
  __int64 v42; // rdx
  _QWORD *v43; // rax
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // rcx
  _QWORD *v49; // rax
  int v50; // r8d
  int v51; // r9d
  __int64 v52; // r12
  __int64 v53; // rcx
  _QWORD *v54; // rax
  int v55; // r8d
  int v56; // r9d
  _QWORD *v57; // rax
  struct DXGALLOCATION *v58; // rcx
  int v59; // r8d
  int v60; // r9d
  __int64 v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rax
  int v64; // r8d
  int v65; // r9d
  unsigned __int64 v66; // rdx
  __int64 v67; // rcx
  unsigned int v68; // r12d
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  _QWORD *v70; // rax
  int v71; // r8d
  int v72; // r9d
  int v73; // eax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  int v76; // r8d
  int v77; // r9d
  __int64 v78; // r8
  __int64 v79; // rax
  int v80; // eax
  _DWORD *v81; // rdx
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rbx
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  void *v92; // rbx
  __int64 v93; // rax
  struct DXGALLOCATION *v94; // [rsp+40h] [rbp-198h] BYREF
  char v95[8]; // [rsp+48h] [rbp-190h] BYREF
  _BYTE v96[16]; // [rsp+50h] [rbp-188h] BYREF
  _BYTE v97[16]; // [rsp+60h] [rbp-178h] BYREF
  _BYTE v98[24]; // [rsp+70h] [rbp-168h] BYREF
  unsigned int v99; // [rsp+88h] [rbp-150h] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v100[4]; // [rsp+90h] [rbp-148h]
  _BYTE v101[12]; // [rsp+A0h] [rbp-138h]
  struct _KTHREAD **v102; // [rsp+B0h] [rbp-128h]
  struct DXGDEVICE *v103; // [rsp+B8h] [rbp-120h] BYREF
  ULONG64 v104; // [rsp+C0h] [rbp-118h]
  _QWORD *v105; // [rsp+C8h] [rbp-110h]
  int *v106; // [rsp+D0h] [rbp-108h]
  _BYTE v107[96]; // [rsp+E0h] [rbp-F8h] BYREF
  int v108; // [rsp+140h] [rbp-98h] BYREF
  __int64 v109; // [rsp+148h] [rbp-90h]
  _QWORD v110[8]; // [rsp+150h] [rbp-88h] BYREF

  v106 = a3;
  v105 = a2;
  v104 = a1;
  memset(v110, 0, sizeof(v110));
  EtwActivityIdControl(3u, (LPGUID)&v110[1]);
  v110[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v110[3]) = 49;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerEnter, v5, 2018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v102 = Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v9);
LABEL_6:
    v12 = qword_1C006E790;
    v13 = (qword_1C006E790 & 2) == 0;
LABEL_7:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v12, &EventProfilerExit, v11, 2018);
    return (unsigned int)v10;
  }
  v15 = a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = MmUserProbeAddress;
  *(_OWORD *)v100 = *(_OWORD *)v15;
  *(_QWORD *)v101 = *(_QWORD *)(v15 + 16);
  *(_DWORD *)&v101[8] = *(_DWORD *)(v15 + 24);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v95, (unsigned int)v100[0], Current, &v103);
  v18 = v103;
  if ( !v103 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    LODWORD(v10) = -1073741811;
    v19[3] = -1073741811LL;
    v19[4] = PsGetCurrentProcess();
    v19[5] = (unsigned int)v100[0];
    WdLogEvent5_WdError(v19);
LABEL_15:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v95);
    v13 = (qword_1C006E790 & 2) == 0;
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v97, v103);
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v98, (struct DXGPROCESS *)Current);
  DXGUSERCRIT::Acquire((DXGUSERCRIT *)v98, 1u);
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v96, Current, v20, v21);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v96);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v107, (__int64)v18, 1LL, v22, 0);
  LODWORD(v10) = COREDEVICEACCESS::AcquireExclusive((__int64)v107, 2LL);
  if ( (int)v10 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v107);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v96);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v98);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v97);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v95);
    goto LABEL_6;
  }
  v25 = *((_QWORD *)v18 + 225);
  if ( !v25 )
  {
    v26 = WdLogNewEntry5_WdError(v24, v23);
    *(_QWORD *)(v26 + 24) = v18;
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v107);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v96);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v98);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v97);
    goto LABEL_15;
  }
  ++*(_DWORD *)(*(_QWORD *)(v25 + 2280) + 240LL);
  v27 = (unsigned int)v100[1];
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v94, v100[1]);
  v31 = v94;
  if ( !v94 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
    LODWORD(v10) = -1073741811;
    v32[3] = -1073741811LL;
    v32[4] = v18;
    v32[5] = v27;
    WdLogEvent5_WdError(v32);
    DmmCacheInvalidDisplayModeChangeRequest(v25, -1, v33, v34, -1071775468);
LABEL_22:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v94);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v107);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v96);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v98);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v97);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v95);
    v13 = (qword_1C006E790 & 2) == 0;
    goto LABEL_7;
  }
  v35 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v94 + 1) + 16LL) + 16LL);
  v36 = *((_QWORD *)v18 + 2);
  v37 = *(_QWORD *)(v36 + 16);
  if ( v35 != v37 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v36, v37);
    v38[3] = v18;
    v38[4] = v94;
    LODWORD(v10) = -1073741811;
    v38[5] = -1073741811LL;
    WdLogEvent5_WdError(v38);
    DmmCacheInvalidDisplayModeChangeRequest(
      v25,
      (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF,
      v39,
      v40,
      -1071775467);
    goto LABEL_22;
  }
  v41 = *((_QWORD *)v94 + 6);
  v42 = *(unsigned int *)(v41 + 4);
  if ( (v42 & 1) == 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v41, v42);
    LODWORD(v10) = -1073741811;
    v43[3] = -1073741811LL;
    v43[4] = v18;
    v43[5] = v27;
    v43[6] = v94;
    v43[7] = (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v43);
    DmmCacheInvalidDisplayModeChangeRequest(
      v25,
      (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF,
      v44,
      v45,
      -1071775482);
    goto LABEL_22;
  }
  if ( v25 != *((_QWORD *)v18 + 225) )
  {
    v46 = WdLogNewEntry5_WdAssertion(v41, v42, v35, v30);
    *(_QWORD *)(v46 + 24) = 5706LL;
    WdLogEvent5_WdAssertion(v46);
    v31 = v94;
  }
  v47 = v100[2];
  v48 = (unsigned int)(v100[2] - 1);
  if ( (unsigned int)v48 > 2 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v48, v42);
    LODWORD(v10) = -1073741811;
    v49[3] = -1073741811LL;
    v49[4] = v18;
    v49[5] = v47;
    WdLogEvent5_WdError(v49);
    DmmCacheInvalidDisplayModeChangeRequest(
      v25,
      (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF,
      v50,
      v51,
      -1071774894);
    goto LABEL_22;
  }
  v52 = v100[3];
  v53 = (unsigned int)(v100[3] - 1);
  if ( (unsigned int)v53 > 3 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v53, v42);
    LODWORD(v10) = -1073741811;
    v54[3] = -1073741811LL;
    v54[4] = v18;
    v54[5] = v52;
    WdLogEvent5_WdError(v54);
    DmmCacheInvalidDisplayModeChangeRequest(
      v25,
      (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF,
      v55,
      v56,
      -1071774907);
    goto LABEL_22;
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(
          *(DXGADAPTER ***)(v25 + 2280),
          v18,
          (*(_DWORD *)(*((_QWORD *)v31 + 6) + 4LL) >> 6) & 0xF) )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v10 = -1071775744LL;
LABEL_35:
    v57[3] = v10;
    v57[4] = v18;
    v57[5] = v27;
    v57[6] = v94;
    v58 = (struct DXGALLOCATION *)((*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF);
LABEL_36:
    v57[7] = v58;
    WdLogEvent5_WdDmmEvent(v57);
    DmmCacheInvalidDisplayModeChangeRequest(v25, (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF, v59, v60, v10);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v94);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v107);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v96);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v98);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v97);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v95);
    v12 = qword_1C006E790;
    v13 = (qword_1C006E790 & 2) == 0;
    goto LABEL_7;
  }
  if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                        *(DXGADAPTER ***)(v25 + 2280),
                        (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF) == 2
     || *((_DWORD *)v18 + 82) == 1)
    && ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(ADAPTER_DISPLAY **)(v25 + 2280),
         (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF,
         0) )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v10 = -1071774910LL;
    goto LABEL_35;
  }
  if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
          *(DXGADAPTER ***)(v25 + 2280),
          (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF) )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    LODWORD(v10) = -1071774972;
    v57[3] = -1071774972LL;
    v57[4] = v18;
    v57[5] = (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF;
    v57[6] = v27;
    v58 = v94;
    goto LABEL_36;
  }
  if ( *((struct DXGDEVICE **)v94 + 1) != v18 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61);
    LODWORD(v10) = -1073741811;
    v63[3] = -1073741811LL;
    v63[4] = v18;
    v63[5] = v27;
    v63[6] = v94;
    v63[7] = *((_QWORD *)v94 + 1);
    WdLogEvent5_WdError(v63);
    DmmCacheInvalidDisplayModeChangeRequest(
      v25,
      (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF,
      v64,
      v65,
      -1071775467);
    v66 = 2055LL;
LABEL_45:
    DxgCreateLiveDumpWithWdLogs(
      0x193u,
      v66,
      (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF,
      *((_QWORD *)v94 + 1),
      (unsigned __int64)v18);
    goto LABEL_22;
  }
  v67 = *((_QWORD *)v94 + 6);
  if ( *((_DWORD *)v18 + 82) == 1 )
  {
    v68 = (*(_DWORD *)(v67 + 4) >> 6) & 0xF;
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v25 + 2280), v68, 0);
    if ( CddPrimaryAllocation != *((struct DXGADAPTERALLOCATION **)v94 + 6)
      && !(unsigned int)DXGDEVICE::IsAllocationInPrimaryAllocationsList(v18, v68, v94) )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      LODWORD(v10) = -1073741811;
      v70[3] = -1073741811LL;
      v70[4] = v18;
      v70[5] = v27;
      v70[6] = v94;
      v70[7] = (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdDmmEvent(v70);
      DmmCacheInvalidDisplayModeChangeRequest(
        v25,
        (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF,
        v71,
        v72,
        -1071774928);
      v66 = 2056LL;
      goto LABEL_45;
    }
    v73 = DXGDEVICE::PinPrimaryAllocations(v18, v68);
    v10 = v73;
    if ( v73 < 0 )
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v74[3] = v10;
      v74[4] = v18;
      v74[5] = v27;
      v74[6] = v94;
      v74[7] = v68;
      WdLogEvent5_WdDmmEvent(v74);
    }
    SLODWORD(v52) = v100[3];
LABEL_58:
    v79 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v79 + 24) = (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF;
    *(_QWORD *)(v79 + 32) = v25;
    WdLogEvent5_WdDmmEvent(v79);
    if ( (int)v10 >= 0 )
    {
      v80 = DXGDEVICE::SetDisplayMode(
              v18,
              v94,
              v100[2],
              (enum _D3DDDI_ROTATION)v52,
              *(struct _D3DKMT_SETDISPLAYMODE_FLAGS *)&v101[4],
              &v99,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v110);
      LODWORD(v10) = v80;
      if ( v80 == -1071774891 )
      {
        v81 = (_DWORD *)(v104 + 16);
        if ( v104 + 16 >= MmUserProbeAddress )
          v81 = (_DWORD *)MmUserProbeAddress;
        *v81 = v99;
      }
      else if ( v80 >= 0 )
      {
        v82 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(
                *(ADAPTER_DISPLAY **)(v25 + 2280),
                (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF);
        v85 = v82;
        if ( v82 < 0 )
        {
          v86 = (_QWORD *)WdLogNewEntry5_WdError(v84, v83);
          v86[3] = v25;
          v86[4] = (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF;
          v86[5] = v85;
          WdLogEvent5_WdError(v86);
        }
        v108 = 7;
        v109 = 0LL;
        if ( (int)DxgkStatusChangeNotify(&v108) < 0 )
        {
          v91 = WdLogNewEntry5_WdAssertion(v88, v87, v89, v90);
          *(_QWORD *)(v91 + 24) = 5903LL;
          WdLogEvent5_WdAssertion(v91);
        }
        *v105 = *(_QWORD *)(v25 + 268);
        *v106 = (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF;
      }
    }
    if ( (_DWORD)v10 == -1071774920 )
    {
      v92 = *(void **)(v25 + 192);
      ObfReferenceObject(v92);
      v93 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v93 + 24) = v92;
      WdLogEvent5_WdDmmEvent(v93);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v107);
      DpiPollDisplayChildren(v92, 4LL, v110);
      ObfDereferenceObject(v92);
    }
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(v67 + 4) & 0x10) == 0 )
    goto LABEL_58;
  v75 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
  v75[3] = -1071775482LL;
  v75[4] = v18;
  v75[5] = v27;
  v75[6] = v94;
  v75[7] = (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF;
  WdLogEvent5_WdDmmEvent(v75);
  DmmCacheInvalidDisplayModeChangeRequest(
    v25,
    (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF,
    v76,
    v77,
    -1071775482);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v94);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v107);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v96);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v98);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v97);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v95);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(qword_1C006E790, &EventProfilerExit, v78, 2018);
  return 3223191814LL;
}
