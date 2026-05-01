/*
 * XREFs of _CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor$21 @ 0x1800B3910
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18006D6D0 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor_21(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 192) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 192) &= ~8u;
    Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)(a2 + 72));
  }
}
