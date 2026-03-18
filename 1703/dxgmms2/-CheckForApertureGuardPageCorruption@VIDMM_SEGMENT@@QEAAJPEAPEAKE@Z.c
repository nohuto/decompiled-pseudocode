/*
 * XREFs of ?CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x1C0021880
 * Callers:
 *     ?WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1C00980BC (-WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::CheckForApertureGuardPageCorruption(
        VIDMM_APERTURE_SEGMENT *this,
        unsigned int **a2,
        char a3)
{
  if ( (*((_DWORD *)this + 20) & 1) != 0 )
    return VIDMM_APERTURE_SEGMENT::CheckForApertureGuardPageCorruption(this, a2, a3);
  else
    return 0LL;
}
