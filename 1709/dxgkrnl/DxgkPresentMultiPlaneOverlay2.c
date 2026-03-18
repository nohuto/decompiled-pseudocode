/*
 * XREFs of DxgkPresentMultiPlaneOverlay2 @ 0x1C01D3630
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
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00F071C (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B5610 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO @ 0x1C01CEED4 (_DxgkPresentMultiPlaneOverlay_--_2_--_AUTO--__AUTO.c)
 *     ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1C01CEFA8 (-CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU.c)
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D056C (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay2(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *v20; // rsi
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 CurrentProcess; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  ULONG BroadcastContextCount; // edi
  __int64 v29; // rax
  ULONG v30; // ebx
  struct DXGCONTEXT **PoolWithTag; // rax
  unsigned int v32; // ebx
  struct DXGCONTEXT **v33; // r10
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // r9
  int v37; // r8d
  struct DXGCONTEXT *v38; // rcx
  __int64 v39; // rdx
  struct DXGCONTEXT *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r9
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  const struct DXGDEVICE *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  _QWORD v70[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v71; // [rsp+48h] [rbp-C0h]
  struct DXGCONTEXT *v72[2]; // [rsp+50h] [rbp-B8h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v73; // [rsp+60h] [rbp-A8h] BYREF
  struct tagRECT *v74; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGCONTEXT **v75; // [rsp+70h] [rbp-98h] BYREF
  char v76; // [rsp+78h] [rbp-90h] BYREF
  ULONG v77; // [rsp+98h] [rbp-70h]
  _BYTE v78[16]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v79[6]; // [rsp+B0h] [rbp-58h] BYREF
  char v80; // [rsp+E0h] [rbp-28h]
  DXGADAPTER *v81[12]; // [rsp+E8h] [rbp-20h] BYREF
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 v82; // [rsp+148h] [rbp+40h] BYREF

  memset(&v82, 0, sizeof(v82));
  Current = DXGPROCESS::GetCurrent(v3, v2);
  if ( a1 )
  {
    v73 = 0LL;
    v74 = 0LL;
    v10 = CapturePresentMultiPlaneOverlayArgs2(a1, &v82, &v73, &v74);
    v6 = v10;
    if ( v10 < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v12 + 24) = v6;
      *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v14, v13);
      v15 = v12;
LABEL_7:
      WdLogEvent5_WdError(v15);
LABEL_54:
      DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((__int64)&v73);
      return (unsigned int)v6;
    }
    if ( v82.VidPnSourceId >= 0x10 )
    {
      v16 = WdLogNewEntry5_WdError(v11);
      LODWORD(v6) = -1073741811;
      *(_QWORD *)(v16 + 24) = v82.VidPnSourceId;
      v15 = v16;
      *(_QWORD *)(v16 + 32) = -1073741811LL;
      goto LABEL_7;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v78, v82.hDevice, Current, v72, 0);
    v20 = (__int64 *)v72[0];
    if ( !v72[0] )
    {
      LODWORD(v6) = -1073741811;
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
      v21[3] = -1073741811LL;
      CurrentProcess = PsGetCurrentProcess(v23, v22);
      v21[5] = v82.hDevice;
      v21[4] = CurrentProcess;
      WdLogEvent5_WdWarning(v21);
LABEL_53:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v78);
      goto LABEL_54;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v72,
      *((struct DXGDEVICE **)v72[0] + 2));
    BroadcastContextCount = v82.BroadcastContextCount;
    if ( v82.BroadcastContextCount > 0x40 )
    {
      v29 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      LODWORD(v6) = -1073741811;
      *(_QWORD *)(v29 + 24) = v20;
      *(_QWORD *)(v29 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v29);
LABEL_52:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72);
      goto LABEL_53;
    }
    v75 = 0LL;
    v30 = v82.BroadcastContextCount + 1;
    v77 = 0;
    if ( v82.BroadcastContextCount + 1 <= 4 )
    {
      PoolWithTag = (struct DXGCONTEXT **)&v76;
    }
    else
    {
      v26 = v30;
      v25 = 0xFFFFFFFFFFFFFFFFuLL % v30;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v30 < 8 )
        goto LABEL_50;
      PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v30, 0x4B677844u);
    }
    v75 = PoolWithTag;
    v77 = v30;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v30);
      if ( v75 )
      {
        *v75 = (struct DXGCONTEXT *)v20;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v70, Current);
        v32 = 0;
        if ( BroadcastContextCount )
        {
          v33 = v75;
          while ( 1 )
          {
            v34 = v82.BroadcastContext[v32];
            v35 = (v82.BroadcastContext[v32] >> 6) & 0xFFFFFF;
            if ( (unsigned int)v35 < *((_DWORD *)Current + 60)
              && (v36 = *((_QWORD *)Current + 28),
                  v37 = *(_DWORD *)(v36 + 16 * v35 + 8),
                  (((unsigned int)v34 >> 25) & 0x60) == (*(_BYTE *)(v36 + 16 * v35 + 8) & 0x60))
              && (v37 & 0x2000) == 0
              && (v37 & 0x1F) != 0
              && (*(_BYTE *)(v36 + 16LL * (unsigned int)v35 + 8) & 0x1F) == 7 )
            {
              v38 = *(struct DXGCONTEXT **)(v36 + 16LL * (unsigned int)v35);
            }
            else
            {
              v38 = 0LL;
            }
            v39 = v32 + 1;
            v33[v39] = v38;
            v33 = v75;
            v40 = v75[v39];
            if ( !v40 || *((_QWORD *)v40 + 2) != v20[2] )
              break;
            ++v32;
            if ( (unsigned int)v39 >= BroadcastContextCount )
              goto LABEL_30;
          }
          v45 = (_QWORD *)WdLogNewEntry5_WdError(v40);
          LODWORD(v6) = -1073741811;
          v45[5] = v32;
          v45[3] = v20;
          v45[4] = v34;
          v45[6] = -1073741811LL;
          WdLogEvent5_WdError(v45);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
          goto LABEL_51;
        }
LABEL_30:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
          (__int64)v79,
          v75,
          v77);
        if ( v80 )
        {
          if ( v79[0] )
          {
            v46 = WdLogNewEntry5_WdWarning(v42, v41, v43);
            *(_QWORD *)(v46 + 24) = 1061LL;
            WdLogEvent5_WdWarning(v46);
            LODWORD(v6) = -1073741811;
          }
          else
          {
            v44 = WdLogNewEntry5_WdWarning(v42, v41, v43);
            *(_QWORD *)(v44 + 24) = 1056LL;
            WdLogEvent5_WdWarning(v44);
            LODWORD(v6) = -1073741801;
          }
          goto LABEL_44;
        }
        v47 = v20[2];
        LOBYTE(v71) = 0;
        v70[1] = *(_QWORD *)(*(_QWORD *)(v47 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v81, v20[2], 1, v48, 0);
        v49 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v81);
        v6 = v49;
        if ( v49 >= 0 )
        {
          v56 = (const struct DXGDEVICE *)v20[2];
          v57 = *((_QWORD *)v56 + 209);
          if ( v57 )
          {
            if ( *((_BYTE *)Current + 306)
              || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v57 + 2304), v56, v82.VidPnSourceId) )
            {
              v63 = v20[2];
              v64 = *(_QWORD *)(*(_QWORD *)(v63 + 16) + 16LL);
              if ( *(_QWORD *)(v63 + 1672) == v64 )
              {
                LODWORD(v6) = DXGCONTEXT::PresentMultiPlaneOverlay2(
                                (DXGCONTEXT *)v20,
                                &v82,
                                (struct COREDEVICEACCESS *)v81,
                                v75);
              }
              else
              {
                LODWORD(v6) = -1073741811;
                v65 = WdLogNewEntry5_WdWarning(v64, v63, v52);
                *(_QWORD *)(v65 + 24) = -1073741811LL;
                *(_QWORD *)(v65 + 32) = PsGetCurrentProcess(v67, v66);
                WdLogEvent5_WdWarning(v65);
              }
              if ( (_DWORD)v6 == -1071775482 )
                DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v20[2], v81);
              goto LABEL_43;
            }
            LODWORD(v6) = -1073741790;
            v60 = WdLogNewEntry5_WdError(v59);
            *(_QWORD *)(v60 + 24) = -1073741790LL;
            *(_QWORD *)(v60 + 32) = PsGetCurrentProcess(v62, v61);
            v58 = v60;
          }
          else
          {
            LODWORD(v6) = -1073741811;
            v58 = WdLogNewEntry5_WdError(0LL);
            *(_QWORD *)(v58 + 24) = -1073741811LL;
          }
          WdLogEvent5_WdError(v58);
        }
        else
        {
          v53 = WdLogNewEntry5_WdWarning(v51, v50, v52);
          *(_QWORD *)(v53 + 24) = v6;
          *(_QWORD *)(v53 + 32) = PsGetCurrentProcess(v55, v54);
          WdLogEvent5_WdWarning(v53);
        }
LABEL_43:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
LABEL_44:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v79);
LABEL_51:
        PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v75);
        goto LABEL_52;
      }
    }
LABEL_50:
    v68 = WdLogNewEntry5_WdWarning(v26, v25, v27);
    *(_QWORD *)(v68 + 24) = 1007LL;
    WdLogEvent5_WdWarning(v68);
    LODWORD(v6) = -1073741801;
    goto LABEL_51;
  }
  LODWORD(v6) = -1073741811;
  v7 = WdLogNewEntry5_WdError(v4);
  *(_QWORD *)(v7 + 24) = -1073741811LL;
  *(_QWORD *)(v7 + 32) = PsGetCurrentProcess(v9, v8);
  WdLogEvent5_WdError(v7);
  return (unsigned int)v6;
}
