/*
 * XREFs of ??_ECExpression@@UEAAPEAXI@Z @ 0x1800A75B0
 * Callers:
 *     ?Release@CResource@@UEAAKXZ @ 0x1800A9F20 (-Release@CResource@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CExpression@@UEAA@XZ @ 0x1800A81F4 (--1CExpression@@UEAA@XZ.c)
 */

CExpression *__fastcall CExpression::`vector deleting destructor'(CExpression *this, char a2)
{
  CExpression::~CExpression(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
