/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport @ 0x1C018D150
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
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0189B30 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport(ULONG64 a1, __int64 a2, __int64 a3)
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
  ULONG64 v15; // rax
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
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *v27; // r12
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
  _QWORD *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v45; // [rsp+38h] [rbp-F0h]
  struct DXGDEVICE *v46; // [rsp+40h] [rbp-E8h] BYREF
  int v47[2]; // [rsp+48h] [rbp-E0h] BYREF
  void *v48; // [rsp+50h] [rbp-D8h]
  _QWORD v49[2]; // [rsp+58h] [rbp-D0h] BYREF
  int v50; // [rsp+68h] [rbp-C0h]
  struct DXGDEVICE *v51; // [rsp+70h] [rbp-B8h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-B0h]
  __int64 v53; // [rsp+88h] [rbp-A0h]
  _BYTE v54[152]; // [rsp+90h] [rbp-98h] BYREF
  bool v56; // [rsp+138h] [rbp+10h]
  struct _KTHREAD **v57; // [rsp+140h] [rbp+18h]
  int v58; // [rsp+140h] [rbp+18h]
  unsigned int v59; // [rsp+148h] [rbp+20h]

  v45 = 0LL;
  v44 = 2093;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2093);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v44, 2093);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v57 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    v10 = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    v11 = (_QWORD *)v9;
LABEL_6:
    WdLogEvent5_WdError(v11);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v12, &EventProfilerExit, v13, v44);
    return v10;
  }
  v56 = *((_BYTE *)Current + 322) == 0;
  v15 = a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v15;
  v53 = *(_QWORD *)(v15 + 16);
  v16 = HIDWORD(Src[0]);
  v59 = HIDWORD(Src[0]);
  if ( (unsigned int)(HIDWORD(Src[0]) - 1) > 6 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v41[3] = v16;
    v10 = -1073741811;
    v41[4] = -1073741811LL;
    v41[5] = PsGetCurrentProcess(v43, v42);
    v11 = v41;
    goto LABEL_6;
  }
  v17 = 120LL * HIDWORD(Src[0]);
  v18 = 0xFFFFFFFFLL;
  if ( v17 <= 0xFFFFFFFF )
    v18 = (unsigned int)v17;
  v50 = v18;
  v19 = v17 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v47[1] = v19;
  if ( v17 <= 0xFFFFFFFF )
  {
    v23 = 120LL * HIDWORD(Src[0]);
    if ( !is_mul_ok(HIDWORD(Src[0]), 0x78uLL) )
      v23 = -1LL;
    v27 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *)operator new[](v23, 0x4B677844u, PagedPool);
    v48 = v27;
    if ( !v27 )
    {
      v28 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      v10 = -1073741801;
      *(_QWORD *)(v28 + 24) = -1073741801LL;
      *(_QWORD *)(v28 + 32) = PsGetCurrentProcess(v30, v29);
      WdLogEvent5_WdWarning(v28);
      goto LABEL_7;
    }
    v31 = Src[1];
    if ( (char *)Src[1] + v18 < Src[1] || (char *)Src[1] + v18 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v27, v31, (unsigned int)v18);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v46, (unsigned int)Src[0], v57, &v51);
    v33 = (ADAPTER_RENDER **)v51;
    if ( v51 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49, v51);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, (__int64)v33, 2, v35, 0);
      v58 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v54);
      if ( v58 >= 0 )
      {
        if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport(v33, v59, v27, v56, v47) >= 0 )
        {
          v40 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v40 = (_DWORD *)MmUserProbeAddress;
          *v40 = v47[0];
        }
        operator delete[](v27);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
        if ( v49[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
        if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
        goto LABEL_18;
      }
      v39 = WdLogNewEntry5_WdWarning(v37, v36, v38);
      *(_QWORD *)(v39 + 24) = v33;
      v10 = v58;
      *(_QWORD *)(v39 + 32) = v58;
      WdLogEvent5_WdWarning(v39);
      operator delete[](v27);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
      if ( v49[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
    }
    else
    {
      v34 = WdLogNewEntry5_WdError(v32);
      *(_QWORD *)(v34 + 24) = LODWORD(Src[0]);
      v10 = -1073741811;
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v34);
      operator delete[](v27);
    }
    if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    goto LABEL_7;
  }
  v20 = WdLogNewEntry5_WdWarning(HIDWORD(Src[0]), 0xFFFFFFFFLL, v8);
  *(_QWORD *)(v20 + 24) = 6957LL;
  WdLogEvent5_WdWarning(v20);
LABEL_18:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v44);
  return v19;
}
