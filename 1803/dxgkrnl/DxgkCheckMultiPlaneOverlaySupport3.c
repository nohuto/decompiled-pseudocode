/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C018DBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C0187E00 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C0187E84 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@I@Z @ 0x1C0187F08 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAA.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C0187F88 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0188F30 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport3(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  _OWORD *v13; // rax
  __int64 v14; // r13
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **Elements; // r12
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  const void *v48; // rdx
  char *v49; // rcx
  unsigned int i; // edx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v51; // r8
  __int64 v52; // rax
  char *v53; // rcx
  unsigned __int64 v54; // r8
  char *v55; // rax
  const void *v56; // rdx
  char *v57; // rcx
  unsigned int v58; // edx
  char *v59; // r10
  unsigned __int64 v60; // r8
  char *v61; // rcx
  unsigned int v62; // r8d
  char *v63; // r9
  char *v64; // r11
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v65; // rcx
  unsigned int j; // edx
  __int64 v67; // rcx
  DXGDEVICE *v68; // rbx
  __int64 v69; // rax
  __int64 v70; // r9
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
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
  bool v85; // [rsp+40h] [rbp-3A8h]
  int v86; // [rsp+48h] [rbp-3A0h] BYREF
  __int64 v87; // [rsp+50h] [rbp-398h]
  struct DXGDEVICE *v88; // [rsp+58h] [rbp-390h] BYREF
  ULONG64 v89; // [rsp+60h] [rbp-388h]
  unsigned int v90; // [rsp+68h] [rbp-380h]
  unsigned int v91; // [rsp+6Ch] [rbp-37Ch]
  int v92; // [rsp+70h] [rbp-378h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v93; // [rsp+74h] [rbp-374h] BYREF
  char *v94; // [rsp+78h] [rbp-370h]
  char *v95; // [rsp+80h] [rbp-368h]
  char *v96; // [rsp+88h] [rbp-360h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v97; // [rsp+90h] [rbp-358h]
  _QWORD v98[2]; // [rsp+98h] [rbp-350h] BYREF
  PVOID v99[4]; // [rsp+A8h] [rbp-340h] BYREF
  int v100; // [rsp+C8h] [rbp-320h]
  struct DXGPROCESS *v101; // [rsp+D0h] [rbp-318h]
  struct DXGDEVICE *v102; // [rsp+D8h] [rbp-310h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v103; // [rsp+E0h] [rbp-308h]
  PVOID v104[4]; // [rsp+E8h] [rbp-300h] BYREF
  int v105; // [rsp+108h] [rbp-2E0h]
  unsigned int v106[4]; // [rsp+110h] [rbp-2D8h]
  void *Src[2]; // [rsp+120h] [rbp-2C8h]
  void *v108[2]; // [rsp+130h] [rbp-2B8h]
  _BYTE v109[96]; // [rsp+140h] [rbp-2A8h] BYREF
  PVOID v110[13]; // [rsp+1A0h] [rbp-248h] BYREF
  int v111; // [rsp+208h] [rbp-1E0h]
  PVOID v112[17]; // [rsp+210h] [rbp-1D8h] BYREF
  int v113; // [rsp+29Ch] [rbp-14Ch]
  PVOID v114[34]; // [rsp+2A0h] [rbp-148h] BYREF
  int v115; // [rsp+3B0h] [rbp-38h]

  v89 = a1;
  v87 = 0LL;
  v86 = 2093;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2093);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v86, 2093);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v101 = Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    v9 = v8;
LABEL_6:
    WdLogEvent5_WdError(v9);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v10, &EventProfilerExit, v11, v86);
    return 3221225485LL;
  }
  v85 = *((_BYTE *)Current + 322) == 0;
  v13 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v106 = *v13;
  *(_OWORD *)Src = v13[1];
  *(_OWORD *)v108 = v13[2];
  v14 = v106[2];
  if ( !v106[2] )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v15[3] = 0LL;
LABEL_15:
    v18 = v15;
    v15[4] = -1073741811LL;
    v15[5] = PsGetCurrentProcess(v17, v16);
    v9 = (__int64)v18;
    goto LABEL_6;
  }
  v19 = LODWORD(Src[1]);
  if ( LODWORD(Src[1]) > 0x10 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v15[3] = v19;
    goto LABEL_15;
  }
  v99[0] = 0LL;
  v100 = 0;
  Elements = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                  v99,
                                                                  v106[2]);
  v103 = Elements;
  if ( !Elements )
  {
    v24 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v24 + 24) = -1073741801LL;
    *(_QWORD *)(v24 + 32) = PsGetCurrentProcess(v26, v25);
    WdLogEvent5_WdWarning(v24);
    goto LABEL_20;
  }
  v110[0] = 0LL;
  v111 = 0;
  v95 = (char *)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(v110, v14);
  if ( !v95 )
  {
    v32 = WdLogNewEntry5_WdWarning(v30, v29, v31);
    *(_QWORD *)(v32 + 24) = -1073741801LL;
    *(_QWORD *)(v32 + 32) = PsGetCurrentProcess(v34, v33);
    WdLogEvent5_WdWarning(v32);
LABEL_26:
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v110);
LABEL_20:
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v99);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v27, &EventProfilerExit, v28, v86);
    return 3221225495LL;
  }
  v114[0] = 0LL;
  v115 = 0;
  v96 = (char *)PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2,3>::AllocateElements(v114, v14);
  if ( !v96 )
  {
    v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
    *(_QWORD *)(v38 + 24) = -1073741801LL;
    *(_QWORD *)(v38 + 32) = PsGetCurrentProcess(v40, v39);
    WdLogEvent5_WdWarning(v38);
LABEL_29:
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v114);
    goto LABEL_26;
  }
  v104[0] = 0LL;
  v105 = 0;
  v112[0] = 0LL;
  v113 = 0;
  v41 = 0LL;
  v97 = 0LL;
  v94 = 0LL;
  if ( (_DWORD)v19 )
  {
    v41 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                               v104,
                                                                               v19);
    v97 = v41;
    if ( !v41
      || (v94 = (char *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                          v112,
                          v19)) == 0LL )
    {
      v45 = WdLogNewEntry5_WdWarning(v43, v42, v44);
      *(_QWORD *)(v45 + 24) = -1073741801LL;
      *(_QWORD *)(v45 + 32) = PsGetCurrentProcess(v47, v46);
      WdLogEvent5_WdWarning(v45);
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v112);
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v104);
      goto LABEL_29;
    }
  }
  v48 = Src[0];
  v49 = (char *)Src[0] + 8 * v14;
  if ( v49 < Src[0] || (unsigned __int64)v49 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Elements, v48, 8 * v14);
  for ( i = 0; ; ++i )
  {
    v90 = i;
    if ( i >= (unsigned int)v14 )
      break;
    v51 = Elements[i];
    if ( &v51[1] < v51 || (unsigned __int64)&v51[1] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v52 = 32LL * i;
    v53 = v95;
    *(_OWORD *)&v95[v52] = *(_OWORD *)&v51->LayerIndex;
    *(_OWORD *)&v53[v52 + 16] = *(_OWORD *)&v51->VidPnSourceId;
    v54 = *(_QWORD *)&v53[v52 + 24];
    if ( v54 + 88 < v54 || v54 + 88 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v55 = &v96[88 * i];
    *(_OWORD *)v55 = *(_OWORD *)v54;
    *((_OWORD *)v55 + 1) = *(_OWORD *)(v54 + 16);
    *((_OWORD *)v55 + 2) = *(_OWORD *)(v54 + 32);
    *((_OWORD *)v55 + 3) = *(_OWORD *)(v54 + 48);
    *((_OWORD *)v55 + 4) = *(_OWORD *)(v54 + 64);
    *((_QWORD *)v55 + 10) = *(_QWORD *)(v54 + 80);
  }
  if ( (_DWORD)v19 )
  {
    v56 = v108[0];
    v57 = (char *)v108[0] + 8 * v19;
    if ( v57 < v108[0] || (unsigned __int64)v57 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v41, v56, 8 * v19);
  }
  v58 = 0;
  v59 = v94;
  while ( 1 )
  {
    v91 = v58;
    if ( v58 >= (unsigned int)v19 )
      break;
    v60 = (unsigned __int64)v41[v58];
    if ( v60 + 44 < v60 || v60 + 44 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v61 = &v59[44 * v58];
    *(_OWORD *)v61 = *(_OWORD *)v60;
    *((_OWORD *)v61 + 1) = *(_OWORD *)(v60 + 16);
    *((_QWORD *)v61 + 4) = *(_QWORD *)(v60 + 32);
    *((_DWORD *)v61 + 10) = *(_DWORD *)(v60 + 40);
    ++v58;
  }
  v62 = 0;
  v63 = v95;
  v64 = v96;
  while ( v62 < (unsigned int)v14 )
  {
    v65 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)&v63[32 * v62];
    Elements[v62] = v65;
    v65->pPlaneAttributes = (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)&v64[88 * v62++];
  }
  for ( j = 0; j < (unsigned int)v19; ++j )
    v41[j] = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)&v59[44 * j];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v88, v106[1], (struct _KTHREAD **)v101, &v102);
  v68 = v102;
  if ( !v102 )
  {
    v69 = WdLogNewEntry5_WdError(v67);
    *(_QWORD *)(v69 + 24) = v106[1];
    *(_QWORD *)(v69 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v69);
    if ( v88 && _InterlockedExchangeAdd64((volatile signed __int64 *)v88 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v88 + 2), v88);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v112);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v104);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v114);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v110);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v99);
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98, v102);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v109, (__int64)v68, 2, v70, 0);
  v71 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v109);
  v75 = v71;
  if ( v71 >= 0 )
  {
    v79 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(v68, v14, v103, v19, v97, v85, &v92, &v93);
    if ( v79 >= 0 )
    {
      v80 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)v89;
      v81 = (_DWORD *)(v89 + 40);
      if ( v89 + 40 >= MmUserProbeAddress )
        v81 = (_DWORD *)MmUserProbeAddress;
      *v81 = v92;
      v82 = v80 + 11;
      if ( (unsigned __int64)&v80[11] >= MmUserProbeAddress )
        v82 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
      v82->0 = v93.0;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v109);
    if ( v98[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98);
    if ( v88 && _InterlockedExchangeAdd64((volatile signed __int64 *)v88 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v88 + 2), v88);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v112);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v104);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v114);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v110);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v99);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v83, &EventProfilerExit, v84, v86);
    return (unsigned int)v79;
  }
  else
  {
    v76 = WdLogNewEntry5_WdWarning(v73, v72, v74);
    *(_QWORD *)(v76 + 24) = v68;
    *(_QWORD *)(v76 + 32) = v75;
    WdLogEvent5_WdWarning(v76);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v109);
    if ( v98[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98);
    if ( v88 && _InterlockedExchangeAdd64((volatile signed __int64 *)v88 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v88 + 2), v88);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v112);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v104);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v114);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v110);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v99);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v77, &EventProfilerExit, v78, v86);
    return (unsigned int)v75;
  }
}
