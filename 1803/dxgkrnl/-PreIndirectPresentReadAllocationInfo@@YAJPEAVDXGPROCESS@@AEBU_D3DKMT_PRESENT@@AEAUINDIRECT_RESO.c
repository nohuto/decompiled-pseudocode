/*
 * XREFs of ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C01B2984
 * Callers:
 *     DxgkPresent @ 0x1C00C8F20 (DxgkPresent.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002694 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall PreIndirectPresentReadAllocationInfo(
        struct _KTHREAD **a1,
        const struct _D3DKMT_PRESENT *a2,
        struct INDIRECT_RESOURCE_INFO *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGCONTEXT *v9; // r14
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  D3DKMT_HANDLE hSource; // edi
  __int64 v15; // rax
  struct _KTHREAD *v16; // r8
  int v17; // ecx
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v26; // [rsp+30h] [rbp-79h] BYREF
  char v27; // [rsp+38h] [rbp-71h]
  _BYTE v28[16]; // [rsp+40h] [rbp-69h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v29; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v30[8]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v31[32]; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v32[56]; // [rsp+A8h] [rbp-1h] BYREF
  struct DXGCONTEXT *v33; // [rsp+118h] [rbp+6Fh] BYREF
  struct _EX_RUNDOWN_REF *v34; // [rsp+128h] [rbp+7Fh] BYREF

  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v28, a2->hAdapter, a1, &v33, 0);
  v9 = v33;
  if ( !v33 )
  {
    LODWORD(v10) = -1073741811;
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8);
    v11[3] = -1073741811LL;
    v11[4] = PsGetCurrentProcess(v13, v12);
    v11[5] = a2->hAdapter;
    WdLogEvent5_WdWarning(v11);
    goto LABEL_20;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)&v26,
    *((struct DXGDEVICE **)v33 + 2));
  v33 = 0LL;
  hSource = a2->hSource;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 26));
  v15 = (hSource >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *((_DWORD *)a1 + 62)
    && (v16 = a1[29],
        v17 = *((_DWORD *)v16 + 4 * v15 + 2),
        ((hSource >> 25) & 0x60) == (*((_BYTE *)v16 + 16 * v15 + 8) & 0x60))
    && (v17 & 0x2000) == 0
    && (v17 & 0x1F) == 5 )
  {
    v18 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v16 + 2 * (unsigned int)v15);
  }
  else
  {
    v18 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v34, v18);
  ExReleasePushLockSharedEx(a1 + 26, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign(&v33, (struct DXGALLOCATION **)&v34);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v34);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, *((_QWORD *)v9 + 2), 0, v19, 0);
  v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30);
  v10 = v20;
  if ( v20 < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v22 + 24) = v10;
LABEL_16:
    WdLogEvent5_WdError(v22);
    goto LABEL_17;
  }
  if ( !v33
    || (v23 = *((_QWORD *)v33 + 1)) == 0
    || (v21 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL), *(_QWORD *)(v23 + 16) != v21) )
  {
    v22 = WdLogNewEntry5_WdError(v21);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    *(_QWORD *)(v22 + 32) = a2->hSource;
    goto LABEL_16;
  }
  memset(&v29, 0, sizeof(v29));
  v29.hAllocation = *(HANDLE *)(*((_QWORD *)v33 + 6) + 16LL);
  LODWORD(v10) = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v9 + 2) + 16LL), &v29, v24);
  *(_DWORD *)a3 = v29.Width;
  *((_DWORD *)a3 + 1) = v29.Height;
  *((_DWORD *)a3 + 2) = v29.Format;
LABEL_17:
  COREACCESS::~COREACCESS((COREACCESS *)v32);
  COREACCESS::~COREACCESS((COREACCESS *)v31);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v33);
  if ( v26 && v27 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v26 + 104));
    KeLeaveCriticalRegion();
  }
LABEL_20:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v28);
  return (unsigned int)v10;
}
