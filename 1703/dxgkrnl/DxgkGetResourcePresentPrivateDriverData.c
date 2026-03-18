/*
 * XREFs of DxgkGetResourcePresentPrivateDriverData @ 0x1C0180320
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0013770 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x1C00257D8 (-GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedB.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0087220 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkGetResourcePresentPrivateDriverData(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct CRefCountedBuffer *v3; // r13
  _OWORD *v4; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **v8; // r15
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  struct DXGRESOURCE **ResourceSafe; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _EX_RUNDOWN_REF *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  struct DXGDEVICE *v22; // r12
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  KSPIN_LOCK *v34; // rcx
  __int64 v35; // rax
  size_t v36; // r8
  _DWORD *v37; // rdx
  void *v38; // rcx
  struct _EX_RUNDOWN_REF *v39; // [rsp+30h] [rbp-C8h] BYREF
  size_t Size[2]; // [rsp+38h] [rbp-C0h] BYREF
  struct CRefCountedBuffer *v41; // [rsp+48h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v42; // [rsp+50h] [rbp-A8h] BYREF
  struct DXGDEVICE *v43; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v44[152]; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v46; // [rsp+108h] [rbp+10h]
  struct DXGDEVICE *v47; // [rsp+118h] [rbp+20h] BYREF

  v3 = 0LL;
  v41 = 0LL;
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Size = *v4;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2123);
  Current = DXGPROCESS::GetCurrent(a1);
  v8 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    v11 = qword_1C006E790;
    v12 = (qword_1C006E790 & 2) == 0;
LABEL_8:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v11, &EventProfilerExit, v10, 2123);
    return 3221225485LL;
  }
  v39 = 0LL;
  ResourceSafe = (struct DXGRESOURCE **)DXGPROCESS::GetResourceSafe(
                                          (__int64)Current,
                                          (DXGRESOURCEREFERENCE *)&v42,
                                          Size[0]);
  DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v39, ResourceSafe);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v42);
  v17 = v39;
  if ( !v39 )
  {
    v18 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v18 + 24) = LODWORD(Size[0]);
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
LABEL_14:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v39);
    v12 = (qword_1C006E790 & 2) == 0;
    goto LABEL_8;
  }
  v46 = *(_DWORD *)(v39[1].Count + 332);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v47, v46, v8, &v43);
  v22 = v43;
  if ( !v43 )
  {
    v23 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v23 + 24) = v46;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
LABEL_17:
    if ( v47 && _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
    goto LABEL_14;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v43, 0LL, v21, 0);
  v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
  v29 = v24;
  if ( v24 >= 0 )
  {
    if ( (HIDWORD(v17->Ptr) & 1) == 0 )
    {
      v33 = WdLogNewEntry5_WdError(v26, v25);
      *(_QWORD *)(v33 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v33);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
      goto LABEL_17;
    }
    v34 = *(KSPIN_LOCK **)(v17[7].Count + 168);
    if ( v34 )
    {
      LODWORD(v29) = GetPresentPrivateDriverDataFromResource(
                       v34,
                       (UINT **)&v41,
                       (struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *)Size);
      v3 = v41;
      v36 = HIDWORD(Size[0]);
    }
    else
    {
      v35 = WdLogNewEntry5_WdWarning(0LL, v25, v27, v28);
      *(_QWORD *)(v35 + 24) = 0LL;
      *(_QWORD *)(v35 + 32) = 11786LL;
      WdLogEvent5_WdWarning(v35);
      v36 = 0LL;
      HIDWORD(Size[0]) = 0;
    }
    v37 = (_DWORD *)(a1 + 4);
    if ( a1 + 4 >= MmUserProbeAddress )
      v37 = (_DWORD *)MmUserProbeAddress;
    *v37 = v36;
    if ( (_DWORD)v36 && v3 )
    {
      v38 = (void *)Size[1];
      if ( v36 + Size[1] > MmUserProbeAddress || v36 + Size[1] <= Size[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v38, (char *)v3 + 8, v36);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
    if ( v47 )
      goto LABEL_22;
  }
  else
  {
    v30 = WdLogNewEntry5_WdEvent(v26);
    *(_QWORD *)(v30 + 24) = v29;
    *(_QWORD *)(v30 + 32) = v22;
    WdLogEvent5_WdEvent(v30);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
    if ( v47 )
    {
LABEL_22:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
    }
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v39);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v31, &EventProfilerExit, v32, 2123);
  return (unsigned int)v29;
}
