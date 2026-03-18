/*
 * XREFs of DxgkUpdateOverlay @ 0x1C019BCC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0013600 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C0013624 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C00147DC (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C003866C (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C00386A0 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00386E4 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1C019A600 (-UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkUpdateOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_UPDATEOVERLAY *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v7; // rax
  unsigned int updated; // ebx
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 hDevice; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct ADAPTER_RENDER **v16; // r14
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  struct DXGOVERLAY *v24; // rbx
  _QWORD *v25; // rax
  int v26; // r15d
  __int64 v27; // r8
  struct DXGDEVICE *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD v40[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v41[16]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v42[32]; // [rsp+40h] [rbp-A8h] BYREF
  _D3DKMT_UPDATEOVERLAY v43; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v44[72]; // [rsp+A0h] [rbp-48h] BYREF
  struct DXGDEVICE *v45; // [rsp+F8h] [rbp+10h] BYREF
  DXGDEVICE *v46; // [rsp+100h] [rbp+18h] BYREF

  v3 = (_D3DKMT_UPDATEOVERLAY *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2023);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    updated = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v10 = qword_1C006E790;
    v11 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2023);
    return updated;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_D3DKMT_UPDATEOVERLAY *)MmUserProbeAddress;
  v43 = *v3;
  hDevice = v43.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v45, v43.hDevice, (struct _KTHREAD **)Current, &v46);
  v16 = (struct ADAPTER_RENDER **)v46;
  if ( !v46 )
  {
    v17 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v17 + 24) = v43.hDevice;
    updated = -1073741811;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
LABEL_14:
    if ( v45 )
    {
      v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v10 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    }
    v11 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40, v46);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v42, Current, v18, v19);
  v23 = (v43.hOverlay >> 6) & 0xFFFFFF;
  if ( (unsigned int)v23 < *((_DWORD *)Current + 52)
    && (v22 = *((_QWORD *)Current + 24),
        v21 = *(unsigned int *)(v22 + 16LL * (unsigned int)v23 + 8),
        v20 = (v43.hOverlay >> 26) & 0x30,
        ((v43.hOverlay >> 26) & 0x30) == (*(_BYTE *)(v22 + 16LL * (unsigned int)v23 + 8) & 0x30))
    && (v21 & 0x1000) == 0
    && (v21 & 0xF) != 0
    && (*(_BYTE *)(v22 + 16LL * (unsigned int)v23 + 8) & 0xF) == 6 )
  {
    v24 = *(struct DXGOVERLAY **)(v22 + 16LL * (unsigned int)v23);
  }
  else
  {
    v24 = 0LL;
  }
  if ( !v24 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v23, v21, v22);
    updated = -1073741811;
    v25[4] = -1073741811LL;
LABEL_27:
    v25[3] = v43.hOverlay;
    WdLogEvent5_WdWarning(v25);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v42);
LABEL_28:
    if ( v40[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
    goto LABEL_14;
  }
  if ( v16 != *((struct ADAPTER_RENDER ***)v24 + 2) )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v23, v21, v22);
    v25[4] = hDevice;
    updated = -1073741811;
    v25[5] = -1073741811LL;
    goto LABEL_27;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v42);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v44, v24);
  v26 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)v44);
  if ( v26 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v16) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
      *(_QWORD *)(v33 + 24) = 773LL;
      WdLogEvent5_WdAssertion(v33);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v41, v16[2], v31, v32);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
    updated = DXGOVERLAY::UpdateOverlay((struct _EX_RUNDOWN_REF *)v24, &v43);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v41, v34, v35, v36);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v41, v37, v38, v39);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v44);
    goto LABEL_28;
  }
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v44);
  if ( v40[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
  v28 = v45;
  if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v28, &EventProfilerExit, v27, 2023);
  return (unsigned int)v26;
}
