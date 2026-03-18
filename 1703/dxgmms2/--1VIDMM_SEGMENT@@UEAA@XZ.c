/*
 * XREFs of ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00A1040
 * Callers:
 *     ??_EVIDMM_SEGMENT@@UEAAPEAXI@Z @ 0x1C0021840 (--_EVIDMM_SEGMENT@@UEAAPEAXI@Z.c)
 *     ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1C009EEFC (--1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1C009EF8C (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1C00A0848 (--1VIDMM_MEMORY_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C0021810 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A3188 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_SEGMENT::~VIDMM_SEGMENT(void **this, __int64 a2, __int64 a3)
{
  bool v3; // zf
  _QWORD *v5; // rax
  void *v6; // rcx
  void *v7; // rax
  struct _MDL *v8; // rcx
  struct _MDL *v9; // rcx
  VIDMM_LINEAR_POOL *v10; // rcx

  v3 = bTracingEnabled == 0;
  *this = &VIDMM_SEGMENT::`vftable';
  if ( !v3 )
    VIDMM_SEGMENT::ReportSegment((VIDMM_SEGMENT *)this);
  if ( this[20] != this + 20 )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v5[3] = 270LL;
    v5[4] = 12LL;
    v5[5] = this;
    v5[6] = 0LL;
    v5[7] = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  operator delete(this[34]);
  v6 = this[35];
  if ( v6 )
  {
    MmUnmapLockedPages(v6, *((PMDL *)this[36] + 1));
    this[35] = 0LL;
  }
  v7 = this[36];
  if ( v7 )
  {
    v8 = (struct _MDL *)*((_QWORD *)v7 + 1);
    if ( v8 )
    {
      MmFreePagesFromMdl(v8);
      ExFreePoolWithTag(*((PVOID *)this[36] + 1), 0);
    }
    operator delete(this[36]);
    this[36] = 0LL;
  }
  v9 = (struct _MDL *)this[37];
  if ( v9 )
  {
    MmFreePagesFromMdl(v9);
    ExFreePoolWithTag(this[37], 0);
    this[37] = 0LL;
  }
  v10 = (VIDMM_LINEAR_POOL *)this[22];
  if ( v10 )
    VIDMM_LINEAR_POOL::`scalar deleting destructor'(v10);
}
