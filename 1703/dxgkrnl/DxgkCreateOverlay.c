/*
 * XREFs of DxgkCreateOverlay @ 0x1C019A970
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0013600 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C0013624 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00386E4 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0187290 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkCreateOverlay(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v7; // rax
  int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  _D3DKMT_CREATEOVERLAY *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct ADAPTER_RENDER **v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // r14d
  __int64 v20; // r8
  struct DXGDEVICE *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  size_t PrivateDriverDataSize; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  PVOID v28; // r9
  _QWORD *v29; // rax
  char *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  _DWORD *v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD v42[2]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v43[16]; // [rsp+40h] [rbp-E8h] BYREF
  _D3DKMT_CREATEOVERLAY v44; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v45[136]; // [rsp+A0h] [rbp-88h] BYREF
  struct DXGDEVICE *v46; // [rsp+140h] [rbp+18h] BYREF
  DXGDEVICE *v47; // [rsp+148h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2022);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v10 = qword_1C006E790;
    v11 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2022);
    return (unsigned int)v8;
  }
  v13 = (_D3DKMT_CREATEOVERLAY *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_D3DKMT_CREATEOVERLAY *)MmUserProbeAddress;
  v44 = *v13;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v46, v44.hDevice, Current, &v47);
  v16 = (struct ADAPTER_RENDER **)v47;
  if ( !v47 )
  {
    v17 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v17 + 24) = v44.hDevice;
    v8 = -1073741811;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    if ( v46 )
    {
      v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v10 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    }
    v11 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42, v47);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, (__int64)v16, 0LL, v18, 0);
  v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v45);
  if ( v19 >= 0 )
  {
    if ( !(unsigned int)_guard_dispatch_icall_fptr() )
    {
      v23 = WdLogNewEntry5_WdEvent(v22);
      v8 = -1073741790;
      *(_QWORD *)(v23 + 24) = -1073741790LL;
      WdLogEvent5_WdEvent(v23);
LABEL_29:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
      if ( v42[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
      if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
      v10 = qword_1C006E790;
      v11 = (qword_1C006E790 & 2) == 0;
      goto LABEL_6;
    }
    if ( v44.OverlayInfo.PrivateDriverDataSize && v44.OverlayInfo.pPrivateDriverData )
    {
      PrivateDriverDataSize = v44.OverlayInfo.PrivateDriverDataSize;
      v28 = operator new(v44.OverlayInfo.PrivateDriverDataSize, 0x4B677844u, PagedPool);
      v44.OverlayInfo.pPrivateDriverData = v28;
      if ( !v28 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, 0LL);
        v29[3] = v16;
        v29[4] = PrivateDriverDataSize;
        v8 = -1073741801;
        v29[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v29);
        goto LABEL_29;
      }
      v30 = *(char **)(a1 + 48);
      if ( &v30[PrivateDriverDataSize] < v30 || (unsigned __int64)&v30[PrivateDriverDataSize] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v28, v30, PrivateDriverDataSize);
    }
    else
    {
      v44.OverlayInfo.PrivateDriverDataSize = 0;
      v44.OverlayInfo.pPrivateDriverData = 0LL;
    }
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v16) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
      *(_QWORD *)(v35 + 24) = 638LL;
      WdLogEvent5_WdAssertion(v35);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v43, v16[2], v33, v34);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
    v8 = DXGDEVICE::CreateOverlay((DXGDEVICE *)v16, &v44);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43, v36, v37, v38);
    if ( v44.OverlayInfo.pPrivateDriverData )
      ExFreePoolWithTag(v44.OverlayInfo.pPrivateDriverData, 0);
    v44.OverlayInfo.pPrivateDriverData = 0LL;
    if ( v8 >= 0 )
    {
      v39 = (_DWORD *)(a1 + 64);
      if ( a1 + 64 >= MmUserProbeAddress )
        v39 = (_DWORD *)MmUserProbeAddress;
      *v39 = v44.hOverlay;
    }
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v43, (__int64)v39, v40, v41);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
    if ( v42[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
    if ( v46 )
    {
      v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v10 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    }
    v11 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
  if ( v42[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
  v21 = v46;
  if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v21, &EventProfilerExit, v20, 2022);
  return (unsigned int)v19;
}
