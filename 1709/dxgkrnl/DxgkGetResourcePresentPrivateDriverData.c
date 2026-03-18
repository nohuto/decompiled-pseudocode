/*
 * XREFs of DxgkGetResourcePresentPrivateDriverData @ 0x1C01843F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0014504 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D458 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x1C0023F18 (-GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedB.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0079A14 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetResourcePresentPrivateDriverData(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdx
  struct CRefCountedBuffer *v4; // r14
  ULONG64 v5; // rcx
  _OWORD *v6; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rcx
  struct _KTHREAD **v9; // r12
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  struct DXGRESOURCE **ResourceSafe; // rax
  __int64 v16; // rcx
  struct _EX_RUNDOWN_REF *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  struct DXGDEVICE *v21; // r13
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r12
  __int64 v29; // rax
  bool v30; // zf
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  KSPIN_LOCK *v34; // rcx
  __int64 v35; // rax
  size_t v36; // r8
  _DWORD *v37; // rdx
  void *v38; // rcx
  struct CRefCountedBuffer *v39; // [rsp+30h] [rbp-B8h] BYREF
  size_t Size[2]; // [rsp+38h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v41; // [rsp+48h] [rbp-A0h] BYREF
  struct DXGDEVICE *v42; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v43[136]; // [rsp+60h] [rbp-88h] BYREF
  unsigned int v45; // [rsp+F8h] [rbp+10h]
  struct DXGDEVICE *v46; // [rsp+100h] [rbp+18h] BYREF
  struct _EX_RUNDOWN_REF *v47; // [rsp+108h] [rbp+20h] BYREF

  v3 = a1;
  v4 = 0LL;
  v39 = 0LL;
  v5 = MmUserProbeAddress;
  v6 = (_OWORD *)v3;
  if ( v3 >= MmUserProbeAddress )
    v6 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Size = *v6;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(MmUserProbeAddress, &EventProfilerEnter, a3, 2123);
  Current = DXGPROCESS::GetCurrent(v5, v3);
  v9 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    v12 = qword_1C005F010;
    v13 = (qword_1C005F010 & 2) == 0;
LABEL_8:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v12, &EventProfilerExit, v11, 2123);
    return 3221225485LL;
  }
  v47 = 0LL;
  ResourceSafe = (struct DXGRESOURCE **)DXGPROCESS::GetResourceSafe(
                                          (__int64)Current,
                                          (DXGRESOURCEREFERENCE *)&v41,
                                          Size[0]);
  DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v47, ResourceSafe);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v41);
  v17 = v47;
  if ( !v47 )
  {
    v18 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v18 + 24) = LODWORD(Size[0]);
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
LABEL_14:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v47);
    v13 = (qword_1C005F010 & 2) == 0;
    goto LABEL_8;
  }
  v45 = *(_DWORD *)(v47[1].Count + 332);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v46, v45, v9, &v42);
  v21 = v42;
  if ( !v42 )
  {
    v22 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v22 + 24) = v45;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v22);
LABEL_17:
    if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    goto LABEL_14;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, (__int64)v42, 0, v20, 0);
  v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v43);
  v28 = v23;
  if ( v23 >= 0 )
  {
    if ( (HIDWORD(v17->Ptr) & 1) == 0 )
    {
      v33 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v33 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v33);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
      goto LABEL_17;
    }
    v34 = *(KSPIN_LOCK **)(v17[7].Count + 168);
    if ( v34 )
    {
      LODWORD(v28) = GetPresentPrivateDriverDataFromResource(
                       v34,
                       (KSPIN_LOCK *)&v39,
                       (struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *)Size);
      v4 = v39;
      v36 = HIDWORD(Size[0]);
    }
    else
    {
      v35 = WdLogNewEntry5_WdWarning(0LL, v24, v26);
      *(_QWORD *)(v35 + 24) = 0LL;
      *(_QWORD *)(v35 + 32) = 12650LL;
      WdLogEvent5_WdWarning(v35);
      v36 = 0LL;
      HIDWORD(Size[0]) = 0;
    }
    v37 = (_DWORD *)(a1 + 4);
    if ( a1 + 4 >= MmUserProbeAddress )
      v37 = (_DWORD *)MmUserProbeAddress;
    *v37 = v36;
    if ( (_DWORD)v36 && v4 )
    {
      v38 = (void *)Size[1];
      if ( v36 + Size[1] > MmUserProbeAddress || v36 + Size[1] <= Size[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v38, (char *)v4 + 8, v36);
    }
    if ( v4 )
      CRefCountedBuffer::RefCountedBufferRelease(v4);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
    if ( v46 )
    {
      v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_23:
      if ( v30 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdEvent(v25, v24, v26, v27);
    *(_QWORD *)(v29 + 24) = v28;
    *(_QWORD *)(v29 + 32) = v21;
    WdLogEvent5_WdEvent(v29);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
    if ( v46 )
    {
      v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
      goto LABEL_23;
    }
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v47);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, 2123);
  return (unsigned int)v28;
}
