/*
 * XREFs of _CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor$28 @ 0x1800B36B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18006D6D0 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor_28(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 120) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 120) &= ~8u;
    Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)(a2 + 112));
  }
}
