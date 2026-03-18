/*
 * XREFs of DxgkSetStablePowerState @ 0x1C01BB230
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0176E54 (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C017798C (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkSetStablePowerState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v6; // rax
  DXGADAPTER *v7; // rcx
  __int64 v8; // r8
  bool v9; // zf
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int PairingAdapters; // r15d
  __int64 v18; // rax
  __int64 v19; // r8
  DXGADAPTER *v20; // rcx
  struct DXGADAPTER *v21; // r15
  int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r8
  DXGADAPTER *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // r8
  DXGADAPTER *v40; // rcx
  unsigned __int64 v41; // [rsp+30h] [rbp-98h] BYREF
  DXGADAPTER *v42; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v43[120]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v44; // [rsp+D8h] [rbp+10h]
  struct DXGADAPTER *v45; // [rsp+E0h] [rbp+18h] BYREF
  struct DXGADAPTER *v46; // [rsp+E8h] [rbp+20h] BYREF

  v3 = (__int64 *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2124);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = 3246LL;
    WdLogEvent5_WdError(v6);
LABEL_6:
    v9 = (qword_1C005F010 & 2) == 0;
LABEL_7:
    if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v7, &EventProfilerExit, v8, 2124);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v44 = *v3;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v42, *v3, (struct _KTHREAD **)Current, &v46);
  v12 = v46;
  if ( !v46 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = Current;
    *(_QWORD *)(v13 + 32) = (unsigned int)v44;
    WdLogEvent5_WdError(v13);
    v7 = v42;
    if ( v42 )
      DXGADAPTER::ReleaseReferenceNoTracking(v42);
    goto LABEL_6;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v46, 0, &v45, &v41, 0LL, 0LL);
  if ( PairingAdapters >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)Current + 160, 0LL);
    *((_QWORD *)Current + 21) = KeGetCurrentThread();
    v21 = v45;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v43, v45, 0LL);
    v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v43);
    DXGADAPTER::ReleaseReferenceNoTracking(v21);
    if ( v22 >= 0 )
    {
      v29 = *((unsigned int *)v21 + 50);
      v30 = *(_QWORD *)(*((_QWORD *)Current + 5) + 8 * v29);
      if ( !v30 )
      {
        v31 = WdLogNewEntry5_WdWarning(v29, v23, v25);
        *(_QWORD *)(v31 + 24) = v21;
        *(_QWORD *)(v31 + 32) = Current;
        WdLogEvent5_WdWarning(v31);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
        *((_QWORD *)Current + 21) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 160, 0LL);
        KeLeaveCriticalRegion();
        v7 = v42;
        if ( v42 )
          DXGADAPTER::ReleaseReferenceNoTracking(v42);
        v9 = (qword_1C005F010 & 2) == 0;
        goto LABEL_7;
      }
      v32 = *((_QWORD *)v21 + 289);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v32 + 1208, 0LL);
      *(_QWORD *)(v32 + 1216) = KeGetCurrentThread();
      if ( HIDWORD(v44) )
      {
        if ( !*(_DWORD *)(v30 + 28) )
          ADAPTER_RENDER::AddStablePowerReference(*((ADAPTER_RENDER **)v21 + 289));
        ++*(_DWORD *)(v30 + 28);
      }
      else
      {
        v36 = *(_DWORD *)(v30 + 28);
        if ( v36 )
        {
          v38 = v36 - 1;
          *(_DWORD *)(v30 + 28) = v38;
          if ( !v38 )
            ADAPTER_RENDER::ReleaseStablePowerReference(*((ADAPTER_RENDER **)v21 + 289));
        }
        else
        {
          v37 = WdLogNewEntry5_WdWarning(v34, v33, v35);
          *(_QWORD *)(v37 + 24) = Current;
          *(_QWORD *)(v37 + 32) = v45;
          WdLogEvent5_WdWarning(v37);
        }
      }
      *(_QWORD *)(v32 + 1216) = 0LL;
      ExReleasePushLockExclusiveEx(v32 + 1208, 0LL);
      KeLeaveCriticalRegion();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
      *((_QWORD *)Current + 21) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 160, 0LL);
      KeLeaveCriticalRegion();
      v40 = v42;
      if ( v42 )
        DXGADAPTER::ReleaseReferenceNoTracking(v42);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)v40, &EventProfilerExit, v39, 2124);
      return 0LL;
    }
    else
    {
      v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v26 + 24) = v21;
      WdLogEvent5_WdWarning(v26);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
      *((_QWORD *)Current + 21) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 160, 0LL);
      KeLeaveCriticalRegion();
      v28 = v42;
      if ( v42 )
        DXGADAPTER::ReleaseReferenceNoTracking(v42);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)v28, &EventProfilerExit, v27, 2124);
      return (unsigned int)v22;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = v12;
    WdLogEvent5_WdWarning(v18);
    v20 = v42;
    if ( v42 )
      DXGADAPTER::ReleaseReferenceNoTracking(v42);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v20, &EventProfilerExit, v19, 2124);
    return (unsigned int)PairingAdapters;
  }
}
