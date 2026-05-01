/*
 * XREFs of ?SetGhostVisualStyleInternal@CImmersiveApp@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0001@@@Z @ 0x180055E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::SetGhostVisualStyleInternal(__int64 a1, int a2)
{
  if ( a2 != *(_DWORD *)(a1 + 328) )
    *(_DWORD *)(a1 + 328) = a2;
}
