/*
 * XREFs of DxgkQueryResourceInfoFromNtHandle @ 0x1C009C690
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
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00C25BC (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkQueryResourceInfoFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  _OWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGDEVICE *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  HANDLE v28; // r15
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  PVOID v34; // r12
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  int Resource; // esi
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // [rsp+30h] [rbp-D8h] BYREF
  char v43; // [rsp+38h] [rbp-D0h]
  PVOID Object; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v46; // [rsp+58h] [rbp-B0h]
  __int64 v47; // [rsp+68h] [rbp-A0h]
  PVOID v48; // [rsp+70h] [rbp-98h]
  _BYTE v49[136]; // [rsp+80h] [rbp-88h] BYREF
  struct DXGDEVICE *v50; // [rsp+120h] [rbp+18h] BYREF
  struct DXGDEVICE *v51; // [rsp+128h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2073);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v10 = qword_1C006E790;
    v11 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  v13 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v13;
  v46 = v13[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v50, LODWORD(Handle[0]), Current, &v51);
  v16 = v51;
  if ( !v51 )
  {
    v17 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v17 + 24) = LODWORD(Handle[0]);
    v8 = -1073741811;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    if ( v50 )
    {
      v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v10 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    }
    v11 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( v11 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v8;
    goto LABEL_8;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v42, v51);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, (__int64)v16, 0LL, v18, 0);
  v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v49);
  v24 = v19;
  if ( v19 < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    *(_QWORD *)(v25 + 24) = v16;
    *(_QWORD *)(v25 + 32) = v24;
    WdLogEvent5_WdWarning(v25);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
    v27 = v42;
    if ( v42 && v43 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v42 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v50 )
    {
      v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v27 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    }
    if ( (qword_1C006E790 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return (unsigned int)v24;
    goto LABEL_26;
  }
  v28 = Handle[1];
  v29 = ObReferenceObjectByHandle(Handle[1], 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v24 = v29;
  v34 = Object;
  v48 = Object;
  if ( v29 == -1073741788 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
    v35[3] = v16;
    v35[4] = v28;
    v8 = -1073741788;
    v35[5] = -1073741788LL;
    WdLogEvent5_WdWarning(v35);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
    if ( v42 && v43 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v42 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    v10 = qword_1C006E790;
    if ( (qword_1C006E790 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v8;
LABEL_8:
    Template_q(v10, &EventProfilerExit, v9, 2073);
    return v8;
  }
  if ( v29 < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
    v36[3] = v16;
    v36[4] = v28;
    v36[5] = v24;
    WdLogEvent5_WdWarning(v36);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
    v27 = v42;
    if ( v42 && v43 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v42 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v50 )
    {
      v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v27 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    }
    if ( (qword_1C006E790 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return (unsigned int)v24;
LABEL_26:
    Template_q(v27, &EventProfilerExit, v26, 2073);
    return (unsigned int)v24;
  }
  Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(v16, Handle, v32, Object);
  ObfDereferenceObject(v34);
  if ( Resource >= 0 )
  {
    if ( a1 + 40 > MmUserProbeAddress || a1 + 40 <= a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a1 = *(_OWORD *)Handle;
    *(_OWORD *)(a1 + 16) = v46;
    *(_QWORD *)(a1 + 32) = v47;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
    v41 = v42;
    if ( v42 && v43 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v42 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v50 )
    {
      v41 = _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v41 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    }
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v41, &EventProfilerExit, v40, 2073);
    return 0LL;
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
    v39 = v42;
    if ( v42 && v43 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v42 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v50 )
    {
      v39 = _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v39 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    }
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v39, &EventProfilerExit, v38, 2073);
    return (unsigned int)Resource;
  }
}
