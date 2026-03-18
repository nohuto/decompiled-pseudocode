/*
 * XREFs of DxgkGetResourcePresentPrivateDriverData @ 0x1C016C550
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C001A4C8 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0023A00 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x1C002C0AC (-GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedB.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C009631C (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkGetResourcePresentPrivateDriverData(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct CRefCountedBuffer *v3; // r14
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rcx
  struct _KTHREAD **v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGRESOURCE **ResourceSafe; // rax
  __int64 v15; // rcx
  struct _EX_RUNDOWN_REF *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  struct DXGDEVICE *v20; // r13
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  KSPIN_LOCK *v31; // rcx
  __int64 v32; // rax
  size_t v33; // r8
  _DWORD *v34; // rdx
  void *v35; // rcx
  int v36; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+38h] [rbp-C0h]
  struct CRefCountedBuffer *v38; // [rsp+40h] [rbp-B8h] BYREF
  size_t Size[2]; // [rsp+48h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v40; // [rsp+58h] [rbp-A0h] BYREF
  struct DXGDEVICE *v41; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v42[136]; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v44; // [rsp+108h] [rbp+10h]
  struct DXGDEVICE *v45; // [rsp+110h] [rbp+18h] BYREF
  struct _EX_RUNDOWN_REF *v46; // [rsp+118h] [rbp+20h] BYREF

  v3 = 0LL;
  v38 = 0LL;
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Size = *v4;
  v37 = 0LL;
  v36 = 2123;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(MmUserProbeAddress, &EventProfilerEnter, a3, 2123);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 2123);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v9 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_8:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, v36);
    return 3221225485LL;
  }
  v46 = 0LL;
  ResourceSafe = (struct DXGRESOURCE **)DXGPROCESS::GetResourceSafe(
                                          (__int64)Current,
                                          (DXGRESOURCEREFERENCE *)&v40,
                                          Size[0]);
  DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v46, ResourceSafe);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v40);
  v16 = v46;
  if ( !v46 )
  {
    v17 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v17 + 24) = LODWORD(Size[0]);
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
LABEL_14:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v46);
    goto LABEL_8;
  }
  v44 = *(_DWORD *)(v46[1].Count + 332);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v45, v44, v9, &v41);
  v20 = v41;
  if ( !v41 )
  {
    v21 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v21 + 24) = v44;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
LABEL_17:
    if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    goto LABEL_14;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v41, 0, v19, 0);
  v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42);
  v26 = v22;
  if ( v22 >= 0 )
  {
    if ( (HIDWORD(v16->Ptr) & 1) == 0 )
    {
      v30 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v30 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v30);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
      goto LABEL_17;
    }
    v31 = *(KSPIN_LOCK **)(v16[7].Count + 168);
    if ( v31 )
    {
      LODWORD(v26) = GetPresentPrivateDriverDataFromResource(
                       v31,
                       (KSPIN_LOCK *)&v38,
                       (struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *)Size);
      v3 = v38;
      v33 = HIDWORD(Size[0]);
    }
    else
    {
      v32 = WdLogNewEntry5_WdWarning(0LL, v23, v25);
      *(_QWORD *)(v32 + 24) = 0LL;
      *(_QWORD *)(v32 + 32) = 12855LL;
      WdLogEvent5_WdWarning(v32);
      v33 = 0LL;
      HIDWORD(Size[0]) = 0;
    }
    v34 = (_DWORD *)(a1 + 4);
    if ( a1 + 4 >= MmUserProbeAddress )
      v34 = (_DWORD *)MmUserProbeAddress;
    *v34 = v33;
    if ( (_DWORD)v33 && v3 )
    {
      v35 = (void *)Size[1];
      if ( v33 + Size[1] > MmUserProbeAddress || v33 + Size[1] <= Size[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v35, (char *)v3 + 8, v33);
    }
    if ( v3 )
      CRefCountedBuffer::RefCountedBufferRelease(v3);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
    if ( v45 )
      goto LABEL_22;
  }
  else
  {
    v27 = WdLogNewEntry5_WdEvent(v24, v23);
    *(_QWORD *)(v27 + 24) = v26;
    *(_QWORD *)(v27 + 32) = v20;
    WdLogEvent5_WdEvent(v27);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
    if ( v45 )
    {
LABEL_22:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    }
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v46);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v36);
  return (unsigned int)v26;
}
