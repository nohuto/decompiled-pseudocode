/*
 * XREFs of DxgkUpdateOverlay @ 0x1C01B2750
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0014394 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00143B8 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C0015A4C (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C0028834 (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C0028868 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00288AC (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1C01B105C (-UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkUpdateOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_UPDATEOVERLAY *v3; // r14
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v6; // rax
  unsigned int updated; // ebx
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v12; // rcx
  struct ADAPTER_RENDER **v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 hOverlay; // r15
  __int64 v19; // rax
  struct DXGOVERLAY *v20; // rbx
  _QWORD *v21; // rax
  int v22; // r15d
  __int64 v23; // r8
  struct DXGDEVICE *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD v27[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v28[16]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v29[32]; // [rsp+40h] [rbp-A8h] BYREF
  _D3DKMT_UPDATEOVERLAY v30; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v31[72]; // [rsp+A0h] [rbp-48h] BYREF
  struct DXGDEVICE *v32; // [rsp+F8h] [rbp+10h] BYREF
  DXGDEVICE *v33; // [rsp+100h] [rbp+18h] BYREF

  v3 = (_D3DKMT_UPDATEOVERLAY *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2023);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    updated = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v9 = qword_1C005F010;
    v10 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v8, 2023);
    return updated;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_D3DKMT_UPDATEOVERLAY *)MmUserProbeAddress;
  v30 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v32, v30.hDevice, (struct _KTHREAD **)Current, &v33);
  v13 = (struct ADAPTER_RENDER **)v33;
  if ( !v33 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = v30.hDevice;
    updated = -1073741811;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    if ( v32 )
    {
      v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v9 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    }
    v10 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27, v33);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v29, Current);
  hOverlay = v30.hOverlay;
  v19 = (v30.hOverlay >> 6) & 0xFFFFFF;
  if ( (unsigned int)v19 < *((_DWORD *)Current + 60)
    && (v17 = *((_QWORD *)Current + 28),
        v15 = *(unsigned int *)(v17 + 16 * v19 + 8),
        v16 = (v30.hOverlay >> 25) & 0x60,
        ((v30.hOverlay >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v19 + 8) & 0x60))
    && (v15 & 0x2000) == 0
    && (v15 & 0x1F) != 0
    && (*(_BYTE *)(v17 + 16 * (((unsigned __int64)v30.hOverlay >> 6) & 0xFFFFFF) + 8) & 0x1F) == 6 )
  {
    v20 = *(struct DXGOVERLAY **)(v17 + 16 * (((unsigned __int64)v30.hOverlay >> 6) & 0xFFFFFF));
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v20 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
    updated = -1073741811;
    v21[4] = -1073741811LL;
LABEL_26:
    v21[3] = hOverlay;
    WdLogEvent5_WdWarning(v21);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
LABEL_27:
    if ( v27[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    if ( v32 )
    {
      v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v9 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    }
    v10 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  if ( v13 != *((struct ADAPTER_RENDER ***)v20 + 2) )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
    v21[4] = v30.hDevice;
    updated = -1073741811;
    v21[5] = -1073741811LL;
    goto LABEL_26;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v31, v20);
  v22 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)v31);
  if ( v22 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v13) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v26 + 24) = 773LL;
      WdLogEvent5_WdAssertion(v26);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v28, v13[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
    updated = DXGOVERLAY::UpdateOverlay((struct _EX_RUNDOWN_REF *)v20, &v30);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v28);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v31);
    goto LABEL_27;
  }
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v31);
  if ( v27[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
  v24 = v32;
  if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v24, &EventProfilerExit, v23, 2023);
  return (unsigned int)v22;
}
