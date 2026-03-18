/*
 * XREFs of ??_EDXGDISPLAYMANAGEROBJECT@@UEAAPEAXI@Z @ 0x1C002D080
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C01D92F4 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 */

DXGDISPLAYMANAGEROBJECT *__fastcall DXGDISPLAYMANAGEROBJECT::`vector deleting destructor'(
        DXGDISPLAYMANAGEROBJECT *this,
        char a2)
{
  DXGDISPLAYMANAGEROBJECT::~DXGDISPLAYMANAGEROBJECT(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
