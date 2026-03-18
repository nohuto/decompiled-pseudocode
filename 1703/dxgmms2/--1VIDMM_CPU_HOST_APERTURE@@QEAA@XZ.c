/*
 * XREFs of ??1VIDMM_CPU_HOST_APERTURE@@QEAA@XZ @ 0x1C0021CAC
 * Callers:
 *     ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1C00A0848 (--1VIDMM_MEMORY_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::~VIDMM_CPU_HOST_APERTURE(VIDMM_CPU_HOST_APERTURE *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 5);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
