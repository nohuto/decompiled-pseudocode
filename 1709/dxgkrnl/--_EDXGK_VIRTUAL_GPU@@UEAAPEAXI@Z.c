/*
 * XREFs of ??_EDXGK_VIRTUAL_GPU@@UEAAPEAXI@Z @ 0x1C0024890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

DXGK_VIRTUAL_GPU *__fastcall DXGK_VIRTUAL_GPU::`vector deleting destructor'(DXGK_VIRTUAL_GPU *this, char a2)
{
  *(_QWORD *)this = &DXGK_VIRTUAL_GPU::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
