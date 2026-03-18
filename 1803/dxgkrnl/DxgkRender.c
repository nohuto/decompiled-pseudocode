/*
 * XREFs of DxgkRender @ 0x1C0099050
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001070 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00166DC (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C0096138 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C0099C78 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAA@XZ @ 0x1C0099C98 (--1-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAA@XZ.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C0099EB8 (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAVDXGHWQUEUE@@_K@Z @ 0x1C00FEAF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C0147588 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C016AD48 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B1648 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 */

__int64 __fastcall DxgkRender(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // r8
  _OWORD *v11; // rax
  _D3DKMT_RENDER *v12; // rcx
  __int64 v13; // rdx
  __int64 hDevice; // rdi
  __int64 v15; // rcx
  struct DXGCONTEXT *v16; // rbx
  _QWORD *v17; // rax
  char Flags; // r12
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 BroadcastContextCount; // rdx
  __int64 v25; // rax
  unsigned int v26; // eax
  struct DXGCONTEXT **PoolWithTag; // rcx
  unsigned __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // edi
  __int64 v33; // rax
  __int64 v34; // r9
  unsigned int v35; // ecx
  struct DXGCONTEXT *v36; // rcx
  __int64 v37; // rdx
  struct DXGCONTEXT *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  unsigned __int64 v50; // rcx
  __int64 CommandOffset; // rdi
  _QWORD *v52; // rax
  __int64 v53; // rcx
  __int64 CommandLength; // r13
  __int64 AllocationCount; // r13
  struct DXGALLOCATION **v56; // rax
  struct DXGALLOCATION **Elements; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 NewCommandBufferSize; // rcx
  UINT NewAllocationListSize; // r13d
  bool v64; // zf
  UINT NewPatchLocationListSize; // r12d
  __int64 v66; // rdx
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  int v69; // eax
  int v70; // edx
  int v71; // r8d
  int v72; // r9d
  ULONG64 v73; // r10
  unsigned int v74; // [rsp+40h] [rbp-418h] BYREF
  int v75; // [rsp+48h] [rbp-410h] BYREF
  __int64 v76; // [rsp+50h] [rbp-408h]
  unsigned __int8 IsDxgmms2; // [rsp+58h] [rbp-400h]
  _BYTE v78[16]; // [rsp+60h] [rbp-3F8h] BYREF
  int v79; // [rsp+70h] [rbp-3E8h]
  int v80; // [rsp+74h] [rbp-3E4h]
  struct DXGALLOCATION **v81; // [rsp+78h] [rbp-3E0h]
  _BYTE v82[16]; // [rsp+80h] [rbp-3D8h] BYREF
  char v83[8]; // [rsp+90h] [rbp-3C8h] BYREF
  __int64 v84; // [rsp+98h] [rbp-3C0h]
  char v85; // [rsp+A0h] [rbp-3B8h]
  struct DXGCONTEXT **v86; // [rsp+A8h] [rbp-3B0h] BYREF
  _BYTE v87[32]; // [rsp+B0h] [rbp-3A8h] BYREF
  unsigned int v88; // [rsp+D0h] [rbp-388h]
  struct _D3DDDI_ALLOCATIONLIST *pNewAllocationList; // [rsp+D8h] [rbp-380h]
  __int64 v90; // [rsp+E0h] [rbp-378h]
  struct DXGCONTEXT *v91[2]; // [rsp+E8h] [rbp-370h] BYREF
  ULONG64 v92; // [rsp+F8h] [rbp-360h]
  _BYTE v93[24]; // [rsp+100h] [rbp-358h] BYREF
  _QWORD v94[6]; // [rsp+118h] [rbp-340h] BYREF
  char v95; // [rsp+148h] [rbp-310h]
  _BYTE v96[24]; // [rsp+150h] [rbp-308h] BYREF
  DXGADAPTER *v97; // [rsp+168h] [rbp-2F0h]
  _QWORD v98[33]; // [rsp+1B0h] [rbp-2A8h] BYREF
  int v99; // [rsp+2B8h] [rbp-1A0h]
  _D3DKMT_RENDER v100; // [rsp+2C0h] [rbp-198h] BYREF

  v92 = a1;
  v76 = 0LL;
  v75 = 2013;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2013);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v75, 2013);
  Current = DXGPROCESS::GetCurrent();
  v91[1] = Current;
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = PsGetCurrentProcess();
    v7 = -1073741811;
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v75);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v8, &EventProfilerExit, v9, v75);
    return (unsigned int)v7;
  }
  v11 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_OWORD *)MmUserProbeAddress;
  v12 = &v100;
  v13 = 2LL;
  do
  {
    *(_OWORD *)&v12->hDevice = *v11;
    *(_OWORD *)&v12->PatchLocationCount = v11[1];
    *(_OWORD *)&v12->NewCommandBufferSize = v11[2];
    *(_OWORD *)&v12->NewAllocationListSize = v11[3];
    *(_OWORD *)&v12->NewPatchLocationListSize = v11[4];
    *(_OWORD *)&v12->BroadcastContextCount = v11[5];
    *(_OWORD *)&v12->BroadcastContext[3] = v11[6];
    v12 = (_D3DKMT_RENDER *)((char *)v12 + 128);
    *(_OWORD *)&v12[-1].pPrivateDriverData = v11[7];
    v11 += 8;
    --v13;
  }
  while ( v13 );
  *(_OWORD *)&v12->hDevice = *v11;
  *(_OWORD *)&v12->PatchLocationCount = v11[1];
  *(_OWORD *)&v12->NewCommandBufferSize = v11[2];
  *(_OWORD *)&v12->NewAllocationListSize = v11[3];
  *(_OWORD *)&v12->NewPatchLocationListSize = v11[4];
  *(_OWORD *)&v12->BroadcastContextCount = v11[5];
  *(_OWORD *)&v12->BroadcastContext[3] = v11[6];
  hDevice = v100.hDevice;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v78, v100.hDevice, (struct _KTHREAD **)Current, v91, 0);
  v16 = v91[0];
  if ( !v91[0] )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v17[3] = Current;
    v17[4] = hDevice;
    v7 = -1073741811;
    v17[5] = -1073741811LL;
LABEL_16:
    WdLogEvent5_WdError(v17);
LABEL_17:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v78);
    goto LABEL_6;
  }
  Flags = (char)v100.Flags;
  if ( ((*(_BYTE *)&v100.Flags | (unsigned __int8)(*(_DWORD *)&v100.Flags >> 1)) & 0x20) != 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v17[3] = hDevice;
    v7 = -1073741811;
    v17[4] = -1073741811LL;
    goto LABEL_16;
  }
  if ( (*((_DWORD *)v91[0] + 91) & 0x10) != 0 )
  {
    v19 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v19 + 24) = v16;
LABEL_22:
    WdLogEvent5_WdError(v19);
LABEL_23:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v78);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v75);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, v21, v75);
    return -1073741811LL;
  }
  if ( *((_BYTE *)v91[0] + 398) )
  {
    v19 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v19 + 24) = hDevice;
    goto LABEL_22;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v82,
    *((struct DXGDEVICE **)v91[0] + 2));
  BroadcastContextCount = v100.BroadcastContextCount;
  if ( v100.BroadcastContextCount
    && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL))
    || (unsigned int)BroadcastContextCount > 0x40 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, BroadcastContextCount, v23);
    *(_QWORD *)(v25 + 24) = v16;
    v7 = -1073741811;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
LABEL_32:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v82);
    goto LABEL_17;
  }
  v26 = BroadcastContextCount + 1;
  v74 = BroadcastContextCount + 1;
  PoolWithTag = 0LL;
  v86 = 0LL;
  v88 = 0;
  v28 = (unsigned int)(BroadcastContextCount + 1);
  if ( (unsigned int)(BroadcastContextCount + 1) <= 4 )
  {
    PoolWithTag = (struct DXGCONTEXT **)v87;
    v86 = (struct DXGCONTEXT **)v87;
  }
  else
  {
    BroadcastContextCount = 0xFFFFFFFFFFFFFFFFuLL % v28;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v28 < 8 )
      goto LABEL_40;
    PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v28, 0x4B677844u);
    v86 = PoolWithTag;
    v26 = v74;
  }
  v88 = v26;
  if ( !PoolWithTag )
  {
LABEL_41:
    v29 = WdLogNewEntry5_WdWarning(PoolWithTag, BroadcastContextCount, v23);
    *(_QWORD *)(v29 + 24) = 129LL;
    WdLogEvent5_WdWarning(v29);
    goto LABEL_42;
  }
  memset(PoolWithTag, 0, 8 * v28);
  PoolWithTag = v86;
LABEL_40:
  if ( !PoolWithTag )
    goto LABEL_41;
  *PoolWithTag = v16;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v93, (struct _KTHREAD **)Current);
  v32 = 0;
  if ( v100.BroadcastContextCount )
  {
    while ( 1 )
    {
      LODWORD(v81) = v100.BroadcastContext[v32];
      v33 = ((unsigned int)v81 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v33 < *((_DWORD *)Current + 62)
        && (v34 = *((_QWORD *)Current + 29),
            v35 = *(_DWORD *)(v34 + 16 * v33 + 8),
            (unsigned int)v81 >> 30 == ((v35 >> 5) & 3))
        && (v35 & 0x2000) == 0
        && (v35 & 0x1F) == 7 )
      {
        v36 = *(struct DXGCONTEXT **)(v34 + 16LL * (unsigned int)v33);
      }
      else
      {
        v36 = 0LL;
      }
      v74 = v32 + 1;
      v37 = v32 + 1;
      v86[v37] = v36;
      v38 = v86[v37];
      if ( !v38 )
        break;
      v36 = (struct DXGCONTEXT *)*((_QWORD *)v38 + 2);
      if ( v36 != *((struct DXGCONTEXT **)v16 + 2) )
        break;
      if ( (*((_DWORD *)v38 + 91) & 0x10) != 0 )
      {
        v44 = WdLogNewEntry5_WdError(v36);
        *(_QWORD *)(v44 + 24) = v86[v74];
        WdLogEvent5_WdError(v44);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v93);
        goto LABEL_64;
      }
      if ( *((_BYTE *)v38 + 398) )
      {
        v39 = WdLogNewEntry5_WdAssertion(v36);
        *(_QWORD *)(v39 + 24) = 180LL;
        WdLogEvent5_WdAssertion(v39);
      }
      v32 = v74;
      if ( v74 >= v100.BroadcastContextCount )
        goto LABEL_59;
    }
    v45 = (_QWORD *)WdLogNewEntry5_WdError(v36);
    v45[3] = v16;
    v45[4] = (unsigned int)v81;
    v45[5] = v32;
    v7 = -1073741811;
    v45[6] = -1073741811LL;
    WdLogEvent5_WdError(v45);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v93);
    goto LABEL_66;
  }
LABEL_59:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v93);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v94,
    v86,
    v88);
  if ( v95 )
  {
    if ( v94[0] )
    {
      v46 = WdLogNewEntry5_WdWarning(v41, v40, v42);
      *(_QWORD *)(v46 + 24) = 198LL;
      WdLogEvent5_WdWarning(v46);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v94);
LABEL_64:
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v86);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v82);
      goto LABEL_23;
    }
    v43 = WdLogNewEntry5_WdWarning(v41, v40, v42);
    *(_QWORD *)(v43 + 24) = 193LL;
    WdLogEvent5_WdWarning(v43);
    goto LABEL_62;
  }
  v84 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL);
  v85 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v96, *((_QWORD *)v16 + 2), 0, v47, 0);
  v7 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v96);
  if ( v7 < 0 )
  {
LABEL_69:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v96);
    if ( v85 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v94);
LABEL_66:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v86);
    goto LABEL_32;
  }
  v50 = *((_QWORD *)v16 + 6);
  CommandOffset = v100.CommandOffset;
  if ( v100.CommandOffset >= v50 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v48, v49);
    v52[4] = CommandOffset;
LABEL_74:
    v52[3] = v16;
    v53 = *((_QWORD *)v16 + 6);
LABEL_75:
    v7 = -1073741811;
    v52[6] = -1073741811LL;
    goto LABEL_120;
  }
  CommandLength = v100.CommandLength;
  if ( v100.CommandOffset + (unsigned __int64)v100.CommandLength > v50 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v48, v49);
    v52[4] = CommandLength;
    goto LABEL_74;
  }
  AllocationCount = v100.AllocationCount;
  if ( v100.AllocationCount > *((_DWORD *)v16 + 18) )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v48, v49);
    v52[3] = v16;
    v52[4] = AllocationCount;
    v53 = *((unsigned int *)v16 + 18);
    goto LABEL_75;
  }
  if ( v100.PatchLocationCount > *((_DWORD *)v16 + 26) )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v48, v49);
    v52[3] = v16;
    v52[4] = v100.PatchLocationCount;
    v53 = *((unsigned int *)v16 + 26);
    goto LABEL_75;
  }
  v7 = 0;
  if ( !v100.CommandLength )
  {
LABEL_99:
    if ( (Flags & 1) == 0 && (Flags & 2) == 0 && (Flags & 4) == 0 )
      goto LABEL_121;
    NewCommandBufferSize = v100.NewCommandBufferSize;
    if ( (Flags & 1) == 0 )
      NewCommandBufferSize = *((unsigned int *)v16 + 48);
    v74 = NewCommandBufferSize;
    NewAllocationListSize = v100.NewAllocationListSize;
    if ( (Flags & 2) == 0 )
      NewAllocationListSize = *((_DWORD *)v16 + 51);
    v64 = (Flags & 4) == 0;
    NewPatchLocationListSize = v100.NewPatchLocationListSize;
    if ( v64 )
      NewPatchLocationListSize = *((_DWORD *)v16 + 52);
    v66 = *((unsigned int *)v16 + 48);
    if ( (unsigned int)NewCommandBufferSize < (unsigned int)v66 )
      goto LABEL_115;
    if ( NewAllocationListSize >= *((_DWORD *)v16 + 51) && NewPatchLocationListSize >= *((_DWORD *)v16 + 52) )
    {
      if ( DXGADAPTER::IsCoreResourceSharedOwner(v97) )
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v96);
      DXGCONTEXT::ResizeUserModeBuffers(
        v16,
        *((struct VIDMM_DMA_POOL **)v16 + 28),
        v74,
        NewAllocationListSize,
        NewPatchLocationListSize);
      v7 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v96);
      goto LABEL_121;
    }
    if ( (unsigned int)NewCommandBufferSize < (unsigned int)v66 )
    {
LABEL_115:
      v67 = (_QWORD *)WdLogNewEntry5_WdWarning(NewCommandBufferSize, v66, v49);
      v67[3] = v16;
      v67[4] = v74;
      v67[5] = *((unsigned int *)v16 + 48);
      WdLogEvent5_WdWarning(v67);
    }
    if ( NewAllocationListSize < *((_DWORD *)v16 + 51) )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdWarning(NewCommandBufferSize, v66, v49);
      v68[3] = v16;
      v68[4] = NewAllocationListSize;
      v68[5] = *((unsigned int *)v16 + 51);
      WdLogEvent5_WdWarning(v68);
    }
    if ( NewPatchLocationListSize >= *((_DWORD *)v16 + 52) )
      goto LABEL_121;
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(NewCommandBufferSize, v66, v49);
    v52[3] = v16;
    v52[4] = NewPatchLocationListSize;
    v53 = *((unsigned int *)v16 + 52);
LABEL_120:
    v52[5] = v53;
    WdLogEvent5_WdWarning(v52);
LABEL_121:
    v69 = 0;
    v90 = 0LL;
    v70 = 0;
    v79 = 0;
    v71 = 0;
    v80 = 0;
    v72 = 0;
    if ( v7 != -1073741130 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v96);
      if ( !*((_BYTE *)v16 + 398) )
        _guard_dispatch_icall_fptr();
      v72 = _guard_dispatch_icall_fptr();
      v69 = v90;
      v70 = v79;
      v71 = v80;
    }
    v73 = v92;
    *(_QWORD *)(v92 + 24) = *((_QWORD *)v16 + 7);
    *(_DWORD *)(v73 + 32) = v69;
    *(_QWORD *)(v73 + 40) = *((_QWORD *)v16 + 11);
    *(_DWORD *)(v73 + 48) = v70;
    *(_QWORD *)(v73 + 56) = *((_QWORD *)v16 + 15);
    *(_DWORD *)(v73 + 64) = v71;
    *(_DWORD *)(v73 + 340) = v72;
    goto LABEL_69;
  }
  if ( (Flags & 0x20) != 0 )
    pNewAllocationList = v100.pNewAllocationList;
  else
    pNewAllocationList = (struct _D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v16 + 11);
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL));
  v74 = AllocationCount;
  v98[0] = 0LL;
  v99 = 0;
  v56 = 0LL;
  v81 = 0LL;
  if ( !IsDxgmms2 )
  {
LABEL_91:
    if ( v7 >= 0 )
    {
      v7 = DXGCONTEXT::Render(
             v16,
             &v100,
             (struct COREDEVICEACCESS *)v96,
             (struct DXGADAPTERSTOPRESETLOCKSHARED *)v83,
             v86,
             v56,
             0LL,
             0LL);
      Flags = (char)v100.Flags;
    }
    if ( IsDxgmms2 )
      DxgkUnreferenceAllocationList(AllocationCount, v81);
    if ( v7 >= 0 && (Flags & 0x10) != 0 )
      v7 = DXGCONTEXT::HandleVistaBltStub(
             v16,
             v100.PresentHistoryToken,
             1,
             (struct COREDEVICEACCESS *)v96,
             (struct DXGADAPTERSTOPRESETLOCKSHARED *)v83,
             v100.BroadcastContextCount,
             v100.BroadcastContext,
             v86);
    PagedPoolZeroedArray<DXGALLOCATION *,32>::~PagedPoolZeroedArray<DXGALLOCATION *,32>(v98);
    if ( v7 < 0 )
      goto LABEL_121;
    goto LABEL_99;
  }
  Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                        v98,
                                        (unsigned int)AllocationCount);
  v81 = Elements;
  if ( Elements )
  {
    v7 = DxgkReferenceAllocationList(&v74, pNewAllocationList, Elements, *((struct DXGDEVICE **)v16 + 2));
    LODWORD(AllocationCount) = v74;
    v56 = v81;
    goto LABEL_91;
  }
  v61 = WdLogNewEntry5_WdWarning(v59, v58, v60);
  *(_QWORD *)(v61 + 24) = 281LL;
  WdLogEvent5_WdWarning(v61);
  PagedPoolZeroedArray<DXGALLOCATION *,32>::~PagedPoolZeroedArray<DXGALLOCATION *,32>(v98);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v96);
  if ( v85 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
LABEL_62:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v94);
LABEL_42:
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v86);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v82);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v78);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v75);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v75);
  return 3221225495LL;
}
