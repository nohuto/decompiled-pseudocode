/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C019F670
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
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019BAB8 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport2(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  _OWORD *v13; // rax
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
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *v25; // r12
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
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v39; // rdx
  _QWORD *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct DXGDEVICE *v43; // [rsp+30h] [rbp-E8h] BYREF
  int v44; // [rsp+38h] [rbp-E0h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v45; // [rsp+3Ch] [rbp-DCh] BYREF
  unsigned int v46; // [rsp+40h] [rbp-D8h]
  PVOID P; // [rsp+48h] [rbp-D0h]
  _QWORD v48[2]; // [rsp+50h] [rbp-C8h] BYREF
  int v49; // [rsp+60h] [rbp-B8h]
  struct DXGDEVICE *v50; // [rsp+68h] [rbp-B0h] BYREF
  unsigned int v51[4]; // [rsp+70h] [rbp-A8h]
  void *Src[2]; // [rsp+80h] [rbp-98h]
  _BYTE v53[136]; // [rsp+90h] [rbp-88h] BYREF
  bool v55; // [rsp+128h] [rbp+10h]
  struct _KTHREAD **v56; // [rsp+130h] [rbp+18h]
  int v57; // [rsp+130h] [rbp+18h]
  unsigned int v58; // [rsp+138h] [rbp+20h]

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2093);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v56 = (struct _KTHREAD **)Current;
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
  v55 = *((_BYTE *)Current + 306) == 0;
  v13 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v51 = *v13;
  *(_OWORD *)Src = v13[1];
  v58 = v51[2];
  if ( v51[2] - 1 > 6 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v40[3] = v51[2];
    v8 = -1073741811;
    v40[4] = -1073741811LL;
    v40[5] = PsGetCurrentProcess(v42, v41);
    WdLogEvent5_WdError(v40);
    goto LABEL_50;
  }
  v14 = (unsigned __int64)v51[2] << 7;
  v15 = 0xFFFFFFFFLL;
  if ( v14 <= 0xFFFFFFFF )
    v15 = (unsigned int)v14;
  v49 = v15;
  v16 = v14 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v46 = v16;
  if ( v14 <= 0xFFFFFFFF )
  {
    v21 = (unsigned __int64)v51[2] << 7;
    if ( !is_mul_ok(v51[2], 0x80uLL) )
      v21 = -1LL;
    v25 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *)operator new(v21, 0x4B677844u, PagedPool);
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
    v29 = Src[0];
    if ( (char *)Src[0] + v15 < Src[0] || (char *)Src[0] + v15 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v25, v29, (unsigned int)v15);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43, v51[1], v56, &v50);
    v31 = (ADAPTER_RENDER **)v50;
    if ( v50 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48, v50);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, (__int64)v31, 2, v33, 0);
      v57 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v53);
      if ( v57 >= 0 )
      {
        if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport2(v31, v58, v25, v55, &v44, &v45) >= 0 )
        {
          v38 = (_DWORD *)(a1 + 24);
          if ( a1 + 24 >= MmUserProbeAddress )
            v38 = (_DWORD *)MmUserProbeAddress;
          *v38 = v44;
          v39 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v39 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
          v39->0 = v45.0;
        }
        ExFreePoolWithTag(v25, 0);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
        if ( v48[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
        if ( v43 )
        {
          v19 = _InterlockedDecrement64((volatile signed __int64 *)v43 + 8);
          if ( !v19 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
        }
        v20 = (qword_1C005F010 & 2) == 0;
        goto LABEL_18;
      }
      v37 = WdLogNewEntry5_WdWarning(v35, v34, v36);
      *(_QWORD *)(v37 + 24) = v31;
      v8 = v57;
      *(_QWORD *)(v37 + 32) = v57;
      WdLogEvent5_WdWarning(v37);
      ExFreePoolWithTag(v25, 0);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
      if ( v48[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
    }
    else
    {
      v32 = WdLogNewEntry5_WdError(v30);
      *(_QWORD *)(v32 + 24) = v51[1];
      v8 = -1073741811;
      *(_QWORD *)(v32 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v32);
      ExFreePoolWithTag(v25, 0);
    }
    if ( v43 )
    {
      v10 = _InterlockedDecrement64((volatile signed __int64 *)v43 + 8);
      if ( !v10 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    }
LABEL_50:
    v11 = (qword_1C005F010 & 2) == 0;
    goto LABEL_7;
  }
  v17 = WdLogNewEntry5_WdWarning(v51[2], 0xFFFFFFFFLL, v6);
  *(_QWORD *)(v17 + 24) = 8349LL;
  WdLogEvent5_WdWarning(v17);
  v19 = qword_1C005F010;
  v20 = (qword_1C005F010 & 2) == 0;
LABEL_18:
  if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v18, 2093);
  return v16;
}
