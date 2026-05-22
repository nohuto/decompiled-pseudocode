/*
 * XREFs of ??_G?$DelegateInvokeHelper@UIHapticsTimerCallback@SpatialInteractionDevices@@V_lambda_ab827356b06de2d9aedb82e4c0edf731_@@$00$$V@?$DelegateArgTraits@P8IHapticsTimerCallback@SpatialInteractionDevices@@EAAJXZ@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800810F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (SpatialInteractionDevices::IHapticsTimerCallback::*)(void)>::DelegateInvokeHelper<SpatialInteractionDevices::IHapticsTimerCallback,_lambda_ab827356b06de2d9aedb82e4c0edf731_,1,>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
