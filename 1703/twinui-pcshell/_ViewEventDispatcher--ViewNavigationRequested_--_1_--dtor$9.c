/*
 * XREFs of _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$9 @ 0x18019E02F
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180026E0C (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 248));
  }
}
