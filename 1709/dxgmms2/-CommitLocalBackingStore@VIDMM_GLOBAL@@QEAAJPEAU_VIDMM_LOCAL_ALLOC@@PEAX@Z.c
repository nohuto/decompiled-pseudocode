/*
 * XREFs of ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C00588C4
 * Callers:
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C005EEF8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0061210 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitLocalBackingStore(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        unsigned __int64 a3)
{
  VIDMM_GLOBAL *v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r13
  int v9; // r8d
  _DWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v15; // al
  void *v16; // rcx
  NTSTATUS inserted; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  void **v20; // rbx
  struct _OBJECT_TYPE *ObjectType; // rax
  _QWORD *v22; // rbx
  __int64 CurrentProcess; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+50h] [rbp-38h] BYREF
  __int64 v33; // [rsp+58h] [rbp-30h]
  unsigned __int64 v34; // [rsp+A8h] [rbp+20h] BYREF

  v5 = this;
  LODWORD(v6) = 0;
  v34 = 0LL;
  v7 = *(_QWORD *)a2;
  v8 = *((_QWORD *)a2 + 1);
  v9 = *(_DWORD *)(*(_QWORD *)a2 + 80LL);
  if ( (v9 & 0x1000) != 0 )
  {
    v34 = *(_QWORD *)(v7 + 528);
    goto LABEL_8;
  }
  v10 = *(_DWORD **)(v7 + 504);
  if ( (v9 & 0x10000) != 0 )
  {
    if ( (*v10 & 0x400000) == 0 )
    {
      v15 = *(_BYTE *)(v7 + 88);
      v16 = *(void **)(v7 + 360);
      if ( (v15 & 1) != 0 )
      {
        *(_BYTE *)(v7 + 88) = v15 & 0xFE;
        inserted = ObInsertObject(v16, 0LL, 0, 0, 0LL, (PHANDLE)a2 + 12);
      }
      else
      {
        v20 = (void **)((char *)a2 + 96);
        ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(v16);
        inserted = ObOpenObjectByPointer(*(PVOID *)(v7 + 360), 0, 0LL, 0, ObjectType, 1, v20);
      }
      v6 = inserted;
      if ( inserted < 0 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v19, v18);
        *(_QWORD *)(v28 + 24) = *(_QWORD *)(v7 + 360);
        *(_QWORD *)(v28 + 32) = v6;
        WdLogEvent5_WdAssertion(v28);
        return (unsigned int)v6;
      }
    }
    if ( (*(_DWORD *)(v7 + 80) & 0x80u) != 0 )
    {
      v32 = 0LL;
      v22 = (_QWORD *)(v7 + 8);
      if ( (**(_DWORD **)(v7 + 504) & 4) != 0 )
      {
        CurrentProcess = PsGetCurrentProcess();
        v24 = MmMapViewOfSection(*(_QWORD *)(v7 + 360), CurrentProcess, &v34, 0LL, *v22, &v32, v7 + 8, 2, 0, 4);
      }
      else
      {
        v27 = PsGetCurrentProcess();
        v24 = MmMapViewOfSection(*(_QWORD *)(v7 + 360), v27, &v34, 0LL, *v22, &v32, v7 + 8, 2, 0, 1028);
      }
      LODWORD(v6) = v24;
      if ( v24 < 0 )
      {
        _InterlockedIncrement(&dword_1C004057C);
        v29 = (_QWORD *)WdLogNewEntry5_WdLowResource(v26, v25);
        v29[3] = v7;
        v29[4] = PsGetCurrentProcess();
        v29[5] = (int)v6;
        WdLogEvent5_WdLowResource(v29);
        return (unsigned int)v6;
      }
    }
LABEL_8:
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16)
                                                        + 8LL * *(unsigned int *)(*((_QWORD *)v5 + 3) + 200LL))
                                            + 48LL)
                                + 296LL * (*(_DWORD *)(v7 + 76) & 0x3F)
                                + 224),
      *(_QWORD *)(v7 + 8));
    *((_QWORD *)a2 + 2) = v34;
    return (unsigned int)v6;
  }
  v11 = (unsigned int)*v10;
  if ( (v11 & 8) != 0 )
    goto LABEL_8;
  if ( (v11 & 0x10) != 0 )
  {
    if ( (v9 & 0x800) == 0 )
    {
      if ( a3 != (a3 & 0xFFFFFFFFFFFFF000uLL)
        || (this = *(VIDMM_GLOBAL **)v7, *(_QWORD *)v7 != (*(_QWORD *)v7 & 0xFFFFFFFFFFFFF000uLL)) )
      {
        v30 = WdLogNewEntry5_WdAssertion(this, -4096LL);
        *(_QWORD *)(v30 + 24) = 27130LL;
        goto LABEL_30;
      }
      ProbeForWrite((volatile void *)a3, *(_QWORD *)(v7 + 8), 1u);
    }
LABEL_35:
    v34 = a3;
    goto LABEL_8;
  }
  if ( (v11 & 0x20) == 0 )
  {
    v33 = 0LL;
    LODWORD(v6) = _guard_dispatch_icall_fptr();
    if ( (int)v6 < 0 )
    {
      _InterlockedIncrement(&dword_1C0040604);
      v31 = WdLogNewEntry5_WdLowResource(v13, v12);
      *(_QWORD *)(v31 + 24) = 27272LL;
      WdLogEvent5_WdLowResource(v31);
    }
    else
    {
      *((_QWORD *)a2 + 3) = v33;
    }
    goto LABEL_8;
  }
  if ( a3 < MmUserProbeAddress )
  {
    v30 = WdLogNewEntry5_WdAssertion(this, v11);
    *(_QWORD *)(v30 + 24) = 27175LL;
    goto LABEL_30;
  }
  if ( a3 == (a3 & 0xFFFFFFFFFFFFF000uLL) )
  {
    this = *(VIDMM_GLOBAL **)v7;
    if ( *(_QWORD *)v7 == (*(_QWORD *)v7 & 0xFFFFFFFFFFFFF000uLL) )
      goto LABEL_35;
  }
  v30 = WdLogNewEntry5_WdAssertion(this, -4096LL);
  *(_QWORD *)(v30 + 24) = 27188LL;
LABEL_30:
  WdLogEvent5_WdAssertion(v30);
  return 3221225485LL;
}
