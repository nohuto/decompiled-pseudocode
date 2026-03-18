/*
 * XREFs of ??_EDXGK_VIRTUAL_GPU_PARAV@@UEAAPEAXI@Z @ 0x1C0024AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGK_VIRTUAL_GPU_PARAV@@UEAA@XZ @ 0x1C0024A80 (--1DXGK_VIRTUAL_GPU_PARAV@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

DXGK_VIRTUAL_GPU_PARAV *__fastcall DXGK_VIRTUAL_GPU_PARAV::`vector deleting destructor'(
        DXGK_VIRTUAL_GPU_PARAV *this,
        char a2)
{
  DXGK_VIRTUAL_GPU_PARAV::~DXGK_VIRTUAL_GPU_PARAV(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
