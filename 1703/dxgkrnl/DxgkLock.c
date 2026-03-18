/*
 * XREFs of DxgkLock @ 0x1C009DBE0
 * Callers:
 *     ?VmBusLock2@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D9A0 (-VmBusLock2@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004E20 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C12EC (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00C1704 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  bool v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // r8
  struct _D3DKMT_LOCK *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGDEVICE *v11; // r13
  __int64 v12; // r9
  int v13; // r12d
  _QWORD *p_pData; // rdx
  _DWORD *p_hAllocation; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  struct DXGDEVICE *v24; // [rsp+30h] [rbp-E8h] BYREF
  struct _D3DKMT_LOCK v25; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v26[8]; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-A8h]
  char v28; // [rsp+78h] [rbp-A0h]
  struct _D3DKMT_UNLOCK v29; // [rsp+80h] [rbp-98h] BYREF
  _BYTE v30[16]; // [rsp+90h] [rbp-88h] BYREF
  _BYTE v31[120]; // [rsp+A0h] [rbp-78h] BYREF
  bool v32; // [rsp+128h] [rbp+10h]
  struct DXGDEVICE *v33; // [rsp+138h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2011);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v32 = v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( v4 )
    {
      v8 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v8 = (struct _D3DKMT_LOCK *)MmUserProbeAddress;
      v25 = *v8;
    }
    else
    {
      v25 = *a1;
    }
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v33, v25.hDevice, Current, &v24);
    v11 = v24;
    if ( v24 )
    {
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30,
        v24);
      v27 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
      v28 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, (__int64)v11, 0LL, v12, 0);
      v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31);
      if ( v13 >= 0 )
      {
        v25.hDevice = 0;
        v13 = DXGDEVICE::Lock(v11, &v25, (struct COREDEVICEACCESS *)v31);
        if ( v13 >= 0 )
        {
          if ( v32 )
          {
            p_pData = &a1->pData;
            if ( (unsigned __int64)&a1->pData >= MmUserProbeAddress )
              p_pData = (_QWORD *)MmUserProbeAddress;
            *p_pData = v25.pData;
            p_hAllocation = &a1->hAllocation;
            if ( (unsigned __int64)&a1->hAllocation >= MmUserProbeAddress )
              p_hAllocation = (_DWORD *)MmUserProbeAddress;
            *p_hAllocation = v25.hAllocation;
          }
          else
          {
            a1->pData = v25.pData;
            a1->hAllocation = v25.hAllocation;
          }
          if ( v13 < 0 )
          {
            v29.hDevice = v25.hDevice;
            v29.NumAllocations = 1;
            v29.phAllocations = &v25.hAllocation;
            DXGDEVICE::Unlock(v11, &v29, 0);
          }
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
      if ( v28 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30);
      if ( v33 )
      {
        v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v16 == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
      }
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v16, &EventProfilerExit, v17, 2011);
      return (unsigned int)v13;
    }
    v23 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v23 + 24) = v25.hDevice;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    if ( v33 )
    {
      v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v21 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
    }
    v22 = (qword_1C006E790 & 2) == 0;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    v21 = qword_1C006E790;
    v22 = (qword_1C006E790 & 2) == 0;
  }
  if ( !v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v21, &EventProfilerExit, v20, 2011);
  return 3221225485LL;
}
