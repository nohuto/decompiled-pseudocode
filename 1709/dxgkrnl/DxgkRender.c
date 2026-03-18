/*
 * XREFs of DxgkRender @ 0x1C01BDFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004104 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008EC0 (-GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000E084 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000E0EC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C007982C (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00C1D40 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00F071C (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C01707C4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0182AE8 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C018801C (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B5800 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 */

__int64 __fastcall DxgkRender(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  _OWORD *v14; // rax
  struct _D3DKMT_RENDER *v15; // rcx
  __int64 v16; // rdx
  __int64 hDevice; // rdi
  __int64 v18; // rcx
  DXGCONTEXT *v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 BroadcastContextCount; // rdx
  __int64 v27; // rax
  unsigned int v28; // edi
  struct DXGCONTEXT **PoolWithTag; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // edi
  __int64 v34; // rax
  __int64 v35; // r9
  unsigned int v36; // ecx
  struct DXGCONTEXT *v37; // rdx
  __int64 v38; // rcx
  struct DXGCONTEXT *v39; // rdx
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
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
  __int64 NewCommandBufferSize; // rdx
  __int64 NewAllocationListSize; // rcx
  UINT NewPatchLocationListSize; // r13d
  __int64 v65; // r8
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  int v68; // eax
  int v69; // edx
  int v70; // r8d
  int v71; // r9d
  ULONG64 v72; // r10
  unsigned int v73; // [rsp+40h] [rbp-408h] BYREF
  unsigned __int8 IsDxgmms2; // [rsp+44h] [rbp-404h]
  struct DXGALLOCATION **v75; // [rsp+48h] [rbp-400h]
  _BYTE v76[16]; // [rsp+50h] [rbp-3F8h] BYREF
  int v77; // [rsp+60h] [rbp-3E8h]
  int v78; // [rsp+64h] [rbp-3E4h]
  _BYTE v79[16]; // [rsp+68h] [rbp-3E0h] BYREF
  char v80[8]; // [rsp+78h] [rbp-3D0h] BYREF
  __int64 v81; // [rsp+80h] [rbp-3C8h]
  char v82; // [rsp+88h] [rbp-3C0h]
  struct DXGCONTEXT **v83; // [rsp+90h] [rbp-3B8h] BYREF
  _BYTE v84[32]; // [rsp+98h] [rbp-3B0h] BYREF
  unsigned int v85; // [rsp+B8h] [rbp-390h]
  struct _D3DDDI_ALLOCATIONLIST *pNewAllocationList; // [rsp+C0h] [rbp-388h]
  __int64 v87; // [rsp+C8h] [rbp-380h]
  DXGCONTEXT *v88[2]; // [rsp+D0h] [rbp-378h] BYREF
  ULONG64 v89; // [rsp+E0h] [rbp-368h]
  _QWORD v90[6]; // [rsp+E8h] [rbp-360h] BYREF
  char v91; // [rsp+118h] [rbp-330h]
  _BYTE v92[32]; // [rsp+120h] [rbp-328h] BYREF
  DXGADAPTER *v93[12]; // [rsp+140h] [rbp-308h] BYREF
  PVOID v94[33]; // [rsp+1A0h] [rbp-2A8h] BYREF
  int v95; // [rsp+2A8h] [rbp-1A0h]
  struct _D3DKMT_RENDER v96; // [rsp+2B0h] [rbp-198h] BYREF

  v89 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2013);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v88[1] = Current;
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = PsGetCurrentProcess(v8, v7);
    v9 = -1073741811;
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v11 = qword_1C005F010;
    v12 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v10, 2013);
    return (unsigned int)v9;
  }
  v14 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = (_OWORD *)MmUserProbeAddress;
  v15 = &v96;
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
  hDevice = v96.hDevice;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76, v96.hDevice, Current, v88, 0);
  v19 = v88[0];
  if ( !v88[0] )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v20[3] = Current;
    v20[4] = hDevice;
    v9 = -1073741811;
    v20[5] = -1073741811LL;
LABEL_16:
    WdLogEvent5_WdError(v20);
LABEL_17:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
    v12 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  if ( ((*(_BYTE *)&v96.Flags | (unsigned __int8)(*(_DWORD *)&v96.Flags >> 1)) & 0x20) != 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v20[3] = hDevice;
    v9 = -1073741811;
    v20[4] = -1073741811LL;
    goto LABEL_16;
  }
  if ( *((_BYTE *)v88[0] + 398) )
  {
    v21 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v21 + 24) = hDevice;
    WdLogEvent5_WdError(v21);
    goto LABEL_22;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v79,
    *((struct DXGDEVICE **)v88[0] + 2));
  BroadcastContextCount = v96.BroadcastContextCount;
  if ( v96.BroadcastContextCount
    && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 16LL))
    || (unsigned int)BroadcastContextCount > 0x40 )
  {
    v27 = WdLogNewEntry5_WdWarning(v24, BroadcastContextCount, v25);
    *(_QWORD *)(v27 + 24) = v19;
    v9 = -1073741811;
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v27);
LABEL_29:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v79);
    goto LABEL_17;
  }
  v28 = BroadcastContextCount + 1;
  PoolWithTag = 0LL;
  v83 = 0LL;
  v85 = 0;
  if ( (unsigned int)(BroadcastContextCount + 1) <= 4 )
  {
    PoolWithTag = (struct DXGCONTEXT **)v84;
    v83 = (struct DXGCONTEXT **)v84;
  }
  else
  {
    v25 = v28;
    BroadcastContextCount = 0xFFFFFFFFFFFFFFFFuLL % v28;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v28 < 8 )
      goto LABEL_37;
    PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v28, 0x4B677844u);
    v83 = PoolWithTag;
  }
  v85 = v28;
  if ( !PoolWithTag )
  {
LABEL_38:
    v30 = WdLogNewEntry5_WdWarning(PoolWithTag, BroadcastContextCount, v25);
    *(_QWORD *)(v30 + 24) = 122LL;
    WdLogEvent5_WdWarning(v30);
    goto LABEL_39;
  }
  memset(PoolWithTag, 0, 8LL * v28);
  PoolWithTag = v83;
LABEL_37:
  if ( !PoolWithTag )
    goto LABEL_38;
  *PoolWithTag = v19;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v92, Current);
  v33 = 0;
  if ( v96.BroadcastContextCount )
  {
    while ( 1 )
    {
      LODWORD(v75) = v96.BroadcastContext[v33];
      v34 = ((unsigned int)v75 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v34 < *((_DWORD *)Current + 60)
        && (v35 = *((_QWORD *)Current + 28),
            v36 = *(_DWORD *)(v35 + 16 * v34 + 8),
            (unsigned int)v75 >> 30 == ((v36 >> 5) & 3))
        && (v36 & 0x2000) == 0
        && (v36 & 0x1F) != 0
        && (*(_BYTE *)(v35 + 16LL * (unsigned int)v34 + 8) & 0x1F) == 7 )
      {
        v37 = *(struct DXGCONTEXT **)(v35 + 16LL * (unsigned int)v34);
      }
      else
      {
        v37 = 0LL;
      }
      v73 = v33 + 1;
      v38 = v33 + 1;
      v83[v38] = v37;
      v39 = v83[v38];
      if ( !v39 )
        break;
      v38 = *((_QWORD *)v39 + 2);
      if ( v38 != *((_QWORD *)v19 + 2) )
        break;
      if ( *((_BYTE *)v39 + 398) )
      {
        v40 = WdLogNewEntry5_WdAssertion(v38);
        *(_QWORD *)(v40 + 24) = 167LL;
        WdLogEvent5_WdAssertion(v40);
      }
      v33 = v73;
      if ( v73 >= v96.BroadcastContextCount )
        goto LABEL_59;
    }
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v38);
    v41[3] = v19;
    v41[4] = (unsigned int)v75;
    v41[5] = v33;
    v9 = -1073741811;
    v41[6] = -1073741811LL;
    WdLogEvent5_WdError(v41);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v92);
    goto LABEL_58;
  }
LABEL_59:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v92);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v90,
    v83,
    v85);
  if ( v91 )
  {
    if ( v90[0] )
    {
      v46 = WdLogNewEntry5_WdWarning(v43, v42, v44);
      *(_QWORD *)(v46 + 24) = 185LL;
      WdLogEvent5_WdWarning(v46);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v90);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v83);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v79);
LABEL_22:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v22, &EventProfilerExit, v23, 2013);
      return -1073741811LL;
    }
    v45 = WdLogNewEntry5_WdWarning(v43, v42, v44);
    *(_QWORD *)(v45 + 24) = 180LL;
    WdLogEvent5_WdWarning(v45);
    goto LABEL_62;
  }
  v81 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 16LL);
  v82 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v93, *((_QWORD *)v19 + 2), 0, v47, 0);
  v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v93);
  if ( v9 < 0 )
  {
LABEL_65:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v93);
    if ( v82 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v90);
LABEL_58:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v83);
    goto LABEL_29;
  }
  v50 = *((_QWORD *)v19 + 6);
  CommandOffset = v96.CommandOffset;
  if ( v96.CommandOffset >= v50 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v48, v49);
    v52[4] = CommandOffset;
LABEL_70:
    v52[3] = v19;
    v53 = *((_QWORD *)v19 + 6);
LABEL_71:
    v9 = -1073741811;
    v52[6] = -1073741811LL;
    goto LABEL_116;
  }
  CommandLength = v96.CommandLength;
  if ( v96.CommandOffset + (unsigned __int64)v96.CommandLength > v50 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v48, v49);
    v52[4] = CommandLength;
    goto LABEL_70;
  }
  AllocationCount = v96.AllocationCount;
  if ( v96.AllocationCount > *((_DWORD *)v19 + 18) )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v48, v49);
    v52[3] = v19;
    v52[4] = AllocationCount;
    v53 = *((unsigned int *)v19 + 18);
    goto LABEL_71;
  }
  if ( v96.PatchLocationCount > *((_DWORD *)v19 + 26) )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v48, v49);
    v52[3] = v19;
    v52[4] = v96.PatchLocationCount;
    v53 = *((unsigned int *)v19 + 26);
    goto LABEL_71;
  }
  v9 = 0;
  if ( !v96.CommandLength )
  {
LABEL_95:
    if ( (*(_BYTE *)&v96.Flags & 1) == 0 && (*(_BYTE *)&v96.Flags & 2) == 0 && (*(_BYTE *)&v96.Flags & 4) == 0 )
      goto LABEL_117;
    NewCommandBufferSize = v96.NewCommandBufferSize;
    if ( (*(_BYTE *)&v96.Flags & 1) == 0 )
      NewCommandBufferSize = *((unsigned int *)v19 + 48);
    v73 = NewCommandBufferSize;
    NewAllocationListSize = v96.NewAllocationListSize;
    if ( (*(_BYTE *)&v96.Flags & 2) == 0 )
      NewAllocationListSize = *((unsigned int *)v19 + 51);
    LODWORD(v75) = NewAllocationListSize;
    NewPatchLocationListSize = v96.NewPatchLocationListSize;
    if ( (*(_BYTE *)&v96.Flags & 4) == 0 )
      NewPatchLocationListSize = *((_DWORD *)v19 + 52);
    v65 = *((unsigned int *)v19 + 48);
    if ( (unsigned int)NewCommandBufferSize < (unsigned int)v65 )
      goto LABEL_111;
    if ( (unsigned int)NewAllocationListSize >= *((_DWORD *)v19 + 51)
      && NewPatchLocationListSize >= *((_DWORD *)v19 + 52) )
    {
      if ( DXGADAPTER::IsCoreResourceSharedOwner(v93[3]) )
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v93);
      DXGCONTEXT::ResizeUserModeBuffers(
        v19,
        *((struct VIDMM_DMA_POOL **)v19 + 28),
        v73,
        (unsigned int)v75,
        NewPatchLocationListSize);
      v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v93);
      goto LABEL_117;
    }
    if ( (unsigned int)NewCommandBufferSize < (unsigned int)v65 )
    {
LABEL_111:
      v66 = (_QWORD *)WdLogNewEntry5_WdWarning(NewAllocationListSize, NewCommandBufferSize, v65);
      v66[3] = v19;
      v66[4] = v73;
      v66[5] = *((unsigned int *)v19 + 48);
      WdLogEvent5_WdWarning(v66);
    }
    if ( (unsigned int)v75 < *((_DWORD *)v19 + 51) )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdWarning(NewAllocationListSize, NewCommandBufferSize, v65);
      v67[3] = v19;
      v67[4] = (unsigned int)v75;
      v67[5] = *((unsigned int *)v19 + 51);
      WdLogEvent5_WdWarning(v67);
    }
    if ( NewPatchLocationListSize >= *((_DWORD *)v19 + 52) )
      goto LABEL_117;
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(NewAllocationListSize, NewCommandBufferSize, v65);
    v52[3] = v19;
    v52[4] = NewPatchLocationListSize;
    v53 = *((unsigned int *)v19 + 52);
LABEL_116:
    v52[5] = v53;
    WdLogEvent5_WdWarning(v52);
LABEL_117:
    v68 = 0;
    v87 = 0LL;
    v69 = 0;
    v77 = 0;
    v70 = 0;
    v78 = 0;
    v71 = 0;
    if ( v9 != -1073741130 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v93);
      if ( !*((_BYTE *)v19 + 398) )
        _guard_dispatch_icall_fptr();
      DXGCONTEXT::GetRenderHwQueue(v19);
      v71 = _guard_dispatch_icall_fptr();
      v68 = v87;
      v69 = v77;
      v70 = v78;
    }
    v72 = v89;
    *(_QWORD *)(v89 + 24) = *((_QWORD *)v19 + 7);
    *(_DWORD *)(v72 + 32) = v68;
    *(_QWORD *)(v72 + 40) = *((_QWORD *)v19 + 11);
    *(_DWORD *)(v72 + 48) = v69;
    *(_QWORD *)(v72 + 56) = *((_QWORD *)v19 + 15);
    *(_DWORD *)(v72 + 64) = v70;
    *(_DWORD *)(v72 + 340) = v71;
    goto LABEL_65;
  }
  if ( (*(_BYTE *)&v96.Flags & 0x20) != 0 )
    pNewAllocationList = v96.pNewAllocationList;
  else
    pNewAllocationList = (struct _D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v19 + 11);
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 16LL));
  v73 = AllocationCount;
  v94[0] = 0LL;
  v95 = 0;
  v56 = 0LL;
  v75 = 0LL;
  if ( !IsDxgmms2 )
  {
LABEL_87:
    if ( v9 >= 0 )
      v9 = DXGCONTEXT::Render(
             v19,
             &v96,
             (struct COREDEVICEACCESS *)v93,
             (struct DXGADAPTERSTOPRESETLOCKSHARED *)v80,
             v83,
             v56);
    if ( IsDxgmms2 )
      DxgkUnreferenceAllocationList(AllocationCount, (struct _EX_RUNDOWN_REF **)v75);
    if ( v9 >= 0 && (*(_BYTE *)&v96.Flags & 0x10) != 0 )
      v9 = DXGCONTEXT::HandleVistaBltStub(
             v19,
             v96.PresentHistoryToken,
             1,
             v93,
             (struct DXGADAPTERSTOPRESETLOCKSHARED *)v80,
             v96.BroadcastContextCount,
             v96.BroadcastContext,
             v83);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v94);
    if ( v9 < 0 )
      goto LABEL_117;
    goto LABEL_95;
  }
  Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(v94, AllocationCount);
  v75 = Elements;
  if ( Elements )
  {
    v9 = DxgkReferenceAllocationList(&v73, pNewAllocationList, Elements, *((struct DXGDEVICE **)v19 + 2));
    LODWORD(AllocationCount) = v73;
    v56 = v75;
    goto LABEL_87;
  }
  v61 = WdLogNewEntry5_WdWarning(v59, v58, v60);
  *(_QWORD *)(v61 + 24) = 268LL;
  WdLogEvent5_WdWarning(v61);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v94);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v93);
  if ( v82 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
LABEL_62:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v90);
LABEL_39:
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v83);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v79);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, 2013);
  return 3221225495LL;
}
