/*
 * XREFs of ?QueryInterface@MPCManagerClient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800291D0
 * Callers:
 *     ?QueryInterface@MPCManagerClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800276E0 (-QueryInterface@MPCManagerClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCManagerClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180027770 (-QueryInterface@MPCManagerClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCManagerClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800277E0 (-QueryInterface@MPCManagerClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCManagerClient::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient>::QueryInterface(
           this,
           a2,
           a3);
}
