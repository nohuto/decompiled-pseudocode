/*
 * XREFs of _CImmersiveApp::SetMonitorInternal_::_1_::dtor$6 @ 0x1800B4393
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18006D6D0 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CImmersiveApp::SetMonitorInternal_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 200) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 200) &= ~2u;
    Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)(a2 + 184));
  }
}
