/*
 * XREFs of ?FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C00126DC
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000E890 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1C0151300 (-OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_.c)
 *     ?RemoveRealization@CCompositionBuffer@@MEAAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C01518C0 (-RemoveRealization@CCompositionBuffer@@MEAAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@.c)
 * Callees:
 *     ?GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z @ 0x1C00127A0 (-GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z.c)
 */

__int64 __fastcall CCompositionBuffer::FindRealization(
        CCompositionBuffer *this,
        const struct CSM_REALIZATION_INFO *a2,
        struct CBufferRealization **a3)
{
  struct CBufferRealization *RealizationAt; // rax
  struct CBufferRealization **v4; // r10

  *a3 = 0LL;
  RealizationAt = CCompositionBuffer::GetRealizationAt(this, *((_DWORD *)a2 + 1));
  if ( RealizationAt )
    *v4 = RealizationAt;
  return RealizationAt == 0LL ? 0xC0000225 : 0;
}
