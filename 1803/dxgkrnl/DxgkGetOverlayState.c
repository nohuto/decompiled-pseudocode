/*
 * XREFs of DxgkGetOverlayState @ 0x1C01ADF20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002694 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C001A370 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C001A38C (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C001BA58 (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C00333F0 (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C0033424 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C0033468 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z @ 0x1C01AC8A0 (-GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z.c)
 */

__int64 __fastcall DxgkGetOverlayState(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v8; // rax
  int OverlayState; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  _D3DKMT_GETOVERLAYSTATE *v13; // rax
  __int64 hDevice; // r14
  __int64 v15; // rcx
  struct ADAPTER_RENDER **v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rbx
  struct DXGOVERLAY *v23; // rbx
  _QWORD *v24; // rax
  int v25; // r14d
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rax
  _BYTE *v30; // rdx
  int v31; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+28h] [rbp-A0h]
  __int64 v33; // [rsp+30h] [rbp-98h] BYREF
  char v34; // [rsp+38h] [rbp-90h]
  _D3DKMT_GETOVERLAYSTATE v35; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v36[16]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v37[24]; // [rsp+60h] [rbp-68h] BYREF
  DXGADAPTER *v38[7]; // [rsp+78h] [rbp-50h] BYREF
  struct DXGDEVICE *v39; // [rsp+D8h] [rbp+10h] BYREF
  DXGDEVICE *v40; // [rsp+E0h] [rbp+18h] BYREF

  v32 = 0LL;
  v31 = 2057;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2057);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 2057);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    OverlayState = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v10, &EventProfilerExit, v11, v31);
    return (unsigned int)OverlayState;
  }
  v13 = (_D3DKMT_GETOVERLAYSTATE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_D3DKMT_GETOVERLAYSTATE *)MmUserProbeAddress;
  v35 = *v13;
  hDevice = v35.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v39, v35.hDevice, (struct _KTHREAD **)Current, &v40);
  v16 = (struct ADAPTER_RENDER **)v40;
  if ( !v40 )
  {
    v17 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v17 + 24) = hDevice;
    OverlayState = -1073741811;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
LABEL_14:
    if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v33, v40);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v37, (struct _KTHREAD **)Current);
  v20 = (v35.hOverlay >> 6) & 0xFFFFFF;
  v21 = v35.hOverlay >> 30;
  if ( (unsigned int)v20 < *((_DWORD *)Current + 62)
    && (v18 = (unsigned int)v20,
        v22 = *((_QWORD *)Current + 29),
        v19 = *(unsigned int *)(v22 + 16 * v20 + 8),
        (_DWORD)v21 == ((*(_DWORD *)(v22 + 16 * v20 + 8) >> 5) & 3))
    && (v19 & 0x2000) == 0
    && (v19 & 0x1F) != 0
    && (v18 = 2LL * (unsigned int)v20, v19 &= 0x1Fu, (_BYTE)v19 == 6) )
  {
    v23 = *(struct DXGOVERLAY **)(v22 + 16LL * (unsigned int)v20);
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v23 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v21);
    OverlayState = -1073741811;
    v24[4] = -1073741811LL;
LABEL_26:
    v24[3] = v35.hOverlay;
    WdLogEvent5_WdWarning(v24);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
LABEL_27:
    if ( v33 && v34 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v33 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_14;
  }
  if ( v16 != *((struct ADAPTER_RENDER ***)v23 + 2) )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v21);
    v24[4] = hDevice;
    OverlayState = -1073741811;
    v24[5] = -1073741811LL;
    goto LABEL_26;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v38, v23);
  v25 = COREOVERLAYACCESS::AcquireShared(v38);
  if ( v25 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v16) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v29 + 24) = 1092LL;
      WdLogEvent5_WdAssertion(v29);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v36, v16[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
    OverlayState = DXGOVERLAY::GetOverlayState(v23, &v35);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36);
    if ( OverlayState >= 0 )
    {
      v30 = (_BYTE *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v30 = (_BYTE *)MmUserProbeAddress;
      *v30 = v35.OverlayEnabled;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v36);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v38);
    goto LABEL_27;
  }
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v38);
  if ( v33 && v34 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v33 + 104));
    KeLeaveCriticalRegion();
  }
  if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v31);
  return (unsigned int)v25;
}
