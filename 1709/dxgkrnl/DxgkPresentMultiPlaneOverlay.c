/*
 * XREFs of DxgkPresentMultiPlaneOverlay @ 0x1C01D3010
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0003A8C (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007858 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000E084 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000E0EC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0014C68 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     McTemplateK0qqqqqqq @ 0x1C0016208 (McTemplateK0qqqqqqq.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00F071C (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B5610 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO @ 0x1C01CEED4 (_DxgkPresentMultiPlaneOverlay_--_2_--_AUTO--__AUTO.c)
 *     ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1C01CF970 (-CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3D.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D1BBC (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay(struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r13
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 VidPnSourceId; // r15
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // r14
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 CurrentProcess; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  ULONG BroadcastContextCount; // edi
  __int64 v34; // rax
  ULONG v35; // ebx
  struct DXGCONTEXT **PoolWithTag; // rax
  unsigned int v37; // ebx
  struct DXGCONTEXT **v38; // r10
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // r9
  int v42; // r8d
  struct DXGCONTEXT *v43; // rcx
  __int64 v44; // rdx
  struct DXGCONTEXT *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r9
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  const struct DXGDEVICE *v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  _QWORD v76[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v77; // [rsp+68h] [rbp-A0h]
  struct DXGCONTEXT *v78[2]; // [rsp+70h] [rbp-98h] BYREF
  struct D3DKMT_MULTIPLANE_OVERLAY *v79; // [rsp+80h] [rbp-88h] BYREF
  struct tagRECT *v80; // [rsp+88h] [rbp-80h] BYREF
  struct DXGCONTEXT **v81; // [rsp+90h] [rbp-78h] BYREF
  char v82; // [rsp+98h] [rbp-70h] BYREF
  ULONG v83; // [rsp+B8h] [rbp-50h]
  _BYTE v84[16]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v85[6]; // [rsp+D0h] [rbp-38h] BYREF
  char v86; // [rsp+100h] [rbp-8h]
  DXGADAPTER *v87[12]; // [rsp+108h] [rbp+0h] BYREF
  D3DKMT_PRESENT_MULTIPLANE_OVERLAY v88; // [rsp+168h] [rbp+60h] BYREF

  memset(&v88, 0, sizeof(v88));
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v3, &EventProfilerEnter, v4, 2092);
  Current = DXGPROCESS::GetCurrent(v3, v2);
  if ( !a1 )
  {
    v7 = -1073741811;
    LOBYTE(v8) = 13;
    v9 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v11, v10);
    WdLogEvent5_WdError(v9);
    LOBYTE(VidPnSourceId) = v88.VidPnSourceId;
    goto LABEL_58;
  }
  v79 = 0LL;
  v80 = 0LL;
  v16 = CapturePresentMultiPlaneOverlayArgs(a1, &v88, &v79, &v80);
  VidPnSourceId = v88.VidPnSourceId;
  v8 = v16;
  if ( v16 >= 0 )
  {
    if ( v88.VidPnSourceId >= 0x10 )
    {
      v7 = -1073741811;
      LOBYTE(v8) = 13;
      v21 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v21 + 24) = VidPnSourceId;
      *(_QWORD *)(v21 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v21);
      goto LABEL_57;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84, v88.hDevice, Current, v78, 0);
    v25 = (__int64 *)v78[0];
    if ( !v78[0] )
    {
      v7 = -1073741811;
      LOBYTE(v8) = 13;
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
      v26[3] = -1073741811LL;
      CurrentProcess = PsGetCurrentProcess(v28, v27);
      v26[5] = v88.hDevice;
      v26[4] = CurrentProcess;
      WdLogEvent5_WdWarning(v26);
LABEL_56:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84);
      goto LABEL_57;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v78,
      *((struct DXGDEVICE **)v78[0] + 2));
    BroadcastContextCount = v88.BroadcastContextCount;
    if ( v88.BroadcastContextCount > 0x40 )
    {
      v34 = WdLogNewEntry5_WdWarning(v31, v30, v32);
      v7 = -1073741811;
      *(_QWORD *)(v34 + 24) = v25;
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v34);
LABEL_55:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v78);
      goto LABEL_56;
    }
    v35 = v88.BroadcastContextCount + 1;
    v81 = 0LL;
    v83 = 0;
    if ( v88.BroadcastContextCount + 1 <= 4 )
    {
      PoolWithTag = (struct DXGCONTEXT **)&v82;
    }
    else
    {
      v31 = v35;
      v30 = 0xFFFFFFFFFFFFFFFFuLL % v35;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v35 < 8 )
        goto LABEL_53;
      PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v35, 0x4B677844u);
    }
    v81 = PoolWithTag;
    v83 = v35;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v35);
      if ( v81 )
      {
        *v81 = (struct DXGCONTEXT *)v25;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v76, Current);
        v37 = 0;
        if ( BroadcastContextCount )
        {
          v38 = v81;
          while ( 1 )
          {
            v39 = v88.BroadcastContext[v37];
            v40 = (v88.BroadcastContext[v37] >> 6) & 0xFFFFFF;
            if ( (unsigned int)v40 < *((_DWORD *)Current + 60)
              && (v41 = *((_QWORD *)Current + 28),
                  v42 = *(_DWORD *)(v41 + 16 * v40 + 8),
                  (((unsigned int)v39 >> 25) & 0x60) == (*(_BYTE *)(v41 + 16 * v40 + 8) & 0x60))
              && (v42 & 0x2000) == 0
              && (v42 & 0x1F) != 0
              && (*(_BYTE *)(v41 + 16LL * (unsigned int)v40 + 8) & 0x1F) == 7 )
            {
              v43 = *(struct DXGCONTEXT **)(v41 + 16LL * (unsigned int)v40);
            }
            else
            {
              v43 = 0LL;
            }
            v44 = v37 + 1;
            v38[v44] = v43;
            v38 = v81;
            v45 = v81[v44];
            if ( !v45 || *((_QWORD *)v45 + 2) != v25[2] )
              break;
            ++v37;
            if ( (unsigned int)v44 >= BroadcastContextCount )
              goto LABEL_32;
          }
          v50 = (_QWORD *)WdLogNewEntry5_WdError(v45);
          v7 = -1073741811;
          v50[5] = v37;
          v50[3] = v25;
          v50[4] = v39;
          v50[6] = -1073741811LL;
          WdLogEvent5_WdError(v50);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v76);
          goto LABEL_54;
        }
LABEL_32:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v76);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
          (__int64)v85,
          v81,
          v83);
        if ( v86 )
        {
          if ( v85[0] )
          {
            v51 = WdLogNewEntry5_WdWarning(v47, v46, v48);
            *(_QWORD *)(v51 + 24) = 396LL;
            WdLogEvent5_WdWarning(v51);
            v7 = -1073741811;
          }
          else
          {
            v49 = WdLogNewEntry5_WdWarning(v47, v46, v48);
            *(_QWORD *)(v49 + 24) = 391LL;
            WdLogEvent5_WdWarning(v49);
            v7 = -1073741801;
          }
          goto LABEL_46;
        }
        v52 = v25[2];
        LOBYTE(v77) = 0;
        v76[1] = *(_QWORD *)(*(_QWORD *)(v52 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v87, v25[2], 1, v53, 0);
        v54 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v87);
        v8 = v54;
        if ( v54 >= 0 )
        {
          v61 = (const struct DXGDEVICE *)v25[2];
          v62 = *((_QWORD *)v61 + 209);
          if ( !v62 )
          {
            v7 = -1073741811;
            LOBYTE(v8) = 13;
            v63 = WdLogNewEntry5_WdError(0LL);
            *(_QWORD *)(v63 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v63);
LABEL_45:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v87);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
LABEL_46:
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v85);
LABEL_54:
            PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v81);
            goto LABEL_55;
          }
          if ( *((_BYTE *)Current + 306)
            || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v62 + 2304), v61, VidPnSourceId) )
          {
            v68 = v25[2];
            v69 = *(_QWORD *)(*(_QWORD *)(v68 + 16) + 16LL);
            if ( *(_QWORD *)(v68 + 1672) == v69 )
            {
              v70 = DXGCONTEXT::PresentMultiPlaneOverlay((DXGCONTEXT *)v25, &v88, (struct COREDEVICEACCESS *)v87, v81);
              LOBYTE(VidPnSourceId) = v88.VidPnSourceId;
              LODWORD(v8) = v70;
            }
            else
            {
              v71 = WdLogNewEntry5_WdWarning(v69, v68, v57);
              *(_QWORD *)(v71 + 24) = -1073741811LL;
              *(_QWORD *)(v71 + 32) = PsGetCurrentProcess(v73, v72);
              WdLogEvent5_WdWarning(v71);
              LODWORD(v8) = -1073741811;
            }
            if ( (_DWORD)v8 == -1071775482 )
              DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v25[2], v87);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v87);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v85);
            PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v81);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v78);
            v7 = v8;
            goto LABEL_56;
          }
          LODWORD(v8) = -1073741790;
          v65 = WdLogNewEntry5_WdError(v64);
          *(_QWORD *)(v65 + 24) = -1073741790LL;
          *(_QWORD *)(v65 + 32) = PsGetCurrentProcess(v67, v66);
          WdLogEvent5_WdError(v65);
        }
        else
        {
          v58 = WdLogNewEntry5_WdWarning(v56, v55, v57);
          *(_QWORD *)(v58 + 24) = v8;
          *(_QWORD *)(v58 + 32) = PsGetCurrentProcess(v60, v59);
          WdLogEvent5_WdWarning(v58);
        }
        v7 = v8;
        goto LABEL_45;
      }
    }
LABEL_53:
    v74 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v74 + 24) = 342LL;
    WdLogEvent5_WdWarning(v74);
    v7 = -1073741801;
    goto LABEL_54;
  }
  v18 = WdLogNewEntry5_WdError(v17);
  *(_QWORD *)(v18 + 24) = v8;
  *(_QWORD *)(v18 + 32) = PsGetCurrentProcess(v20, v19);
  WdLogEvent5_WdError(v18);
  v7 = v8;
LABEL_57:
  DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((__int64)&v79);
LABEL_58:
  if ( (qword_1C005F010 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqqqqq(
        &DxgkControlGuid_Context,
        v12,
        v14,
        v88.hDevice,
        VidPnSourceId,
        v88.PresentCount,
        v88.FlipInterval,
        *(_BYTE *)&v88.Flags.0,
        v88.PresentPlaneCount,
        v8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v13, &EventProfilerExit, v14, 2092);
  }
  return v7;
}
