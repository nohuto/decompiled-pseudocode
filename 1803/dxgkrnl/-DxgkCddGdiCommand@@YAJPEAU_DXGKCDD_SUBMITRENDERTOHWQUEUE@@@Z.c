/*
 * XREFs of ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z @ 0x1C00CE9F0
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017C130 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C0096138 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1EA8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAVDXGHWQUEUE@@_K@Z @ 0x1C00FEAF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x1C0181858 (-VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01A2B0C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01BF3F4 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 */

__int64 __fastcall DxgkCddGdiCommand(struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *a1, __int64 a2, __int64 a3)
{
  struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *v3; // rbx
  const struct _D3DKMT_RENDER *v4; // r12
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // r13
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rcx
  D3DKMT_HANDLE hDevice; // edi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // ecx
  __int64 v22; // rsi
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rax
  struct _KEVENT *v28; // rdi
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdi
  unsigned int BroadcastContextCount; // eax
  __int64 v34; // rdi
  _BYTE *PoolWithTag; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // edi
  void *v39; // r14
  __int64 v40; // rbx
  _BYTE *v41; // rcx
  __int64 v42; // r8
  unsigned __int64 i; // rbx
  __int64 v44; // rdi
  __int64 v45; // rcx
  volatile signed __int64 *v46; // rbx
  __int64 v47; // r8
  unsigned __int64 v48; // rdx
  volatile signed __int64 *v49; // rcx
  volatile signed __int64 *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  bool v54; // r15
  struct _D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r12
  struct _D3DKMT_RENDER *v56; // rcx
  struct DXGALLOCATION **v57; // rbx
  __int64 AllocationCount; // rdi
  _BYTE *v59; // rbx
  int v60; // eax
  __int64 v61; // rdx
  struct DXGALLOCATION *v62; // rcx
  int v63; // r14d
  int v64; // eax
  unsigned int v65; // edi
  struct DXGADAPTER *v66; // rcx
  DXGADAPTER *v67; // rcx
  struct DXGADAPTER *v68; // rbx
  _QWORD *v69; // rcx
  unsigned __int64 j; // rbx
  __int64 v71; // rcx
  __int64 v72; // rcx
  struct DXGHWQUEUE *v73; // r14
  __int64 v74; // rcx
  __int64 v75; // r8
  unsigned __int8 v77; // di
  __int64 v78; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v80; // rbx
  __int64 v81; // rbx
  __int64 v82; // rax
  int v83; // r9d
  __int64 v84; // rsi
  signed __int64 v85; // rax
  signed __int64 v86; // rtt
  __int64 v87; // rax
  int v88; // r9d
  _QWORD *v89; // rbx
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rbx
  _QWORD *v94; // rax
  unsigned int v95; // eax
  __int64 v96; // rax
  int v97; // r9d
  _QWORD *v98; // r11
  int v99; // r8d
  __int64 v100; // r10
  __int64 v101; // rax
  unsigned int v102; // r14d
  __int64 v103; // rax
  __int64 v104; // r8
  int v105; // ecx
  __int64 v106; // r14
  __int64 v107; // r8
  _QWORD *v108; // rax
  __int64 v109; // rcx
  int v110; // r9d
  _QWORD *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  _QWORD *v114; // rax
  __int64 v115; // rax
  _QWORD *v116; // rax
  _QWORD *v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rbx
  __int64 v121; // rax
  __int64 v122; // r9
  __int64 v123; // rbx
  __int64 v124; // rax
  __int64 v125; // rsi
  struct DXGDEVICE *v126; // rbx
  __int64 v127; // rax
  __int64 v128; // r9
  __int64 v129; // rbx
  __int64 v130; // rax
  __int64 v131; // r9
  __int64 v132; // [rsp+48h] [rbp-C0h]
  void *Base; // [rsp+50h] [rbp-B8h]
  _BYTE v134[24]; // [rsp+58h] [rbp-B0h] BYREF
  size_t NumOfElements; // [rsp+78h] [rbp-90h]
  char v136; // [rsp+80h] [rbp-88h]
  __int64 v137; // [rsp+88h] [rbp-80h]
  struct _D3DKMT_RENDER *v138; // [rsp+90h] [rbp-78h]
  char v139[8]; // [rsp+98h] [rbp-70h] BYREF
  struct _KTHREAD **v140[2]; // [rsp+A0h] [rbp-68h] BYREF
  DXGADAPTER *v141; // [rsp+B0h] [rbp-58h]
  char v142; // [rsp+B8h] [rbp-50h]
  struct _KTHREAD **v143[2]; // [rsp+C0h] [rbp-48h] BYREF
  struct DXGADAPTER *v144; // [rsp+D0h] [rbp-38h]
  char v145; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v146; // [rsp+E0h] [rbp-28h]
  char v147; // [rsp+E8h] [rbp-20h]
  void *Src; // [rsp+F8h] [rbp-10h]
  _BYTE v149[32]; // [rsp+100h] [rbp-8h] BYREF
  unsigned int v150; // [rsp+120h] [rbp+18h]
  int v151; // [rsp+128h] [rbp+20h] BYREF
  __int64 v152; // [rsp+130h] [rbp+28h]
  __int64 v153; // [rsp+138h] [rbp+30h] BYREF
  struct DXGADAPTER *v154; // [rsp+140h] [rbp+38h]
  char v155; // [rsp+148h] [rbp+40h]
  char v156[8]; // [rsp+150h] [rbp+48h] BYREF
  __int64 v157; // [rsp+158h] [rbp+50h]
  char v158; // [rsp+160h] [rbp+58h]
  char v159[8]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v160; // [rsp+170h] [rbp+68h]
  char v161; // [rsp+178h] [rbp+70h]
  char v162[8]; // [rsp+180h] [rbp+78h] BYREF
  __int64 v163; // [rsp+188h] [rbp+80h]
  char v164; // [rsp+190h] [rbp+88h]
  _QWORD v165[2]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v166[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v167[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  char v168[8]; // [rsp+1C8h] [rbp+C0h] BYREF
  char v169[32]; // [rsp+1D0h] [rbp+C8h] BYREF
  char v170[56]; // [rsp+1F0h] [rbp+E8h] BYREF
  char v171[8]; // [rsp+228h] [rbp+120h] BYREF
  char v172[32]; // [rsp+230h] [rbp+128h] BYREF
  char v173[56]; // [rsp+250h] [rbp+148h] BYREF
  char v174[8]; // [rsp+288h] [rbp+180h] BYREF
  char v175[32]; // [rsp+290h] [rbp+188h] BYREF
  char v176[56]; // [rsp+2B0h] [rbp+1A8h] BYREF
  char v177[8]; // [rsp+2E8h] [rbp+1E0h] BYREF
  char v178[32]; // [rsp+2F0h] [rbp+1E8h] BYREF
  char v179[56]; // [rsp+310h] [rbp+208h] BYREF
  PVOID P; // [rsp+348h] [rbp+240h]
  _BYTE v181[256]; // [rsp+350h] [rbp+248h] BYREF
  int v182; // [rsp+450h] [rbp+348h]
  char v184; // [rsp+4B0h] [rbp+3A8h]
  unsigned int v185; // [rsp+4B8h] [rbp+3B0h] BYREF
  struct DXGHWQUEUE *v186; // [rsp+4C0h] [rbp+3B8h]

  v3 = a1;
  v152 = 0LL;
  v151 = 3020;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3020);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v151, 3020);
  v4 = (const struct _D3DKMT_RENDER *)((char *)v3 + 16);
  v138 = (struct _D3DKMT_RENDER *)((char *)v3 + 16);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v80 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v8 = *v80;
    }
    v3 = a1;
  }
  if ( !v8 )
  {
    v65 = -1073741811;
    v81 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v81 + 24) = -1073741811LL;
    *(_QWORD *)(v81 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v81);
    goto LABEL_104;
  }
  v9 = *(_DWORD *)v3;
  if ( v8 != -208 && *(struct _KTHREAD **)(v8 + 216) == KeGetCurrentThread() )
  {
    v82 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v82 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v82);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v83 = *(_DWORD *)(v8 + 224);
      if ( v83 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v10, &EventBlockThread, v11, v83);
    }
    ExAcquirePushLockSharedEx(v8 + 208, 0LL);
  }
  v12 = (v9 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 >= *(_DWORD *)(v8 + 248)
    || (v13 = *(_QWORD *)(v8 + 232),
        v14 = *(_DWORD *)(v13 + 16 * v12 + 8),
        ((v9 >> 25) & 0x60) != (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60))
    || (v14 & 0x2000) != 0
    || (v14 & 0x1F) != 0xF )
  {
LABEL_11:
    v186 = 0LL;
    goto LABEL_12;
  }
  v84 = *(_QWORD *)(v13 + 16LL * (unsigned int)v12);
  v186 = (struct DXGHWQUEUE *)v84;
  if ( v84 )
  {
    _m_prefetchw((const void *)(v84 + 56));
    v85 = *(_QWORD *)(v84 + 56);
    if ( v85 )
    {
      while ( 1 )
      {
        v86 = v85;
        v85 = _InterlockedCompareExchange64((volatile signed __int64 *)(v84 + 56), v85 + 1, v85);
        if ( v86 == v85 )
          goto LABEL_12;
        if ( !v85 )
          goto LABEL_11;
      }
    }
    goto LABEL_11;
  }
LABEL_12:
  ExReleasePushLockSharedEx(v8 + 208, 0LL);
  KeLeaveCriticalRegion();
  hDevice = v4->hDevice;
  if ( v8 != -208 && *(struct _KTHREAD **)(v8 + 216) == KeGetCurrentThread() )
  {
    v87 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v87 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v87);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v88 = *(_DWORD *)(v8 + 224);
      if ( v88 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v17, &EventBlockThread, v18, v88);
    }
    ExAcquirePushLockSharedEx(v8 + 208, 0LL);
  }
  v19 = (hDevice >> 6) & 0xFFFFFF;
  if ( (unsigned int)v19 >= *(_DWORD *)(v8 + 248) )
    goto LABEL_140;
  v20 = *(_QWORD *)(v8 + 232);
  v21 = *(_DWORD *)(v20 + 16 * v19 + 8);
  if ( ((hDevice >> 25) & 0x60) != (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60) || (v21 & 0x2000) != 0 || (v21 & 0x1F) != 7 )
    goto LABEL_140;
  v22 = *(_QWORD *)(v20 + 16LL * (unsigned int)v19);
  if ( !v22 )
    goto LABEL_23;
  _m_prefetchw((const void *)(v22 + 32));
  v23 = *(_QWORD *)(v22 + 32);
  if ( v23 )
  {
    while ( 1 )
    {
      v24 = v23;
      v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 32), v23 + 1, v23);
      if ( v24 == v23 )
        break;
      if ( !v23 )
        goto LABEL_140;
    }
  }
  else
  {
LABEL_140:
    v22 = 0LL;
  }
LABEL_23:
  ExReleasePushLockSharedEx(v8 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v22 )
  {
    v27 = *(_QWORD *)(v22 + 16);
    v132 = v27;
    if ( *(_BYTE *)(v22 + 401) )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v177, v27, 0, v26, 0);
      v90 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v177);
      v93 = v90;
      if ( v90 >= 0 )
      {
        LODWORD(v93) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 16LL)
                                                      + 4080LL),
                         (struct DXGPROCESS *)v8,
                         (struct DXGCONTEXT *)v22,
                         v4);
      }
      else
      {
        v94 = (_QWORD *)WdLogNewEntry5_WdEvent(v92, v91);
        v94[3] = v93;
        v94[4] = v22;
        v94[5] = v8;
        WdLogEvent5_WdEvent(v94);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v179);
      COREACCESS::~COREACCESS((COREACCESS *)v178);
      v65 = v93;
LABEL_102:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v120 = *(_QWORD *)(v22 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v165,
          (struct DXGDEVICE *)v120);
        v121 = *(_QWORD *)(v22 + 16);
        v158 = 0;
        v157 = *(_QWORD *)(*(_QWORD *)(v121 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v156);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v168, v120, 2, v122, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v168);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v120 + 16) + 16LL) + 176LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v120, (struct DXGCONTEXT *)v22, (struct COREDEVICEACCESS *)v168);
        COREACCESS::~COREACCESS((COREACCESS *)v170);
        COREACCESS::~COREACCESS((COREACCESS *)v169);
        if ( v158 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v156);
        if ( v165[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v165);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v120 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v120 + 16), (struct DXGDEVICE *)v120);
      }
      goto LABEL_103;
    }
    v28 = *(struct _KEVENT **)(v27 + 16);
    if ( !KeReadStateEvent(v28 + 4) )
      KeWaitForSingleObject(&v28[4], Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v132 + 104), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v132 + 16) + 16LL) + 96LL));
      v77 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v132 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v78, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v132 + 104), 1u);
      if ( v77 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v132 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v132 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v137 = *(_QWORD *)(v22 + 16);
    v32 = *(_QWORD *)(*(_QWORD *)(v137 + 16) + 16LL);
    if ( !*(_BYTE *)(v32 + 2378)
      || (*((_BYTE *)DXGPROCESS::GetCurrent() + 323) & 0xC) != 0
      || (*(_DWORD *)&v4->Flags & 0x40) != 0
      || *(int *)(v32 + 2104) < 0x2000
      || (v95 = *(_DWORD *)(v32 + 248), v95 <= 1) )
    {
      BroadcastContextCount = v4->BroadcastContextCount;
      v184 = 0;
    }
    else
    {
      BroadcastContextCount = v95 - 1;
      v184 = 1;
      v4->BroadcastContextCount = BroadcastContextCount;
    }
    v34 = BroadcastContextCount + 1;
    if ( BroadcastContextCount > 0x40 )
    {
      v96 = WdLogNewEntry5_WdWarning(v30, v29, v31);
      v65 = -1073741811;
      *(_QWORD *)(v96 + 24) = v22;
      *(_QWORD *)(v96 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v96);
LABEL_101:
      ExReleaseResourceLite(*(PERESOURCE *)(v132 + 104));
      KeLeaveCriticalRegion();
      goto LABEL_102;
    }
    Src = 0LL;
    v150 = 0;
    if ( (unsigned int)v34 > 4 )
    {
      v29 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v34;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v34 < 8 )
        goto LABEL_210;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v34, 0x4B677844u);
    }
    else
    {
      PoolWithTag = v149;
    }
    Src = PoolWithTag;
    v150 = v34;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * v34);
      *(_QWORD *)Src = v22;
      if ( v184 )
      {
        v97 = 0;
        v98 = Src;
        v99 = 0;
        v100 = v137 + 360;
        v36 = *(_QWORD *)(v137 + 360);
        while ( v36 != v100 && v36 )
        {
          v37 = *(unsigned int *)(v36 + 360);
          if ( (unsigned int)v37 >= (unsigned int)v34 )
          {
            v101 = WdLogNewEntry5_WdError(v37);
            *(_QWORD *)(v101 + 32) = 2832LL;
            goto LABEL_164;
          }
          if ( ((1 << v37) & v97) != 0 )
          {
            v101 = WdLogNewEntry5_WdError(v37);
            *(_QWORD *)(v101 + 32) = 2839LL;
            goto LABEL_164;
          }
          v97 |= 1 << v37;
          v98[v37] = v36;
          v36 = *(_QWORD *)v36;
          ++v99;
        }
        if ( v99 == (_DWORD)v34 )
          goto LABEL_36;
        v101 = WdLogNewEntry5_WdError(v37);
        *(_QWORD *)(v101 + 32) = 2852LL;
LABEL_164:
        *(_QWORD *)(v101 + 24) = v22;
        WdLogEvent5_WdError(v101);
        v65 = -1073741811;
        goto LABEL_100;
      }
      v38 = 0;
      if ( v4->BroadcastContextCount )
      {
        while ( 1 )
        {
          v102 = v4->BroadcastContext[v38];
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v8 + 208));
          v103 = (v102 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v103 < *(_DWORD *)(v8 + 248)
            && (v104 = *(_QWORD *)(v8 + 232),
                v105 = *(_DWORD *)(v104 + 16 * v103 + 8),
                ((v102 >> 25) & 0x60) == (*(_BYTE *)(v104 + 16 * v103 + 8) & 0x60))
            && (v105 & 0x2000) == 0
            && (v105 & 0x1F) == 7 )
          {
            v106 = *(_QWORD *)(v104 + 16LL * (unsigned int)v103);
          }
          else
          {
            v106 = 0LL;
          }
          ExReleasePushLockSharedEx(v8 + 208, 0LL);
          KeLeaveCriticalRegion();
          v107 = v38 + 1;
          *((_QWORD *)Src + v107) = v106;
          v39 = Src;
          v36 = *((_QWORD *)Src + v107);
          if ( !v36 || *(_QWORD *)(v36 + 16) != *(_QWORD *)(v22 + 16) )
            break;
          ++v38;
          if ( (unsigned int)v107 >= v4->BroadcastContextCount )
            goto LABEL_37;
        }
        v108 = (_QWORD *)WdLogNewEntry5_WdError(8 * v107);
        v108[3] = v22;
        v108[4] = v4->BroadcastContext[v38];
        v109 = v38;
        v65 = -1073741811;
        v108[5] = v109;
        v108[6] = -1073741811LL;
        WdLogEvent5_WdError(v108);
        goto LABEL_100;
      }
LABEL_36:
      v39 = Src;
LABEL_37:
      v40 = v150;
      v41 = 0LL;
      v42 = 0LL;
      Base = 0LL;
      LODWORD(NumOfElements) = 0;
      if ( v150 > 4 )
      {
        v36 = 0xFFFFFFFFFFFFFFFFuLL % v150;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v150 < 8 )
        {
LABEL_41:
          v136 = 1;
          if ( !v41 )
            goto LABEL_207;
          memmove(v41, v39, 8 * v42);
          qsort(
            Base,
            (unsigned int)NumOfElements,
            8uLL,
            (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
          v36 = (unsigned int)NumOfElements;
          v42 = 1LL;
          v41 = Base;
          if ( (unsigned int)NumOfElements > 1uLL )
          {
            while ( *((_QWORD *)Base + v42) != *((_QWORD *)Base + v42 - 1) )
            {
              if ( ++v42 >= (unsigned __int64)(unsigned int)NumOfElements )
                goto LABEL_43;
            }
          }
          else
          {
LABEL_43:
            for ( i = 0LL; i < (unsigned int)NumOfElements; v41 = Base )
            {
              v44 = *(_QWORD *)&v41[8 * i];
              KeEnterCriticalRegion();
              if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v44 + 408, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v110 = *(_DWORD *)(v44 + 424);
                  if ( v110 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0q(v45, &EventBlockThread, v42, v110);
                }
                ExAcquirePushLockExclusiveEx(v44 + 408, 0LL);
              }
              ++i;
              *(_QWORD *)(v44 + 416) = KeGetCurrentThread();
            }
            v136 = 0;
          }
          if ( !v41 )
          {
LABEL_207:
            v118 = WdLogNewEntry5_WdWarning(v41, v36, v42);
            *(_QWORD *)(v118 + 24) = 2888LL;
            WdLogEvent5_WdWarning(v118);
            v65 = -1073741801;
LABEL_95:
            v69 = Base;
            if ( Base )
            {
              if ( !v136 )
              {
                for ( j = 0LL; j < (unsigned int)NumOfElements; v69 = Base )
                {
                  v71 = v69[j] + 408LL;
                  *(_QWORD *)(v71 + 8) = 0LL;
                  ExReleasePushLockExclusiveEx(v71, 0LL);
                  KeLeaveCriticalRegion();
                  ++j;
                }
              }
            }
            if ( v69 != (_QWORD *)v134 && v69 )
              ExFreePoolWithTag(v69, 0);
            goto LABEL_100;
          }
          v46 = *(volatile signed __int64 **)(*(_QWORD *)(v137 + 16) + 16LL);
          v154 = (struct DXGADAPTER *)v46;
          _InterlockedIncrement64(v46 + 3);
          v153 = -1LL;
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v46 + 15, 0LL);
          v48 = *(_QWORD *)(v22 + 16);
          v155 = 1;
          v49 = *(volatile signed __int64 **)(*(_QWORD *)(v48 + 16) + 16LL);
          v141 = (DXGADAPTER *)v49;
          v142 = 0;
          if ( v49 )
          {
            _InterlockedIncrement64(v49 + 3);
            v140[1] = (struct _KTHREAD **)-1LL;
          }
          v50 = *(volatile signed __int64 **)(*(_QWORD *)(v48 + 16) + 16LL);
          v144 = (struct DXGADAPTER *)v50;
          v145 = 0;
          if ( v50 )
          {
            _InterlockedIncrement64(v50 + 3);
            v143[1] = (struct _KTHREAD **)-1LL;
          }
          v146 = v48;
          v147 = 0;
          if ( v142 )
          {
            v111 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50);
            v111[5] = v140;
            v111[3] = 275LL;
            v111[4] = 4LL;
            v111[6] = 0LL;
            v111[7] = 0LL;
            WdLogEvent5_WdCriticalError(v111);
          }
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v141 + 20) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v141 + 2) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v51, &EventBlockThread, v52, 72);
              KeWaitForSingleObject((char *)v141 + 48, Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v141);
          }
          v142 = 1;
          if ( *(_DWORD *)(v146 + 424) != 1 )
            goto LABEL_193;
          if ( v147 )
          {
            COREACCESS::AcquireShared((DXGADAPTER **)v143);
            if ( *((_DWORD *)v144 + 44) != 1 )
            {
              COREACCESS::Release(v143);
LABEL_193:
              COREACCESS::Release(v140);
              v114 = (_QWORD *)WdLogNewEntry5_WdEvent(v113, v112);
              v114[3] = -1073741130LL;
              v114[4] = v22;
              v114[5] = v8;
              WdLogEvent5_WdEvent(v114);
              v65 = -1073741130;
LABEL_81:
              v66 = v144;
              if ( v144 )
              {
                if ( v145 )
                {
                  COREACCESS::Release(v143);
                  v66 = v144;
                }
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v66 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v66 + 2), v66);
              }
              v67 = v141;
              if ( v141 )
              {
                if ( v142 )
                {
                  v142 = 0;
                  v67 = v141;
                  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v141 + 20) )
                  {
                    DXGADAPTER::ReleaseCoreResource(v141);
                    v67 = v141;
                  }
                }
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v67 + 2), v67);
              }
              if ( v155 )
              {
                v68 = v154;
                ExReleasePushLockSharedEx((char *)v154 + 120, 0LL);
                KeLeaveCriticalRegion();
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v154 + 2), v154);
              }
              goto LABEL_95;
            }
          }
          v53 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 16LL);
          v54 = *(int *)(v53 + 2104) >= 0x2000 || *(_BYTE *)(v53 + 2396);
          if ( (*(_DWORD *)&v4->Flags & 0x20) != 0 )
            pNewAllocationList = v4->pNewAllocationList;
          else
            pNewAllocationList = *(struct _D3DDDI_ALLOCATIONLIST **)(v22 + 88);
          v56 = v138;
          v57 = 0LL;
          P = 0LL;
          v182 = 0;
          AllocationCount = v138->AllocationCount;
          v185 = v138->AllocationCount;
          if ( !v54 )
            goto LABEL_70;
          if ( (unsigned int)AllocationCount > 0x20 )
          {
            v48 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)AllocationCount;
            if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)AllocationCount < 8 )
              goto LABEL_197;
            v59 = ExAllocatePoolWithTag(PagedPool, 8 * AllocationCount, 0x4B677844u);
            P = v59;
          }
          else
          {
            v59 = v181;
            P = v181;
          }
          v182 = AllocationCount;
          if ( v59 )
          {
            memset(v59, 0, 8 * AllocationCount);
            v57 = (struct DXGALLOCATION **)P;
            if ( P )
            {
              v60 = DxgkReferenceAllocationList(&v185, pNewAllocationList, (struct DXGALLOCATION **)P, 0LL);
              AllocationCount = v185;
              v63 = v60;
              if ( v60 < 0 )
                goto LABEL_73;
              v56 = v138;
LABEL_70:
              if ( v184 )
                v64 = DXGCONTEXT::RenderKmLda(v56, (struct COREDEVICEACCESS *)v139, (struct DXGCONTEXT **)Src, v57);
              else
                v64 = DXGCONTEXT::Render(
                        (DXGCONTEXT *)v22,
                        v56,
                        (struct COREDEVICEACCESS *)v139,
                        (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v153,
                        (struct DXGCONTEXT **)Src,
                        v57,
                        v186,
                        *((_QWORD *)a1 + 1));
              v63 = v64;
LABEL_73:
              if ( v54 && (_DWORD)AllocationCount )
              {
                do
                {
                  v62 = *v57;
                  if ( *v57 )
                    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v62 + 11);
                  ++v57;
                  --AllocationCount;
                }
                while ( AllocationCount );
              }
              if ( v63 >= 0 )
                goto LABEL_79;
              switch ( v63 )
              {
                case -1073741811:
                case -1073741592:
                  v117 = (_QWORD *)WdLogNewEntry5_WdError(v62);
                  v117[3] = v63;
                  v117[4] = v22;
                  v117[5] = v8;
                  WdLogEvent5_WdError(v117);
                  goto LABEL_79;
                case -1071775482:
                  v116 = (_QWORD *)WdLogNewEntry5_WdEvent(v62, v61);
                  v116[3] = -1071775482LL;
                  break;
                case -1071774910:
                  goto LABEL_79;
                default:
                  v116 = (_QWORD *)WdLogNewEntry5_WdEvent(v62, v61);
                  v116[3] = v63;
                  break;
              }
              v116[4] = v22;
              v116[5] = v8;
              WdLogEvent5_WdEvent(v116);
LABEL_79:
              v65 = v63;
LABEL_80:
              if ( P != v181 && P )
                ExFreePoolWithTag(P, 0);
              goto LABEL_81;
            }
          }
LABEL_197:
          v115 = WdLogNewEntry5_WdWarning(v56, v48, v47);
          *(_QWORD *)(v115 + 24) = 2928LL;
          WdLogEvent5_WdWarning(v115);
          v65 = -1073741801;
          goto LABEL_80;
        }
        v41 = ExAllocatePoolWithTag(PagedPool, 8LL * v150, 0x4B677844u);
        Base = v41;
      }
      else
      {
        v41 = v134;
        Base = v134;
      }
      LODWORD(NumOfElements) = v40;
      v42 = v40;
      if ( v41 )
      {
        memset(v41, 0, 8 * v40);
        v42 = (unsigned int)NumOfElements;
        v41 = Base;
      }
      goto LABEL_41;
    }
LABEL_210:
    v119 = WdLogNewEntry5_WdWarning(v30, v29, v31);
    *(_QWORD *)(v119 + 24) = 2807LL;
    WdLogEvent5_WdWarning(v119);
    v65 = -1073741801;
LABEL_100:
    if ( Src != v149 && Src )
      ExFreePoolWithTag(Src, 0);
    goto LABEL_101;
  }
  v65 = -1073741811;
  v89 = (_QWORD *)WdLogNewEntry5_WdError(v25);
  v89[3] = -1073741811LL;
  v89[4] = PsGetCurrentProcess();
  v89[5] = v4->hDevice;
  WdLogEvent5_WdError(v89);
LABEL_103:
  v73 = v186;
  if ( v186 )
  {
    v123 = _InterlockedDecrement64((volatile signed __int64 *)v186 + 7);
    if ( v123 < 0 )
    {
      v124 = WdLogNewEntry5_WdAssertion(v72);
      *(_QWORD *)(v124 + 24) = 91LL;
      WdLogEvent5_WdAssertion(v124);
    }
    if ( !v123 )
    {
      v125 = *((_QWORD *)v73 + 2);
      v126 = *(struct DXGDEVICE **)(v125 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v166, v126);
      v127 = *((_QWORD *)v126 + 2);
      v161 = 0;
      v160 = *(_QWORD *)(v127 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v159);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v171, (__int64)v126, 2, v128, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v171);
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v126 + 2) + 16LL) + 176LL) != 4 )
        DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v125, v73, (struct COREDEVICEACCESS *)v171);
      COREACCESS::~COREACCESS((COREACCESS *)v173);
      COREACCESS::~COREACCESS((COREACCESS *)v172);
      if ( v161 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v159);
      if ( v166[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v166);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v125 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v129 = *(_QWORD *)(v125 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v167,
          (struct DXGDEVICE *)v129);
        v130 = *(_QWORD *)(v125 + 16);
        v164 = 0;
        v163 = *(_QWORD *)(*(_QWORD *)(v130 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v162);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v174, v129, 2, v131, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v174);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v129 + 16) + 16LL) + 176LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v129, (struct DXGCONTEXT *)v125, (struct COREDEVICEACCESS *)v174);
        COREACCESS::~COREACCESS((COREACCESS *)v176);
        COREACCESS::~COREACCESS((COREACCESS *)v175);
        if ( v164 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v162);
        if ( v167[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v167);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v129 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v129 + 16), (struct DXGDEVICE *)v129);
      }
    }
  }
LABEL_104:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v151);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v74, &EventProfilerExit, v75, v151);
  return v65;
}
