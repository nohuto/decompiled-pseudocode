/*
 * XREFs of ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C00A6660
 * Callers:
 *     ?MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z @ 0x1C00A6610 (-MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0002360 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0074858 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0081048 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void *__fastcall VIDMM_RECYCLE_MULTIRANGE::MapLocked(VIDMM_RECYCLE_MULTIRANGE *this)
{
  void *result; // rax
  void *v3; // r14
  __int64 v4; // r9
  __int64 v5; // rcx
  int v6; // edx
  char v7; // si
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r15
  _QWORD *v11; // rax
  struct _MDL *Mdl; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // r9
  __int64 v24; // r10
  __int64 v25; // rcx
  PVOID v26; // rax
  struct _MDL *v27; // rcx
  void *v28; // r9
  __int64 v29; // r10
  unsigned __int8 v30; // [rsp+40h] [rbp-68h] BYREF
  char v31; // [rsp+41h] [rbp-67h]
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
    v30 = 0;
    KeStackAttachProcess(
      **(PRKPROCESS **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL),
      &ApcState);
    v5 = *((_QWORD *)this + 10);
    v6 = **(_DWORD **)(v5 + 32);
    if ( (unsigned int)(v6 - 3) > 1 )
    {
      v7 = 0;
      v31 = 0;
      VirtualAddress[0] = *((PVOID *)this + 6);
    }
    else
    {
      v7 = 1;
      v31 = 1;
      LOBYTE(v4) = ((v6 - 4) & 0xFFFFFFFD) == 0;
      v8 = VidMmRecycleHeapMapSection(
             *(PVOID *)(v5 + 56),
             *((_QWORD *)this + 6),
             (__int64)v3,
             v4,
             VirtualAddress,
             &MappedBase,
             0,
             &v30);
      v10 = v8;
      if ( v8 < 0 )
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v9);
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
      v15 = WdLogNewEntry5_WdLowResource(v14, v13);
      *(_QWORD *)(v15 + 24) = 4058LL;
      WdLogEvent5_WdLowResource(v15);
      v27 = (struct _MDL *)*((_QWORD *)this + 23);
      if ( v27 )
      {
        IoFreeMdl(v27);
        *((_QWORD *)this + 23) = 0LL;
      }
      if ( v7 )
      {
        if ( !v30 )
          PsGetCurrentProcess(v27, v16, v17, v18);
        if ( (unsigned __int64)v3 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                                       *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 10) + 32LL),
                                       (unsigned int)(**(_DWORD **)(*((_QWORD *)this + 10) + 32LL) - 5) <= 1) )
        {
          if ( v28 )
            MmUnmapViewOfSection(v28, MappedBase);
          else
            MmUnmapViewInSystemSpace(MappedBase);
        }
        else
        {
          VidMmUnmapViewAsync(v28, *(PVOID *)(v29 + 56), MappedBase);
        }
      }
      goto LABEL_30;
    }
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    if ( v7 )
    {
      if ( !v30 )
        PsGetCurrentProcess(v20, v19, v21, v22);
      if ( (unsigned __int64)v3 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                                     *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 10) + 32LL),
                                     (unsigned int)(**(_DWORD **)(*((_QWORD *)this + 10) + 32LL) - 5) <= 1) )
      {
        if ( v23 )
          MmUnmapViewOfSection(v23, MappedBase);
        else
          MmUnmapViewInSystemSpace(MappedBase);
      }
      else
      {
        VidMmUnmapViewAsync(v23, *(PVOID *)(v24 + 56), MappedBase);
      }
    }
    v25 = *((_QWORD *)this + 23);
    if ( (*(_BYTE *)(v25 + 10) & 5) != 0 )
      v26 = *(PVOID *)(v25 + 24);
    else
      v26 = MmMapLockedPagesSpecifyCache((PMDL)v25, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 22) = v26;
    KeUnstackDetachProcess(&ApcState);
    return (void *)*((_QWORD *)this + 22);
  }
  return result;
}
