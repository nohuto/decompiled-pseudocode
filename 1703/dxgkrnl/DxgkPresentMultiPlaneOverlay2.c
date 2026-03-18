/*
 * XREFs of DxgkPresentMultiPlaneOverlay2 @ 0x1C01BB110
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
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C008AC88 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C019ECA4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO @ 0x1C01B6EF0 (_DxgkPresentMultiPlaneOverlay_--_2_--_AUTO--__AUTO.c)
 *     ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1C01B6F28 (-CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU.c)
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01B8578 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay2(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rsi
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  __int64 CurrentProcess; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  ULONG BroadcastContextCount; // edi
  __int64 v29; // rax
  ULONG v30; // ebx
  struct DXGCONTEXT **PoolWithTag; // rax
  unsigned int v32; // ebx
  struct DXGCONTEXT **v33; // r10
  __int64 v34; // rcx
  __int64 v35; // r9
  int v36; // r8d
  __int64 v37; // rcx
  struct DXGCONTEXT *v38; // rcx
  __int64 v39; // rdx
  struct DXGCONTEXT *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r9
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rbx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rcx
  __int64 v68; // rax
  _BYTE v70[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v71; // [rsp+38h] [rbp-C8h]
  char v72; // [rsp+40h] [rbp-C0h]
  struct DXGCONTEXT *v73[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v74; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT *v75; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGCONTEXT **v76; // [rsp+68h] [rbp-98h] BYREF
  char v77; // [rsp+70h] [rbp-90h] BYREF
  ULONG v78; // [rsp+90h] [rbp-70h]
  _BYTE v79[16]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v80[6]; // [rsp+A8h] [rbp-58h] BYREF
  char v81; // [rsp+D8h] [rbp-28h]
  PERESOURCE *v82[12]; // [rsp+E0h] [rbp-20h] BYREF
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 v83; // [rsp+140h] [rbp+40h] BYREF

  memset(&v83, 0, sizeof(v83));
  Current = DXGPROCESS::GetCurrent(v2);
  if ( a1 )
  {
    v74 = 0LL;
    v75 = 0LL;
    v9 = CapturePresentMultiPlaneOverlayArgs2(a1, &v83, &v74, &v75);
    v6 = v9;
    if ( v9 < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v12 + 24) = v6;
      *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v13);
      v14 = v12;
LABEL_7:
      WdLogEvent5_WdError(v14);
LABEL_54:
      DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((__int64)&v74);
      return (unsigned int)v6;
    }
    if ( v83.VidPnSourceId >= 0x10 )
    {
      v15 = WdLogNewEntry5_WdError(v11, v10);
      LODWORD(v6) = -1073741811;
      *(_QWORD *)(v15 + 24) = v83.VidPnSourceId;
      v14 = v15;
      *(_QWORD *)(v15 + 32) = -1073741811LL;
      goto LABEL_7;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v79, v83.hDevice, Current, v73, 0);
    v20 = (__int64 *)v73[0];
    if ( !v73[0] )
    {
      LODWORD(v6) = -1073741811;
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      v21[3] = -1073741811LL;
      CurrentProcess = PsGetCurrentProcess(v22);
      v21[5] = v83.hDevice;
      v21[4] = CurrentProcess;
      WdLogEvent5_WdWarning(v21);
LABEL_53:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v79);
      goto LABEL_54;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v73,
      *((struct DXGDEVICE **)v73[0] + 2));
    BroadcastContextCount = v83.BroadcastContextCount;
    if ( v83.BroadcastContextCount > 0x40 )
    {
      v29 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      LODWORD(v6) = -1073741811;
      *(_QWORD *)(v29 + 24) = v20;
      *(_QWORD *)(v29 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v29);
LABEL_52:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v73);
      goto LABEL_53;
    }
    v76 = 0LL;
    v30 = v83.BroadcastContextCount + 1;
    v78 = 0;
    if ( v83.BroadcastContextCount + 1 <= 4 )
    {
      PoolWithTag = (struct DXGCONTEXT **)&v77;
    }
    else
    {
      v25 = v30;
      v24 = 0xFFFFFFFFFFFFFFFFuLL % v30;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v30 < 8 )
        goto LABEL_50;
      PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v30, 0x4B677844u);
    }
    v76 = PoolWithTag;
    v78 = v30;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v30);
      if ( v76 )
      {
        *v76 = (struct DXGCONTEXT *)v20;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v70, Current, v26, v27);
        v32 = 0;
        if ( BroadcastContextCount )
        {
          v33 = v76;
          while ( 1 )
          {
            v34 = (v83.BroadcastContext[v32] >> 6) & 0xFFFFFF;
            if ( (unsigned int)v34 < *((_DWORD *)Current + 52)
              && (v35 = *((_QWORD *)Current + 24),
                  v36 = *(_DWORD *)(v35 + 16LL * (unsigned int)v34 + 8),
                  ((v83.BroadcastContext[v32] >> 26) & 0x30) == (*(_BYTE *)(v35 + 16LL * (unsigned int)v34 + 8) & 0x30))
              && (v36 & 0x1000) == 0
              && (v36 & 0xF) != 0
              && (v37 = 2 * v34, (*(_BYTE *)(v35 + 8 * v37 + 8) & 0xF) == 7) )
            {
              v38 = *(struct DXGCONTEXT **)(v35 + 8 * v37);
            }
            else
            {
              v38 = 0LL;
            }
            v39 = v32 + 1;
            v33[v39] = v38;
            v33 = v76;
            v40 = v76[v39];
            if ( !v40 || *((_QWORD *)v40 + 2) != v20[2] )
              break;
            ++v32;
            if ( (unsigned int)v39 >= BroadcastContextCount )
              goto LABEL_30;
          }
          v46 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
          LODWORD(v6) = -1073741811;
          v46[3] = v20;
          v46[4] = v83.BroadcastContext[v32];
          v46[5] = v32;
          v46[6] = -1073741811LL;
          WdLogEvent5_WdError(v46);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
          goto LABEL_51;
        }
LABEL_30:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
          (__int64)v80,
          v76,
          v78);
        if ( v81 )
        {
          if ( v80[0] )
          {
            v47 = WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
            *(_QWORD *)(v47 + 24) = 1016LL;
            WdLogEvent5_WdWarning(v47);
            LODWORD(v6) = -1073741811;
          }
          else
          {
            v45 = WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
            *(_QWORD *)(v45 + 24) = 1011LL;
            WdLogEvent5_WdWarning(v45);
            LODWORD(v6) = -1073741801;
          }
          goto LABEL_44;
        }
        v48 = v20[2];
        v72 = 0;
        v71 = *(_QWORD *)(*(_QWORD *)(v48 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v82, v20[2], 1LL, v49, 0);
        v50 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v82);
        v6 = v50;
        if ( v50 >= 0 )
        {
          if ( *(_QWORD *)(v20[2] + 1800) )
          {
            if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 9) + 216LL))()
              || ADAPTER_DISPLAY::IsVidPnSourceOwner(
                   *(DXGADAPTER ***)(*(_QWORD *)(v20[2] + 1800) + 2280LL),
                   (const struct DXGDEVICE *)v20[2],
                   v83.VidPnSourceId) )
            {
              v64 = v20[2];
              v65 = *(_QWORD *)(*(_QWORD *)(v64 + 16) + 16LL);
              if ( *(_QWORD *)(v64 + 1800) == v65 )
              {
                LODWORD(v6) = DXGCONTEXT::PresentMultiPlaneOverlay2(
                                (DXGCONTEXT *)v20,
                                &v83,
                                (struct COREDEVICEACCESS *)v82,
                                v76);
              }
              else
              {
                LODWORD(v6) = -1073741811;
                v66 = WdLogNewEntry5_WdWarning(v65, v64, v58, v59);
                *(_QWORD *)(v66 + 24) = -1073741811LL;
                *(_QWORD *)(v66 + 32) = PsGetCurrentProcess(v67);
                WdLogEvent5_WdWarning(v66);
              }
              if ( (_DWORD)v6 == -1071775482 )
                DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v20[2], v82);
              goto LABEL_43;
            }
            LODWORD(v6) = -1073741790;
            v62 = WdLogNewEntry5_WdError(v61, v60);
            *(_QWORD *)(v62 + 24) = -1073741790LL;
            *(_QWORD *)(v62 + 32) = PsGetCurrentProcess(v63);
            v57 = v62;
          }
          else
          {
            LODWORD(v6) = -1073741811;
            v57 = WdLogNewEntry5_WdError(v52, v51);
            *(_QWORD *)(v57 + 24) = -1073741811LL;
          }
          WdLogEvent5_WdError(v57);
        }
        else
        {
          v55 = WdLogNewEntry5_WdWarning(v52, v51, v53, v54);
          *(_QWORD *)(v55 + 24) = v6;
          *(_QWORD *)(v55 + 32) = PsGetCurrentProcess(v56);
          WdLogEvent5_WdWarning(v55);
        }
LABEL_43:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
LABEL_44:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v80);
LABEL_51:
        PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v76);
        goto LABEL_52;
      }
    }
LABEL_50:
    v68 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    *(_QWORD *)(v68 + 24) = 962LL;
    WdLogEvent5_WdWarning(v68);
    LODWORD(v6) = -1073741801;
    goto LABEL_51;
  }
  LODWORD(v6) = -1073741811;
  v7 = WdLogNewEntry5_WdError(v4, v3);
  *(_QWORD *)(v7 + 24) = -1073741811LL;
  *(_QWORD *)(v7 + 32) = PsGetCurrentProcess(v8);
  WdLogEvent5_WdError(v7);
  return (unsigned int)v6;
}
