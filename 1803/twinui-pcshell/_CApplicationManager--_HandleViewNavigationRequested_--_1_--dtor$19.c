/*
 * XREFs of _CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor$19 @ 0x1800B38D8
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18006D6D0 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor_19(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 192) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 192) &= ~2u;
    Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)(a2 + 48));
  }
}
