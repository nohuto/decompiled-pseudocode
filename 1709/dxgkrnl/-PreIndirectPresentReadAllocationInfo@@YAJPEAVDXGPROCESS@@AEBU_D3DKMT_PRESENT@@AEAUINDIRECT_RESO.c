/*
 * XREFs of ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C01B6B50
 * Callers:
 *     DxgkPresent @ 0x1C00BD0B0 (DxgkPresent.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000E3DC (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00833BC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall PreIndirectPresentReadAllocationInfo(
        struct DXGPROCESS *a1,
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
  D3DKMT_HANDLE hSource; // ebx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // edx
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v26; // [rsp+30h] [rbp-79h] BYREF
  _BYTE v27[16]; // [rsp+38h] [rbp-71h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v28; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v29[8]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v30[32]; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v31[56]; // [rsp+A8h] [rbp-1h] BYREF
  struct DXGCONTEXT *v32; // [rsp+118h] [rbp+6Fh] BYREF
  struct _EX_RUNDOWN_REF *v33; // [rsp+128h] [rbp+7Fh] BYREF

  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27, a2->hAdapter, a1, &v32, 0);
  v9 = v32;
  if ( !v32 )
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
    *((struct DXGDEVICE **)v32 + 2));
  v32 = 0LL;
  hSource = a2->hSource;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 200));
  v15 = (hSource >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *((_DWORD *)a1 + 60)
    && (v16 = *((_QWORD *)a1 + 28),
        v17 = *(_DWORD *)(v16 + 16 * v15 + 8),
        ((hSource >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60))
    && (v17 & 0x2000) == 0
    && (v17 & 0x1F) != 0
    && (*(_BYTE *)(v16 + 16LL * (unsigned int)v15 + 8) & 0x1F) == 5 )
  {
    v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * (unsigned int)v15);
  }
  else
  {
    v18 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v33, v18);
  ExReleasePushLockSharedEx((char *)a1 + 200, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign(&v32, (struct DXGALLOCATION **)&v33);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v33);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v29, *((_QWORD *)v9 + 2), 0, v19, 0);
  v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v29);
  v10 = v20;
  if ( v20 >= 0 )
  {
    if ( v32 )
    {
      v23 = *((_QWORD *)v32 + 1);
      if ( v23 )
      {
        v21 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
        if ( *(_QWORD *)(v23 + 16) == v21 )
        {
          memset(&v28, 0, sizeof(v28));
          v28.hAllocation = *(HANDLE *)(*((_QWORD *)v32 + 6) + 16LL);
          LODWORD(v10) = ADAPTER_RENDER::DdiDescribeAllocation(
                           *(ADAPTER_RENDER **)(*((_QWORD *)v9 + 2) + 16LL),
                           &v28,
                           v24);
          *(_DWORD *)a3 = v28.Width;
          *((_DWORD *)a3 + 1) = v28.Height;
          *((_DWORD *)a3 + 2) = v28.Format;
          goto LABEL_18;
        }
      }
    }
    v22 = WdLogNewEntry5_WdError(v21);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    *(_QWORD *)(v22 + 32) = a2->hSource;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v22 + 24) = v10;
  }
  WdLogEvent5_WdError(v22);
LABEL_18:
  COREACCESS::~COREACCESS((COREACCESS *)v31);
  COREACCESS::~COREACCESS((COREACCESS *)v30);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v32);
  if ( v26 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v26 + 104));
    KeLeaveCriticalRegion();
  }
LABEL_20:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27);
  return (unsigned int)v10;
}
