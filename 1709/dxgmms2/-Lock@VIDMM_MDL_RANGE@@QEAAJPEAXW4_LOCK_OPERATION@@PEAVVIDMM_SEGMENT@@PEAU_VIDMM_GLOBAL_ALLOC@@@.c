/*
 * XREFs of ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004CF8C
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C004C7D8 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C004CC3C (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004F5B0 (-TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_MDL_RANGE::Lock(
        VIDMM_MDL_RANGE *this,
        void *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4,
        struct _VIDMM_GLOBAL_ALLOC *a5)
{
  char v7; // di
  struct _MDL *Mdl; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v13; // rax
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v7 = 0;
  Mdl = IoAllocateMdl(a2, *((_DWORD *)this + 4) - *((_DWORD *)this + 2), 0, 0, 0LL);
  *(_QWORD *)this = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    v7 = 1;
    if ( !a4 )
      return 0LL;
    v14[0] = 0LL;
    v14[2] = 0LL;
    v14[1] = *(_QWORD *)this;
    if ( VIDMM_SEGMENT::TrackAndValidatePagesOnLock(a4, (struct _VIDMM_MDL *)v14, v11, a5) )
      return 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    v13 = WdLogNewEntry5_WdLowResource(v10, v9);
    *(_QWORD *)(v13 + 24) = 5442LL;
    WdLogEvent5_WdLowResource(v13);
  }
  if ( *(_QWORD *)this )
  {
    if ( v7 )
      MmUnlockPages(*(PMDL *)this);
    IoFreeMdl(*(PMDL *)this);
    *(_QWORD *)this = 0LL;
  }
  return 3223191809LL;
}
