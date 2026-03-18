/*
 * XREFs of ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C00ADA50
 * Callers:
 *     ?MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z @ 0x1C00ADA00 (-MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0005640 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C00533DC (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00AE704 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

void *__fastcall VIDMM_RECYCLE_MULTIRANGE::MapLocked(VIDMM_RECYCLE_MULTIRANGE *this)
{
  void *result; // rax
  void *v3; // r14
  __int64 v4; // rcx
  int v5; // edx
  char v6; // si
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r15
  _QWORD *v11; // rax
  struct _MDL *Mdl; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void *v22; // r9
  __int64 v23; // r10
  __int64 v24; // rcx
  PVOID v25; // rax
  struct _MDL *v26; // rcx
  void *v27; // r9
  __int64 v28; // r10
  unsigned __int8 v29; // [rsp+40h] [rbp-68h] BYREF
  char v30; // [rsp+41h] [rbp-67h]
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
    v29 = 0;
    KeStackAttachProcess(
      **(PRKPROCESS **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL),
      &ApcState);
    v4 = *((_QWORD *)this + 10);
    v5 = **(_DWORD **)(v4 + 32);
    if ( (unsigned int)(v5 - 3) > 1 )
    {
      v6 = 0;
      v30 = 0;
      VirtualAddress[0] = *((PVOID *)this + 6);
    }
    else
    {
      v6 = 1;
      v30 = 1;
      v7 = VidMmRecycleHeapMapSection(
             *(PVOID *)(v4 + 56),
             *((_QWORD *)this + 6),
             (unsigned __int64)v3,
             ((v5 - 4) & 0xFFFFFFFD) == 0,
             VirtualAddress,
             &MappedBase,
             0,
             &v29);
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
LABEL_30:
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
      *(_QWORD *)(v14 + 24) = 4241LL;
      WdLogEvent5_WdLowResource(v14);
      v26 = (struct _MDL *)*((_QWORD *)this + 23);
      if ( v26 )
      {
        IoFreeMdl(v26);
        *((_QWORD *)this + 23) = 0LL;
      }
      if ( v6 )
      {
        if ( !v29 )
          PsGetCurrentProcess(v26, v15, v16, v17);
        if ( (unsigned __int64)v3 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                                       *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 10) + 32LL),
                                       (unsigned int)(**(_DWORD **)(*((_QWORD *)this + 10) + 32LL) - 5) <= 1) )
        {
          if ( v27 )
            MmUnmapViewOfSection(v27, MappedBase);
          else
            MmUnmapViewInSystemSpace(MappedBase);
        }
        else
        {
          VidMmUnmapViewAsync(v27, *(PVOID *)(v28 + 56), MappedBase);
        }
      }
      goto LABEL_30;
    }
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    if ( v6 )
    {
      if ( !v29 )
        PsGetCurrentProcess(v19, v18, v20, v21);
      if ( (unsigned __int64)v3 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                                     *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 10) + 32LL),
                                     (unsigned int)(**(_DWORD **)(*((_QWORD *)this + 10) + 32LL) - 5) <= 1) )
      {
        if ( v22 )
          MmUnmapViewOfSection(v22, MappedBase);
        else
          MmUnmapViewInSystemSpace(MappedBase);
      }
      else
      {
        VidMmUnmapViewAsync(v22, *(PVOID *)(v23 + 56), MappedBase);
      }
    }
    v24 = *((_QWORD *)this + 23);
    if ( (*(_BYTE *)(v24 + 10) & 5) != 0 )
      v25 = *(PVOID *)(v24 + 24);
    else
      v25 = MmMapLockedPagesSpecifyCache((PMDL)v24, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 22) = v25;
    KeUnstackDetachProcess(&ApcState);
    return (void *)*((_QWORD *)this + 22);
  }
  return result;
}
