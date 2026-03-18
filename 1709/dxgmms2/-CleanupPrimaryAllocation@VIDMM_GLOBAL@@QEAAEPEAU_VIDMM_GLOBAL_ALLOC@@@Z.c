/*
 * XREFs of ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0079AEC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0079BF4 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00519A8 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0074630 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

char __fastcall VIDMM_GLOBAL::CleanupPrimaryAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  char *v2; // r15
  char *v4; // rsi
  char v5; // r12
  char *v7; // rbp
  char *v8; // rbp
  char *v9; // r14
  char *v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  int v15; // [rsp+20h] [rbp-38h]

  v2 = (char *)a2 + 296;
  v4 = (char *)*((_QWORD *)a2 + 37);
  v5 = 0;
  while ( v4 != v2 )
  {
    v7 = v4;
    v4 = *(char **)v4;
    v8 = v7 - 16;
    v9 = *(char **)v8;
    while ( v9 != v8 )
    {
      v10 = v9 - 40;
      v9 = *(char **)v9;
      if ( (*((_DWORD *)v10 + 7) & 3) == 1 )
      {
        v12 = v10 + 56;
        v13 = *((_QWORD *)v10 + 7);
        if ( *(char **)(v13 + 8) != v10 + 56 || (v14 = (_QWORD *)*((_QWORD *)v10 + 8), (_QWORD *)*v14 != v12) )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        *((_DWORD *)v10 + 7) &= 0xFFFFFFFC;
        *((_QWORD *)v10 + 8) = 0LL;
        *v12 = 0LL;
      }
      if ( (*((_DWORD *)v10 + 7) & 3) != 0 )
      {
        VIDMM_DEVICE::UnreferencePinnedAllocation(*((VIDMM_DEVICE **)v10 + 1), (struct VIDMM_ALLOC *)v10, 1);
        if ( !(v10[25] & 1 | *((_DWORD *)v10 + 38)) )
        {
          VIDMM_DEVICE::RemoveCommitment(*((VIDMM_DEVICE **)v10 + 1), (__int64 **)v10, 1);
          v5 = 1;
        }
        _InterlockedDecrement((volatile signed __int32 *)a2 + 41);
      }
    }
    v11 = *((_QWORD *)a2 + 17);
    if ( v11 && !*((_DWORD *)a2 + 40) )
    {
      LOBYTE(v15) = 0;
      (*(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)v11 + 48LL))(
        v11,
        a2,
        0LL,
        0LL,
        v15,
        0LL);
    }
  }
  return v5;
}
