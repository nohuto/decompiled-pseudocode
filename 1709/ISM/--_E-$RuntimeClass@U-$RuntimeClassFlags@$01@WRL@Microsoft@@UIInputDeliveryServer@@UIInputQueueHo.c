/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputDeliveryServer@@UIInputQueueHost@@UIInputServiceProxyOwner@@UIRemoteInputDelivery@@UIInputFocusListener@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180080C90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputDeliveryServer,IInputQueueHost,IInputServiceProxyOwner,IRemoteInputDelivery,IInputFocusListener>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[11] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
