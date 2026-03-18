/*
 * XREFs of DxgkCreateOverlay @ 0x1C01AD040
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
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C001A370 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C001A38C (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C0033468 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0189E04 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkCreateOverlay(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  _D3DKMT_CREATEOVERLAY *v13; // rax
  __int64 v14; // rcx
  struct ADAPTER_RENDER **v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  size_t PrivateDriverDataSize; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  PVOID v28; // r9
  _QWORD *v29; // rax
  char *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  _DWORD *v33; // rdx
  int v34; // [rsp+30h] [rbp-108h] BYREF
  __int64 v35; // [rsp+38h] [rbp-100h]
  _QWORD v36[2]; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v37[16]; // [rsp+50h] [rbp-E8h] BYREF
  _D3DKMT_CREATEOVERLAY v38; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v39[136]; // [rsp+B0h] [rbp-88h] BYREF
  struct DXGDEVICE *v40; // [rsp+148h] [rbp+10h] BYREF
  DXGDEVICE *v41; // [rsp+150h] [rbp+18h] BYREF

  v35 = 0LL;
  v34 = 2022;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2022);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2022);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    v9 = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v10, &EventProfilerExit, v11, v34);
    return (unsigned int)v9;
  }
  v13 = (_D3DKMT_CREATEOVERLAY *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_D3DKMT_CREATEOVERLAY *)MmUserProbeAddress;
  v38 = *v13;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40, v38.hDevice, Current, &v41);
  v15 = (struct ADAPTER_RENDER **)v41;
  if ( !v41 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = v38.hDevice;
    v9 = -1073741811;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
LABEL_14:
    if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36, v41);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, (__int64)v15, 0, v17, 0);
  v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v39);
  if ( v18 >= 0 )
  {
    if ( !(unsigned int)_guard_dispatch_icall_fptr() )
    {
      v23 = WdLogNewEntry5_WdEvent(v22, v21);
      v9 = -1073741790;
      *(_QWORD *)(v23 + 24) = -1073741790LL;
      WdLogEvent5_WdEvent(v23);
      goto LABEL_29;
    }
    if ( v38.OverlayInfo.PrivateDriverDataSize && v38.OverlayInfo.pPrivateDriverData )
    {
      PrivateDriverDataSize = v38.OverlayInfo.PrivateDriverDataSize;
      v28 = operator new[](v38.OverlayInfo.PrivateDriverDataSize, 0x4B677844u, PagedPool);
      v38.OverlayInfo.pPrivateDriverData = v28;
      if ( !v28 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
        v29[3] = v15;
        v29[4] = PrivateDriverDataSize;
        v9 = -1073741801;
        v29[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v29);
LABEL_29:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
        if ( v36[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
        goto LABEL_14;
      }
      v30 = *(char **)(a1 + 48);
      if ( &v30[PrivateDriverDataSize] < v30 || (unsigned __int64)&v30[PrivateDriverDataSize] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v28, v30, PrivateDriverDataSize);
    }
    else
    {
      v38.OverlayInfo.PrivateDriverDataSize = 0;
      v38.OverlayInfo.pPrivateDriverData = 0LL;
    }
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v15) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v31);
      *(_QWORD *)(v32 + 24) = 638LL;
      WdLogEvent5_WdAssertion(v32);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v37, v15[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
    v9 = DXGDEVICE::CreateOverlay((DXGDEVICE *)v15, &v38);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37);
    operator delete[](v38.OverlayInfo.pPrivateDriverData);
    v38.OverlayInfo.pPrivateDriverData = 0LL;
    if ( v9 >= 0 )
    {
      v33 = (_DWORD *)(a1 + 64);
      if ( a1 + 64 >= MmUserProbeAddress )
        v33 = (_DWORD *)MmUserProbeAddress;
      *v33 = v38.hOverlay;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
    goto LABEL_29;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
  if ( v36[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
  if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, v34);
  return (unsigned int)v18;
}
