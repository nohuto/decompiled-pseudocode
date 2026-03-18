/*
 * XREFs of ??_EDXGK_VIRTUAL_GPU_GPUP@@UEAAPEAXI@Z @ 0x1C0024C90
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGK_VIRTUAL_GPU_GPUP@@UEAA@XZ @ 0x1C0024C5C (--1DXGK_VIRTUAL_GPU_GPUP@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

DXGK_VIRTUAL_GPU_GPUP *__fastcall DXGK_VIRTUAL_GPU_GPUP::`vector deleting destructor'(
        DXGK_VIRTUAL_GPU_GPUP *this,
        char a2)
{
  DXGK_VIRTUAL_GPU_GPUP::~DXGK_VIRTUAL_GPU_GPUP(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
