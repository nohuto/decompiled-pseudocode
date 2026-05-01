/*
 * XREFs of ??_GCDragVisual@@MEAAPEAXI@Z @ 0x1802F0910
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CDragVisual@@MEAA@XZ @ 0x1802F06E0 (--1CDragVisual@@MEAA@XZ.c)
 */

CDragVisual *__fastcall CDragVisual::`scalar deleting destructor'(CDragVisual *this, char a2)
{
  CDragVisual::~CDragVisual(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
