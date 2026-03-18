/*
 * XREFs of ?AskParentToRemoveAndReenumerate@FxPkgPdo@@EEAAJXZ @ 0x1C00983E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C006FCA0 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::AskParentToRemoveAndReenumerate(FxPkgPdo *this)
{
  FxDeviceDescriptionEntry *m_Description; // rcx

  m_Description = this->m_Description;
  if ( !m_Description || this->m_Static )
    return 3221226021LL;
  FxChildList::ReenumerateEntry(m_Description->m_DeviceList, m_Description);
  return 0LL;
}
