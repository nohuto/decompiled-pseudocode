/*
 * XREFs of ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C009E5D0
 * Callers:
 *     ?MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z @ 0x1C009E580 (-MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0002D04 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0048200 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C006E9F4 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void *__fastcall VIDMM_RECYCLE_MULTIRANGE::MapLocked(VIDMM_RECYCLE_MULTIRANGE *this)
{
  void *result; // rax
  void *v3; // r14
  __int64 v4; // r8
  int v5; // edx
  char v6; // bl
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r15
  _QWORD *v11; // rax
  struct _MDL *Mdl; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v16; // rcx
  __int64 v17; // rcx
  void *v18; // rbx
  void *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  PVOID v22; // rax
  struct _MDL *v23; // rcx
  __int64 v24; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v25; // rcx
  __int64 v26; // rcx
  void *v27; // rbx
  void *v28; // rax
  __int64 CurrentProcess; // rax
  PVOID MappedBase; // [rsp+48h] [rbp-60h] BYREF
  PVOID VirtualAddress[3]; // [rsp+50h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-40h] BYREF

  VirtualAddress[2] = this;
  result = (void *)*((_QWORD *)this + 22);
  if ( !result )
  {
    VirtualAddress[0] = 0LL;
    MappedBase = 0LL;
    v3 = (void *)(*((_QWORD *)this + 5) - *((_QWORD *)this + 6));
    VirtualAddress[1] = v3;
    KeStackAttachProcess(
      **(PRKPROCESS **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL),
      &ApcState);
    v4 = *((_QWORD *)this + 10);
    v5 = **(_DWORD **)(v4 + 32);
    if ( (unsigned int)(v5 - 3) > 3 || (unsigned int)(v5 - 5) <= 1 )
    {
      v6 = 0;
      VirtualAddress[0] = *((PVOID *)this + 6);
    }
    else
    {
      v6 = 1;
      v7 = VidMmRecycleHeapMapSection(
             *(PVOID *)(v4 + 56),
             *((_QWORD *)this + 6),
             (__int64)v3,
             ((v5 - 4) & 0xFFFFFFFD) == 0,
             VirtualAddress,
             &MappedBase,
             0,
             0LL);
      v10 = v7;
      if ( v7 < 0 )
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8);
        v11[3] = v3;
        v11[4] = *((_QWORD *)this + 6);
        v11[5] = *((_QWORD *)this + 10);
        v11[6] = v10;
        v11[7] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
        WdLogEvent5_WdWarning(v11);
LABEL_23:
        KeUnstackDetachProcess(&ApcState);
        return 0LL;
      }
    }
    Mdl = IoAllocateMdl(VirtualAddress[0], (ULONG)v3, 0, 0, 0LL);
    *((_QWORD *)this + 23) = Mdl;
    if ( !Mdl )
    {
      _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
      v14 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v14 + 24) = 3962LL;
      WdLogEvent5_WdLowResource(v14);
      v23 = (struct _MDL *)*((_QWORD *)this + 23);
      if ( v23 )
      {
        IoFreeMdl(v23);
        *((_QWORD *)this + 23) = 0LL;
      }
      if ( v6 )
      {
        v24 = *((_QWORD *)this + 10);
        v25 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(**(_DWORD **)(v24 + 32) - 5);
        if ( (unsigned __int64)v3 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v25, (unsigned int)v25 <= 1) )
        {
          CurrentProcess = PsGetCurrentProcess(v26);
          MmUnmapViewOfSection(CurrentProcess, MappedBase);
        }
        else
        {
          v27 = *(void **)(v24 + 56);
          v28 = (void *)PsGetCurrentProcess(v26);
          VidMmUnmapViewAsync(v28, v27, MappedBase);
        }
      }
      goto LABEL_23;
    }
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    if ( v6 )
    {
      v15 = *((_QWORD *)this + 10);
      v16 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(**(_DWORD **)(v15 + 32) - 5);
      if ( (unsigned __int64)v3 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v16, (unsigned int)v16 <= 1) )
      {
        v20 = PsGetCurrentProcess(v17);
        MmUnmapViewOfSection(v20, MappedBase);
      }
      else
      {
        v18 = *(void **)(v15 + 56);
        v19 = (void *)PsGetCurrentProcess(v17);
        VidMmUnmapViewAsync(v19, v18, MappedBase);
      }
    }
    v21 = *((_QWORD *)this + 23);
    if ( (*(_BYTE *)(v21 + 10) & 5) != 0 )
      v22 = *(PVOID *)(v21 + 24);
    else
      v22 = MmMapLockedPagesSpecifyCache((PMDL)v21, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 22) = v22;
    KeUnstackDetachProcess(&ApcState);
    return (void *)*((_QWORD *)this + 22);
  }
  return result;
}
