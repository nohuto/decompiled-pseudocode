/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport @ 0x1C018A260
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
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0186EB8 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // esi
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v12; // rdx
  __int64 v13; // r9
  ULONG64 v14; // rax
  unsigned __int64 v15; // rsi
  SIZE_T v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *v21; // r13
  __int64 v22; // rbx
  __int64 v23; // rcx
  const void *v24; // rdx
  char *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  ADAPTER_RENDER **v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _DWORD *v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  _QWORD *v41; // rbx
  __int64 v42; // rcx
  struct DXGDEVICE *v43; // [rsp+30h] [rbp-E8h] BYREF
  int v44; // [rsp+38h] [rbp-E0h] BYREF
  unsigned int v45; // [rsp+3Ch] [rbp-DCh]
  PVOID P; // [rsp+40h] [rbp-D8h]
  _QWORD v47[2]; // [rsp+48h] [rbp-D0h] BYREF
  int v48; // [rsp+58h] [rbp-C0h]
  int v49; // [rsp+5Ch] [rbp-BCh]
  struct DXGDEVICE *v50; // [rsp+60h] [rbp-B8h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-B0h]
  __int64 v52; // [rsp+78h] [rbp-A0h]
  _BYTE v53[152]; // [rsp+80h] [rbp-98h] BYREF
  struct DXGPROCESS *Current; // [rsp+128h] [rbp+10h]
  int v56; // [rsp+128h] [rbp+10h]
  bool v57; // [rsp+130h] [rbp+18h]
  unsigned int v58; // [rsp+138h] [rbp+20h]

  v48 = 2093;
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
  v57 = (unsigned int)_guard_dispatch_icall_fptr() == 0;
  v14 = a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v14;
  v52 = *(_QWORD *)(v14 + 16);
  v58 = HIDWORD(Src[0]);
  if ( (unsigned int)(HIDWORD(Src[0]) - 1) > 6 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, v12);
    v41[3] = HIDWORD(Src[0]);
    v7 = -1073741811;
    v41[4] = -1073741811LL;
    v41[5] = PsGetCurrentProcess(v42);
    WdLogEvent5_WdError(v41);
LABEL_48:
    v10 = (qword_1C006E790 & 2) == 0;
    goto LABEL_7;
  }
  v15 = 120LL * HIDWORD(Src[0]);
  if ( v15 > 0xFFFFFFFF )
  {
    v38 = WdLogNewEntry5_WdWarning(HIDWORD(Src[0]), v12, 1LL, v13);
    *(_QWORD *)(v38 + 24) = 6715LL;
    WdLogEvent5_WdWarning(v38);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v39, &EventProfilerExit, v40, 2093);
    return 3221225621LL;
  }
  else
  {
    v49 = 120 * HIDWORD(Src[0]);
    v45 = 0;
    v16 = 120LL * HIDWORD(Src[0]);
    if ( !is_mul_ok(HIDWORD(Src[0]), 0x78uLL) )
      v16 = -1LL;
    v21 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *)operator new(v16, 0x4B677844u, PagedPool);
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
    v24 = Src[1];
    v25 = (char *)Src[1] + (unsigned int)v15;
    if ( v25 < Src[1] || (unsigned __int64)v25 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v21, v24, (unsigned int)v15);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43, LODWORD(Src[0]), (struct _KTHREAD **)Current, &v50);
    v28 = (ADAPTER_RENDER **)v50;
    if ( !v50 )
    {
      v29 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v29 + 24) = LODWORD(Src[0]);
      v7 = -1073741811;
      *(_QWORD *)(v29 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v29);
      ExFreePoolWithTag(v21, 0);
LABEL_24:
      if ( v43 )
      {
        v9 = _InterlockedDecrement64((volatile signed __int64 *)v43 + 8);
        if ( !v9 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
      }
      goto LABEL_48;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47, v50);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, (__int64)v28, 2LL, v30, 0);
    v56 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v53);
    if ( v56 < 0 )
    {
      v35 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
      *(_QWORD *)(v35 + 24) = v28;
      v7 = v56;
      *(_QWORD *)(v35 + 32) = v56;
      WdLogEvent5_WdWarning(v35);
      ExFreePoolWithTag(v21, 0);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
      if ( v47[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
      goto LABEL_24;
    }
    if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport(v28, v58, v21, v57, &v44) >= 0 )
    {
      v36 = (_DWORD *)(a1 + 16);
      if ( a1 + 16 >= MmUserProbeAddress )
        v36 = (_DWORD *)MmUserProbeAddress;
      *v36 = v44;
    }
    ExFreePoolWithTag(v21, 0);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
    if ( v47[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
    if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v37, 2093);
    return v45;
  }
}
