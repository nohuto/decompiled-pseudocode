/*
 * XREFs of DxgkUnlock @ 0x1C009F070
 * Callers:
 *     ?VmBusUnlock2@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00335E0 (-VmBusUnlock2@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004E20 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C001374C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00C1704 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkUnlock(__int64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_UNLOCK *v3; // rdi
  unsigned __int8 v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGDEVICE *v10; // rdi
  unsigned int v11; // edi
  __int64 v12; // r8
  struct DXGDEVICE *v13; // rcx
  bool v14; // zf
  bool v15; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _D3DKMT_UNLOCK v21; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v22[16]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v23[32]; // [rsp+40h] [rbp-28h] BYREF
  struct DXGDEVICE *v24; // [rsp+78h] [rbp+10h] BYREF
  struct DXGDEVICE *v25; // [rsp+80h] [rbp+18h] BYREF

  v3 = (struct _D3DKMT_UNLOCK *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2012);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v17 = WdLogNewEntry5_WdError(v6, v5);
    v11 = -1073741811;
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    v13 = (struct DXGDEVICE *)qword_1C006E790;
    v15 = (qword_1C006E790 & 2) == 0;
    goto LABEL_15;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (struct _D3DKMT_UNLOCK *)MmUserProbeAddress;
    v21 = *v3;
  }
  else
  {
    v21 = *v3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v24, v21.hDevice, Current, &v25);
  v10 = v25;
  if ( !v25 )
  {
    v18 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v18 + 24) = v21.hDevice;
    v11 = -1073741811;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    if ( v24 )
    {
      v13 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      v14 = v13 == (struct DXGDEVICE *)1;
LABEL_12:
      if ( v14 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
    }
LABEL_14:
    v15 = (qword_1C006E790 & 2) == 0;
LABEL_15:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v13, &EventProfilerExit, v12, 2012);
    return v11;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v22,
    v25);
  COREACCESS::COREACCESS((COREACCESS *)v23, *(struct DXGADAPTER *const *)(*((_QWORD *)v10 + 2) + 16LL));
  COREACCESS::AcquireShared((COREACCESS *)v23);
  if ( *((_DWORD *)v10 + 102) != 4 )
  {
    v21.hDevice = 0;
    v11 = DXGDEVICE::Unlock(v25, &v21, v4);
    COREACCESS::~COREACCESS((COREACCESS *)v23);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v22);
    v13 = v24;
    if ( v24 )
    {
      v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
      goto LABEL_12;
    }
    goto LABEL_14;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v23);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v22);
  if ( v24 )
  {
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v19 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 2012);
  return 0LL;
}
