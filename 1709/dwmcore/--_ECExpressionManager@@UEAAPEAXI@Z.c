/*
 * XREFs of ??_ECExpressionManager@@UEAAPEAXI@Z @ 0x180155E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x180155D80 (--1CExpressionManager@@UEAA@XZ.c)
 */

CExpressionManager *__fastcall CExpressionManager::`vector deleting destructor'(CExpressionManager *this, char a2)
{
  CExpressionManager::~CExpressionManager(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
