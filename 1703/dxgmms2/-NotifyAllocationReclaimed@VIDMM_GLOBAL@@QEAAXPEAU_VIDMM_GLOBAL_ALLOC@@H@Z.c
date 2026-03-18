/*
 * XREFs of ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C006DE7C
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0058C00 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006DD5C (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0091D5C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?NotifyAllocationReclaimed@@YAXPEAX@Z @ 0x1C0094580 (-NotifyAllocationReclaimed@@YAXPEAX@Z.c)
 *     ?ReclaimAllocationForVPRCallback@@YAEPEAX0@Z @ 0x1C00A3044 (-ReclaimAllocationForVPRCallback@@YAEPEAX0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyAllocationReclaimed(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned int a3)
{
  __int64 v6; // rax
  VIDMM_GLOBAL *v7; // rbx
  char *v8; // rax
  VIDMM_GLOBAL **v9; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD))(**((_QWORD **)a2 + 17) + 32LL))(
    *((_QWORD *)a2 + 17),
    a2,
    a3);
  *(_WORD *)(*((_QWORD *)a2 + 65) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 65) + 24LL) = 0LL;
  v6 = *((_QWORD *)a2 + 17);
  *((_QWORD *)a2 + 19) = 0LL;
  *((_DWORD *)a2 + 32) = 0;
  v7 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 328);
  if ( (*(_DWORD *)(v6 + 80) & 0x1001) != 0 )
  {
    v8 = (char *)this + 3736;
    v9 = (VIDMM_GLOBAL **)*((_QWORD *)this + 468);
    if ( *v9 != (VIDMM_GLOBAL *)((char *)this + 3736) )
      __fastfail(3u);
  }
  else
  {
    v8 = (char *)this + 3752;
    v9 = (VIDMM_GLOBAL **)*((_QWORD *)this + 470);
    if ( *v9 != (VIDMM_GLOBAL *)((char *)this + 3752) )
      __fastfail(3u);
  }
  *(_QWORD *)v7 = v8;
  *((_QWORD *)v7 + 1) = v9;
  *v9 = v7;
  *((_QWORD *)v8 + 1) = v7;
}
