/*
 * XREFs of ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1C009EEFC
 * Callers:
 *     ??_GVIDMM_SYSMEM_SEGMENT@@UEAAPEAXI@Z @ 0x1C0021420 (--_GVIDMM_SYSMEM_SEGMENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::~VIDMM_SYSMEM_SEGMENT(VIDMM_SYSMEM_SEGMENT *this)
{
  *(_QWORD *)this = &VIDMM_SYSMEM_SEGMENT::`vftable';
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  VIDMM_SEGMENT::~VIDMM_SEGMENT(this);
}
