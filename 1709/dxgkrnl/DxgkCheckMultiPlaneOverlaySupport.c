/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport @ 0x1C019F180
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C019C850 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  ULONG64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // r14
  unsigned int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  bool v20; // zf
  SIZE_T v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *v25; // r12
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  const void *v29; // rdx
  __int64 v30; // rcx
  ADAPTER_RENDER **v31; // r14
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  _DWORD *v38; // rdx
  _QWORD *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct DXGDEVICE *v42; // [rsp+30h] [rbp-D8h] BYREF
  int v43[2]; // [rsp+38h] [rbp-D0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h]
  _QWORD v45[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v46; // [rsp+58h] [rbp-B0h]
  struct DXGDEVICE *v47; // [rsp+60h] [rbp-A8h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-A0h]
  __int64 v49; // [rsp+78h] [rbp-90h]
  _BYTE v50[136]; // [rsp+80h] [rbp-88h] BYREF
  bool v52; // [rsp+118h] [rbp+10h]
  struct _KTHREAD **v53; // [rsp+120h] [rbp+18h]
  int v54; // [rsp+120h] [rbp+18h]
  unsigned int v55; // [rsp+128h] [rbp+20h]

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2093);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v53 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    v10 = qword_1C005F010;
    v11 = (qword_1C005F010 & 2) == 0;
LABEL_7:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v10, &EventProfilerExit, v9, 2093);
    return v8;
  }
  v52 = *((_BYTE *)Current + 306) == 0;
  v13 = a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v13;
  v49 = *(_QWORD *)(v13 + 16);
  v55 = HIDWORD(Src[0]);
  if ( (unsigned int)(HIDWORD(Src[0]) - 1) > 6 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v39[3] = HIDWORD(Src[0]);
    v8 = -1073741811;
    v39[4] = -1073741811LL;
    v39[5] = PsGetCurrentProcess(v41, v40);
    WdLogEvent5_WdError(v39);
    goto LABEL_48;
  }
  v14 = 120LL * HIDWORD(Src[0]);
  v15 = 0xFFFFFFFFLL;
  if ( v14 <= 0xFFFFFFFF )
    v15 = (unsigned int)v14;
  v46 = v15;
  v16 = v14 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v43[1] = v16;
  if ( v14 <= 0xFFFFFFFF )
  {
    v21 = 120LL * HIDWORD(Src[0]);
    if ( !is_mul_ok(HIDWORD(Src[0]), 0x78uLL) )
      v21 = -1LL;
    v25 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *)operator new(v21, 0x4B677844u, PagedPool);
    P = v25;
    if ( !v25 )
    {
      v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      v8 = -1073741801;
      *(_QWORD *)(v26 + 24) = -1073741801LL;
      *(_QWORD *)(v26 + 32) = PsGetCurrentProcess(v28, v27);
      WdLogEvent5_WdWarning(v26);
      goto LABEL_6;
    }
    v29 = Src[1];
    if ( (char *)Src[1] + v15 < Src[1] || (char *)Src[1] + v15 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v25, v29, (unsigned int)v15);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, (unsigned int)Src[0], v53, &v47);
    v31 = (ADAPTER_RENDER **)v47;
    if ( v47 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45, v47);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v31, 2, v33, 0);
      v54 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v50);
      if ( v54 >= 0 )
      {
        if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport(v31, v55, v25, v52, v43) >= 0 )
        {
          v38 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v38 = (_DWORD *)MmUserProbeAddress;
          *v38 = v43[0];
        }
        ExFreePoolWithTag(v25, 0);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
        if ( v45[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
        if ( v42 )
        {
          v19 = _InterlockedDecrement64((volatile signed __int64 *)v42 + 8);
          if ( !v19 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
        }
        v20 = (qword_1C005F010 & 2) == 0;
        goto LABEL_18;
      }
      v37 = WdLogNewEntry5_WdWarning(v35, v34, v36);
      *(_QWORD *)(v37 + 24) = v31;
      v8 = v54;
      *(_QWORD *)(v37 + 32) = v54;
      WdLogEvent5_WdWarning(v37);
      ExFreePoolWithTag(v25, 0);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
      if ( v45[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
    }
    else
    {
      v32 = WdLogNewEntry5_WdError(v30);
      *(_QWORD *)(v32 + 24) = LODWORD(Src[0]);
      v8 = -1073741811;
      *(_QWORD *)(v32 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v32);
      ExFreePoolWithTag(v25, 0);
    }
    if ( v42 )
    {
      v10 = _InterlockedDecrement64((volatile signed __int64 *)v42 + 8);
      if ( !v10 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    }
LABEL_48:
    v11 = (qword_1C005F010 & 2) == 0;
    goto LABEL_7;
  }
  v17 = WdLogNewEntry5_WdWarning(HIDWORD(Src[0]), 0xFFFFFFFFLL, v6);
  *(_QWORD *)(v17 + 24) = 6708LL;
  WdLogEvent5_WdWarning(v17);
  v19 = qword_1C005F010;
  v20 = (qword_1C005F010 & 2) == 0;
LABEL_18:
  if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v18, 2093);
  return v16;
}
