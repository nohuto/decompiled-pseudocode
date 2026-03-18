/*
 * XREFs of ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0072694
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0054DD4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0072340 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007E990 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     MapGpadl @ 0x1C00231B0 (MapGpadl.c)
 *     UnmapGpadl @ 0x1C00231F8 (UnmapGpadl.c)
 *     ?LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00545E0 (-LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005E3F4 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 */

__int64 __fastcall VIDMM_SEGMENT::LockAllocationBackingStore(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  int v4; // ecx
  int v5; // eax
  VIDMM_GLOBAL *v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  unsigned int *v9; // rcx
  int v10; // edi
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rbx
  char *v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  enum _LOCK_OPERATION v18; // [rsp+28h] [rbp-90h]
  struct _KAPC_STATE v19; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-48h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 300LL) & 4) != 0
    && (**((_DWORD **)a2 + 63) & 0x4000) == 0
    || (v4 = *((_DWORD *)a2 + 20), (v4 & 0x1000) != 0) )
  {
    v13 = *((_QWORD *)a2 + 13);
    if ( v13 && *(_QWORD *)(v13 + 24) )
    {
      KeStackAttachProcess(**(PRKPROCESS **)(v13 + 8), &v19);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v13 + 8) + 24LL) + 152LL))(
        *(_QWORD *)(*(_QWORD *)(v13 + 8) + 24LL),
        *(_QWORD *)(v13 + 24));
      KeUnstackDetachProcess(&v19);
    }
    return 0LL;
  }
  v5 = *((_DWORD *)a2 + 87);
  if ( v5 )
  {
LABEL_11:
    *((_DWORD *)a2 + 87) = v5 + 1;
    return 0LL;
  }
  if ( (v4 & 0x4000) == 0 )
  {
    v6 = (VIDMM_GLOBAL *)**((unsigned int **)a2 + 63);
    if ( ((unsigned __int8)v6 & 8) == 0 )
      KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 13) + 8LL), &ApcState);
    v7 = VIDMM_GLOBAL::ProbeAndLockAllocation(
           v6,
           *((struct _VIDMM_LOCAL_ALLOC **)a2 + 13),
           a2,
           0LL,
           *((_QWORD *)a2 + 1),
           v18,
           this,
           0);
    v9 = (unsigned int *)*((_QWORD *)a2 + 63);
    v10 = v7;
    v11 = *v9;
    if ( (v11 & 8) == 0 )
      KeUnstackDetachProcess(&ApcState);
    if ( v10 < 0 )
    {
      _InterlockedIncrement(&dword_1C0047564);
      v17 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v17 + 24) = a2;
      *(_QWORD *)(v17 + 32) = *((_QWORD *)a2 + 1);
      WdLogEvent5_WdLowResource(v17);
      return 3223191809LL;
    }
    goto LABEL_10;
  }
  v14 = (char *)a2 + 512;
  result = MapGpadl();
  if ( (int)result >= 0 )
  {
    v15 = *(unsigned int *)(*(_QWORD *)v14 + 40LL);
    if ( v15 < *((_QWORD *)a2 + 1) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v15, v11);
      *(_QWORD *)(v16 + 24) = *(unsigned int *)(*(_QWORD *)v14 + 40LL);
      *(_QWORD *)(v16 + 32) = *((_QWORD *)a2 + 1);
      WdLogEvent5_WdAssertion(v16);
      UnmapGpadl();
      *(_QWORD *)v14 = 0LL;
      return 3221225485LL;
    }
LABEL_10:
    VIDMM_SEGMENT::LogLockAllocationBackingStoreToEtw(a2, v11, v8);
    v5 = *((_DWORD *)a2 + 87);
    goto LABEL_11;
  }
  return result;
}
