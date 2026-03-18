/*
 * XREFs of ??_ECVisual@@MEAAPEAXI@Z @ 0x18008A2B0
 * Callers:
 *     ?Release@CVisual@@UEAAKXZ @ 0x18008AFE0 (-Release@CVisual@@UEAAKXZ.c)
 * Callees:
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 */

CVisual *__fastcall CVisual::`vector deleting destructor'(CVisual *this, char a2)
{
  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 && this )
    HeapFree(WPF::g_processHeap, 0, this);
  return this;
}
