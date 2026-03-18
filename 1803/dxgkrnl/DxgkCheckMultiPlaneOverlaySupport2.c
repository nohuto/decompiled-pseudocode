/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C018D660
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0188D94 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // esi
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  _OWORD *v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  unsigned int v19; // r13d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  SIZE_T v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *v27; // r12
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  const void *v31; // rdx
  __int64 v32; // rcx
  ADAPTER_RENDER **v33; // rsi
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  _DWORD *v40; // rdx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v41; // rdx
  _QWORD *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // [rsp+30h] [rbp-108h] BYREF
  __int64 v46; // [rsp+38h] [rbp-100h]
  struct DXGDEVICE *v47; // [rsp+40h] [rbp-F8h] BYREF
  int v48; // [rsp+48h] [rbp-F0h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v49; // [rsp+4Ch] [rbp-ECh] BYREF
  unsigned int v50; // [rsp+50h] [rbp-E8h]
  void *v51; // [rsp+58h] [rbp-E0h]
  _QWORD v52[2]; // [rsp+60h] [rbp-D8h] BYREF
  int v53; // [rsp+70h] [rbp-C8h]
  struct DXGDEVICE *v54; // [rsp+78h] [rbp-C0h] BYREF
  unsigned int v55[4]; // [rsp+80h] [rbp-B8h]
  void *Src[2]; // [rsp+90h] [rbp-A8h]
  _BYTE v57[152]; // [rsp+A0h] [rbp-98h] BYREF
  bool v59; // [rsp+148h] [rbp+10h]
  struct _KTHREAD **v60; // [rsp+150h] [rbp+18h]
  int v61; // [rsp+150h] [rbp+18h]
  unsigned int v62; // [rsp+158h] [rbp+20h]

  v46 = 0LL;
  v45 = 2093;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2093);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v45, 2093);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v60 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    v10 = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    v11 = (_QWORD *)v9;
LABEL_6:
    WdLogEvent5_WdError(v11);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v12, &EventProfilerExit, v13, v45);
    return v10;
  }
  v59 = *((_BYTE *)Current + 322) == 0;
  v15 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v55 = *v15;
  *(_OWORD *)Src = v15[1];
  v16 = v55[2];
  v62 = v55[2];
  if ( v55[2] - 1 > 6 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v42[3] = v16;
    v10 = -1073741811;
    v42[4] = -1073741811LL;
    v42[5] = PsGetCurrentProcess(v44, v43);
    v11 = v42;
    goto LABEL_6;
  }
  v17 = (unsigned __int64)v55[2] << 7;
  v18 = 0xFFFFFFFFLL;
  if ( v17 <= 0xFFFFFFFF )
    v18 = (unsigned int)v17;
  v53 = v18;
  v19 = v17 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v50 = v19;
  if ( v17 <= 0xFFFFFFFF )
  {
    v23 = (unsigned __int64)v55[2] << 7;
    if ( !is_mul_ok(v55[2], 0x80uLL) )
      v23 = -1LL;
    v27 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *)operator new[](v23, 0x4B677844u, PagedPool);
    v51 = v27;
    if ( !v27 )
    {
      v28 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      v10 = -1073741801;
      *(_QWORD *)(v28 + 24) = -1073741801LL;
      *(_QWORD *)(v28 + 32) = PsGetCurrentProcess(v30, v29);
      WdLogEvent5_WdWarning(v28);
      goto LABEL_7;
    }
    v31 = Src[0];
    if ( (char *)Src[0] + v18 < Src[0] || (char *)Src[0] + v18 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v27, v31, (unsigned int)v18);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v47, v55[1], v60, &v54);
    v33 = (ADAPTER_RENDER **)v54;
    if ( v54 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v52, v54);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, (__int64)v33, 2, v35, 0);
      v61 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v57);
      if ( v61 >= 0 )
      {
        if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport2(v33, v62, v27, v59, &v48, &v49) >= 0 )
        {
          v40 = (_DWORD *)(a1 + 24);
          if ( a1 + 24 >= MmUserProbeAddress )
            v40 = (_DWORD *)MmUserProbeAddress;
          *v40 = v48;
          v41 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v41 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
          v41->0 = v49.0;
        }
        operator delete[](v27);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
        if ( v52[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v52);
        if ( v47 && _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
        goto LABEL_18;
      }
      v39 = WdLogNewEntry5_WdWarning(v37, v36, v38);
      *(_QWORD *)(v39 + 24) = v33;
      v10 = v61;
      *(_QWORD *)(v39 + 32) = v61;
      WdLogEvent5_WdWarning(v39);
      operator delete[](v27);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
      if ( v52[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v52);
    }
    else
    {
      v34 = WdLogNewEntry5_WdError(v32);
      *(_QWORD *)(v34 + 24) = v55[1];
      v10 = -1073741811;
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v34);
      operator delete[](v27);
    }
    if ( v47 && _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
    goto LABEL_7;
  }
  v20 = WdLogNewEntry5_WdWarning(v55[2], 0xFFFFFFFFLL, v8);
  *(_QWORD *)(v20 + 24) = 8803LL;
  WdLogEvent5_WdWarning(v20);
LABEL_18:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v45);
  return v19;
}
