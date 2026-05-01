/*
 * XREFs of _CClassicWindowManager::HandleWindowReplaced_::_1_::dtor$4 @ 0x18011A502
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18006D6D0 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CClassicWindowManager::HandleWindowReplaced_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 128) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 128) &= ~2u;
    Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)(a2 + 136));
  }
}
