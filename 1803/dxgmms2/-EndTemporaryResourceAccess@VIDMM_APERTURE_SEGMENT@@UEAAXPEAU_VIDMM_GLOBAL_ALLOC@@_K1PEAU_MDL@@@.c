/*
 * XREFs of ?EndTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C00AE9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnmapTemporaryResource@VIDMM_APERTURE_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C00AFDD0 (-UnmapTemporaryResource@VIDMM_APERTURE_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::EndTemporaryResourceAccess(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct _MDL *a5)
{
  __int64 v6; // rcx

  VIDMM_APERTURE_SEGMENT::UnmapTemporaryResource(this, a2, a3, a4, a5);
  v6 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v6 + 40675) )
  {
    if ( a5 != *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL) )
      DpiUnmapIommuIdentityRange(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 192LL), a5);
  }
}
