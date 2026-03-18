/*
 * XREFs of ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C008B680
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000D830 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D864 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00C27FC (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfo(struct _D3DKMT_QUERYRESOURCEINFO *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  int Resource; // eax
  unsigned int v11; // ebx
  __int64 v12; // r8
  struct DXGDEVICE *v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 hDevice; // rcx
  _BYTE v18[16]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v19[8]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v20[32]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v21[64]; // [rsp+68h] [rbp-40h] BYREF
  struct DXGDEVICE *v22; // [rsp+B8h] [rbp+10h] BYREF
  struct DXGDEVICE *v23; // [rsp+C0h] [rbp+18h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3035);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v23, a1->hDevice, Current, &v22);
    if ( v22 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v18, v22);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v19, (__int64)v22, 0LL, v9, 0);
      Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v19);
      if ( Resource >= 0 )
        Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v22, a1, a1->hGlobalShare);
      v11 = Resource;
      COREACCESS::~COREACCESS((COREACCESS *)v21);
      COREACCESS::~COREACCESS((COREACCESS *)v20);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v18);
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v8, v7);
      hDevice = a1->hDevice;
      v11 = -1073741811;
      *(_QWORD *)(v16 + 24) = hDevice;
      *(_QWORD *)(v16 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v16);
    }
    v13 = v23;
    if ( v23 && _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v6, v5);
    v11 = -1073741811;
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v13, &EventProfilerExit, v12, 3035);
  return v11;
}
