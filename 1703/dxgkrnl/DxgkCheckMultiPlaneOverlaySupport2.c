/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C018A770
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01861CC (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v12; // rdx
  __int64 v13; // r9
  _OWORD *v14; // rax
  unsigned __int64 v15; // r14
  SIZE_T v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *v21; // r13
  __int64 v22; // rbx
  __int64 v23; // rcx
  const void *v24; // rdx
  char *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  ADAPTER_RENDER **v28; // r14
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _DWORD *v36; // rdx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // rbx
  __int64 v43; // rcx
  struct DXGDEVICE *v44; // [rsp+30h] [rbp-F8h] BYREF
  int v45; // [rsp+38h] [rbp-F0h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v46; // [rsp+3Ch] [rbp-ECh] BYREF
  unsigned int v47; // [rsp+40h] [rbp-E8h]
  PVOID P; // [rsp+48h] [rbp-E0h]
  _QWORD v49[2]; // [rsp+50h] [rbp-D8h] BYREF
  int v50; // [rsp+60h] [rbp-C8h]
  unsigned int v51; // [rsp+64h] [rbp-C4h]
  struct DXGDEVICE *v52; // [rsp+68h] [rbp-C0h] BYREF
  unsigned int v53[4]; // [rsp+70h] [rbp-B8h]
  void *Src[2]; // [rsp+80h] [rbp-A8h]
  _BYTE v55[152]; // [rsp+90h] [rbp-98h] BYREF
  struct DXGPROCESS *Current; // [rsp+138h] [rbp+10h]
  int v58; // [rsp+138h] [rbp+10h]
  bool v59; // [rsp+140h] [rbp+18h]
  unsigned int v60; // [rsp+148h] [rbp+20h]

  v50 = 2093;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2093);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v5, v4);
    v7 = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_6:
    v9 = qword_1C006E790;
    v10 = (qword_1C006E790 & 2) == 0;
LABEL_7:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v9, &EventProfilerExit, v8, 2093);
    return v7;
  }
  v59 = (unsigned int)_guard_dispatch_icall_fptr() == 0;
  v14 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v53 = *v14;
  *(_OWORD *)Src = v14[1];
  v60 = v53[2];
  if ( v53[2] - 1 > 6 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, v12);
    v42[3] = v53[2];
    v7 = -1073741811;
    v42[4] = -1073741811LL;
    v42[5] = PsGetCurrentProcess(v43);
    WdLogEvent5_WdError(v42);
LABEL_50:
    v10 = (qword_1C006E790 & 2) == 0;
    goto LABEL_7;
  }
  v15 = (unsigned __int64)v53[2] << 7;
  if ( v15 > 0xFFFFFFFF )
  {
    v39 = WdLogNewEntry5_WdWarning(v53[2], v12, 1LL, v13);
    *(_QWORD *)(v39 + 24) = 8314LL;
    WdLogEvent5_WdWarning(v39);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v40, &EventProfilerExit, v41, 2093);
    return 3221225621LL;
  }
  else
  {
    v51 = v53[2] << 7;
    v47 = 0;
    v16 = (unsigned __int64)v53[2] << 7;
    if ( !is_mul_ok(v53[2], 0x80uLL) )
      v16 = -1LL;
    v21 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *)operator new(v16, 0x4B677844u, PagedPool);
    P = v21;
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      v7 = -1073741801;
      *(_QWORD *)(v22 + 24) = -1073741801LL;
      *(_QWORD *)(v22 + 32) = PsGetCurrentProcess(v23);
      WdLogEvent5_WdWarning(v22);
      goto LABEL_6;
    }
    v24 = Src[0];
    v25 = (char *)Src[0] + (unsigned int)v15;
    if ( v25 < Src[0] || (unsigned __int64)v25 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v21, v24, (unsigned int)v15);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44, v53[1], (struct _KTHREAD **)Current, &v52);
    v28 = (ADAPTER_RENDER **)v52;
    if ( !v52 )
    {
      v29 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v29 + 24) = v53[1];
      v7 = -1073741811;
      *(_QWORD *)(v29 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v29);
      ExFreePoolWithTag(v21, 0);
LABEL_24:
      if ( v44 )
      {
        v9 = _InterlockedDecrement64((volatile signed __int64 *)v44 + 8);
        if ( !v9 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
      }
      goto LABEL_50;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49, v52);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, (__int64)v28, 2LL, v30, 0);
    v58 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v55);
    if ( v58 < 0 )
    {
      v35 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
      *(_QWORD *)(v35 + 24) = v28;
      v7 = v58;
      *(_QWORD *)(v35 + 32) = v58;
      WdLogEvent5_WdWarning(v35);
      ExFreePoolWithTag(v21, 0);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
      if ( v49[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
      goto LABEL_24;
    }
    if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport2(v28, v60, v21, v59, &v45, &v46) >= 0 )
    {
      v36 = (_DWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v36 = (_DWORD *)MmUserProbeAddress;
      *v36 = v45;
      v37 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)(a1 + 28);
      if ( a1 + 28 >= MmUserProbeAddress )
        v37 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
      v37->0 = v46.0;
    }
    ExFreePoolWithTag(v21, 0);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
    if ( v49[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
    if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v38, 2093);
    return v47;
  }
}
