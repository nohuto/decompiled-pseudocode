/*
 * XREFs of ?Release@MPCManagerClient@@UEAAKXZ @ 0x18002A020
 * Callers:
 *     ?Release@MPCManagerClient@@W7EAAKXZ @ 0x1800276D0 (-Release@MPCManagerClient@@W7EAAKXZ.c)
 *     ?Release@MPCManagerClient@@WBA@EAAKXZ @ 0x180027760 (-Release@MPCManagerClient@@WBA@EAAKXZ.c)
 *     ?Release@MPCManagerClient@@WBI@EAAKXZ @ 0x180027790 (-Release@MPCManagerClient@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCManagerClient::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient>::Release(this);
}
