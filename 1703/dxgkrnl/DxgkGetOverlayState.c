/*
 * XREFs of DxgkGetOverlayState @ 0x1C019B820
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002034 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0013600 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C0013624 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C00147DC (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C003866C (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C00386A0 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00386E4 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z @ 0x1C019A1AC (-GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z.c)
 */

__int64 __fastcall DxgkGetOverlayState(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v7; // rax
  int OverlayState; // ebx
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  _D3DKMT_GETOVERLAYSTATE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct ADAPTER_RENDER **v16; // r14
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r9
  struct DXGOVERLAY *v24; // rbx
  _QWORD *v25; // rax
  int v26; // r15d
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  _BYTE *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  _D3DKMT_GETOVERLAYSTATE v40; // [rsp+20h] [rbp-98h] BYREF
  __int64 v41; // [rsp+30h] [rbp-88h] BYREF
  char v42; // [rsp+38h] [rbp-80h]
  _BYTE v43[16]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v44[24]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v45[56]; // [rsp+68h] [rbp-50h] BYREF
  struct DXGDEVICE *v46; // [rsp+C8h] [rbp+10h] BYREF
  DXGDEVICE *v47; // [rsp+D0h] [rbp+18h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2057);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    OverlayState = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v10 = qword_1C006E790;
    v11 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2057);
    return (unsigned int)OverlayState;
  }
  v13 = (_D3DKMT_GETOVERLAYSTATE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_D3DKMT_GETOVERLAYSTATE *)MmUserProbeAddress;
  v40 = *v13;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v46, v40.hDevice, (struct _KTHREAD **)Current, &v47);
  v16 = (struct ADAPTER_RENDER **)v47;
  if ( !v47 )
  {
    v17 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v17 + 24) = v40.hDevice;
    OverlayState = -1073741811;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
LABEL_14:
    if ( v46 )
    {
      v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v10 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    }
    v11 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v41, v47);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v44, Current, v18, v19);
  v22 = (v40.hOverlay >> 6) & 0xFFFFFF;
  v23 = v40.hOverlay >> 30;
  if ( (unsigned int)v22 < *((_DWORD *)Current + 52)
    && (v21 = *((_QWORD *)Current + 24),
        v20 = *(unsigned int *)(v21 + 16LL * (unsigned int)v22 + 8),
        (_DWORD)v23 == ((*(_DWORD *)(v21 + 16LL * (unsigned int)v22 + 8) >> 4) & 3))
    && (v20 & 0x1000) == 0
    && (v20 & 0xF) != 0
    && (*(_BYTE *)(v21 + 16LL * (unsigned int)v22 + 8) & 0xF) == 6 )
  {
    v24 = *(struct DXGOVERLAY **)(v21 + 16LL * (unsigned int)v22);
  }
  else
  {
    v24 = 0LL;
  }
  if ( !v24 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v22, v21, v23);
    OverlayState = -1073741811;
    v25[4] = -1073741811LL;
LABEL_27:
    v25[3] = v40.hOverlay;
    WdLogEvent5_WdWarning(v25);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v44);
LABEL_28:
    v10 = v41;
    if ( v41 && v42 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v41 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_14;
  }
  if ( v16 != *((struct ADAPTER_RENDER ***)v24 + 2) )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v22, v21, v23);
    v25[4] = v40.hDevice;
    OverlayState = -1073741811;
    v25[5] = -1073741811LL;
    goto LABEL_27;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v44);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v45, v24);
  v26 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)v45);
  if ( v26 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v16) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
      *(_QWORD *)(v33 + 24) = 1092LL;
      WdLogEvent5_WdAssertion(v33);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v43, v16[2], v31, v32);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
    OverlayState = DXGOVERLAY::GetOverlayState(v24, &v40);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43, v34, v35, v36);
    if ( OverlayState >= 0 )
    {
      v37 = (_BYTE *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v37 = (_BYTE *)MmUserProbeAddress;
      *v37 = v40.OverlayEnabled;
    }
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v43, (__int64)v37, v38, v39);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v45);
    goto LABEL_28;
  }
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v45);
  v28 = v41;
  if ( v41 && v42 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v41 + 104));
    KeLeaveCriticalRegion();
  }
  if ( v46 )
  {
    v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v28 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v28, &EventProfilerExit, v27, 2057);
  return (unsigned int)v26;
}
