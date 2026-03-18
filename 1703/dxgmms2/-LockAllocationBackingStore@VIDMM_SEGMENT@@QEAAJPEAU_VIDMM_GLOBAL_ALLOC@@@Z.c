/*
 * XREFs of ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004ABC4
 * Callers:
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00499F0 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049C70 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0075920 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     ?LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00491B4 (-LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0056C04 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 */

__int64 __fastcall VIDMM_SEGMENT::LockAllocationBackingStore(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL *v4; // rcx
  int v5; // eax
  __int64 v6; // r8
  unsigned int *v7; // rcx
  int v8; // edi
  __int64 v9; // rdx
  __int64 v11; // rax
  enum _LOCK_OPERATION v12; // [rsp+28h] [rbp-60h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-48h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 300LL) & 4) != 0
    && (**((_DWORD **)a2 + 65) & 0x4000) == 0
    || (*((_DWORD *)a2 + 20) & 0x2000) != 0 )
  {
    return 0LL;
  }
  if ( *((_DWORD *)a2 + 87) )
  {
LABEL_10:
    ++*((_DWORD *)a2 + 87);
    return 0LL;
  }
  v4 = (VIDMM_GLOBAL *)**((unsigned int **)a2 + 65);
  if ( ((unsigned __int8)v4 & 8) == 0 )
    KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 13) + 8LL), &ApcState);
  v5 = VIDMM_GLOBAL::ProbeAndLockAllocation(
         v4,
         *((struct _VIDMM_LOCAL_ALLOC **)a2 + 13),
         a2,
         0LL,
         *((_QWORD *)a2 + 1),
         v12,
         this,
         0);
  v7 = (unsigned int *)*((_QWORD *)a2 + 65);
  v8 = v5;
  v9 = *v7;
  if ( (v9 & 8) == 0 )
    KeUnstackDetachProcess(&ApcState);
  if ( v8 >= 0 )
  {
    VIDMM_SEGMENT::LogLockAllocationBackingStoreToEtw(a2, v9, v6);
    goto LABEL_10;
  }
  _InterlockedIncrement(&dword_1C003C554);
  v11 = WdLogNewEntry5_WdLowResource(v7);
  *(_QWORD *)(v11 + 24) = a2;
  *(_QWORD *)(v11 + 32) = *((_QWORD *)a2 + 1);
  WdLogEvent5_WdLowResource(v11);
  return 3223191809LL;
}
