/*
 * XREFs of _CImmersiveApp::QueryService_::_1_::dtor$2 @ 0x18012FA9E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18006D6D0 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CImmersiveApp::QueryService_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 88) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 88) &= ~2u;
    Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)(a2 + 32));
  }
}
