/*
 * XREFs of DxgkFlipOverlay @ 0x1C01ADB30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
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
 *     ?FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z @ 0x1C01AC5A8 (-FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkFlipOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_FLIPOVERLAY *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rcx
  struct ADAPTER_RENDER **v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  struct DXGOVERLAY *v20; // rbx
  _QWORD *v21; // rax
  int v22; // r14d
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+28h] [rbp-B0h]
  _QWORD v29[2]; // [rsp+30h] [rbp-A8h] BYREF
  _D3DKMT_FLIPOVERLAY v30; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v31[16]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v32[24]; // [rsp+70h] [rbp-68h] BYREF
  DXGADAPTER *v33[10]; // [rsp+88h] [rbp-50h] BYREF
  struct DXGDEVICE *v34; // [rsp+E8h] [rbp+10h] BYREF
  DXGDEVICE *v35; // [rsp+F0h] [rbp+18h] BYREF

  v3 = (_D3DKMT_FLIPOVERLAY *)a1;
  v28 = 0LL;
  v27 = 2024;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2024);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2024);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    v9 = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v10, &EventProfilerExit, v11, v27);
    return v9;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_D3DKMT_FLIPOVERLAY *)MmUserProbeAddress;
  v30 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34, v30.hDevice, (struct _KTHREAD **)Current, &v35);
  v14 = (struct ADAPTER_RENDER **)v35;
  if ( !v35 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = v30.hDevice;
    v9 = -1073741811;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
LABEL_14:
    if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29, v35);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v32, (struct _KTHREAD **)Current);
  v19 = (v30.hOverlay >> 6) & 0xFFFFFF;
  if ( (unsigned int)v19 < *((_DWORD *)Current + 62)
    && (v18 = *((_QWORD *)Current + 29),
        v16 = *(unsigned int *)(v18 + 16 * v19 + 8),
        v17 = (v30.hOverlay >> 25) & 0x60,
        ((v30.hOverlay >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v19 + 8) & 0x60))
    && (v16 & 0x2000) == 0
    && (v16 & 0x1F) != 0
    && (*(_BYTE *)(v18 + 16 * (((unsigned __int64)v30.hOverlay >> 6) & 0xFFFFFF) + 8) & 0x1F) == 6 )
  {
    v20 = *(struct DXGOVERLAY **)(v18 + 16 * (((unsigned __int64)v30.hOverlay >> 6) & 0xFFFFFF));
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v20 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    v21[3] = v30.hOverlay;
    v9 = -1073741811;
    v21[4] = -1073741811LL;
LABEL_26:
    WdLogEvent5_WdWarning(v21);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
LABEL_27:
    if ( v29[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
    goto LABEL_14;
  }
  if ( v14 != *((struct ADAPTER_RENDER ***)v20 + 2) )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    v21[3] = v30.hOverlay;
    v21[4] = v30.hDevice;
    v9 = -1073741811;
    v21[5] = -1073741811LL;
    goto LABEL_26;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v33, v20);
  v22 = COREOVERLAYACCESS::AcquireShared(v33);
  if ( v22 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v14) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v26 + 24) = 877LL;
      WdLogEvent5_WdAssertion(v26);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v31, v14[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
    v9 = DXGOVERLAY::FlipOverlay(v20, &v30);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v33);
    goto LABEL_27;
  }
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v33);
  if ( v29[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
  if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v27);
  return (unsigned int)v22;
}
