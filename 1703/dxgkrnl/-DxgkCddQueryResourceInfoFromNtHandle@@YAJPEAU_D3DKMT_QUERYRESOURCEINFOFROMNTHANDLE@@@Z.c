/*
 * XREFs of ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C0183130
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
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00C25BC (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfoFromNtHandle(
        struct _D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE *a1,
        __int64 a2,
        __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  int Resource; // ebx
  struct DXGDEVICE *v9; // rcx
  __int64 v10; // r8
  __int64 hDevice; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGDEVICE *v14; // rdi
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // r9
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  PVOID v23; // r14
  __int64 v24; // r15
  _QWORD *v25; // rax
  HANDLE hNtHandle; // rcx
  bool v27; // zf
  _BYTE v29[16]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v30[8]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v31[32]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v32[88]; // [rsp+68h] [rbp-1h] BYREF
  struct DXGDEVICE *v33; // [rsp+D8h] [rbp+6Fh] BYREF
  struct DXGDEVICE *v34; // [rsp+E0h] [rbp+77h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3056);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v6, v5);
    Resource = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    goto LABEL_26;
  }
  hDevice = a1->hDevice;
  v34 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v33, hDevice, Current, &v34);
  v14 = v34;
  if ( !v34 )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    Resource = -1073741811;
    *(_QWORD *)(v15 + 24) = a1->hDevice;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    if ( !v33 )
      goto LABEL_26;
    v9 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v16 = v9 == (struct DXGDEVICE *)1;
    goto LABEL_9;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v29, v34);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v14, 0LL, v17, 0);
  Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30);
  if ( Resource < 0 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v32);
    COREACCESS::~COREACCESS((COREACCESS *)v31);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v29);
    v9 = v33;
    if ( !v33 )
      goto LABEL_26;
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_9:
    if ( v16 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
    goto LABEL_26;
  }
  v18 = ObReferenceObjectByHandle(a1->hNtHandle, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v23 = Object;
  v24 = v18;
  Resource = v18;
  if ( v18 == -1073741788 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    v25[3] = v14;
    hNtHandle = a1->hNtHandle;
    v25[5] = -1073741788LL;
    goto LABEL_16;
  }
  if ( v18 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    v25[3] = v14;
    hNtHandle = a1->hNtHandle;
    v25[5] = v24;
LABEL_16:
    v25[4] = hNtHandle;
    WdLogEvent5_WdWarning(v25);
    COREACCESS::~COREACCESS((COREACCESS *)v32);
    COREACCESS::~COREACCESS((COREACCESS *)v31);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v29);
    if ( v33 )
    {
      v9 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      v27 = v9 == (struct DXGDEVICE *)1;
      goto LABEL_22;
    }
    goto LABEL_24;
  }
  Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>((__int64)v14, a1, v21, (__int64)Object);
  COREACCESS::~COREACCESS((COREACCESS *)v32);
  COREACCESS::~COREACCESS((COREACCESS *)v31);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v29);
  if ( v33 )
  {
    v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_22:
    if ( v27 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
  }
LABEL_24:
  if ( v23 )
    ObfDereferenceObject(v23);
LABEL_26:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v9, &EventProfilerExit, v10, 3056);
  return (unsigned int)Resource;
}
