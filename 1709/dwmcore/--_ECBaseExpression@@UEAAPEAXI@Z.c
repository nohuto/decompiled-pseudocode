/*
 * XREFs of ??_ECBaseExpression@@UEAAPEAXI@Z @ 0x1801583F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x1800A32DC (--1CBaseExpression@@UEAA@XZ.c)
 */

CBaseExpression *__fastcall CBaseExpression::`vector deleting destructor'(CBaseExpression *this, char a2)
{
  CBaseExpression::~CBaseExpression(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
