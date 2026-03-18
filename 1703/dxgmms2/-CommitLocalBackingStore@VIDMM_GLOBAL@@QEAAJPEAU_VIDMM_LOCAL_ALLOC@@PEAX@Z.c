/*
 * XREFs of ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0055CCC
 * Callers:
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C005BAD4 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C005E460 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitLocalBackingStore(VIDMM_GLOBAL *this, void **a2, unsigned __int64 a3)
{
  __int64 v6; // rsi
  unsigned int **v7; // rdi
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  char v12; // al
  unsigned int *v13; // rcx
  void **Handle; // rbx
  struct _OBJECT_TYPE *ObjectType; // rax
  NTSTATUS inserted; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  __int64 CurrentProcess; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+50h] [rbp-28h] BYREF
  void *v31; // [rsp+58h] [rbp-20h]
  unsigned __int64 v32; // [rsp+98h] [rbp+20h] BYREF

  LODWORD(v6) = 0;
  v32 = 0LL;
  v7 = (unsigned int **)*a2;
  v8 = *((unsigned int *)*a2 + 20);
  if ( (v8 & 0x2000) != 0 )
  {
    v32 = (unsigned __int64)v7[49];
    goto LABEL_8;
  }
  v9 = *v7[65];
  if ( (v9 & 0x20000000) != 0 )
  {
    if ( (v9 & 0x400000) == 0 )
    {
      v12 = *((_BYTE *)v7 + 88);
      v13 = v7[45];
      if ( (v12 & 1) != 0 )
      {
        *((_BYTE *)v7 + 88) = v12 & 0xFE;
        inserted = ObInsertObject(v13, 0LL, 0, 0, 0LL, a2 + 12);
      }
      else
      {
        Handle = a2 + 12;
        ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(v13, a2, v8, this);
        inserted = ObOpenObjectByPointer(v7[45], 0, 0LL, 0, ObjectType, 1, Handle);
      }
      v6 = inserted;
      if ( inserted < 0 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v18, v17);
        *(_QWORD *)(v25 + 24) = v7[45];
        *(_QWORD *)(v25 + 32) = v6;
        WdLogEvent5_WdAssertion(v25);
        return (unsigned int)v6;
      }
    }
    if ( (*((_DWORD *)v7 + 20) & 0x80u) != 0 )
    {
      v30 = 0LL;
      v19 = *v7[65];
      v20 = v7 + 1;
      if ( (v19 & 4) != 0 )
      {
        CurrentProcess = PsGetCurrentProcess(v19);
        v22 = MmMapViewOfSection(v7[45], CurrentProcess, &v32, 0LL, *v20, &v30, v7 + 1, 2, 0, 4);
      }
      else
      {
        v24 = PsGetCurrentProcess(v19);
        v22 = MmMapViewOfSection(v7[45], v24, &v32, 0LL, *v20, &v30, v7 + 1, 2, 0, 1028);
      }
      LODWORD(v6) = v22;
      if ( v22 < 0 )
      {
        _InterlockedIncrement(&dword_1C003C56C);
        v26 = (_QWORD *)WdLogNewEntry5_WdLowResource(v23);
        v26[3] = v7;
        v26[4] = PsGetCurrentProcess(v27);
        v26[5] = (int)v6;
        WdLogEvent5_WdLowResource(v26);
        return (unsigned int)v6;
      }
    }
LABEL_8:
    a2[2] = (void *)v32;
    return (unsigned int)v6;
  }
  if ( (v9 & 8) != 0 )
    goto LABEL_8;
  if ( (v9 & 0x10) != 0 )
  {
    if ( a3 == (a3 & 0xFFFFFFFFFFFFF000uLL) && *v7 == (unsigned int *)((unsigned __int64)*v7 & 0xFFFFFFFFFFFFF000uLL) )
    {
      ProbeForWrite((volatile void *)a3, (SIZE_T)v7[1], 1u);
LABEL_34:
      v32 = a3;
      goto LABEL_8;
    }
    v28 = WdLogNewEntry5_WdAssertion(this, -4096LL);
    *(_QWORD *)(v28 + 24) = 26032LL;
  }
  else
  {
    if ( (v9 & 0x20) == 0 )
    {
      v31 = 0LL;
      LODWORD(v6) = _guard_dispatch_icall_fptr();
      if ( (int)v6 < 0 )
      {
        _InterlockedIncrement(&dword_1C003C5F4);
        v29 = WdLogNewEntry5_WdLowResource(v10);
        *(_QWORD *)(v29 + 24) = 26173LL;
        WdLogEvent5_WdLowResource(v29);
      }
      else
      {
        a2[3] = v31;
      }
      goto LABEL_8;
    }
    if ( a3 < MmUserProbeAddress )
    {
      v28 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v28 + 24) = 26076LL;
      goto LABEL_29;
    }
    if ( a3 == (a3 & 0xFFFFFFFFFFFFF000uLL) && *v7 == (unsigned int *)((unsigned __int64)*v7 & 0xFFFFFFFFFFFFF000uLL) )
      goto LABEL_34;
    v28 = WdLogNewEntry5_WdAssertion(this, -4096LL);
    *(_QWORD *)(v28 + 24) = 26089LL;
  }
LABEL_29:
  WdLogEvent5_WdAssertion(v28);
  return 3221225485LL;
}
