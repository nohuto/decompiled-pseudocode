/*
 * XREFs of ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C009C980
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
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00EA198 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfo(struct _D3DKMT_QUERYRESOURCEINFO *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r9
  int Resource; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 hDevice; // rcx
  int v16; // [rsp+30h] [rbp-29h] BYREF
  __int64 v17; // [rsp+38h] [rbp-21h]
  _BYTE v18[16]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v19[8]; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v20[32]; // [rsp+58h] [rbp-1h] BYREF
  _BYTE v21[56]; // [rsp+78h] [rbp+1Fh] BYREF
  struct DXGDEVICE *v22; // [rsp+C8h] [rbp+6Fh] BYREF
  struct DXGDEVICE *v23; // [rsp+D0h] [rbp+77h] BYREF

  v17 = 0LL;
  v16 = 3035;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3035);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 3035);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v23, a1->hDevice, Current, &v22);
    if ( v22 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v18, v22);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v19, (__int64)v22, 0, v7, 0);
      Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v19);
      if ( Resource >= 0 )
        Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v22, a1, a1->hGlobalShare);
      v9 = Resource;
      COREACCESS::~COREACCESS((COREACCESS *)v21);
      COREACCESS::~COREACCESS((COREACCESS *)v20);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v18);
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v6);
      hDevice = a1->hDevice;
      v9 = -1073741811;
      *(_QWORD *)(v14 + 24) = hDevice;
      *(_QWORD *)(v14 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v14);
    }
    if ( v23 && _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v5);
    v9 = -1073741811;
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v16);
  return v9;
}
