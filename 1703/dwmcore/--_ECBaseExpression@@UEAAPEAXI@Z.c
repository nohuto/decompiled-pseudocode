/*
 * XREFs of ??_ECBaseExpression@@UEAAPEAXI@Z @ 0x180169460
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x18002F508 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CBaseExpression *__fastcall CBaseExpression::`vector deleting destructor'(CBaseExpression *this, char a2)
{
  CBaseExpression::~CBaseExpression(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
