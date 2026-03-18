/*
 * XREFs of DxgkRender @ 0x1C01A43F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0002754 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004E20 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C0087038 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00BCAF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C016CE94 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C017F1A4 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C0183E1C (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C019EEA8 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@.c)
 */

__int64 __fastcall DxgkRender(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  _OWORD *v14; // rax
  struct _D3DKMT_RENDER *v15; // rcx
  __int64 v16; // rdx
  __int64 hDevice; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  DXGCONTEXT *v20; // rsi
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 BroadcastContextCount; // rdx
  __int64 v29; // rax
  unsigned int v30; // edi
  _QWORD *PoolWithTag; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // edi
  D3DKMT_HANDLE v37; // ecx
  __int64 v38; // r8
  unsigned int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned __int64 v55; // rcx
  __int64 CommandOffset; // rdi
  _QWORD *v57; // rax
  __int64 v58; // rcx
  __int64 CommandLength; // r13
  __int64 AllocationCount; // r13
  struct DXGALLOCATION **v61; // rax
  struct DXGALLOCATION **Elements; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 NewCommandBufferSize; // rdx
  __int64 NewAllocationListSize; // rcx
  UINT NewPatchLocationListSize; // r13d
  __int64 v71; // r8
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  int v74; // eax
  int v75; // edx
  int v76; // r8d
  int v77; // r9d
  ULONG64 v78; // r10
  unsigned int v79; // [rsp+30h] [rbp-408h] BYREF
  unsigned __int8 IsDxgmms2; // [rsp+34h] [rbp-404h]
  struct DXGALLOCATION **v81; // [rsp+38h] [rbp-400h]
  _BYTE v82[16]; // [rsp+40h] [rbp-3F8h] BYREF
  int v83; // [rsp+50h] [rbp-3E8h]
  int v84; // [rsp+54h] [rbp-3E4h]
  _BYTE v85[16]; // [rsp+58h] [rbp-3E0h] BYREF
  PVOID P; // [rsp+68h] [rbp-3D0h]
  _BYTE v87[32]; // [rsp+70h] [rbp-3C8h] BYREF
  unsigned int v88; // [rsp+90h] [rbp-3A8h]
  char v89[8]; // [rsp+98h] [rbp-3A0h] BYREF
  __int64 v90; // [rsp+A0h] [rbp-398h]
  char v91; // [rsp+A8h] [rbp-390h]
  struct _D3DDDI_ALLOCATIONLIST *pNewAllocationList; // [rsp+B0h] [rbp-388h]
  __int64 v93; // [rsp+B8h] [rbp-380h]
  DXGCONTEXT *v94[2]; // [rsp+C0h] [rbp-378h] BYREF
  ULONG64 v95; // [rsp+D0h] [rbp-368h]
  _QWORD v96[6]; // [rsp+D8h] [rbp-360h] BYREF
  char v97; // [rsp+108h] [rbp-330h]
  _BYTE v98[32]; // [rsp+110h] [rbp-328h] BYREF
  _BYTE v99[24]; // [rsp+130h] [rbp-308h] BYREF
  DXGADAPTER *v100; // [rsp+148h] [rbp-2F0h]
  PVOID v101[33]; // [rsp+190h] [rbp-2A8h] BYREF
  int v102; // [rsp+298h] [rbp-1A0h]
  struct _D3DKMT_RENDER v103; // [rsp+2A0h] [rbp-198h] BYREF

  v95 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2013);
  Current = DXGPROCESS::GetCurrent(a1);
  v94[1] = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = PsGetCurrentProcess(v8);
    v9 = -1073741811;
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v11 = qword_1C006E790;
    v12 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v11, &EventProfilerExit, v10, 2013);
    return (unsigned int)v9;
  }
  v14 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = (_OWORD *)MmUserProbeAddress;
  v15 = &v103;
  v16 = 2LL;
  do
  {
    *(_OWORD *)&v15->hDevice = *v14;
    *(_OWORD *)&v15->PatchLocationCount = v14[1];
    *(_OWORD *)&v15->NewCommandBufferSize = v14[2];
    *(_OWORD *)&v15->NewAllocationListSize = v14[3];
    *(_OWORD *)&v15->NewPatchLocationListSize = v14[4];
    *(_OWORD *)&v15->BroadcastContextCount = v14[5];
    *(_OWORD *)&v15->BroadcastContext[3] = v14[6];
    v15 = (struct _D3DKMT_RENDER *)((char *)v15 + 128);
    *(_OWORD *)&v15[-1].pPrivateDriverData = v14[7];
    v14 += 8;
    --v16;
  }
  while ( v16 );
  *(_OWORD *)&v15->hDevice = *v14;
  *(_OWORD *)&v15->PatchLocationCount = v14[1];
  *(_OWORD *)&v15->NewCommandBufferSize = v14[2];
  *(_OWORD *)&v15->NewAllocationListSize = v14[3];
  *(_OWORD *)&v15->NewPatchLocationListSize = v14[4];
  *(_OWORD *)&v15->BroadcastContextCount = v14[5];
  *(_OWORD *)&v15->BroadcastContext[3] = v14[6];
  hDevice = v103.hDevice;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82, v103.hDevice, Current, v94, 0);
  v20 = v94[0];
  if ( !v94[0] )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v21[3] = Current;
    v21[4] = hDevice;
    v9 = -1073741811;
    v21[5] = -1073741811LL;
LABEL_16:
    WdLogEvent5_WdError(v21);
LABEL_17:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82);
    v12 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  if ( ((*(_BYTE *)&v103.Flags | (unsigned __int8)(*(_DWORD *)&v103.Flags >> 1)) & 0x20) != 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v21[3] = hDevice;
    v9 = -1073741811;
    v21[4] = -1073741811LL;
    goto LABEL_16;
  }
  if ( *((_BYTE *)v94[0] + 366) )
  {
    v22 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v22 + 24) = hDevice;
    WdLogEvent5_WdError(v22);
LABEL_22:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v23, &EventProfilerExit, v24, 2013);
    return -1073741811LL;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v85,
    *((struct DXGDEVICE **)v94[0] + 2));
  BroadcastContextCount = v103.BroadcastContextCount;
  if ( v103.BroadcastContextCount
    && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 16LL))
    || (unsigned int)BroadcastContextCount > 0x40 )
  {
    v29 = WdLogNewEntry5_WdWarning(v25, BroadcastContextCount, v26, v27);
    *(_QWORD *)(v29 + 24) = v20;
    v9 = -1073741811;
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
LABEL_29:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v85);
    goto LABEL_17;
  }
  v30 = BroadcastContextCount + 1;
  PoolWithTag = 0LL;
  P = 0LL;
  v88 = 0;
  if ( (unsigned int)(BroadcastContextCount + 1) <= 4 )
  {
    PoolWithTag = v87;
    P = v87;
  }
  else
  {
    v26 = v30;
    BroadcastContextCount = 0xFFFFFFFFFFFFFFFFuLL % v30;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v30 < 8 )
      goto LABEL_37;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v30, 0x4B677844u);
    P = PoolWithTag;
  }
  v88 = v30;
  if ( !PoolWithTag )
  {
LABEL_38:
    v32 = WdLogNewEntry5_WdWarning(PoolWithTag, BroadcastContextCount, v26, v27);
    *(_QWORD *)(v32 + 24) = 123LL;
    WdLogEvent5_WdWarning(v32);
    goto LABEL_39;
  }
  memset(PoolWithTag, 0, 8LL * v30);
  PoolWithTag = P;
LABEL_37:
  if ( !PoolWithTag )
    goto LABEL_38;
  *PoolWithTag = v20;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v98, Current, v26, v27);
  v36 = 0;
  if ( v103.BroadcastContextCount )
  {
    while ( 1 )
    {
      v37 = (v103.BroadcastContext[v36] >> 6) & 0xFFFFFF;
      v38 = v103.BroadcastContext[v36] >> 30;
      if ( v37 < *((_DWORD *)Current + 52)
        && (v35 = *((_QWORD *)Current + 24), v39 = *(_DWORD *)(v35 + 16LL * v37 + 8), (_DWORD)v38 == ((v39 >> 4) & 3))
        && (v39 & 0x1000) == 0
        && (v39 & 0xF) != 0
        && (*(_BYTE *)(v35 + 16LL * v37 + 8) & 0xF) == 7 )
      {
        v40 = *(_QWORD *)(v35 + 16LL * v37);
      }
      else
      {
        v40 = 0LL;
      }
      v79 = v36 + 1;
      v41 = v36 + 1;
      *((_QWORD *)P + v41) = v40;
      v42 = *((_QWORD *)P + v41);
      if ( !v42 )
        break;
      v41 = *(_QWORD *)(v42 + 16);
      if ( v41 != *((_QWORD *)v20 + 2) )
        break;
      if ( *(_BYTE *)(v42 + 366) )
      {
        v43 = WdLogNewEntry5_WdAssertion(v41, v42, v38, v35);
        *(_QWORD *)(v43 + 24) = 168LL;
        WdLogEvent5_WdAssertion(v43);
      }
      v36 = v79;
      if ( v79 >= v103.BroadcastContextCount )
        goto LABEL_64;
    }
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v41, v42);
    v44[3] = v20;
    v44[4] = v103.BroadcastContext[v36];
    v44[5] = v36;
    v9 = -1073741811;
    v44[6] = -1073741811LL;
    WdLogEvent5_WdError(v44);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v98);
    goto LABEL_61;
  }
LABEL_64:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v98);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v96,
    P,
    v88);
  if ( v97 )
  {
    if ( v96[0] )
    {
      v50 = WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
      *(_QWORD *)(v50 + 24) = 186LL;
      WdLogEvent5_WdWarning(v50);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v96);
      if ( P != v87 && P )
        ExFreePoolWithTag(P, 0);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v85);
      goto LABEL_22;
    }
    v49 = WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
    *(_QWORD *)(v49 + 24) = 181LL;
    WdLogEvent5_WdWarning(v49);
    goto LABEL_67;
  }
  v90 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 16LL);
  v91 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v89);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v99, *((_QWORD *)v20 + 2), 0LL, v51, 0);
  v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v99);
  if ( v9 < 0 )
  {
LABEL_73:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v99);
    if ( v91 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v89);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v96);
LABEL_61:
    if ( P != v87 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_29;
  }
  v55 = *((_QWORD *)v20 + 6);
  CommandOffset = v103.CommandOffset;
  if ( v103.CommandOffset >= v55 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v52, v53, v54);
    v57[4] = CommandOffset;
LABEL_78:
    v57[3] = v20;
    v58 = *((_QWORD *)v20 + 6);
LABEL_79:
    v9 = -1073741811;
    v57[6] = -1073741811LL;
    goto LABEL_124;
  }
  CommandLength = v103.CommandLength;
  if ( v103.CommandOffset + (unsigned __int64)v103.CommandLength > v55 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v52, v53, v54);
    v57[4] = CommandLength;
    goto LABEL_78;
  }
  AllocationCount = v103.AllocationCount;
  if ( v103.AllocationCount > *((_DWORD *)v20 + 18) )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v52, v53, v54);
    v57[3] = v20;
    v57[4] = AllocationCount;
    v58 = *((unsigned int *)v20 + 18);
    goto LABEL_79;
  }
  if ( v103.PatchLocationCount > *((_DWORD *)v20 + 26) )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v52, v53, v54);
    v57[3] = v20;
    v57[4] = v103.PatchLocationCount;
    v58 = *((unsigned int *)v20 + 26);
    goto LABEL_79;
  }
  v9 = 0;
  if ( !v103.CommandLength )
  {
LABEL_103:
    if ( (*(_BYTE *)&v103.Flags & 1) == 0 && (*(_BYTE *)&v103.Flags & 2) == 0 && (*(_BYTE *)&v103.Flags & 4) == 0 )
      goto LABEL_125;
    NewCommandBufferSize = v103.NewCommandBufferSize;
    if ( (*(_BYTE *)&v103.Flags & 1) == 0 )
      NewCommandBufferSize = *((unsigned int *)v20 + 48);
    v79 = NewCommandBufferSize;
    NewAllocationListSize = v103.NewAllocationListSize;
    if ( (*(_BYTE *)&v103.Flags & 2) == 0 )
      NewAllocationListSize = *((unsigned int *)v20 + 51);
    LODWORD(v81) = NewAllocationListSize;
    NewPatchLocationListSize = v103.NewPatchLocationListSize;
    if ( (*(_BYTE *)&v103.Flags & 4) == 0 )
      NewPatchLocationListSize = *((_DWORD *)v20 + 52);
    v71 = *((unsigned int *)v20 + 48);
    if ( (unsigned int)NewCommandBufferSize < (unsigned int)v71 )
      goto LABEL_119;
    if ( (unsigned int)NewAllocationListSize >= *((_DWORD *)v20 + 51)
      && NewPatchLocationListSize >= *((_DWORD *)v20 + 52) )
    {
      if ( DXGADAPTER::IsCoreResourceSharedOwner(v100) )
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v99);
      DXGCONTEXT::ResizeUserModeBuffers(
        v20,
        *((struct VIDMM_DMA_POOL **)v20 + 28),
        v79,
        (unsigned int)v81,
        NewPatchLocationListSize);
      v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v99);
      goto LABEL_125;
    }
    if ( (unsigned int)NewCommandBufferSize < (unsigned int)v71 )
    {
LABEL_119:
      v72 = (_QWORD *)WdLogNewEntry5_WdWarning(NewAllocationListSize, NewCommandBufferSize, v71, v54);
      v72[3] = v20;
      v72[4] = v79;
      v72[5] = *((unsigned int *)v20 + 48);
      WdLogEvent5_WdWarning(v72);
    }
    if ( (unsigned int)v81 < *((_DWORD *)v20 + 51) )
    {
      v73 = (_QWORD *)WdLogNewEntry5_WdWarning(NewAllocationListSize, NewCommandBufferSize, v71, v54);
      v73[3] = v20;
      v73[4] = (unsigned int)v81;
      v73[5] = *((unsigned int *)v20 + 51);
      WdLogEvent5_WdWarning(v73);
    }
    if ( NewPatchLocationListSize >= *((_DWORD *)v20 + 52) )
      goto LABEL_125;
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(NewAllocationListSize, NewCommandBufferSize, v71, v54);
    v57[3] = v20;
    v57[4] = NewPatchLocationListSize;
    v58 = *((unsigned int *)v20 + 52);
LABEL_124:
    v57[5] = v58;
    WdLogEvent5_WdWarning(v57);
LABEL_125:
    v74 = 0;
    v93 = 0LL;
    v75 = 0;
    v83 = 0;
    v76 = 0;
    v84 = 0;
    v77 = 0;
    if ( v9 != -1073741130 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v99);
      if ( !*((_BYTE *)v20 + 366) )
        _guard_dispatch_icall_fptr();
      v77 = _guard_dispatch_icall_fptr();
      v74 = v93;
      v75 = v83;
      v76 = v84;
    }
    v78 = v95;
    *(_QWORD *)(v95 + 24) = *((_QWORD *)v20 + 7);
    *(_DWORD *)(v78 + 32) = v74;
    *(_QWORD *)(v78 + 40) = *((_QWORD *)v20 + 11);
    *(_DWORD *)(v78 + 48) = v75;
    *(_QWORD *)(v78 + 56) = *((_QWORD *)v20 + 15);
    *(_DWORD *)(v78 + 64) = v76;
    *(_DWORD *)(v78 + 340) = v77;
    goto LABEL_73;
  }
  if ( (*(_BYTE *)&v103.Flags & 0x20) != 0 )
    pNewAllocationList = v103.pNewAllocationList;
  else
    pNewAllocationList = (struct _D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v20 + 11);
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 16LL));
  v79 = AllocationCount;
  v101[0] = 0LL;
  v102 = 0;
  v61 = 0LL;
  v81 = 0LL;
  if ( !IsDxgmms2 )
  {
LABEL_95:
    if ( v9 >= 0 )
      v9 = DXGCONTEXT::Render(
             v20,
             &v103,
             (struct COREDEVICEACCESS *)v99,
             (struct DXGADAPTERSTOPRESETLOCKSHARED *)v89,
             (struct DXGCONTEXT **)P,
             v61);
    if ( IsDxgmms2 )
      DxgkUnreferenceAllocationList(AllocationCount, (struct _EX_RUNDOWN_REF **)v81);
    if ( v9 >= 0 && (*(_BYTE *)&v103.Flags & 0x10) != 0 )
      v9 = DXGCONTEXT::HandleVistaBltStub(
             v20,
             v103.PresentHistoryToken,
             (struct COREDEVICEACCESS *)v99,
             (struct DXGADAPTERSTOPRESETLOCKSHARED *)v89,
             (struct DXGCONTEXT **)P);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v101);
    if ( v9 < 0 )
      goto LABEL_125;
    goto LABEL_103;
  }
  Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(v101, AllocationCount);
  v81 = Elements;
  if ( Elements )
  {
    v9 = DxgkReferenceAllocationList(&v79, pNewAllocationList, Elements, *((struct DXGDEVICE **)v20 + 2));
    LODWORD(AllocationCount) = v79;
    v61 = v81;
    goto LABEL_95;
  }
  v67 = WdLogNewEntry5_WdWarning(v64, v63, v65, v66);
  *(_QWORD *)(v67 + 24) = 269LL;
  WdLogEvent5_WdWarning(v67);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v101);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v99);
  if ( v91 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v89);
LABEL_67:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v96);
LABEL_39:
  if ( P != v87 && P )
    ExFreePoolWithTag(P, 0);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v85);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v33, &EventProfilerExit, v34, 2013);
  return 3221225495LL;
}
