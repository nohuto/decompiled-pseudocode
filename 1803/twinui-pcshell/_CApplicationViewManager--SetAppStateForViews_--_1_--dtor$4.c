/*
 * XREFs of _CApplicationViewManager::SetAppStateForViews_::_1_::dtor$4 @ 0x18013C88D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18006D6D0 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationViewManager::SetAppStateForViews_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 184) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 184) &= ~2u;
    Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)(a2 + 56));
  }
}
