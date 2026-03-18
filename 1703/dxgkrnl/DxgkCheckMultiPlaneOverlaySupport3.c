/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C018ACA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C018521C (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C0185294 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x1C0185310 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C0185390 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0186368 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport3(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  bool v9; // zf
  _OWORD *v11; // rax
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **Elements; // r12
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rbx
  __int64 v38; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rbx
  __int64 v45; // rcx
  const void *v46; // rdx
  char *v47; // rcx
  unsigned int v48; // edx
  __int64 v49; // r10
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v50; // r8
  __int64 v51; // rax
  __int64 v52; // rcx
  _OWORD *v53; // r8
  _OWORD *v54; // rax
  const void *v55; // rdx
  char *v56; // rcx
  unsigned int v57; // edx
  __int64 v58; // r10
  unsigned __int64 v59; // r8
  __int64 v60; // rcx
  unsigned int v61; // r8d
  __int64 v62; // r9
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v63; // rdx
  unsigned int i; // edx
  __int64 v65; // rdx
  __int64 v66; // rcx
  DXGDEVICE *v67; // rbx
  __int64 v68; // rax
  __int64 v69; // r9
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r12
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r8
  int v79; // ebx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v80; // r9
  _DWORD *v81; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  struct DXGDEVICE *v85; // [rsp+48h] [rbp-380h] BYREF
  ULONG64 v86; // [rsp+50h] [rbp-378h]
  unsigned int v87; // [rsp+58h] [rbp-370h]
  unsigned int v88; // [rsp+5Ch] [rbp-36Ch]
  BOOL v89; // [rsp+60h] [rbp-368h]
  int v90; // [rsp+64h] [rbp-364h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v91; // [rsp+68h] [rbp-360h] BYREF
  __int64 v92; // [rsp+70h] [rbp-358h]
  __int64 v93; // [rsp+78h] [rbp-350h]
  __int64 v94; // [rsp+80h] [rbp-348h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v95; // [rsp+88h] [rbp-340h]
  _QWORD v96[2]; // [rsp+90h] [rbp-338h] BYREF
  PVOID v97[4]; // [rsp+A0h] [rbp-328h] BYREF
  int v98; // [rsp+C0h] [rbp-308h]
  struct DXGPROCESS *Current; // [rsp+C8h] [rbp-300h]
  struct DXGDEVICE *v100; // [rsp+D0h] [rbp-2F8h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v101; // [rsp+D8h] [rbp-2F0h]
  PVOID v102[4]; // [rsp+E0h] [rbp-2E8h] BYREF
  int v103; // [rsp+100h] [rbp-2C8h]
  unsigned int v104[4]; // [rsp+108h] [rbp-2C0h]
  void *Src[2]; // [rsp+118h] [rbp-2B0h]
  void *v106[2]; // [rsp+128h] [rbp-2A0h]
  _BYTE v107[96]; // [rsp+140h] [rbp-288h] BYREF
  PVOID v108[13]; // [rsp+1A0h] [rbp-228h] BYREF
  int v109; // [rsp+208h] [rbp-1C0h]
  PVOID v110[17]; // [rsp+210h] [rbp-1B8h] BYREF
  int v111; // [rsp+29Ch] [rbp-12Ch]
  PVOID v112[31]; // [rsp+2A0h] [rbp-128h] BYREF
  int v113; // [rsp+398h] [rbp-30h]

  v86 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2093);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v8 = qword_1C006E790;
    v9 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( v9 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_8;
  }
  v89 = _guard_dispatch_icall_fptr() == 0;
  v11 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v104 = *v11;
  *(_OWORD *)Src = v11[1];
  *(_OWORD *)v106 = v11[2];
  v12 = v104[2];
  if ( !v104[2] )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, 1LL);
    v13[3] = 0LL;
LABEL_14:
    v15 = v13;
    v13[4] = -1073741811LL;
    v13[5] = PsGetCurrentProcess(v14);
    WdLogEvent5_WdError(v15);
    v9 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  v16 = LODWORD(Src[1]);
  if ( LODWORD(Src[1]) > 0x10 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, 1LL);
    v13[3] = LODWORD(Src[1]);
    goto LABEL_14;
  }
  v97[0] = 0LL;
  v98 = 0;
  Elements = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                  v97,
                                                                  v104[2]);
  v101 = Elements;
  if ( !Elements )
  {
    v22 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    *(_QWORD *)(v22 + 24) = -1073741801LL;
    *(_QWORD *)(v22 + 32) = PsGetCurrentProcess(v23);
    WdLogEvent5_WdWarning(v22);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v97);
    v25 = qword_1C006E790;
    v26 = (qword_1C006E790 & 2) == 0;
    goto LABEL_19;
  }
  v108[0] = 0LL;
  v109 = 0;
  v93 = PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(v108, v12);
  if ( !v93 )
  {
    v31 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
    *(_QWORD *)(v31 + 24) = -1073741801LL;
    *(_QWORD *)(v31 + 32) = PsGetCurrentProcess(v32);
    WdLogEvent5_WdWarning(v31);
LABEL_25:
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v108);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v97);
    v26 = (qword_1C006E790 & 2) == 0;
LABEL_19:
    if ( !v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v25, &EventProfilerExit, v24, 2093);
    return 3221225495LL;
  }
  v112[0] = 0LL;
  v113 = 0;
  v94 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements(v112, v12);
  if ( !v94 )
  {
    v37 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
    *(_QWORD *)(v37 + 24) = -1073741801LL;
    *(_QWORD *)(v37 + 32) = PsGetCurrentProcess(v38);
    WdLogEvent5_WdWarning(v37);
LABEL_28:
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v112);
    goto LABEL_25;
  }
  v102[0] = 0LL;
  v103 = 0;
  v110[0] = 0LL;
  v111 = 0;
  v39 = 0LL;
  v95 = 0LL;
  v92 = 0LL;
  if ( (_DWORD)v16 )
  {
    v39 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                               v102,
                                                                               v16);
    v95 = v39;
    if ( !v39
      || (v92 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                  v110,
                  v16)) == 0 )
    {
      v44 = WdLogNewEntry5_WdWarning(v41, v40, v42, v43);
      *(_QWORD *)(v44 + 24) = -1073741801LL;
      *(_QWORD *)(v44 + 32) = PsGetCurrentProcess(v45);
      WdLogEvent5_WdWarning(v44);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v110);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v102);
      goto LABEL_28;
    }
  }
  v46 = Src[0];
  v47 = (char *)Src[0] + 8 * v12;
  if ( v47 < Src[0] || (unsigned __int64)v47 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Elements, v46, 8 * v12);
  v48 = 0;
  v49 = v94;
  while ( 1 )
  {
    v87 = v48;
    if ( v48 >= (unsigned int)v12 )
      break;
    v50 = Elements[v48];
    if ( &v50[1] < v50 || (unsigned __int64)&v50[1] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v51 = 32LL * v48;
    v52 = v93;
    *(_OWORD *)(v51 + v93) = *(_OWORD *)&v50->LayerIndex;
    *(_OWORD *)(v51 + v52 + 16) = *(_OWORD *)&v50->VidPnSourceId;
    v53 = *(_OWORD **)(v51 + v52 + 24);
    if ( v53 + 5 < v53 || (unsigned __int64)(v53 + 5) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v54 = (_OWORD *)(v49 + 80LL * v48);
    *v54 = *v53;
    v54[1] = v53[1];
    v54[2] = v53[2];
    v54[3] = v53[3];
    v54[4] = v53[4];
    ++v48;
  }
  if ( (_DWORD)v16 )
  {
    v55 = v106[0];
    v56 = (char *)v106[0] + 8 * v16;
    if ( v56 < v106[0] || (unsigned __int64)v56 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v39, v55, 8 * v16);
  }
  v57 = 0;
  v58 = v92;
  while ( 1 )
  {
    v88 = v57;
    if ( v57 >= (unsigned int)v16 )
      break;
    v59 = (unsigned __int64)v39[v57];
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
  v62 = v93;
  while ( v61 < (unsigned int)v12 )
  {
    v63 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)(v62 + 32LL * v61);
    Elements[v61] = v63;
    v63->pPlaneAttributes = (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)(v94 + 80LL * v61++);
  }
  for ( i = 0; i < (unsigned int)v16; ++i )
    v39[i] = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)(v58 + 44LL * i);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v85, v104[1], (struct _KTHREAD **)Current, &v100);
  v67 = v100;
  if ( !v100 )
  {
    v68 = WdLogNewEntry5_WdError(v66, v65);
    *(_QWORD *)(v68 + 24) = v104[1];
    *(_QWORD *)(v68 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v68);
    if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v110);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v102);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v112);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v108);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v97);
    if ( (qword_1C006E790 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_8:
    Template_q(v8, &EventProfilerExit, v7, 2093);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v96, v100);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v107, (__int64)v67, 2LL, v69, 0);
  v70 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v107);
  v75 = v70;
  if ( v70 >= 0 )
  {
    v79 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(v67, v12, v101, v16, v95, v89, &v90, &v91);
    if ( v79 >= 0 )
    {
      v80 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)v86;
      v81 = (_DWORD *)(v86 + 40);
      if ( v86 + 40 >= MmUserProbeAddress )
        v81 = (_DWORD *)MmUserProbeAddress;
      *v81 = v90;
      v82 = v80 + 11;
      if ( (unsigned __int64)&v80[11] >= MmUserProbeAddress )
        v82 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
      v82->0 = v91.0;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v107);
    if ( v96[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v96);
    if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v110);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v102);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v112);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v108);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v97);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v83, &EventProfilerExit, v84, 2093);
    return (unsigned int)v79;
  }
  else
  {
    v76 = WdLogNewEntry5_WdWarning(v72, v71, v73, v74);
    *(_QWORD *)(v76 + 24) = v67;
    *(_QWORD *)(v76 + 32) = v75;
    WdLogEvent5_WdWarning(v76);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v107);
    if ( v96[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v96);
    if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v110);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v102);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v112);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v108);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v97);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v77, &EventProfilerExit, v78, 2093);
    return (unsigned int)v75;
  }
}
