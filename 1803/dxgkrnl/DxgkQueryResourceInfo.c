/*
 * XREFs of DxgkQueryResourceInfo @ 0x1C00AABD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002694 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00EA198 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 */

__int64 __fastcall DxgkQueryResourceInfo(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  _OWORD *v10; // rax
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int Resource; // esi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-B0h]
  __int64 v30; // [rsp+40h] [rbp-A8h] BYREF
  char v31; // [rsp+48h] [rbp-A0h]
  unsigned int v32[4]; // [rsp+50h] [rbp-98h] BYREF
  __int128 v33; // [rsp+60h] [rbp-88h]
  _BYTE v34[120]; // [rsp+70h] [rbp-78h] BYREF
  struct DXGDEVICE *v35; // [rsp+F8h] [rbp+10h] BYREF
  struct DXGDEVICE *v36; // [rsp+100h] [rbp+18h] BYREF

  v29 = 0LL;
  v28 = 2004;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2004);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2004);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v7, &EventProfilerExit, v8, v28);
    return 3221225485LL;
  }
  v10 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v32 = *v10;
  v33 = v10[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v35, v32[0], Current, &v36);
  v12 = v36;
  if ( !v36 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = v32[0];
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v30, v36);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, (__int64)v12, 0, v14, 0);
  v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v34);
  v19 = v15;
  if ( v15 >= 0 )
  {
    Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v12, v32, v32[1]);
    if ( Resource >= 0 )
    {
      if ( (unsigned __int64)(a1 + 2) > MmUserProbeAddress || a1 + 2 <= a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a1 = *(_OWORD *)v32;
      a1[1] = v33;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
      if ( v30 && v31 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v30 + 104));
        KeLeaveCriticalRegion();
      }
      if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v26, &EventProfilerExit, v27, v28);
      return 0LL;
    }
    else
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
      if ( v30 && v31 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v30 + 104));
        KeLeaveCriticalRegion();
      }
      if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v24, &EventProfilerExit, v25, v28);
      return (unsigned int)Resource;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v20 + 24) = v12;
    *(_QWORD *)(v20 + 32) = v19;
    WdLogEvent5_WdWarning(v20);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
    if ( v30 && v31 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v30 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, v28);
    return (unsigned int)v19;
  }
}
