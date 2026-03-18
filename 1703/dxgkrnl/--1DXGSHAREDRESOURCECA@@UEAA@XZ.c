/*
 * XREFs of ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C017EBFC
 * Callers:
 *     ??_GDXGSHAREDRESOURCECA@@UEAAPEAXI@Z @ 0x1C0025770 (--_GDXGSHAREDRESOURCECA@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C0025900 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 */

void __fastcall DXGSHAREDRESOURCECA::~DXGSHAREDRESOURCECA(
        DXGSHAREDRESOURCECA *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v5; // rcx
  VIDMM_FLIP_QUEUE_REFERENCES *v6; // rcx

  *(_QWORD *)this = &DXGSHAREDRESOURCECA::`vftable';
  v5 = (void *)*((_QWORD *)this + 24);
  if ( v5 )
    ObfDereferenceObject(v5);
  v6 = (VIDMM_FLIP_QUEUE_REFERENCES *)*((_QWORD *)this + 25);
  if ( v6 )
    VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v6);
  DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(this, a2, a3, a4);
}
