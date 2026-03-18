/*
 * XREFs of ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00B1878
 * Callers:
 *     ??_EVIDMM_SEGMENT@@UEAAPEAXI@Z @ 0x1C0026280 (--_EVIDMM_SEGMENT@@UEAAPEAXI@Z.c)
 *     ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1C00AE864 (--1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1C00AE8A4 (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1C00B0460 (--1VIDMM_MEMORY_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C002624C (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C007F2BC (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_SEGMENT::~VIDMM_SEGMENT(void **this, __int64 a2, __int64 a3)
{
  bool v3; // zf
  _QWORD *v5; // rax
  void *v6; // rcx
  PMDL *v7; // rcx
  struct _MDL *v8; // rcx
  VIDMM_LINEAR_POOL *v9; // rcx

  v3 = bTracingEnabled == 0;
  *this = &VIDMM_SEGMENT::`vftable';
  if ( !v3 )
    VIDMM_SEGMENT::ReportSegment((VIDMM_SEGMENT *)this, a2, a3);
  if ( this[17] != this + 17 )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v5[3] = 270LL;
    v5[4] = 12LL;
    v5[5] = this;
    v5[6] = 0LL;
    v5[7] = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  operator delete(this[31]);
  v6 = this[32];
  if ( v6 )
  {
    MmUnmapLockedPages(v6, *((PMDL *)this[33] + 1));
    this[32] = 0LL;
  }
  v7 = (PMDL *)this[33];
  if ( v7 )
  {
    if ( v7[1] )
    {
      MmFreePagesFromMdl(v7[1]);
      ExFreePoolWithTag(*((PVOID *)this[33] + 1), 0);
      v7 = (PMDL *)this[33];
    }
    operator delete(v7);
    this[33] = 0LL;
  }
  v8 = (struct _MDL *)this[34];
  if ( v8 )
  {
    MmFreePagesFromMdl(v8);
    ExFreePoolWithTag(this[34], 0);
    this[34] = 0LL;
  }
  v9 = (VIDMM_LINEAR_POOL *)this[19];
  if ( v9 )
    VIDMM_LINEAR_POOL::`scalar deleting destructor'(v9);
}
