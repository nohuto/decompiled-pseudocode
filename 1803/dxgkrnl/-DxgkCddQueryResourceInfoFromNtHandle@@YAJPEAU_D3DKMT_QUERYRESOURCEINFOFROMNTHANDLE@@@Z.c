/*
 * XREFs of ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C016F270
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0009964 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009998 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00E9F40 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfoFromNtHandle(
        struct _D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int Resource; // ebx
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
  __int64 v24; // rcx
  __int64 v25; // r8
  _BYTE v27[16]; // [rsp+30h] [rbp-49h] BYREF
  int v28; // [rsp+40h] [rbp-39h] BYREF
  __int64 v29; // [rsp+48h] [rbp-31h]
  _BYTE v30[8]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v31[32]; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v32[88]; // [rsp+78h] [rbp-1h] BYREF
  struct DXGDEVICE *v33; // [rsp+E8h] [rbp+6Fh] BYREF
  struct DXGDEVICE *v34; // [rsp+F0h] [rbp+77h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+7Fh] BYREF

  v29 = 0LL;
  v28 = 3056;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3056);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 3056);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    Resource = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    goto LABEL_25;
  }
  hDevice = a1->hDevice;
  v34 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v33, hDevice, Current, &v34);
  v12 = v34;
  if ( !v34 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    Resource = -1073741811;
    *(_QWORD *)(v13 + 24) = a1->hDevice;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    if ( !v33 )
      goto LABEL_25;
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_9;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v27, v34);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v12, 0, v15, 0);
  Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30);
  if ( Resource < 0 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v32);
    COREACCESS::~COREACCESS((COREACCESS *)v31);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v27);
    if ( !v33 )
      goto LABEL_25;
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_9:
    if ( v14 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
    goto LABEL_25;
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
  }
  else
  {
    if ( v16 >= 0 )
    {
      Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
                   (__int64)v12,
                   a1,
                   v19,
                   (__int64)Object);
      COREACCESS::~COREACCESS((COREACCESS *)v32);
      COREACCESS::~COREACCESS((COREACCESS *)v31);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v27);
      if ( v33 )
        goto LABEL_21;
      goto LABEL_23;
    }
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v22[3] = v12;
    hNtHandle = a1->hNtHandle;
    v22[5] = v21;
  }
  v22[4] = hNtHandle;
  WdLogEvent5_WdWarning(v22);
  COREACCESS::~COREACCESS((COREACCESS *)v32);
  COREACCESS::~COREACCESS((COREACCESS *)v31);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v27);
  if ( v33 )
  {
LABEL_21:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
  }
LABEL_23:
  if ( v20 )
    ObfDereferenceObject(v20);
LABEL_25:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v28);
  return (unsigned int)Resource;
}
