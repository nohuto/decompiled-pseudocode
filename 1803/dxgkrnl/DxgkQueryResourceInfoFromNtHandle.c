/*
 * XREFs of DxgkQueryResourceInfoFromNtHandle @ 0x1C00ABF30
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
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00E9F40 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 */

__int64 __fastcall DxgkQueryResourceInfoFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v6; // rax
  int Resource; // edi
  __int64 v8; // rcx
  __int64 v9; // r8
  _OWORD *v11; // rax
  __int64 v12; // rcx
  struct DXGDEVICE *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r14
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  HANDLE v24; // r15
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+38h] [rbp-D0h]
  __int64 v34; // [rsp+40h] [rbp-C8h] BYREF
  char v35; // [rsp+48h] [rbp-C0h]
  HANDLE Handle[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+60h] [rbp-A8h]
  __int64 v38; // [rsp+70h] [rbp-98h]
  _BYTE v39[136]; // [rsp+80h] [rbp-88h] BYREF
  struct DXGDEVICE *v40; // [rsp+118h] [rbp+10h] BYREF
  PVOID Object; // [rsp+120h] [rbp+18h] BYREF
  struct DXGDEVICE *v42; // [rsp+128h] [rbp+20h] BYREF

  v33 = 0LL;
  v32 = 2073;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2073);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2073);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    Resource = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v8, &EventProfilerExit, v9, v32);
    return (unsigned int)Resource;
  }
  v11 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v11;
  v37 = v11[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40, (unsigned int)Handle[0], Current, &v42);
  v13 = v42;
  if ( !v42 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = LODWORD(Handle[0]);
    Resource = -1073741811;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_14:
    if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v34, v42);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, (__int64)v13, 0, v15, 0);
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v39);
  v20 = v16;
  if ( v16 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v21[4] = v20;
    goto LABEL_19;
  }
  v24 = Handle[1];
  v25 = ObReferenceObjectByHandle(Handle[1], 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v20 = v25;
  if ( v25 == -1073741788 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
    v29[3] = v13;
    v29[4] = v24;
    Resource = -1073741788;
    v29[5] = -1073741788LL;
    WdLogEvent5_WdWarning(v29);
    goto LABEL_31;
  }
  if ( v25 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
    v21[4] = v24;
    v21[5] = v20;
LABEL_19:
    v21[3] = v13;
    WdLogEvent5_WdWarning(v21);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
    if ( v34 && v35 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v34 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v22, &EventProfilerExit, v23, v32);
    return (unsigned int)v20;
  }
  Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(v13, Handle, v28, Object);
  ObfDereferenceObject(Object);
  if ( Resource < 0 )
  {
LABEL_31:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
    if ( v34 && v35 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v34 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_14;
  }
  if ( a1 + 40 > MmUserProbeAddress || a1 + 40 <= a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)a1 = *(_OWORD *)Handle;
  *(_OWORD *)(a1 + 16) = v37;
  *(_QWORD *)(a1 + 32) = v38;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
  if ( v34 && v35 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v34 + 104));
    KeLeaveCriticalRegion();
  }
  if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v32);
  return 0LL;
}
