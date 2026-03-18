/*
 * XREFs of DxgkPresentMultiPlaneOverlay @ 0x1C01BAA50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0002754 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B6D4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000D728 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000D7C4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     Template_qqqqqqq @ 0x1C0014F1C (Template_qqqqqqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C008AC88 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C019ECA4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO @ 0x1C01B6EF0 (_DxgkPresentMultiPlaneOverlay_--_2_--_AUTO--__AUTO.c)
 *     ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1C01B78D8 (-CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3D.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01B9A00 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay(struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r13
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 VidPnSourceId; // r15
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // r14
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  __int64 CurrentProcess; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  ULONG BroadcastContextCount; // edi
  __int64 v34; // rax
  ULONG v35; // ebx
  struct DXGCONTEXT **PoolWithTag; // rax
  unsigned int v37; // ebx
  struct DXGCONTEXT **v38; // r10
  __int64 v39; // rcx
  __int64 v40; // r9
  int v41; // r8d
  __int64 v42; // rcx
  struct DXGCONTEXT *v43; // rcx
  __int64 v44; // rdx
  struct DXGCONTEXT *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r9
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // eax
  __int64 v72; // rbx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int16 v75; // ax
  _BYTE v77[8]; // [rsp+50h] [rbp-268h] BYREF
  __int64 v78; // [rsp+58h] [rbp-260h]
  char v79; // [rsp+60h] [rbp-258h]
  struct DXGCONTEXT *v80[2]; // [rsp+68h] [rbp-250h] BYREF
  struct D3DKMT_MULTIPLANE_OVERLAY *v81; // [rsp+78h] [rbp-240h] BYREF
  struct tagRECT *v82; // [rsp+80h] [rbp-238h] BYREF
  struct DXGCONTEXT **v83; // [rsp+88h] [rbp-230h] BYREF
  char v84; // [rsp+90h] [rbp-228h] BYREF
  unsigned int v85; // [rsp+B0h] [rbp-208h]
  _BYTE v86[16]; // [rsp+B8h] [rbp-200h] BYREF
  _QWORD v87[6]; // [rsp+C8h] [rbp-1F0h] BYREF
  char v88; // [rsp+F8h] [rbp-1C0h]
  PERESOURCE *v89[12]; // [rsp+100h] [rbp-1B8h] BYREF
  D3DKMT_PRESENT_MULTIPLANE_OVERLAY v90; // [rsp+160h] [rbp-158h] BYREF

  memset(&v90, 0, sizeof(v90));
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v2, &EventProfilerEnter, v3, 2092);
  Current = DXGPROCESS::GetCurrent(v2);
  if ( !a1 )
  {
    v7 = -1073741811;
    LOBYTE(v8) = 13;
    v9 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v10);
    WdLogEvent5_WdError(v9);
    LOBYTE(VidPnSourceId) = v90.VidPnSourceId;
    goto LABEL_58;
  }
  v81 = 0LL;
  v82 = 0LL;
  v15 = CapturePresentMultiPlaneOverlayArgs(a1, &v90, &v81, &v82);
  VidPnSourceId = v90.VidPnSourceId;
  v8 = v15;
  if ( v15 >= 0 )
  {
    if ( v90.VidPnSourceId >= 0x10 )
    {
      v7 = -1073741811;
      LOBYTE(v8) = 13;
      v20 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v20 + 24) = VidPnSourceId;
      *(_QWORD *)(v20 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v20);
      goto LABEL_57;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v86, v90.hDevice, Current, v80, 0);
    v25 = (__int64 *)v80[0];
    if ( !v80[0] )
    {
      v7 = -1073741811;
      LOBYTE(v8) = 13;
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
      v26[3] = -1073741811LL;
      CurrentProcess = PsGetCurrentProcess(v27);
      v26[5] = v90.hDevice;
      v26[4] = CurrentProcess;
      WdLogEvent5_WdWarning(v26);
LABEL_56:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v86);
      goto LABEL_57;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v80,
      *((struct DXGDEVICE **)v80[0] + 2));
    BroadcastContextCount = v90.BroadcastContextCount;
    if ( v90.BroadcastContextCount > 0x40 )
    {
      v34 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
      v7 = -1073741811;
      *(_QWORD *)(v34 + 24) = v25;
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v34);
LABEL_55:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v80);
      goto LABEL_56;
    }
    v83 = 0LL;
    v35 = v90.BroadcastContextCount + 1;
    v85 = 0;
    if ( v90.BroadcastContextCount + 1 <= 4 )
    {
      PoolWithTag = (struct DXGCONTEXT **)&v84;
    }
    else
    {
      v30 = v35;
      v29 = 0xFFFFFFFFFFFFFFFFuLL % v35;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v35 < 8 )
        goto LABEL_53;
      PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v35, 0x4B677844u);
    }
    v83 = PoolWithTag;
    v85 = BroadcastContextCount + 1;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v35);
      if ( v83 )
      {
        *v83 = (struct DXGCONTEXT *)v25;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v77, Current, v31, v32);
        v37 = 0;
        if ( BroadcastContextCount )
        {
          v38 = v83;
          while ( 1 )
          {
            v39 = (v90.BroadcastContext[v37] >> 6) & 0xFFFFFF;
            if ( (unsigned int)v39 < *((_DWORD *)Current + 52)
              && (v40 = *((_QWORD *)Current + 24),
                  v41 = *(_DWORD *)(v40 + 16LL * (unsigned int)v39 + 8),
                  ((v90.BroadcastContext[v37] >> 26) & 0x30) == (*(_BYTE *)(v40 + 16LL * (unsigned int)v39 + 8) & 0x30))
              && (v41 & 0x1000) == 0
              && (v41 & 0xF) != 0
              && (v42 = 2 * v39, (*(_BYTE *)(v40 + 8 * v42 + 8) & 0xF) == 7) )
            {
              v43 = *(struct DXGCONTEXT **)(v40 + 8 * v42);
            }
            else
            {
              v43 = 0LL;
            }
            v44 = v37 + 1;
            v38[v44] = v43;
            v38 = v83;
            v45 = v83[v44];
            if ( !v45 || *((_QWORD *)v45 + 2) != v25[2] )
              break;
            ++v37;
            if ( (unsigned int)v44 >= BroadcastContextCount )
              goto LABEL_32;
          }
          v51 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44);
          v7 = -1073741811;
          v51[3] = v25;
          v51[4] = v90.BroadcastContext[v37];
          v51[5] = v37;
          v51[6] = -1073741811LL;
          WdLogEvent5_WdError(v51);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v77);
          goto LABEL_54;
        }
LABEL_32:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v77);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
          (__int64)v87,
          v83,
          v85);
        if ( v88 )
        {
          if ( v87[0] )
          {
            v52 = WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
            *(_QWORD *)(v52 + 24) = 392LL;
            WdLogEvent5_WdWarning(v52);
            v7 = -1073741811;
          }
          else
          {
            v50 = WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
            *(_QWORD *)(v50 + 24) = 387LL;
            WdLogEvent5_WdWarning(v50);
            v7 = -1073741801;
          }
          goto LABEL_46;
        }
        v53 = v25[2];
        v79 = 0;
        v78 = *(_QWORD *)(*(_QWORD *)(v53 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v89, v25[2], 1LL, v54, 0);
        v55 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v89);
        v8 = v55;
        if ( v55 >= 0 )
        {
          if ( !*(_QWORD *)(v25[2] + 1800) )
          {
            v7 = -1073741811;
            LOBYTE(v8) = 13;
            v62 = WdLogNewEntry5_WdError(v57, v56);
            *(_QWORD *)(v62 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v62);
LABEL_45:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v89);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
LABEL_46:
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v87);
LABEL_54:
            PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v83);
            goto LABEL_55;
          }
          if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 9) + 216LL))()
            || ADAPTER_DISPLAY::IsVidPnSourceOwner(
                 *(DXGADAPTER ***)(*(_QWORD *)(v25[2] + 1800) + 2280LL),
                 (const struct DXGDEVICE *)v25[2],
                 VidPnSourceId) )
          {
            v69 = v25[2];
            v70 = *(_QWORD *)(*(_QWORD *)(v69 + 16) + 16LL);
            if ( *(_QWORD *)(v69 + 1800) == v70 )
            {
              v71 = DXGCONTEXT::PresentMultiPlaneOverlay((DXGCONTEXT *)v25, &v90, (struct COREDEVICEACCESS *)v89, v83);
              LOBYTE(VidPnSourceId) = v90.VidPnSourceId;
              LODWORD(v8) = v71;
            }
            else
            {
              v72 = WdLogNewEntry5_WdWarning(v70, v69, v63, v64);
              *(_QWORD *)(v72 + 24) = -1073741811LL;
              *(_QWORD *)(v72 + 32) = PsGetCurrentProcess(v73);
              WdLogEvent5_WdWarning(v72);
              LODWORD(v8) = -1073741811;
            }
            if ( (_DWORD)v8 == -1071775482 )
              DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v25[2], v89);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v89);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v87);
            PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v83);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v80);
            v7 = v8;
            goto LABEL_56;
          }
          LODWORD(v8) = -1073741790;
          v67 = WdLogNewEntry5_WdError(v66, v65);
          *(_QWORD *)(v67 + 24) = -1073741790LL;
          *(_QWORD *)(v67 + 32) = PsGetCurrentProcess(v68);
          WdLogEvent5_WdError(v67);
        }
        else
        {
          v60 = WdLogNewEntry5_WdWarning(v57, v56, v58, v59);
          *(_QWORD *)(v60 + 24) = v8;
          *(_QWORD *)(v60 + 32) = PsGetCurrentProcess(v61);
          WdLogEvent5_WdWarning(v60);
        }
        v7 = v8;
        goto LABEL_45;
      }
    }
LABEL_53:
    v74 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
    *(_QWORD *)(v74 + 24) = 338LL;
    WdLogEvent5_WdWarning(v74);
    v7 = -1073741801;
    goto LABEL_54;
  }
  v18 = WdLogNewEntry5_WdError(v17, v16);
  *(_QWORD *)(v18 + 24) = v8;
  *(_QWORD *)(v18 + 32) = PsGetCurrentProcess(v19);
  WdLogEvent5_WdError(v18);
  v7 = v8;
LABEL_57:
  DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((__int64)&v81);
LABEL_58:
  if ( (qword_1C006E790 & 2) != 0 )
  {
    v75 = Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      Template_qqqqqqq(
        v12,
        v11,
        v13,
        v90.hDevice,
        VidPnSourceId,
        v90.PresentCount,
        v90.FlipInterval,
        *(_BYTE *)&v90.Flags.0,
        v90.PresentPlaneCount,
        v8);
      v75 = Microsoft_Windows_DxgKrnlEnableBits;
    }
    if ( (v75 & 0x2000) != 0 )
      Template_q(v12, &EventProfilerExit, v13, 2092);
  }
  return v7;
}
