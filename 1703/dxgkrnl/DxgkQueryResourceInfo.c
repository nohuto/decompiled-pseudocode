/*
 * XREFs of DxgkQueryResourceInfo @ 0x1C009CCD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002034 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00C27FC (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkQueryResourceInfo(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  _OWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGDEVICE *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  int Resource; // esi
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // [rsp+30h] [rbp-B8h] BYREF
  char v33; // [rsp+38h] [rbp-B0h]
  unsigned int v34[4]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v35; // [rsp+50h] [rbp-98h]
  _BYTE v36[136]; // [rsp+60h] [rbp-88h] BYREF
  struct DXGDEVICE *v37; // [rsp+100h] [rbp+18h] BYREF
  struct DXGDEVICE *v38; // [rsp+108h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2004);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v9 = qword_1C006E790;
    v10 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v9, &EventProfilerExit, v8, 2004);
    return 3221225485LL;
  }
  v12 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v34 = *v12;
  v35 = v12[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v37, v34[0], Current, &v38);
  v15 = v38;
  if ( !v38 )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = v34[0];
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    if ( v37 )
    {
      v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v9 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    }
    v10 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v32, v38);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, (__int64)v15, 0LL, v17, 0);
  v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36);
  v23 = v18;
  if ( v18 >= 0 )
  {
    Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v15, v34, v34[1]);
    if ( Resource >= 0 )
    {
      if ( (unsigned __int64)(a1 + 2) > MmUserProbeAddress || a1 + 2 <= a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a1 = *(_OWORD *)v34;
      a1[1] = v35;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
      v31 = v32;
      if ( v32 && v33 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v32 + 104));
        KeLeaveCriticalRegion();
      }
      if ( v37 )
      {
        v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v31 == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
      }
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v31, &EventProfilerExit, v30, 2004);
      return 0LL;
    }
    else
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
      v29 = v32;
      if ( v32 && v33 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v32 + 104));
        KeLeaveCriticalRegion();
      }
      if ( v37 )
      {
        v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v29 == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
      }
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v29, &EventProfilerExit, v28, 2004);
      return (unsigned int)Resource;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    *(_QWORD *)(v24 + 24) = v15;
    *(_QWORD *)(v24 + 32) = v23;
    WdLogEvent5_WdWarning(v24);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
    v26 = v32;
    if ( v32 && v33 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v32 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v37 )
    {
      v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v26 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    }
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v26, &EventProfilerExit, v25, 2004);
    return (unsigned int)v23;
  }
}
