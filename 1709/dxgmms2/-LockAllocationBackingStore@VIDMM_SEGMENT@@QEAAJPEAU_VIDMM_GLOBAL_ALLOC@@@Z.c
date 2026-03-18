/*
 * XREFs of ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004EE1C
 * Callers:
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004DA90 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004DD80 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007BA00 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     MapGpadl @ 0x1C0020AF8 (MapGpadl.c)
 *     UnmapGpadl @ 0x1C0020B40 (UnmapGpadl.c)
 *     ?LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004D190 (-LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00599E0 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C0099434 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C009944C (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::LockAllocationBackingStore(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  int v4; // eax
  __int64 v5; // rbx
  VIDMM_PROCESS *v6; // rcx
  char *v7; // rdi
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  VIDMM_GLOBAL *v13; // rcx
  int v14; // eax
  VIDMM_PROCESS *v15; // rcx
  int v16; // edi
  __int64 v17; // rax
  enum _LOCK_OPERATION v18; // [rsp+28h] [rbp-90h]
  struct _KAPC_STATE v19; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE v20; // [rsp+70h] [rbp-48h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 300LL) & 4) != 0
    && (**((_DWORD **)a2 + 63) & 0x4000) == 0
    || (v4 = *((_DWORD *)a2 + 20), (v4 & 0x1000) != 0) )
  {
    v5 = *((_QWORD *)a2 + 13);
    if ( v5 )
    {
      if ( *(_QWORD *)(v5 + 24) )
      {
        VIDMM_PROCESS::SafeAttach(*(VIDMM_PROCESS **)(v5 + 8), &v19);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v5 + 8) + 24LL) + 152LL))(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL),
          *(_QWORD *)(v5 + 24));
        VIDMM_PROCESS::SafeDetach(v6, &v19);
      }
    }
  }
  else
  {
    if ( !*((_DWORD *)a2 + 87) )
    {
      if ( (v4 & 0x2000) != 0 )
      {
        v7 = (char *)a2 + 512;
        result = MapGpadl();
        if ( (int)result < 0 )
          return result;
        v11 = *(unsigned int *)(*(_QWORD *)v7 + 40LL);
        if ( v11 < *((_QWORD *)a2 + 1) )
        {
          v12 = WdLogNewEntry5_WdAssertion(v11, v9);
          *(_QWORD *)(v12 + 24) = *(unsigned int *)(*(_QWORD *)v7 + 40LL);
          *(_QWORD *)(v12 + 32) = *((_QWORD *)a2 + 1);
          WdLogEvent5_WdAssertion(v12);
          UnmapGpadl();
          *(_QWORD *)v7 = 0LL;
          return 3221225485LL;
        }
      }
      else
      {
        v13 = (VIDMM_GLOBAL *)**((unsigned int **)a2 + 63);
        if ( ((unsigned __int8)v13 & 8) == 0 )
          VIDMM_PROCESS::SafeAttach(*(VIDMM_PROCESS **)(*((_QWORD *)a2 + 13) + 8LL), &v20);
        v14 = VIDMM_GLOBAL::ProbeAndLockAllocation(
                v13,
                *((struct _VIDMM_LOCAL_ALLOC **)a2 + 13),
                a2,
                0LL,
                *((_QWORD *)a2 + 1),
                v18,
                this,
                0);
        v15 = (VIDMM_PROCESS *)*((_QWORD *)a2 + 63);
        v16 = v14;
        v9 = *(unsigned int *)v15;
        if ( (v9 & 8) == 0 )
          VIDMM_PROCESS::SafeDetach(v15, &v20);
        if ( v16 < 0 )
        {
          _InterlockedIncrement(&dword_1C0040564);
          v17 = WdLogNewEntry5_WdLowResource(v15, v9);
          *(_QWORD *)(v17 + 24) = a2;
          *(_QWORD *)(v17 + 32) = *((_QWORD *)a2 + 1);
          WdLogEvent5_WdLowResource(v17);
          return 3223191809LL;
        }
      }
      VIDMM_SEGMENT::LogLockAllocationBackingStoreToEtw(a2, v9, v10);
    }
    ++*((_DWORD *)a2 + 87);
  }
  return 0LL;
}
