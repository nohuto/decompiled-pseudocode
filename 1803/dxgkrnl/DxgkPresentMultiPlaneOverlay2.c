/*
 * XREFs of DxgkPresentMultiPlaneOverlay2 @ 0x1C01DBC00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001070 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0001938 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
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
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     McTemplateK0qqqqqqq @ 0x1C001BF58 (McTemplateK0qqqqqqq.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C0099C78 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B1460 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO @ 0x1C01D7A48 (_DxgkPresentMultiPlaneOverlay_--_2_--_AUTO--__AUTO.c)
 *     ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1C01D7A70 (-CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU.c)
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D8988 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay2(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *v20; // rsi
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  ULONG v28; // r14d
  struct DXGCONTEXT **PoolWithTag; // rax
  unsigned int v30; // ebx
  struct DXGCONTEXT **v31; // r9
  __int64 v32; // rax
  __int64 v33; // r10
  int v34; // ecx
  struct DXGCONTEXT *v35; // rcx
  __int64 v36; // rdx
  struct DXGCONTEXT *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  const struct DXGDEVICE *v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  int v69; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v70[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v71; // [rsp+70h] [rbp-98h]
  struct DXGCONTEXT *v72[2]; // [rsp+78h] [rbp-90h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v73; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT *v74; // [rsp+90h] [rbp-78h] BYREF
  struct DXGCONTEXT **v75; // [rsp+98h] [rbp-70h] BYREF
  char v76; // [rsp+A0h] [rbp-68h] BYREF
  ULONG v77; // [rsp+C0h] [rbp-48h]
  int v78; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v79; // [rsp+D0h] [rbp-38h]
  int *v80; // [rsp+D8h] [rbp-30h]
  int *v81; // [rsp+E0h] [rbp-28h]
  _BYTE v82[16]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v83[6]; // [rsp+F8h] [rbp-10h] BYREF
  char v84; // [rsp+128h] [rbp+20h]
  _BYTE v85[96]; // [rsp+138h] [rbp+30h] BYREF
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 v86; // [rsp+198h] [rbp+90h] BYREF

  v2 = -1073741811;
  v69 = -1073741811;
  memset(&v86, 0, sizeof(v86));
  v79 = 0LL;
  v80 = (int *)&v86;
  v81 = &v69;
  v78 = 2163;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v3, &EventProfilerEnter, v4, 2163);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v78, 2163);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  if ( !a1 )
  {
    v69 = -1073741811;
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = v69;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v11, v10);
    WdLogEvent5_WdError(v9);
    v2 = v69;
    goto LABEL_59;
  }
  v73 = 0LL;
  v74 = 0LL;
  v69 = CapturePresentMultiPlaneOverlayArgs2(a1, &v86, &v73, &v74);
  if ( v69 >= 0 )
  {
    if ( v86.VidPnSourceId >= 0x10 )
    {
      v69 = -1073741811;
      v16 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v16 + 24) = v86.VidPnSourceId;
      *(_QWORD *)(v16 + 32) = v69;
      goto LABEL_10;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82, v86.hDevice, (struct _KTHREAD **)Current, v72, 0);
    v20 = (__int64 *)v72[0];
    if ( !v72[0] )
    {
      v69 = -1073741811;
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
      v21[3] = v69;
      v21[4] = PsGetCurrentProcess(v23, v22);
      v21[5] = v86.hDevice;
      WdLogEvent5_WdWarning(v21);
LABEL_13:
      v2 = v69;
LABEL_57:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82);
      goto LABEL_58;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v72,
      *((struct DXGDEVICE **)v72[0] + 2));
    if ( v86.BroadcastContextCount > 0x40 )
    {
      v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      *(_QWORD *)(v27 + 24) = v20;
      *(_QWORD *)(v27 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
LABEL_56:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72);
      goto LABEL_57;
    }
    v75 = 0LL;
    v28 = v86.BroadcastContextCount + 1;
    v77 = 0;
    if ( v86.BroadcastContextCount + 1 <= 4 )
    {
      PoolWithTag = (struct DXGCONTEXT **)&v76;
    }
    else
    {
      v24 = 0xFFFFFFFFFFFFFFFFuLL % v28;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v28 < 8 )
        goto LABEL_54;
      PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v28, 0x4B677844u);
    }
    v75 = PoolWithTag;
    v77 = v28;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v28);
      if ( v75 )
      {
        *v75 = (struct DXGCONTEXT *)v20;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v70, (struct _KTHREAD **)Current);
        v30 = 0;
        if ( v86.BroadcastContextCount )
        {
          v31 = v75;
          while ( 1 )
          {
            v32 = (v86.BroadcastContext[v30] >> 6) & 0xFFFFFF;
            if ( (unsigned int)v32 < *((_DWORD *)Current + 62)
              && (v33 = *((_QWORD *)Current + 29),
                  v34 = *(_DWORD *)(v33 + 16 * v32 + 8),
                  ((v86.BroadcastContext[v30] >> 25) & 0x60) == (*(_BYTE *)(v33 + 16 * v32 + 8) & 0x60))
              && (v34 & 0x2000) == 0
              && (v34 & 0x1F) == 7 )
            {
              v35 = *(struct DXGCONTEXT **)(v33 + 16LL * (unsigned int)v32);
            }
            else
            {
              v35 = 0LL;
            }
            v36 = v30 + 1;
            v31[v36] = v35;
            v31 = v75;
            v37 = v75[v36];
            if ( !v37 || *((_QWORD *)v37 + 2) != v20[2] )
              break;
            ++v30;
            if ( (unsigned int)v36 >= v86.BroadcastContextCount )
              goto LABEL_33;
          }
          v42 = (_QWORD *)WdLogNewEntry5_WdError(v37);
          v42[3] = v20;
          v42[4] = v86.BroadcastContext[v30];
          v42[5] = v30;
          v42[6] = -1073741811LL;
          WdLogEvent5_WdError(v42);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
        }
        else
        {
LABEL_33:
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
            (__int64)v83,
            v75,
            v77);
          if ( v84 )
          {
            if ( v83[0] )
            {
              v43 = WdLogNewEntry5_WdWarning(v39, v38, v40);
              *(_QWORD *)(v43 + 24) = 1028LL;
              WdLogEvent5_WdWarning(v43);
            }
            else
            {
              v41 = WdLogNewEntry5_WdWarning(v39, v38, v40);
              *(_QWORD *)(v41 + 24) = 1023LL;
              WdLogEvent5_WdWarning(v41);
              v2 = -1073741801;
            }
          }
          else
          {
            v44 = v20[2];
            LOBYTE(v71) = 0;
            v70[1] = *(_QWORD *)(*(_QWORD *)(v44 + 16) + 16LL);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v85, v20[2], 1, v45, 0);
            v69 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v85);
            if ( v69 >= 0 )
            {
              v52 = (const struct DXGDEVICE *)v20[2];
              v53 = *((_QWORD *)v52 + 211);
              if ( v53 )
              {
                if ( *((_BYTE *)Current + 322)
                  || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v53 + 2456), v52, v86.VidPnSourceId) )
                {
                  v59 = v20[2];
                  v60 = *(_QWORD *)(*(_QWORD *)(v59 + 16) + 16LL);
                  if ( *(_QWORD *)(v59 + 1688) == v60 )
                  {
                    v2 = DXGCONTEXT::PresentMultiPlaneOverlay2(
                           (DXGCONTEXT *)v20,
                           &v86,
                           (struct COREDEVICEACCESS *)v85,
                           v75);
                  }
                  else
                  {
                    v61 = WdLogNewEntry5_WdWarning(v60, v59, v48);
                    *(_QWORD *)(v61 + 24) = -1073741811LL;
                    *(_QWORD *)(v61 + 32) = PsGetCurrentProcess(v63, v62);
                    WdLogEvent5_WdWarning(v61);
                  }
                  v69 = v2;
                  if ( v2 == -1071775482 )
                    DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v20[2], (struct COREDEVICEACCESS *)v85);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v85);
                  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v83);
                  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v75);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72);
                  goto LABEL_13;
                }
                v69 = -1073741790;
                v56 = WdLogNewEntry5_WdError(v55);
                *(_QWORD *)(v56 + 24) = v69;
                *(_QWORD *)(v56 + 32) = PsGetCurrentProcess(v58, v57);
                v54 = v56;
              }
              else
              {
                v69 = -1073741811;
                v54 = WdLogNewEntry5_WdError(0LL);
                *(_QWORD *)(v54 + 24) = v69;
              }
              WdLogEvent5_WdError(v54);
            }
            else
            {
              v49 = WdLogNewEntry5_WdWarning(v47, v46, v48);
              *(_QWORD *)(v49 + 24) = v69;
              *(_QWORD *)(v49 + 32) = PsGetCurrentProcess(v51, v50);
              WdLogEvent5_WdWarning(v49);
            }
            v2 = v69;
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v85);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
          }
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v83);
        }
        goto LABEL_55;
      }
    }
LABEL_54:
    v64 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    *(_QWORD *)(v64 + 24) = 974LL;
    WdLogEvent5_WdWarning(v64);
    v2 = -1073741801;
LABEL_55:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v75);
    goto LABEL_56;
  }
  v13 = WdLogNewEntry5_WdError(v12);
  *(_QWORD *)(v13 + 24) = v69;
  *(_QWORD *)(v13 + 32) = PsGetCurrentProcess(v15, v14);
  v16 = v13;
LABEL_10:
  WdLogEvent5_WdError(v16);
  v2 = v69;
LABEL_58:
  DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((void **)&v73);
LABEL_59:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
  if ( (qword_1C0079010 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqqqqq(&DxgkControlGuid_Context, v65, v67, v80[1], v80[67], v80[68], v80[69], v80[70], v80[71], *v81);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v66, &EventProfilerExit, v67, v78);
  }
  return v2;
}
