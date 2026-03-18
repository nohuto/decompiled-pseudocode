/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009FB10
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00486A8 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C004C1D4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059580 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E21C (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::ReleaseTemporaryResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3)
{
  struct _VIDMM_GLOBAL_ALLOC *v3; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  VIDMM_GLOBAL *v7; // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8

  v3 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v5[3] = *((_QWORD *)v3 + 31);
    a3 = *((int *)v3 + 65);
    v5[4] = a3;
    a2 = (struct _VIDMM_GLOBAL_ALLOC *)*((unsigned int *)v3 + 64);
    v5[5] = a2;
  }
  if ( *((_QWORD *)v3 + 29) || *((_QWORD *)v3 + 30) )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v6[7] = 0LL;
    v6[3] = 270LL;
    v6[4] = 27LL;
    v6[5] = v3;
    v6[6] = this;
    WdLogEvent5_WdCriticalError(v6);
  }
  VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], v3);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v3 + 40));
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 8))(this, v3);
  if ( *((_BYTE *)v3 + 289) )
  {
    v7 = *this;
    MDLForRange = VidMmGetMDLForRange(v3, *((_QWORD *)v3 + 34), *((_QWORD *)v3 + 35));
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))v7 + 15))(
      this,
      v3,
      *((_QWORD *)v3 + 34),
      *((_QWORD *)v3 + 35),
      MDLForRange);
    LOBYTE(v9) = 1;
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64))*this + 13))(this, v3, v9);
  }
  VIDMM_LINEAR_POOL::Free(this[22], *((struct _VIDMM_POOL_BLOCK **)v3 + 31));
  *((_QWORD *)v3 + 31) = 0LL;
  *((_QWORD *)v3 + 33) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(this[1], v3);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v3 + 40), v10, v11);
}
