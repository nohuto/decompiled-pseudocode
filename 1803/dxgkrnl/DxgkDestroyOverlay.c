/*
 * XREFs of DxgkDestroyOverlay @ 0x1C01AD610
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00158C0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C001A370 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C001A38C (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C0033468 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C018A048 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkDestroyOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rcx
  DXGDEVICE *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r14
  unsigned int v21; // r15d
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rax
  bool v25; // zf
  DXGDEVICE *v26; // r12
  _QWORD *v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // r9d
  int v30; // r10d
  __int64 v31; // rax
  __int64 v32; // r8
  int v33; // edx
  int v34; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+28h] [rbp-A0h]
  _QWORD v36[2]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v37[16]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v38[24]; // [rsp+50h] [rbp-78h] BYREF
  DXGADAPTER *v39[12]; // [rsp+68h] [rbp-60h] BYREF
  struct DXGDEVICE *v40; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v41; // [rsp+E0h] [rbp+18h]
  DXGDEVICE *v42; // [rsp+E8h] [rbp+20h] BYREF

  v3 = (__int64 *)a1;
  v35 = 0LL;
  v34 = 2025;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2025);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2025);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v34);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v41 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40, v41, (struct _KTHREAD **)Current, &v42);
  v13 = v42;
  if ( !v42 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = (unsigned int)v41;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36, v42);
  COREACCESS::COREACCESS((COREACCESS *)v39, *(struct DXGADAPTER *const *)(*((_QWORD *)v13 + 2) + 16LL));
  COREACCESS::AcquireShared(v39);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 176LL) != 4 )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v38,
      (struct _KTHREAD **)Current);
    v20 = HIDWORD(v41);
    v21 = (HIDWORD(v41) >> 6) & 0xFFFFFF;
    if ( v21 < *((_DWORD *)Current + 62)
      && (v22 = *((_QWORD *)Current + 29),
          v17 = *(unsigned int *)(v22 + 16LL * v21 + 8),
          v18 = (HIDWORD(v41) >> 25) & 0x60,
          ((HIDWORD(v41) >> 25) & 0x60) == (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0x60))
      && (v17 & 0x2000) == 0
      && (v17 & 0x1F) != 0
      && (v18 = 2 * (((unsigned __int64)HIDWORD(v41) >> 6) & 0xFFFFFF),
          (*(_BYTE *)(v22 + 16 * (((unsigned __int64)HIDWORD(v41) >> 6) & 0xFFFFFF) + 8) & 0x1F) == 6) )
    {
      v23 = *(_QWORD *)(v22 + 16 * (((unsigned __int64)HIDWORD(v41) >> 6) & 0xFFFFFF));
    }
    else
    {
      v23 = 0LL;
    }
    if ( v23 )
    {
      v26 = v42;
      if ( v42 == *(DXGDEVICE **)(v23 + 16) )
      {
        if ( !DXGDEVICE::IsSupportOverlay(v42) )
        {
          v31 = WdLogNewEntry5_WdAssertion(v28);
          *(_QWORD *)(v31 + 24) = 984LL;
          WdLogEvent5_WdAssertion(v31);
          v29 = *((_DWORD *)Current + 62);
          v30 = 0xFFFFFF;
        }
        if ( v21 < v29 )
        {
          v32 = *((_QWORD *)Current + 29);
          v33 = *(_DWORD *)(v32 + 16LL * v21 + 8);
          if ( (((unsigned int)v20 >> 25) & 0x60) == (*(_BYTE *)(v32 + 16LL * v21 + 8) & 0x60)
            && (v33 & 0x2000) == 0
            && (v33 & 0x1F) != 0 )
          {
            *(_DWORD *)(v32 + 16 * (*(_QWORD *)&v30 & ((unsigned __int64)(unsigned int)v20 >> 6)) + 8) |= 0x2000u;
          }
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
        DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v37, *((struct ADAPTER_RENDER **)v13 + 2));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
        DXGDEVICE::DestroyOverlay(v26, (struct DXGOVERLAY ***)v23);
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
        COREACCESS::~COREACCESS((COREACCESS *)v39);
        if ( v36[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
        if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
        goto LABEL_22;
      }
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
      v27[3] = v20;
      v27[4] = (unsigned int)v41;
      v27[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
      COREACCESS::~COREACCESS((COREACCESS *)v39);
      v25 = v36[0] == 0LL;
    }
    else
    {
      v24 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v24 + 24) = v20;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
      COREACCESS::~COREACCESS((COREACCESS *)v39);
      v25 = v36[0] == 0LL;
    }
    if ( !v25 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
    if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
    goto LABEL_6;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v39);
  if ( v36[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
  if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v16, v34);
  return 0LL;
}
