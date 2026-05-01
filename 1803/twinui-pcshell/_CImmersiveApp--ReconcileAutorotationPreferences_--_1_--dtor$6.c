/*
 * XREFs of _CImmersiveApp::ReconcileAutorotationPreferences_::_1_::dtor$6 @ 0x1800B432E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18006D6D0 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CImmersiveApp::ReconcileAutorotationPreferences_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~8u;
    Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)(a2 + 128));
  }
}
