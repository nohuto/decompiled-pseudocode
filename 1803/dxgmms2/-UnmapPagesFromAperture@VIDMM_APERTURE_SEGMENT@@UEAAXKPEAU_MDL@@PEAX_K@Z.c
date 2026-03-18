/*
 * XREFs of ?UnmapPagesFromAperture@VIDMM_APERTURE_SEGMENT@@UEAAXKPEAU_MDL@@PEAX_K@Z @ 0x1C00AFCD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00543D0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnmapPagesFromAperture(
        VIDMM_LINEAR_POOL **this,
        unsigned int a2,
        struct _MDL *a3,
        struct _VIDMM_POOL_BLOCK *a4)
{
  (*((void (__fastcall **)(VIDMM_LINEAR_POOL **, _QWORD, _QWORD))*this + 28))(this, 0LL, a2);
  VIDMM_LINEAR_POOL::Free(this[19], a4);
}
