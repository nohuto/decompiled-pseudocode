/*
 * XREFs of ??_GCInputManager@@MEAAPEAXI@Z @ 0x180189AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CInputManager@@MEAA@XZ @ 0x1801899C0 (--1CInputManager@@MEAA@XZ.c)
 */

CInputManager *__fastcall CInputManager::`scalar deleting destructor'(CInputManager *this, char a2)
{
  CInputManager::~CInputManager(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
