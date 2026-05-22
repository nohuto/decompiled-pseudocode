/*
 * XREFs of ?GetRuntimeClassName@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180027990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient>::GetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IRawInputProvider,Microsoft::WRL::FtmBase>::GetRuntimeClassName(
           a1 - 24,
           a2);
}
