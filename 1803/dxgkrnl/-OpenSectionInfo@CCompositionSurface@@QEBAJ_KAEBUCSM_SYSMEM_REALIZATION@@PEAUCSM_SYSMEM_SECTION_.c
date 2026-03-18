/*
 * XREFs of ?OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1C004C6AC
 * Callers:
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C004C170 (NtOpenCompositionSurfaceSectionInfo.c)
 * Callees:
 *     ?FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C000A010 (-FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011DB0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall CCompositionSurface::OpenSectionInfo(
        CCompositionSurface *this,
        __int64 a2,
        const struct CSM_SYSMEM_REALIZATION *a3,
        struct CSM_SYSMEM_SECTION_INFO *a4)
{
  __int64 result; // rax
  struct CCompositionBuffer *v7; // [rsp+20h] [rbp-38h] BYREF
  struct CBufferRealization *v8; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  result = CCompositionSurface::FindBuffer(this, a2, &v7);
  if ( (int)result >= 0 )
  {
    memset(v9, 0, 0x20uLL);
    v9[1] = *(_QWORD *)a3;
    LODWORD(v9[0]) = 1;
    result = CCompositionBuffer::FindRealization(v7, (const struct CSM_REALIZATION_INFO *)v9, &v8);
    if ( (int)result >= 0 )
    {
      *(_QWORD *)a4 = 0LL;
      *((_QWORD *)a4 + 1) = 0LL;
      *((_QWORD *)a4 + 2) = 0LL;
      return 3221225474LL;
    }
  }
  return result;
}
