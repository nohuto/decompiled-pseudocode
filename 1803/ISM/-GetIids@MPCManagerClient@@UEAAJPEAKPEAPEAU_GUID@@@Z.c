/*
 * XREFs of ?GetIids@MPCManagerClient@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180027C10
 * Callers:
 *     ?GetIids@MPCManagerClient@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800277C0 (-GetIids@MPCManagerClient@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCManagerClient::GetIids(__int64 this, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient>::GetIids(
           this,
           a2,
           a3);
}
