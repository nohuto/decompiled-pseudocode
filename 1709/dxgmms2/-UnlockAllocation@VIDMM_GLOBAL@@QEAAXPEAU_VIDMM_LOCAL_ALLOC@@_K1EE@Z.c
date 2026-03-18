/*
 * XREFs of ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C005990C
 * Callers:
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004D0D8 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004D380 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C004E2FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C005EEF8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C009D644 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A7EF0 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     UnmapGpadl @ 0x1C0020B40 (UnmapGpadl.c)
 *     ?VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z @ 0x1C0073448 (-VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z.c)
 *     ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1C009A684 (-EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UnlockAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        char a6)
{
  __int64 v6; // rdi
  __int64 v10; // rdx

  v6 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 80LL) & 0x1000) == 0 )
  {
    if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 2270LL) && a6 )
      VIDMM_GLOBAL::EnsureLockedPages(this, a2, a3, a4);
    if ( (*(_DWORD *)(v6 + 80) & 0x2000) != 0 )
    {
      UnmapGpadl();
      *(_QWORD *)(v6 + 512) = 0LL;
    }
    else
    {
      v10 = *((_QWORD *)a2 + 3);
      if ( v10 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, unsigned __int64, char))(**(_QWORD **)(*((_QWORD *)a2 + 1) + 24LL)
                                                                                          + 40LL))(
          *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL),
          v10,
          a3,
          a4,
          a5);
      }
      else if ( a5 )
      {
        VidMmiUnlockAllocation(*((struct _VIDMM_MDL **)a2 + 11));
        *((_QWORD *)a2 + 11) = 0LL;
      }
      else
      {
        VidMmiUnlockAllocation(*((struct _VIDMM_MDL **)a2 + 10));
        *((_QWORD *)a2 + 10) = 0LL;
      }
    }
  }
}
