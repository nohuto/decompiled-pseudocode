/*
 * XREFs of ?AddRef@MPCManagerClient@@UEAAKXZ @ 0x18002A1C0
 * Callers:
 *     ?AddRef@MPCManagerClient@@W7EAAKXZ @ 0x180027740 (-AddRef@MPCManagerClient@@W7EAAKXZ.c)
 *     ?AddRef@MPCManagerClient@@WBA@EAAKXZ @ 0x180027780 (-AddRef@MPCManagerClient@@WBA@EAAKXZ.c)
 *     ?AddRef@MPCManagerClient@@WBI@EAAKXZ @ 0x1800277B0 (-AddRef@MPCManagerClient@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCManagerClient::AddRef(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient>::AddRef(this);
}
