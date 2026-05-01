/*
 * XREFs of ?RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0316_0004@@@Z @ 0x1800549B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x1800596D4 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005AE60 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 */

__int64 __fastcall CImmersiveApp::RemoveGhostStatusFlag(__int64 a1, int a2)
{
  int v4; // edx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 8;
  if ( a2 != 1 )
    v4 = 0;
  if ( (v4 & *(_DWORD *)(a1 + 364)) == v4 )
    CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(a1 + 168);
  CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)(a1 - 96));
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
