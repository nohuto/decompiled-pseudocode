/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C019FB90
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C019AB14 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C019AC04 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C019AC80 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@I@Z @ 0x1C019ACF8 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAA.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019BC54 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport3(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  bool v9; // zf
  _OWORD *v11; // rax
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **Elements; // r12
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  bool v27; // zf
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  const void *v47; // rdx
  char *v48; // rcx
  unsigned int i; // edx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v50; // r8
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // r8
  __int64 v54; // rax
  const void *v55; // rdx
  char *v56; // rcx
  unsigned int v57; // edx
  __int64 v58; // r10
  unsigned __int64 v59; // r8
  __int64 v60; // rcx
  unsigned int v61; // r8d
  __int64 v62; // r9
  __int64 v63; // r11
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v64; // rcx
  unsigned int j; // edx
  __int64 v66; // rcx
  DXGDEVICE *v67; // rbx
  __int64 v68; // rax
  __int64 v69; // r9
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r12
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // r8
  int v78; // ebx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v79; // r9
  _DWORD *v80; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  bool v84; // [rsp+40h] [rbp-398h]
  struct DXGDEVICE *v85; // [rsp+48h] [rbp-390h] BYREF
  ULONG64 v86; // [rsp+50h] [rbp-388h]
  unsigned int v87; // [rsp+58h] [rbp-380h]
  unsigned int v88; // [rsp+5Ch] [rbp-37Ch]
  int v89; // [rsp+60h] [rbp-378h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v90; // [rsp+64h] [rbp-374h] BYREF
  __int64 v91; // [rsp+68h] [rbp-370h]
  __int64 v92; // [rsp+70h] [rbp-368h]
  __int64 v93; // [rsp+78h] [rbp-360h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v94; // [rsp+80h] [rbp-358h]
  _QWORD v95[2]; // [rsp+88h] [rbp-350h] BYREF
  PVOID v96[4]; // [rsp+98h] [rbp-340h] BYREF
  int v97; // [rsp+B8h] [rbp-320h]
  struct DXGPROCESS *v98; // [rsp+C0h] [rbp-318h]
  struct DXGDEVICE *v99; // [rsp+C8h] [rbp-310h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v100; // [rsp+D0h] [rbp-308h]
  PVOID v101[4]; // [rsp+D8h] [rbp-300h] BYREF
  int v102; // [rsp+F8h] [rbp-2E0h]
  unsigned int v103[4]; // [rsp+100h] [rbp-2D8h]
  void *Src[2]; // [rsp+110h] [rbp-2C8h]
  void *v105[2]; // [rsp+120h] [rbp-2B8h]
  _BYTE v106[96]; // [rsp+130h] [rbp-2A8h] BYREF
  PVOID v107[13]; // [rsp+190h] [rbp-248h] BYREF
  int v108; // [rsp+1F8h] [rbp-1E0h]
  PVOID v109[17]; // [rsp+200h] [rbp-1D8h] BYREF
  int v110; // [rsp+28Ch] [rbp-14Ch]
  PVOID v111[34]; // [rsp+290h] [rbp-148h] BYREF
  int v112; // [rsp+3A0h] [rbp-38h]

  v86 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2093);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v98 = Current;
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v8 = qword_1C005F010;
    v9 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( v9 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_8;
  }
  v84 = *((_BYTE *)Current + 306) == 0;
  v11 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v103 = *v11;
  *(_OWORD *)Src = v11[1];
  *(_OWORD *)v105 = v11[2];
  v12 = v103[2];
  if ( !v103[2] )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v13[3] = 0LL;
LABEL_14:
    v16 = v13;
    v13[4] = -1073741811LL;
    v13[5] = PsGetCurrentProcess(v15, v14);
    WdLogEvent5_WdError(v16);
    v9 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  v17 = LODWORD(Src[1]);
  if ( LODWORD(Src[1]) > 0x10 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v13[3] = LODWORD(Src[1]);
    goto LABEL_14;
  }
  v96[0] = 0LL;
  v97 = 0;
  Elements = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                  v96,
                                                                  v103[2]);
  v100 = Elements;
  if ( !Elements )
  {
    v22 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v22 + 24) = -1073741801LL;
    *(_QWORD *)(v22 + 32) = PsGetCurrentProcess(v24, v23);
    WdLogEvent5_WdWarning(v22);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v96);
    v26 = qword_1C005F010;
    v27 = (qword_1C005F010 & 2) == 0;
    goto LABEL_19;
  }
  v107[0] = 0LL;
  v108 = 0;
  v92 = PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(v107, v12);
  if ( !v92 )
  {
    v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v31 + 24) = -1073741801LL;
    *(_QWORD *)(v31 + 32) = PsGetCurrentProcess(v33, v32);
    WdLogEvent5_WdWarning(v31);
LABEL_25:
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v107);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v96);
    v27 = (qword_1C005F010 & 2) == 0;
LABEL_19:
    if ( !v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v26, &EventProfilerExit, v25, 2093);
    return 3221225495LL;
  }
  v111[0] = 0LL;
  v112 = 0;
  v93 = PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2,3>::AllocateElements(v111, v12);
  if ( !v93 )
  {
    v37 = WdLogNewEntry5_WdWarning(v35, v34, v36);
    *(_QWORD *)(v37 + 24) = -1073741801LL;
    *(_QWORD *)(v37 + 32) = PsGetCurrentProcess(v39, v38);
    WdLogEvent5_WdWarning(v37);
LABEL_28:
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v111);
    goto LABEL_25;
  }
  v101[0] = 0LL;
  v102 = 0;
  v109[0] = 0LL;
  v110 = 0;
  v40 = 0LL;
  v94 = 0LL;
  v91 = 0LL;
  if ( (_DWORD)v17 )
  {
    v40 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                               v101,
                                                                               v17);
    v94 = v40;
    if ( !v40
      || (v91 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                  v109,
                  v17)) == 0 )
    {
      v44 = WdLogNewEntry5_WdWarning(v42, v41, v43);
      *(_QWORD *)(v44 + 24) = -1073741801LL;
      *(_QWORD *)(v44 + 32) = PsGetCurrentProcess(v46, v45);
      WdLogEvent5_WdWarning(v44);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v109);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v101);
      goto LABEL_28;
    }
  }
  v47 = Src[0];
  v48 = (char *)Src[0] + 8 * v12;
  if ( v48 < Src[0] || (unsigned __int64)v48 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Elements, v47, 8 * v12);
  for ( i = 0; ; ++i )
  {
    v87 = i;
    if ( i >= (unsigned int)v12 )
      break;
    v50 = Elements[i];
    if ( &v50[1] < v50 || (unsigned __int64)&v50[1] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v51 = 32LL * i;
    v52 = v92;
    *(_OWORD *)(v51 + v92) = *(_OWORD *)&v50->LayerIndex;
    *(_OWORD *)(v51 + v52 + 16) = *(_OWORD *)&v50->VidPnSourceId;
    v53 = *(_QWORD *)(v51 + v52 + 24);
    if ( v53 + 88 < v53 || v53 + 88 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v54 = v93 + 88LL * i;
    *(_OWORD *)v54 = *(_OWORD *)v53;
    *(_OWORD *)(v54 + 16) = *(_OWORD *)(v53 + 16);
    *(_OWORD *)(v54 + 32) = *(_OWORD *)(v53 + 32);
    *(_OWORD *)(v54 + 48) = *(_OWORD *)(v53 + 48);
    *(_OWORD *)(v54 + 64) = *(_OWORD *)(v53 + 64);
    *(_QWORD *)(v54 + 80) = *(_QWORD *)(v53 + 80);
  }
  if ( (_DWORD)v17 )
  {
    v55 = v105[0];
    v56 = (char *)v105[0] + 8 * v17;
    if ( v56 < v105[0] || (unsigned __int64)v56 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v40, v55, 8 * v17);
  }
  v57 = 0;
  v58 = v91;
  while ( 1 )
  {
    v88 = v57;
    if ( v57 >= (unsigned int)v17 )
      break;
    v59 = (unsigned __int64)v40[v57];
    if ( v59 + 44 < v59 || v59 + 44 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v60 = v58 + 44LL * v57;
    *(_OWORD *)v60 = *(_OWORD *)v59;
    *(_OWORD *)(v60 + 16) = *(_OWORD *)(v59 + 16);
    *(_QWORD *)(v60 + 32) = *(_QWORD *)(v59 + 32);
    *(_DWORD *)(v60 + 40) = *(_DWORD *)(v59 + 40);
    ++v57;
  }
  v61 = 0;
  v62 = v92;
  v63 = v93;
  while ( v61 < (unsigned int)v12 )
  {
    v64 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)(v62 + 32LL * v61);
    Elements[v61] = v64;
    v64->pPlaneAttributes = (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)(v63 + 88LL * v61++);
  }
  for ( j = 0; j < (unsigned int)v17; ++j )
    v40[j] = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)(v58 + 44LL * j);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v85, v103[1], (struct _KTHREAD **)v98, &v99);
  v67 = v99;
  if ( !v99 )
  {
    v68 = WdLogNewEntry5_WdError(v66);
    *(_QWORD *)(v68 + 24) = v103[1];
    *(_QWORD *)(v68 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v68);
    if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v109);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v101);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v111);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v107);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v96);
    if ( (qword_1C005F010 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_8:
    McTemplateK0q(v8, &EventProfilerExit, v7, 2093);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v95, v99);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v106, (__int64)v67, 2, v69, 0);
  v70 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v106);
  v74 = v70;
  if ( v70 >= 0 )
  {
    v78 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(v67, v12, v100, v17, v94, v84, &v89, &v90);
    if ( v78 >= 0 )
    {
      v79 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)v86;
      v80 = (_DWORD *)(v86 + 40);
      if ( v86 + 40 >= MmUserProbeAddress )
        v80 = (_DWORD *)MmUserProbeAddress;
      *v80 = v89;
      v81 = v79 + 11;
      if ( (unsigned __int64)&v79[11] >= MmUserProbeAddress )
        v81 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
      v81->0 = v90.0;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v106);
    if ( v95[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v95);
    if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v109);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v101);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v111);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v107);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v96);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v82, &EventProfilerExit, v83, 2093);
    return (unsigned int)v78;
  }
  else
  {
    v75 = WdLogNewEntry5_WdWarning(v72, v71, v73);
    *(_QWORD *)(v75 + 24) = v67;
    *(_QWORD *)(v75 + 32) = v74;
    WdLogEvent5_WdWarning(v75);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v106);
    if ( v95[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v95);
    if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v109);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v101);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v111);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v107);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v96);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v76, &EventProfilerExit, v77, 2093);
    return (unsigned int)v74;
  }
}
