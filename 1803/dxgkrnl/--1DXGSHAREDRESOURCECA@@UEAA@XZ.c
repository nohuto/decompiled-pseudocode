/*
 * XREFs of ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C016A680
 * Callers:
 *     ??_GDXGSHAREDRESOURCECA@@UEAAPEAXI@Z @ 0x1C002C040 (--_GDXGSHAREDRESOURCECA@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C002C1D8 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C00BF794 (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 */

void __fastcall DXGSHAREDRESOURCECA::~DXGSHAREDRESOURCECA(DXGSHAREDRESOURCECA *this)
{
  void *v2; // rcx
  int *v3; // rcx

  *(_QWORD *)this = &DXGSHAREDRESOURCECA::`vftable';
  v2 = (void *)*((_QWORD *)this + 26);
  if ( v2 )
    ObfDereferenceObject(v2);
  v3 = (int *)*((_QWORD *)this + 27);
  if ( v3 )
    VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v3);
  DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(this);
}
