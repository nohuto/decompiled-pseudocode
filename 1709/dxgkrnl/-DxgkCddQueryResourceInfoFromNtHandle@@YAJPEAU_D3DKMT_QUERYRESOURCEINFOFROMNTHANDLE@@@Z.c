/*
 * XREFs of ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C0187330
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0095C5C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfoFromNtHandle(
        struct _D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE *a1,
        __int64 a2,
        __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  int Resource; // ebx
  struct DXGDEVICE *v8; // rcx
  __int64 v9; // r8
  D3DKMT_HANDLE hDevice; // edx
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // rdi
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // r9
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  PVOID v20; // r14
  __int64 v21; // r15
  _QWORD *v22; // rax
  HANDLE hNtHandle; // rcx
  bool v24; // zf
  _BYTE v26[16]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v27[8]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v28[32]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v29[88]; // [rsp+68h] [rbp-1h] BYREF
  struct DXGDEVICE *v30; // [rsp+D8h] [rbp+6Fh] BYREF
  struct DXGDEVICE *v31; // [rsp+E0h] [rbp+77h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3056);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v5);
    Resource = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    goto LABEL_26;
  }
  hDevice = a1->hDevice;
  v31 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v30, hDevice, Current, &v31);
  v12 = v31;
  if ( !v31 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    Resource = -1073741811;
    *(_QWORD *)(v13 + 24) = a1->hDevice;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    if ( !v30 )
      goto LABEL_26;
    v8 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v14 = v8 == (struct DXGDEVICE *)1;
    goto LABEL_9;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v26, v31);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v27, (__int64)v12, 0, v15, 0);
  Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v27);
  if ( Resource < 0 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v29);
    COREACCESS::~COREACCESS((COREACCESS *)v28);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v26);
    v8 = v30;
    if ( !v30 )
      goto LABEL_26;
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_9:
    if ( v14 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
    goto LABEL_26;
  }
  v16 = ObReferenceObjectByHandle(a1->hNtHandle, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v20 = Object;
  v21 = v16;
  Resource = v16;
  if ( v16 == -1073741788 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v22[3] = v12;
    hNtHandle = a1->hNtHandle;
    v22[5] = -1073741788LL;
    goto LABEL_16;
  }
  if ( v16 < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v22[3] = v12;
    hNtHandle = a1->hNtHandle;
    v22[5] = v21;
LABEL_16:
    v22[4] = hNtHandle;
    WdLogEvent5_WdWarning(v22);
    COREACCESS::~COREACCESS((COREACCESS *)v29);
    COREACCESS::~COREACCESS((COREACCESS *)v28);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v26);
    if ( v30 )
    {
      v8 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      v24 = v8 == (struct DXGDEVICE *)1;
      goto LABEL_22;
    }
    goto LABEL_24;
  }
  Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>((__int64)v12, a1, v19, (__int64)Object);
  COREACCESS::~COREACCESS((COREACCESS *)v29);
  COREACCESS::~COREACCESS((COREACCESS *)v28);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v26);
  if ( v30 )
  {
    v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_22:
    if ( v24 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
  }
LABEL_24:
  if ( v20 )
    ObfDereferenceObject(v20);
LABEL_26:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v8, &EventProfilerExit, v9, 3056);
  return (unsigned int)Resource;
}
