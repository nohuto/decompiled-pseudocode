/*
 * XREFs of DxgkCreateOverlay @ 0x1C01B13C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0014394 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00143B8 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00288AC (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C019CB24 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkCreateOverlay(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v6; // rax
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  _D3DKMT_CREATEOVERLAY *v12; // rax
  __int64 v13; // rcx
  struct ADAPTER_RENDER **v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // r15d
  __int64 v18; // r8
  struct DXGDEVICE *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  size_t PrivateDriverDataSize; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  PVOID v29; // r9
  _QWORD *v30; // rax
  char *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  _DWORD *v34; // rdx
  _QWORD v35[2]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v36[16]; // [rsp+40h] [rbp-D8h] BYREF
  _D3DKMT_CREATEOVERLAY v37; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v38[96]; // [rsp+A0h] [rbp-78h] BYREF
  struct DXGDEVICE *v39; // [rsp+128h] [rbp+10h] BYREF
  DXGDEVICE *v40; // [rsp+130h] [rbp+18h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2022);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    v7 = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v9 = qword_1C005F010;
    v10 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v8, 2022);
    return (unsigned int)v7;
  }
  v12 = (_D3DKMT_CREATEOVERLAY *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_D3DKMT_CREATEOVERLAY *)MmUserProbeAddress;
  v37 = *v12;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v39, v37.hDevice, Current, &v40);
  v14 = (struct ADAPTER_RENDER **)v40;
  if ( !v40 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = v37.hDevice;
    v7 = -1073741811;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    if ( v39 )
    {
      v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v9 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    }
    v10 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v35, v40);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, (__int64)v14, 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v38);
  if ( v17 >= 0 )
  {
    if ( !(unsigned int)_guard_dispatch_icall_fptr() )
    {
      v24 = WdLogNewEntry5_WdEvent(v21, v20, v22, v23);
      v7 = -1073741790;
      *(_QWORD *)(v24 + 24) = -1073741790LL;
      WdLogEvent5_WdEvent(v24);
LABEL_29:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
      if ( v35[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v35);
      if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
      v9 = qword_1C005F010;
      v10 = (qword_1C005F010 & 2) == 0;
      goto LABEL_6;
    }
    if ( v37.OverlayInfo.PrivateDriverDataSize && v37.OverlayInfo.pPrivateDriverData )
    {
      PrivateDriverDataSize = v37.OverlayInfo.PrivateDriverDataSize;
      v29 = operator new(v37.OverlayInfo.PrivateDriverDataSize, 0x4B677844u, PagedPool);
      v37.OverlayInfo.pPrivateDriverData = v29;
      if ( !v29 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
        v30[3] = v14;
        v30[4] = PrivateDriverDataSize;
        v7 = -1073741801;
        v30[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v30);
        goto LABEL_29;
      }
      v31 = *(char **)(a1 + 48);
      if ( &v31[PrivateDriverDataSize] < v31 || (unsigned __int64)&v31[PrivateDriverDataSize] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v29, v31, PrivateDriverDataSize);
    }
    else
    {
      v37.OverlayInfo.PrivateDriverDataSize = 0;
      v37.OverlayInfo.pPrivateDriverData = 0LL;
    }
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v14) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v32);
      *(_QWORD *)(v33 + 24) = 638LL;
      WdLogEvent5_WdAssertion(v33);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v36, v14[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
    v7 = DXGDEVICE::CreateOverlay((DXGDEVICE *)v14, &v37);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36);
    if ( v37.OverlayInfo.pPrivateDriverData )
      ExFreePoolWithTag(v37.OverlayInfo.pPrivateDriverData, 0);
    v37.OverlayInfo.pPrivateDriverData = 0LL;
    if ( v7 >= 0 )
    {
      v34 = (_DWORD *)(a1 + 64);
      if ( a1 + 64 >= MmUserProbeAddress )
        v34 = (_DWORD *)MmUserProbeAddress;
      *v34 = v37.hOverlay;
    }
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v36);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
    if ( v35[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v35);
    if ( v39 )
    {
      v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v9 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    }
    v10 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
  if ( v35[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v35);
  v19 = v39;
  if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v19, &EventProfilerExit, v18, 2022);
  return (unsigned int)v17;
}
