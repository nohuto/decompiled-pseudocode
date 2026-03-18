/*
 * XREFs of DxgkDestroyOverlay @ 0x1C01B1A00
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0014394 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00143B8 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00144E0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00288AC (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C019CC14 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkDestroyOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v11; // rcx
  DXGDEVICE *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // zf
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r12
  unsigned int v21; // r15d
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rax
  DXGDEVICE *v25; // r13
  _QWORD *v26; // rax
  __int64 v27; // rcx
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // edx
  DXGDEVICE *v32; // [rsp+20h] [rbp-88h]
  _QWORD v33[2]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v34[16]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v35[24]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v36[72]; // [rsp+60h] [rbp-48h] BYREF
  struct DXGDEVICE *v37; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v38; // [rsp+C0h] [rbp+18h]
  DXGDEVICE *v39; // [rsp+C8h] [rbp+20h] BYREF

  v3 = (__int64 *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2025);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v8 = qword_1C005F010;
    v9 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v8, &EventProfilerExit, v7, 2025);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v38 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v37, v38, (struct _KTHREAD **)Current, &v39);
  v12 = v39;
  v32 = v39;
  if ( !v39 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = (unsigned int)v38;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_14:
    if ( v37 )
    {
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v8 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    }
    v9 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33, v39);
  COREACCESS::COREACCESS((COREACCESS *)v36, *(struct DXGADAPTER *const *)(*((_QWORD *)v12 + 2) + 16LL));
  COREACCESS::AcquireShared((COREACCESS *)v36);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 176LL) == 4 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v36);
    if ( v33[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33);
    if ( v37 )
    {
      v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v14 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    }
    v16 = (qword_1C005F010 & 2) == 0;
  }
  else
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v35, Current);
    v20 = HIDWORD(v38);
    v21 = (HIDWORD(v38) >> 6) & 0xFFFFFF;
    if ( v21 < *((_DWORD *)Current + 60)
      && (v22 = *((_QWORD *)Current + 28),
          v17 = *(unsigned int *)(v22 + 16LL * v21 + 8),
          v18 = (HIDWORD(v38) >> 25) & 0x60,
          ((HIDWORD(v38) >> 25) & 0x60) == (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0x60))
      && (v17 & 0x2000) == 0
      && (v17 & 0x1F) != 0
      && (v18 = 2 * (((unsigned __int64)HIDWORD(v38) >> 6) & 0xFFFFFF),
          (*(_BYTE *)(v22 + 16 * (((unsigned __int64)HIDWORD(v38) >> 6) & 0xFFFFFF) + 8) & 0x1F) == 6) )
    {
      v23 = *(_QWORD *)(v22 + 16 * (((unsigned __int64)HIDWORD(v38) >> 6) & 0xFFFFFF));
    }
    else
    {
      v23 = 0LL;
    }
    if ( !v23 )
    {
      v24 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v24 + 24) = v20;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35);
      COREACCESS::~COREACCESS((COREACCESS *)v36);
      if ( v33[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33);
      goto LABEL_14;
    }
    v25 = v39;
    if ( v39 != *(DXGDEVICE **)(v23 + 16) )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
      v26[3] = v20;
      v26[4] = (unsigned int)v38;
      v26[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v26);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35);
      COREACCESS::~COREACCESS((COREACCESS *)v36);
      if ( v33[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33);
      if ( v37 )
      {
        v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v8 == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
      }
      v9 = (qword_1C005F010 & 2) == 0;
      goto LABEL_6;
    }
    if ( !DXGDEVICE::IsSupportOverlay(v39) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v27);
      *(_QWORD *)(v29 + 24) = 984LL;
      WdLogEvent5_WdAssertion(v29);
      v28 = 0xFFFFFF;
    }
    if ( v21 < *((_DWORD *)Current + 60) )
    {
      v30 = *((_QWORD *)Current + 28);
      v31 = *(_DWORD *)(v30 + 16LL * v21 + 8);
      if ( (((unsigned int)v20 >> 25) & 0x60) == (*(_BYTE *)(v30 + 16LL * v21 + 8) & 0x60)
        && (v31 & 0x2000) == 0
        && (v31 & 0x1F) != 0 )
      {
        *(_DWORD *)(v30 + 16 * (*(_QWORD *)&v28 & ((unsigned __int64)(unsigned int)v20 >> 6)) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35);
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v34, *((struct ADAPTER_RENDER **)v32 + 2));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
    DXGDEVICE::DestroyOverlay(v25, (struct DXGOVERLAY ***)v23);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v34);
    COREACCESS::~COREACCESS((COREACCESS *)v36);
    if ( v33[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33);
    if ( v37 )
    {
      v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v14 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    }
    v16 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, 2025);
  return 0LL;
}
