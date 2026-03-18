/*
 * XREFs of ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C019FE1C
 * Callers:
 *     DxgkPresent @ 0x1C008FA90 (DxgkPresent.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002034 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall PreIndirectPresentReadAllocationInfo(
        struct DXGPROCESS *a1,
        const struct _D3DKMT_PRESENT *a2,
        struct INDIRECT_RESOURCE_INFO *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGCONTEXT *v10; // r14
  __int64 v11; // rdi
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  D3DKMT_HANDLE hSource; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // rcx
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v33; // [rsp+30h] [rbp-79h] BYREF
  char v34; // [rsp+38h] [rbp-71h]
  _BYTE v35[16]; // [rsp+40h] [rbp-69h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v36; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v37[8]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v38[32]; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v39[56]; // [rsp+A8h] [rbp-1h] BYREF
  struct DXGCONTEXT *v40; // [rsp+118h] [rbp+6Fh] BYREF
  struct _EX_RUNDOWN_REF *v41; // [rsp+128h] [rbp+7Fh] BYREF

  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v35, a2->hAdapter, a1, &v40, 0);
  v10 = v40;
  if ( !v40 )
  {
    LODWORD(v11) = -1073741811;
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    v12[3] = -1073741811LL;
    v12[4] = PsGetCurrentProcess(v13);
    v12[5] = a2->hAdapter;
    WdLogEvent5_WdWarning(v12);
    goto LABEL_21;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)&v33,
    *((struct DXGDEVICE **)v40 + 2));
  v40 = 0LL;
  hSource = a2->hSource;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 168));
  v15 = (hSource >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *((_DWORD *)a1 + 52)
    && (v16 = *((_QWORD *)a1 + 24),
        v17 = *(_DWORD *)(v16 + 16LL * (unsigned int)v15 + 8),
        ((hSource >> 26) & 0x30) == (*(_BYTE *)(v16 + 16LL * (unsigned int)v15 + 8) & 0x30))
    && (v17 & 0x1000) == 0
    && (v17 & 0xF) != 0
    && (v18 = 2 * v15, (*(_BYTE *)(v16 + 8 * v18 + 8) & 0xF) == 5) )
  {
    v19 = *(struct _EX_RUNDOWN_REF **)(v16 + 8 * v18);
  }
  else
  {
    v19 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v41, v19);
  ExReleasePushLockSharedEx((char *)a1 + 168, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign(&v40, (struct DXGALLOCATION **)&v41);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v41, v20, v21, v22);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, *((_QWORD *)v10 + 2), 0LL, v23, 0);
  v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v37);
  v11 = v24;
  if ( v24 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v26, v25);
    *(_QWORD *)(v27 + 24) = v11;
LABEL_17:
    WdLogEvent5_WdError(v27);
    goto LABEL_18;
  }
  if ( !v40
    || (v25 = *((_QWORD *)v40 + 1)) == 0
    || (v26 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL), *(_QWORD *)(v25 + 16) != v26) )
  {
    v27 = WdLogNewEntry5_WdError(v26, v25);
    LODWORD(v11) = -1073741811;
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    *(_QWORD *)(v27 + 32) = a2->hSource;
    goto LABEL_17;
  }
  memset(&v36, 0, sizeof(v36));
  v36.hAllocation = *(HANDLE *)(*((_QWORD *)v40 + 6) + 16LL);
  LODWORD(v11) = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v10 + 2) + 16LL), &v36, v28);
  *(_DWORD *)a3 = v36.Width;
  *((_DWORD *)a3 + 1) = v36.Height;
  *((_DWORD *)a3 + 2) = v36.Format;
LABEL_18:
  COREACCESS::~COREACCESS((COREACCESS *)v39);
  COREACCESS::~COREACCESS((COREACCESS *)v38);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v40, v29, v30, v31);
  if ( v33 && v34 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v33 + 104));
    KeLeaveCriticalRegion();
  }
LABEL_21:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v35);
  return (unsigned int)v11;
}
