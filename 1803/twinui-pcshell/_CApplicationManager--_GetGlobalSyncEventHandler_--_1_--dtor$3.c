/*
 * XREFs of _CApplicationManager::_GetGlobalSyncEventHandler_::_1_::dtor$3 @ 0x1800F13CD
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18006D6D0 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_GetGlobalSyncEventHandler_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 80) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 80) &= ~2u;
    Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)(a2 + 88));
  }
}
