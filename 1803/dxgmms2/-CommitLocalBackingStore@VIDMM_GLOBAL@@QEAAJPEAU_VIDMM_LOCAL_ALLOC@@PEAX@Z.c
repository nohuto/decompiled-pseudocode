/*
 * XREFs of ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C006C384
 * Callers:
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00634E8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00655F0 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitLocalBackingStore(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  VIDMM_GLOBAL *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v14; // al
  void *v15; // rcx
  NTSTATUS inserted; // eax
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 CurrentProcess; // rax
  int v21; // eax
  __int64 v22; // rcx
  struct _OBJECT_TYPE *ObjectType; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp+60h] [rbp-48h] BYREF
  __int64 v34; // [rsp+68h] [rbp-40h]
  __int64 v35; // [rsp+70h] [rbp-38h]
  unsigned __int64 v36; // [rsp+C8h] [rbp+20h] BYREF

  v6 = this;
  LODWORD(v7) = 0;
  v36 = 0LL;
  v8 = *(_QWORD *)a2;
  v9 = *((_QWORD *)a2 + 1);
  v10 = *(unsigned int *)(*(_QWORD *)a2 + 80LL);
  if ( (v10 & 0x1000) != 0 )
  {
    v36 = *(_QWORD *)(v8 + 528);
    goto LABEL_9;
  }
  v11 = **(unsigned int **)(v8 + 504);
  if ( (v10 & 0x20000) != 0 )
  {
    if ( (v11 & 0x400000) == 0 )
    {
      v14 = *(_BYTE *)(v8 + 88);
      v15 = *(void **)(v8 + 360);
      if ( (v14 & 1) != 0 )
      {
        *(_BYTE *)(v8 + 88) = v14 & 0xFE;
        inserted = ObInsertObject(v15, 0LL, 0, 0, 0LL, (PHANDLE)a2 + 12);
      }
      else
      {
        ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(v15);
        inserted = ObOpenObjectByPointer(*(PVOID *)(v8 + 360), 0, 0LL, 0, ObjectType, 1, (PHANDLE)a2 + 12);
      }
      v7 = inserted;
      if ( inserted < 0 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v17, v11);
        *(_QWORD *)(v24 + 24) = *(_QWORD *)(v8 + 360);
        *(_QWORD *)(v24 + 32) = v7;
        WdLogEvent5_WdAssertion(v24);
        return (unsigned int)v7;
      }
    }
    if ( (*(_DWORD *)(v8 + 80) & 0x80u) != 0 )
    {
      v33 = 0LL;
      v18 = *(_QWORD *)(v8 + 8);
      v19 = **(unsigned int **)(v8 + 504);
      if ( (v19 & 4) != 0 )
      {
        CurrentProcess = PsGetCurrentProcess(v19, v11, v10, a4);
        v21 = MmMapViewOfSection(*(_QWORD *)(v8 + 360), CurrentProcess, &v36, 0LL, v18, &v33, v8 + 8, 2, 0, 4);
      }
      else
      {
        v25 = PsGetCurrentProcess(v19, v11, v10, a4);
        v21 = MmMapViewOfSection(*(_QWORD *)(v8 + 360), v25, &v36, 0LL, v18, &v33, v8 + 8, 2, 0, 1028);
      }
      LODWORD(v7) = v21;
      if ( v21 < 0 )
      {
        _InterlockedIncrement(&dword_1C004757C);
        v26 = (_QWORD *)WdLogNewEntry5_WdLowResource(v22);
        v26[3] = v8;
        v26[4] = PsGetCurrentProcess(v28, v27, v29, v30);
        v26[5] = (int)v7;
        WdLogEvent5_WdLowResource(v26);
        return (unsigned int)v7;
      }
    }
LABEL_9:
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 16)
                                                        + 8LL * *(unsigned int *)(*((_QWORD *)v6 + 3) + 200LL))
                                            + 48LL)
                                + 296LL * (*(_DWORD *)(v8 + 76) & 0x3F)
                                + 224),
      *(_QWORD *)(v8 + 8));
    *((_QWORD *)a2 + 2) = v36;
    return (unsigned int)v7;
  }
  if ( (v11 & 8) != 0 )
    goto LABEL_9;
  if ( (v11 & 0x10) != 0 )
  {
    if ( (v10 & 0x800) == 0 )
    {
      if ( a3 != (a3 & 0xFFFFFFFFFFFFF000uLL)
        || (this = *(VIDMM_GLOBAL **)v8, *(_QWORD *)v8 != (*(_QWORD *)v8 & 0xFFFFFFFFFFFFF000uLL)) )
      {
        v31 = WdLogNewEntry5_WdAssertion(this, -4096LL);
        *(_QWORD *)(v31 + 24) = 27517LL;
        goto LABEL_30;
      }
      ProbeForWrite((volatile void *)a3, *(_QWORD *)(v8 + 8), 1u);
    }
LABEL_35:
    v36 = a3;
    goto LABEL_9;
  }
  if ( (v11 & 0x20) == 0 )
  {
    v34 = 0LL;
    v35 = 0LL;
    LODWORD(v7) = _guard_dispatch_icall_fptr();
    if ( (int)v7 < 0 )
    {
      _InterlockedIncrement(&dword_1C0047604);
      v32 = WdLogNewEntry5_WdLowResource(v12);
      *(_QWORD *)(v32 + 24) = 27671LL;
      WdLogEvent5_WdLowResource(v32);
    }
    else
    {
      *((_QWORD *)a2 + 3) = v34;
      if ( (*(_DWORD *)(v8 + 80) & 0x2000) != 0 )
        *(_QWORD *)(v8 + 528) = v35;
    }
    goto LABEL_9;
  }
  if ( a3 < MmUserProbeAddress )
  {
    v31 = WdLogNewEntry5_WdAssertion(this, v11);
    *(_QWORD *)(v31 + 24) = 27562LL;
    goto LABEL_30;
  }
  if ( a3 == (a3 & 0xFFFFFFFFFFFFF000uLL) )
  {
    this = *(VIDMM_GLOBAL **)v8;
    if ( *(_QWORD *)v8 == (*(_QWORD *)v8 & 0xFFFFFFFFFFFFF000uLL) )
      goto LABEL_35;
  }
  v31 = WdLogNewEntry5_WdAssertion(this, -4096LL);
  *(_QWORD *)(v31 + 24) = 27575LL;
LABEL_30:
  WdLogEvent5_WdAssertion(v31);
  return 3221225485LL;
}
