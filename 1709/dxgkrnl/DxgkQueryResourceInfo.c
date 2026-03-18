/*
 * XREFs of DxgkQueryResourceInfo @ 0x1C00F23A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000E3DC (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0095E9C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryResourceInfo(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  _OWORD *v6; // rax
  __int64 v7; // rcx
  struct DXGDEVICE *v8; // r14
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r15
  int Resource; // r14d
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned int v29[4]; // [rsp+30h] [rbp-98h] BYREF
  __int128 v30; // [rsp+40h] [rbp-88h]
  _BYTE v31[120]; // [rsp+50h] [rbp-78h] BYREF
  struct DXGDEVICE *v32; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v33; // [rsp+E0h] [rbp+18h] BYREF
  struct DXGDEVICE *v34; // [rsp+E8h] [rbp+20h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2004);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, a2);
  if ( Current )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v29 = *v6;
    v30 = v6[1];
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v32, v29[0], Current, &v34);
    v8 = v34;
    if ( v34 )
    {
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v33, v34);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, (__int64)v8, 0, v9, 0);
      v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31);
      v14 = v10;
      if ( v10 < 0 )
      {
        v24 = WdLogNewEntry5_WdWarning(v12, v11, v13);
        *(_QWORD *)(v24 + 24) = v8;
        *(_QWORD *)(v24 + 32) = v14;
        WdLogEvent5_WdWarning(v24);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
        v26 = v33;
        if ( v33 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v33 + 104));
          KeLeaveCriticalRegion();
        }
        if ( v32 )
        {
          v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL);
          if ( v26 == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
        }
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v26, &EventProfilerExit, v25, 2004);
        return (unsigned int)v14;
      }
      else
      {
        Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>((__int64)v8, v29, v29[1]);
        if ( Resource < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
          v28 = v33;
          if ( v33 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v33 + 104));
            KeLeaveCriticalRegion();
          }
          if ( v32 )
          {
            v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL);
            if ( v28 == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
          }
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v28, &EventProfilerExit, v27, 2004);
          return (unsigned int)Resource;
        }
        else
        {
          if ( (unsigned __int64)(a1 + 2) > MmUserProbeAddress || a1 + 2 <= a1 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a1 = *(_OWORD *)v29;
          a1[1] = v30;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
          v17 = v33;
          if ( v33 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v33 + 104));
            KeLeaveCriticalRegion();
          }
          if ( v32 )
          {
            v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL);
            if ( v17 == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
          }
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v17, &EventProfilerExit, v16, 2004);
          return 0LL;
        }
      }
    }
    v23 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v23 + 24) = v29[0];
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    if ( v32 )
    {
      v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v21 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    }
    v22 = (qword_1C005F010 & 2) == 0;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    v21 = qword_1C005F010;
    v22 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v20, 2004);
  return 3221225485LL;
}
