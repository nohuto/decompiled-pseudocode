/*
 * XREFs of DxgkPresentMultiPlaneOverlay3 @ 0x1C01DC260
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001070 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0001938 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C000AB0C (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0014AF8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C00154E0 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     McTemplateK0qqqqqqq @ 0x1C001BF58 (McTemplateK0qqqqqqq.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C0097ED0 (-CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAP.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C0099C78 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B1460 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1C01D79BC (_DxgkPresentMultiPlaneOverlay3_--_2_--_AUTO--__AUTO.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D8C08 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay3(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int *p_PresentPlaneCount; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  UINT PresentPlaneCount; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  UINT ContextCount; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 VidPnSourceId; // rax
  unsigned __int64 pHDRMetaData; // rcx
  UINT HDRMetaDataSize; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 *v34; // rbx
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r14
  struct DXGCONTEXT **PoolWithTag; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int v46; // r14d
  struct DXGCONTEXT **v47; // r9
  __int64 v48; // rax
  __int64 v49; // r10
  int v50; // ecx
  struct DXGCONTEXT *v51; // rax
  struct DXGCONTEXT *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  bool v61; // zf
  __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // rdx
  const struct DXGDEVICE *v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rcx
  struct DXGPROCESS *v80; // rax
  __int64 v81; // rax
  int v82; // [rsp+50h] [rbp-1F8h] BYREF
  __int64 v83; // [rsp+58h] [rbp-1F0h]
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v84; // [rsp+60h] [rbp-1E8h]
  int *v85; // [rsp+68h] [rbp-1E0h]
  _BYTE v86[16]; // [rsp+70h] [rbp-1D8h] BYREF
  _BYTE v87[16]; // [rsp+80h] [rbp-1C8h] BYREF
  struct DXGCONTEXT **v88; // [rsp+90h] [rbp-1B8h] BYREF
  _BYTE v89[32]; // [rsp+98h] [rbp-1B0h] BYREF
  unsigned int v90; // [rsp+B8h] [rbp-190h]
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 v91; // [rsp+C0h] [rbp-188h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v92[2]; // [rsp+110h] [rbp-138h] BYREF
  struct tagRECT **v93[2]; // [rsp+120h] [rbp-128h] BYREF
  unsigned int *v94[2]; // [rsp+130h] [rbp-118h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v95[2]; // [rsp+140h] [rbp-108h] BYREF
  int v96; // [rsp+150h] [rbp-F8h]
  _BYTE v97[8]; // [rsp+160h] [rbp-E8h] BYREF
  __int64 v98; // [rsp+168h] [rbp-E0h]
  char v99; // [rsp+170h] [rbp-D8h]
  int v100; // [rsp+178h] [rbp-D0h]
  _QWORD v101[6]; // [rsp+180h] [rbp-C8h] BYREF
  char v102; // [rsp+1B0h] [rbp-98h]
  _BYTE v103[24]; // [rsp+1B8h] [rbp-90h] BYREF
  _BYTE v104[96]; // [rsp+1D0h] [rbp-78h] BYREF
  int v105; // [rsp+250h] [rbp+8h] BYREF
  struct DXGCONTEXT *v106; // [rsp+258h] [rbp+10h] BYREF

  v105 = -1073741811;
  memset(&v91, 0, sizeof(v91));
  v83 = 0LL;
  v82 = 2164;
  v84 = &v91;
  v85 = &v105;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2164);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v82, 2164);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !a1 )
  {
    v105 = -1073741811;
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = v105;
    *(_QWORD *)(v8 + 32) = PsGetCurrentProcess(v10, v9);
    WdLogEvent5_WdError(v8);
    v11 = v105;
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v82);
    if ( (qword_1C0079010 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqqqqq(
          &DxgkControlGuid_Context,
          v12,
          v14,
          0,
          v84->VidPnSourceId,
          v84->PresentCount,
          1,
          v84->Flags.Value,
          v84->PresentPlaneCount,
          *v85);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v13, &EventProfilerExit, v14, v82);
    }
    return v11;
  }
  p_PresentPlaneCount = (int *)&a1->PresentPlaneCount;
  if ( (unsigned __int64)&a1->PresentPlaneCount >= MmUserProbeAddress )
    p_PresentPlaneCount = (int *)MmUserProbeAddress;
  v100 = *p_PresentPlaneCount;
  *(_OWORD *)v92 = 0LL;
  *(_OWORD *)v93 = 0LL;
  *(_OWORD *)v94 = 0LL;
  *(_OWORD *)v95 = 0LL;
  v96 = v100;
  v105 = CapturePresentMultiPlaneOverlayArgs3(
           a1,
           &v91,
           v92,
           (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)&v92[1],
           (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)v93,
           &v93[1],
           v94,
           &v94[1],
           (unsigned __int8 **)v95,
           &v95[1]);
  if ( v105 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v18 + 24) = v105;
    *(_QWORD *)(v18 + 32) = PsGetCurrentProcess(v20, v19);
    v21 = v18;
LABEL_16:
    WdLogEvent5_WdError(v21);
    v11 = v105;
LABEL_17:
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v92);
    goto LABEL_6;
  }
  PresentPlaneCount = v91.PresentPlaneCount;
  if ( !v91.PresentPlaneCount )
  {
    v23 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v23 + 24) = 2402LL;
    WdLogEvent5_WdAssertion(v23);
    PresentPlaneCount = v91.PresentPlaneCount;
  }
  if ( PresentPlaneCount > 0xA )
  {
    v24 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v24 + 24) = 2403LL;
    WdLogEvent5_WdAssertion(v24);
  }
  ContextCount = v91.ContextCount;
  if ( !v91.ContextCount )
  {
    v26 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v26 + 24) = 2404LL;
    WdLogEvent5_WdAssertion(v26);
    ContextCount = v91.ContextCount;
  }
  if ( ContextCount > 0x40 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v27 + 24) = 2405LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( v91.VidPnSourceId >= 0x10 )
  {
    v105 = -1073741811;
    v21 = WdLogNewEntry5_WdError(v17);
    VidPnSourceId = v91.VidPnSourceId;
LABEL_28:
    *(_QWORD *)(v21 + 24) = VidPnSourceId;
    *(_QWORD *)(v21 + 32) = v105;
    goto LABEL_16;
  }
  if ( v91.HDRMetaDataType )
  {
    pHDRMetaData = (unsigned int)(v91.HDRMetaDataType - 1);
    if ( v91.HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
    {
      HDRMetaDataSize = v91.HDRMetaDataSize;
      if ( v91.HDRMetaDataSize && v91.HDRMetaDataSize != 28 )
        goto LABEL_42;
    }
    else
    {
      if ( v91.HDRMetaDataType != D3DDDI_HDR_METADATA_TYPE_HDR10PLUS )
      {
        v105 = -1073741811;
        v21 = WdLogNewEntry5_WdError(pHDRMetaData);
        VidPnSourceId = v91.HDRMetaDataType;
        goto LABEL_28;
      }
      HDRMetaDataSize = v91.HDRMetaDataSize;
      if ( v91.HDRMetaDataSize && v91.HDRMetaDataSize != 72 )
        goto LABEL_42;
    }
    pHDRMetaData = (unsigned __int64)v91.pHDRMetaData;
    if ( v91.pHDRMetaData )
    {
      if ( HDRMetaDataSize )
        goto LABEL_45;
    }
    else if ( !HDRMetaDataSize )
    {
      goto LABEL_45;
    }
LABEL_42:
    v105 = -1073741811;
    v21 = WdLogNewEntry5_WdError(pHDRMetaData);
    VidPnSourceId = v91.HDRMetaDataSize;
    goto LABEL_28;
  }
  if ( v91.HDRMetaDataSize || v91.pHDRMetaData )
  {
    v105 = -1073741811;
    v81 = WdLogNewEntry5_WdError((unsigned int)v91.HDRMetaDataType);
    *(_QWORD *)(v81 + 24) = v105;
    v21 = v81;
    goto LABEL_16;
  }
LABEL_45:
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v86,
    *v91.pContextList,
    (struct _KTHREAD **)Current,
    &v106,
    0);
  v34 = (__int64 *)v106;
  if ( !v106 )
  {
    v105 = -1073741811;
    v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
    v35[3] = v105;
    v35[4] = PsGetCurrentProcess(v37, v36);
    v35[5] = *v91.pContextList;
    WdLogEvent5_WdWarning(v35);
LABEL_47:
    v11 = v105;
LABEL_48:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v86);
    goto LABEL_17;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v87,
    *((struct DXGDEVICE **)v106 + 2));
  v40 = v91.ContextCount;
  PoolWithTag = 0LL;
  v88 = 0LL;
  v90 = 0;
  if ( v91.ContextCount <= 4 )
  {
    PoolWithTag = (struct DXGCONTEXT **)v89;
    v88 = (struct DXGCONTEXT **)v89;
  }
  else
  {
    v38 = 0xFFFFFFFFFFFFFFFFuLL % v91.ContextCount;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v91.ContextCount < 8 )
      goto LABEL_55;
    PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v91.ContextCount, 0x4B677844u);
    v88 = PoolWithTag;
  }
  v90 = v40;
  if ( !PoolWithTag )
  {
LABEL_56:
    v42 = WdLogNewEntry5_WdWarning(PoolWithTag, v38, v39);
    *(_QWORD *)(v42 + 24) = 2501LL;
    WdLogEvent5_WdWarning(v42);
LABEL_57:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v88);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v87);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v86);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v92);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v82);
    if ( (qword_1C0079010 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqqqqq(
          &DxgkControlGuid_Context,
          v43,
          v45,
          0,
          v84->VidPnSourceId,
          v84->PresentCount,
          1,
          v84->Flags.Value,
          v84->PresentPlaneCount,
          *v85);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v44, &EventProfilerExit, v45, v82);
    }
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 8 * v40);
  PoolWithTag = v88;
LABEL_55:
  if ( !PoolWithTag )
    goto LABEL_56;
  *PoolWithTag = (struct DXGCONTEXT *)v34;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v103, (struct _KTHREAD **)Current);
  v46 = 1;
  if ( v91.ContextCount <= 1 )
  {
LABEL_74:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v103);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v101,
      v88,
      v90);
    if ( !v102 )
    {
      v98 = *(_QWORD *)(*(_QWORD *)(v34[2] + 16) + 16LL);
      v99 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v104, v34[2], 1, v63, 0);
      v105 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v104);
      if ( v105 >= 0 )
      {
        v70 = (const struct DXGDEVICE *)v34[2];
        v71 = *((_QWORD *)v70 + 211);
        if ( v71 )
        {
          if ( *((_BYTE *)Current + 322)
            || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v71 + 2456), v70, v91.VidPnSourceId) )
          {
            v105 = DXGCONTEXT::PresentMultiPlaneOverlay3((DXGCONTEXT *)v34, &v91, (struct COREDEVICEACCESS *)v104, v88);
            if ( v105 == -1071775482 )
              DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v34[2], (struct COREDEVICEACCESS *)v104);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v104);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v101);
            PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v88);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v87);
            v80 = DXGPROCESS::GetCurrent(v79, v78);
            DXGWORKQUEUE::FlushQueue((struct _LIST_ENTRY *)(*((_QWORD *)v80 + 9) + 88LL));
            goto LABEL_47;
          }
          v105 = -1073741790;
          v75 = WdLogNewEntry5_WdError(v74);
          v76 = v105;
          *(_QWORD *)(v75 + 24) = v105;
          *(_QWORD *)(v75 + 32) = PsGetCurrentProcess(v76, v77);
          v73 = v75;
        }
        else
        {
          v105 = -1073741811;
          v72 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v72 + 24) = v105;
          v73 = v72;
        }
        WdLogEvent5_WdError(v73);
      }
      else
      {
        v67 = WdLogNewEntry5_WdWarning(v65, v64, v66);
        v68 = v105;
        *(_QWORD *)(v67 + 24) = v105;
        *(_QWORD *)(v67 + 32) = PsGetCurrentProcess(v68, v69);
        WdLogEvent5_WdWarning(v67);
      }
      v11 = v105;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v104);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v101);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v88);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v87);
      goto LABEL_48;
    }
    if ( !v101[0] )
    {
      v56 = WdLogNewEntry5_WdWarning(v54, v53, v55);
      *(_QWORD *)(v56 + 24) = 2550LL;
      WdLogEvent5_WdWarning(v56);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v101);
      goto LABEL_57;
    }
    v62 = WdLogNewEntry5_WdWarning(v54, v53, v55);
    *(_QWORD *)(v62 + 24) = 2555LL;
    WdLogEvent5_WdWarning(v62);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v101);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v88);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v87);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v86);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v92);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v82);
    v61 = (qword_1C0079010 & 2) == 0;
  }
  else
  {
    v47 = v88;
    while ( 1 )
    {
      v48 = (v91.pContextList[v46] >> 6) & 0xFFFFFF;
      if ( (unsigned int)v48 < *((_DWORD *)Current + 62)
        && (v49 = *((_QWORD *)Current + 29),
            v50 = *(_DWORD *)(v49 + 16 * v48 + 8),
            ((v91.pContextList[v46] >> 25) & 0x60) == (*(_BYTE *)(v49 + 16 * v48 + 8) & 0x60))
        && (v50 & 0x2000) == 0
        && (v50 & 0x1F) == 7 )
      {
        v51 = *(struct DXGCONTEXT **)(v49 + 16LL * (unsigned int)v48);
      }
      else
      {
        v51 = 0LL;
      }
      v47[v46] = v51;
      v47 = v88;
      v52 = v88[v46];
      if ( !v52 || *((_QWORD *)v52 + 2) != v34[2] )
        break;
      if ( ++v46 >= v91.ContextCount )
        goto LABEL_74;
    }
    v57 = (_QWORD *)WdLogNewEntry5_WdError(v52);
    v57[3] = v34;
    v57[4] = v91.pContextList[v46];
    v57[5] = v46;
    v57[6] = -1073741811LL;
    WdLogEvent5_WdError(v57);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v103);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v88);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v87);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v86);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v92);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v82);
    v61 = (qword_1C0079010 & 2) == 0;
  }
  if ( !v61 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqqqqq(
        &DxgkControlGuid_Context,
        v58,
        v60,
        0,
        v84->VidPnSourceId,
        v84->PresentCount,
        1,
        v84->Flags.Value,
        v84->PresentPlaneCount,
        *v85);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v59, &EventProfilerExit, v60, v82);
  }
  return 3221225485LL;
}
