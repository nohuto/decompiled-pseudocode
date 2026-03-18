/*
 * XREFs of ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C00D9CCC
 * Callers:
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1C00D9CB4 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C01AC290 (DxgkOpenSyncObjectFromNtHandle2.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     McTemplateK0ppp @ 0x1C002CACC (McTemplateK0ppp.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00E5B10 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00F8E90 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Impl(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        char a2,
        __int64 a3)
{
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v4; // rsi
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  struct DXGPROCESS *Current; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  ULONG64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  struct ADAPTER_RENDER **v17; // r12
  __int64 v18; // rax
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned int v26; // ebx
  PERESOURCE *Global; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // [rsp+60h] [rbp-138h] BYREF
  __int64 v37; // [rsp+68h] [rbp-130h]
  _QWORD v38[2]; // [rsp+70h] [rbp-128h] BYREF
  HANDLE Handle[2]; // [rsp+80h] [rbp-118h]
  void *v40[2]; // [rsp+90h] [rbp-108h] BYREF
  unsigned int v41[4]; // [rsp+A0h] [rbp-F8h] BYREF
  __int128 v42; // [rsp+B0h] [rbp-E8h]
  __int128 v43; // [rsp+C0h] [rbp-D8h]
  UINT64 v44; // [rsp+D0h] [rbp-C8h]
  struct DXGADAPTERSYNCOBJECT *v45; // [rsp+E0h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+E8h] [rbp-B0h] BYREF
  _BYTE v47[8]; // [rsp+F0h] [rbp-A8h] BYREF
  char v48; // [rsp+F8h] [rbp-A0h]
  struct DXGDEVICE *v49; // [rsp+100h] [rbp-98h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+108h] [rbp-90h] BYREF
  _BYTE v51[136]; // [rsp+110h] [rbp-88h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v53; // [rsp+1B0h] [rbp+18h]
  struct DXGDEVICE *v54; // [rsp+1B8h] [rbp+20h] BYREF

  v4 = a1;
  v37 = 0LL;
  v36 = 2086;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2086);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 2086);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v10, &EventProfilerExit, v11, v36);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    v13 = (ULONG64)v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v13 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v13;
    *(_OWORD *)v40 = *(_OWORD *)(v13 + 16);
    *(_OWORD *)v41 = *(_OWORD *)(v13 + 32);
    v42 = *(_OWORD *)(v13 + 48);
    v43 = *(_OWORD *)(v13 + 64);
    v44 = *(_QWORD *)(v13 + 80);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&v4->hNtHandle;
    *(_OWORD *)v40 = *(_OWORD *)&v4->hSyncObject;
    *(_OWORD *)v41 = *(_OWORD *)&v4->Reserved[1];
    v42 = *(_OWORD *)&v4->Reserved[3];
    v43 = *(_OWORD *)&v4->Reserved[5];
    v44 = v4->Reserved[7];
  }
  LODWORD(v40[0]) = 0;
  if ( (HIDWORD(Handle[1]) & 0x7FFFFF00) != 0 )
  {
    v14 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v14 + 24) = 1621LL;
    WdLogEvent5_WdWarning(v14);
    goto LABEL_6;
  }
  if ( (BYTE4(Handle[1]) & 0x10) != 0 || (BYTE4(Handle[1]) & 0x20) != 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v15 + 24) = 1628LL;
    WdLogEvent5_WdWarning(v15);
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v54,
    (unsigned int)Handle[1],
    (struct _KTHREAD **)Current,
    &v49);
  v17 = (struct ADAPTER_RENDER **)v49;
  if ( !v49 )
  {
    v18 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v18 + 24) = LODWORD(Handle[1]);
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38, v49);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, (__int64)v17, 0, v19, 0);
  LODWORD(v20) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v51);
  if ( (v20 & 0x80000000) != 0LL )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
    if ( v38[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
    if ( !v54 )
      goto LABEL_64;
    goto LABEL_62;
  }
  v21 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v20 = v21;
  if ( v21 == -1073741788 )
  {
    v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    v20 = -1073741788LL;
    goto LABEL_31;
  }
  if ( v21 < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
LABEL_31:
    *(HANDLE *)(v25 + 24) = Handle[0];
    *(_QWORD *)(v25 + 32) = v20;
    WdLogEvent5_WdWarning(v25);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
    if ( v38[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
    goto LABEL_61;
  }
  v26 = HIDWORD(Handle[1]) & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32
                                                                                                  * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
  v45 = 0LL;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v23);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v47, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v47);
  LODWORD(v20) = DXGSYNCOBJECT::Open(
                   *(DXGSYNCOBJECT **)Object,
                   v17[2],
                   (struct DXGDEVICE *)v17,
                   0LL,
                   (unsigned int *)v40,
                   &v40[1],
                   (unsigned __int64 *)v41,
                   v41[2],
                   &v45,
                   1,
                   (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v26);
  v53.hSyncObject = v20;
  if ( (v20 & 0x80000000) == 0LL )
  {
    if ( v48 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v47);
    if ( bTracingEnabled )
    {
      v30 = v45 ? *((_QWORD *)v45 + 4) : 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppp(v28, &EventOpenSyncObject, v29, v30, LODWORD(v40[0]), v17);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
    if ( v38[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
    if ( a2 && (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *)MmUserProbeAddress;
    *(_OWORD *)&v4->hNtHandle = *(_OWORD *)Handle;
    *(_OWORD *)&v4->hSyncObject = *(_OWORD *)v40;
    *(_OWORD *)&v4->Reserved[1] = *(_OWORD *)v41;
    *(_OWORD *)&v4->Reserved[3] = v42;
    *(_OWORD *)&v4->Reserved[5] = v43;
    v4->Reserved[7] = v44;
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
    v31 = (LODWORD(v40[0]) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v31 < *((_DWORD *)Current + 62) )
    {
      v32 = *((_QWORD *)Current + 29);
      if ( ((LODWORD(v40[0]) >> 25) & 0x60) == (*(_BYTE *)(v32 + 16 * v31 + 8) & 0x60)
        && (*(_DWORD *)(v32 + 16 * v31 + 8) & 0x1F) != 0 )
      {
        v20 = 2 * (((unsigned __int64)v40[0] >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v32 + 16 * (((unsigned __int64)v40[0] >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          v33 = WdLogNewEntry5_WdAssertion((LODWORD(v40[0]) >> 25) & 0x60);
          *(_QWORD *)(v33 + 24) = 215LL;
          WdLogEvent5_WdAssertion(v33);
          v32 = *((_QWORD *)Current + 29);
        }
        *(_DWORD *)(v32 + 8 * v20 + 8) &= ~0x2000u;
        LODWORD(v20) = v53;
      }
    }
    *((_QWORD *)Current + 27) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( v48 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v47);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
    if ( v38[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
  }
  ObfDereferenceObject(Object);
LABEL_61:
  if ( v54 )
  {
LABEL_62:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
  }
LABEL_64:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v34, &EventProfilerExit, v35, v36);
  return (unsigned int)v20;
}
