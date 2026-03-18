/*
 * XREFs of ?LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z @ 0x1C004CE78
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C004C7D8 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 */

__int64 __fastcall VIDMM_MDL_RANGE::LockUnlock(PMDL *this, void *a2, struct _MDL *a3, struct _MDL *a4)
{
  struct _MDL *Mdl; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _MDL *v10; // rbx
  __int64 v12; // rax

  Mdl = IoAllocateMdl(a2, (int)a4 - (int)a3, 0, 0, 0LL);
  v10 = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    MmUnlockPages(*this);
    IoFreeMdl(*this);
    *this = v10;
    this[1] = a3;
    this[2] = a4;
    return 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    v12 = WdLogNewEntry5_WdLowResource(v9, v8);
    *(_QWORD *)(v12 + 24) = 5555LL;
    WdLogEvent5_WdLowResource(v12);
    return 3223191809LL;
  }
}
