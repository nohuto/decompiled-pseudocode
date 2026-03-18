/*
 * XREFs of DxgkGetOverlayState @ 0x1C01B22D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000E3DC (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0014394 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00143B8 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C0015A4C (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C0028834 (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C0028868 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00288AC (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z @ 0x1C01B0C0C (-GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z.c)
 */

__int64 __fastcall DxgkGetOverlayState(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v6; // rax
  int OverlayState; // ebx
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  _D3DKMT_GETOVERLAYSTATE *v12; // rax
  __int64 v13; // rcx
  struct ADAPTER_RENDER **v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rbx
  struct DXGOVERLAY *v21; // rbx
  _QWORD *v22; // rax
  int v23; // r15d
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  _BYTE *v28; // rdx
  _D3DKMT_GETOVERLAYSTATE v29; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v30[16]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v31[24]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v32[96]; // [rsp+58h] [rbp-60h] BYREF
  struct DXGDEVICE *v33; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v34; // [rsp+D0h] [rbp+18h] BYREF
  DXGDEVICE *v35; // [rsp+D8h] [rbp+20h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2057);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    OverlayState = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v9 = qword_1C005F010;
    v10 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v8, 2057);
    return (unsigned int)OverlayState;
  }
  v12 = (_D3DKMT_GETOVERLAYSTATE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_D3DKMT_GETOVERLAYSTATE *)MmUserProbeAddress;
  v29 = *v12;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v33, v29.hDevice, (struct _KTHREAD **)Current, &v35);
  v14 = (struct ADAPTER_RENDER **)v35;
  if ( !v35 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = v29.hDevice;
    OverlayState = -1073741811;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
LABEL_14:
    if ( v33 )
    {
      v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v9 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
    }
    v10 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v34, v35);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v31, Current);
  v18 = (v29.hOverlay >> 6) & 0xFFFFFF;
  v19 = v29.hOverlay >> 30;
  if ( (unsigned int)v18 < *((_DWORD *)Current + 60)
    && (v17 = (unsigned int)v18,
        v20 = *((_QWORD *)Current + 28),
        v16 = *(unsigned int *)(v20 + 16 * v18 + 8),
        (_DWORD)v19 == ((*(_DWORD *)(v20 + 16 * v18 + 8) >> 5) & 3))
    && (v16 & 0x2000) == 0
    && (v16 & 0x1F) != 0
    && (v17 = 2LL * (unsigned int)v18, (*(_BYTE *)(v20 + 16LL * (unsigned int)v18 + 8) & 0x1F) == 6) )
  {
    v21 = *(struct DXGOVERLAY **)(v20 + 16LL * (unsigned int)v18);
  }
  else
  {
    v21 = 0LL;
  }
  if ( !v21 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v19);
    OverlayState = -1073741811;
    v22[4] = -1073741811LL;
LABEL_27:
    v22[3] = v29.hOverlay;
    WdLogEvent5_WdWarning(v22);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
LABEL_28:
    v9 = v34;
    if ( v34 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v34 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_14;
  }
  if ( v14 != *((struct ADAPTER_RENDER ***)v21 + 2) )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v19);
    v22[4] = v29.hDevice;
    OverlayState = -1073741811;
    v22[5] = -1073741811LL;
    goto LABEL_27;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v32, v21);
  v23 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)v32);
  if ( v23 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v14) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v27 + 24) = 1092LL;
      WdLogEvent5_WdAssertion(v27);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v30, v14[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
    OverlayState = DXGOVERLAY::GetOverlayState(v21, &v29);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
    if ( OverlayState >= 0 )
    {
      v28 = (_BYTE *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v28 = (_BYTE *)MmUserProbeAddress;
      *v28 = v29.OverlayEnabled;
    }
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v30);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v32);
    goto LABEL_28;
  }
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v32);
  v25 = v34;
  if ( v34 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v34 + 104));
    KeLeaveCriticalRegion();
  }
  if ( v33 )
  {
    v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v25 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v24, 2057);
  return (unsigned int)v23;
}
