/*
 * XREFs of DxgkDestroyOverlay @ 0x1C019AFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0013600 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C0013624 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C001374C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00386E4 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C0187380 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkDestroyOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGDEVICE *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // ebx
  DXGDEVICE **v26; // r15
  __int64 v27; // rax
  DXGDEVICE *v28; // r13
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // r8
  int v36; // edx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  DXGDEVICE *v45; // [rsp+20h] [rbp-88h]
  _QWORD v46[2]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v47[16]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v48[24]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v49[72]; // [rsp+60h] [rbp-48h] BYREF
  struct DXGDEVICE *v50; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v51; // [rsp+C0h] [rbp+18h]
  DXGDEVICE *v52; // [rsp+C8h] [rbp+20h] BYREF

  v3 = (__int64 *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2025);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v9 = qword_1C006E790;
    v10 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v9, &EventProfilerExit, v8, 2025);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v51 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v50, (unsigned int)v51, (struct _KTHREAD **)Current, &v52);
  v14 = v52;
  v45 = v52;
  if ( !v52 )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = (unsigned int)v51;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
LABEL_14:
    if ( v50 )
    {
      v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v9 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    }
    v10 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46, v52);
  COREACCESS::COREACCESS((COREACCESS *)v49, *(struct DXGADAPTER *const *)(*((_QWORD *)v14 + 2) + 16LL));
  COREACCESS::AcquireShared((COREACCESS *)v49);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 176LL) == 4 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v49);
    if ( v46[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46);
    if ( v50 )
    {
      v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v18 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    }
    v20 = (qword_1C006E790 & 2) == 0;
  }
  else
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v48, Current, v16, v17);
    v25 = (HIDWORD(v51) >> 6) & 0xFFFFFF;
    if ( v25 < *((_DWORD *)Current + 52)
      && (v23 = *((_QWORD *)Current + 24),
          v21 = *(unsigned int *)(v23 + 16LL * v25 + 8),
          v22 = (HIDWORD(v51) >> 26) & 0x30,
          ((HIDWORD(v51) >> 26) & 0x30) == (*(_BYTE *)(v23 + 16LL * v25 + 8) & 0x30))
      && (v21 & 0x1000) == 0
      && (v21 & 0xF) != 0
      && (*(_BYTE *)(v23 + 16LL * v25 + 8) & 0xF) == 6 )
    {
      v26 = *(DXGDEVICE ***)(v23 + 16LL * v25);
    }
    else
    {
      v26 = 0LL;
    }
    if ( !v26 )
    {
      v27 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
      *(_QWORD *)(v27 + 24) = HIDWORD(v51);
      *(_QWORD *)(v27 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48);
      COREACCESS::~COREACCESS((COREACCESS *)v49);
      if ( v46[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46);
      goto LABEL_14;
    }
    v28 = v52;
    if ( v52 != v26[2] )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
      v29[3] = HIDWORD(v51);
      v29[4] = (unsigned int)v51;
      v29[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v29);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48);
      COREACCESS::~COREACCESS((COREACCESS *)v49);
      if ( v46[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46);
      if ( v50 )
      {
        v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v9 == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
      }
      v10 = (qword_1C006E790 & 2) == 0;
      goto LABEL_6;
    }
    if ( !DXGDEVICE::IsSupportOverlay(v52) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
      *(_QWORD *)(v34 + 24) = 984LL;
      WdLogEvent5_WdAssertion(v34);
    }
    if ( v25 < *((_DWORD *)Current + 52) )
    {
      v35 = *((_QWORD *)Current + 24);
      v36 = *(_DWORD *)(v35 + 16LL * v25 + 8);
      if ( ((HIDWORD(v51) >> 26) & 0x30) == (*(_BYTE *)(v35 + 16LL * v25 + 8) & 0x30)
        && (v36 & 0x1000) == 0
        && (v36 & 0xF) != 0 )
      {
        *(_DWORD *)(v35 + 16LL * ((HIDWORD(v51) >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48);
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v47, *((struct ADAPTER_RENDER **)v45 + 2), v37, v38);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
    DXGDEVICE::DestroyOverlay(v28, (struct DXGOVERLAY *)v26);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47, v39, v40, v41);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v47, v42, v43, v44);
    COREACCESS::~COREACCESS((COREACCESS *)v49);
    if ( v46[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46);
    if ( v50 )
    {
      v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v18 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    }
    v20 = (qword_1C006E790 & 2) == 0;
  }
  if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v18, &EventProfilerExit, v19, 2025);
  return 0LL;
}
